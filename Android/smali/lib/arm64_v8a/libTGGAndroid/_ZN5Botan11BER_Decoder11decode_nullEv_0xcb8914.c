// 函数: _ZN5Botan11BER_Decoder11decode_nullEv
// 地址: 0xcb8914
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::BER_Decoder::get_next_object()
char var_38 = 0xc
int32_t var_37
__builtin_strncpy(&var_37, "object", 7)
void var_58
Botan::BER_Object::assert_is_a(&var_58, 5, nullptr)
void* var_28

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_28)

int64_t var_50
void* var_48

if (var_48 == var_50)
    if (var_48 != 0)
        void* var_48_1 = var_48
        int64_t var_40
        Botan::deallocate_memory(var_48, var_40 - var_50, 1)
    
    int64_t entry_result
    return entry_result

void** x0_4 = __cxa_allocate_exception(0x20)
int64_t x0_5
int128_t v0
x0_5, v0 = operator new(0x20)
int64_t var_60 = x0_5
int128_t var_70 = data_71d400
__builtin_strncpy(x0_5, "NULL object had nonzero size", 0x1d)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "BER: ", &var_70)
*x0_4 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_4[1])
*x0_4 = _vtable_for_Botan::Decoding_Error + 0x10

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_28)

*x0_4 = _vtable_for_Botan::BER_Decoding_Error + 0x10
__cxa_throw(x0_4, _typeinfo_for_Botan::BER_Decoding_Error, Botan::Exception::~Exception)
noreturn
