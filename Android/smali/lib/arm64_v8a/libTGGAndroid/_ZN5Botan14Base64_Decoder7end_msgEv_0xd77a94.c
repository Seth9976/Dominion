// 函数: _ZN5Botan14Base64_Decoder7end_msgEv
// 地址: 0xd77a94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t var_28 = 0
int64_t* entry_x0
int64_t x0_1 = Botan::base64_decode(entry_x0[0xd], entry_x0[0xa], entry_x0[0x10], &var_28, true, 
    (*(entry_x0 + 0x4c) != 2 ? 1 : 0).b)
int64_t x1_1 = entry_x0[0xd]

if (entry_x0[0xe] - x1_1 u< x0_1)
    Botan::assertion_failure("length <= in.size()", &data_793a18, "send", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x2d93)
else
    int64_t result = (*(*entry_x0 + 0x38))(entry_x0, x1_1, x0_1)
    uint64_t x8_5 = var_28
    int64_t x9_1 = entry_x0[0x10]
    entry_x0[0x10] = 0
    
    if (x8_5 == x9_1)
        return result

void** x0_3 = __cxa_allocate_exception(0x20)
int64_t x0_4
int128_t v0
x0_4, v0 = operator new(0x30)
v0 = data_71b7f0
int64_t var_30 = x0_4
__builtin_strncpy(x0_4, "Base64_Decoder: Input not full bytes", 0x25)
int128_t var_40 = v0
*x0_3 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_3[1])
*x0_3 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_3, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
