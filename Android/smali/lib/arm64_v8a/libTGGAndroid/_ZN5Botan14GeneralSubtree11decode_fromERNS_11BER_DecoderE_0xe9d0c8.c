// 函数: _ZN5Botan14GeneralSubtree11decode_fromERNS_11BER_DecoderE
// 地址: 0xe9d0c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x1
Botan::BER_Decoder::start_cons(entry_x1, 0x10)
int128_t var_60
(*(*(arg1 + 8) + 8))(arg1 + 8, &var_60)
int64_t var_68 = 0
Botan::BER_Decoder::decode_optional<uint64_t>(&var_60, arg1 + 0x40, 0, 0x80)
Botan::BER_Decoder::end_cons()
int64_t var_30_1 = 0
int64_t* var_30

if (var_30 != 0)
    (*(*var_30 + 0x38))()

void* result_1
void* result = result_1

if (result != 0)
    void* result_2 = result
    int64_t var_40
    result = Botan::deallocate_memory(result, var_40 - result, 1)

if (*(arg1 + 0x40) == 0)
    *(arg1 + 0x48) = -1
    return result

void** x0_5 = __cxa_allocate_exception(0x20)
int64_t x0_6
int128_t v0
x0_6, v0 = operator new(0x30)
int64_t var_50 = x0_6
v0 = data_71bb40
__builtin_strncpy(x0_6, "GeneralSubtree minimum must be 0", 0x21)
var_60 = v0
*x0_5 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_5[1])
*x0_5 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_5, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
