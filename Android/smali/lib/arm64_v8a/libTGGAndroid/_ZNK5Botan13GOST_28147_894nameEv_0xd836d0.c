// 函数: _ZNK5Botan13GOST_28147_894nameEv
// 地址: 0xd836d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int16_t var_50 = 0
void* entry_x0
int32_t x9_1 = **(entry_x0 + 8)
char var_38[0x10]
void* var_28

if (x9_1 == 0x2d000)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
        &var_50)
else
    if (x9_1 != 0x72000)
        void** x0_6 = __cxa_allocate_exception(0x20)
        int64_t x0_7
        int128_t v0_1
        x0_7, v0_1 = operator new(0x30)
        int64_t var_60 = x0_7
        int128_t var_70 = data_71d3f0
        __builtin_strncpy(x0_7, "GOST-28147 unrecognized sbox value", 0x23)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "Internal error: ", &var_70)
        *x0_6 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_6[1])
        
        if ((zx.d(var_38[0]) & 1) != 0)
            operator delete(var_28)
        
        *x0_6 = _vtable_for_Botan::Internal_Error + 0x10
        __cxa_throw(x0_6, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
        noreturn
    
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
        &var_50)

std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "GOST-28147-89(", &var_50)
int128_t* result
int128_t v0
result, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_38)
int128_t* entry_x8
entry_x8[1].q = result[1].q
*entry_x8 = *result
__builtin_memset(result, 0, 0x18)
void* var_40

if ((zx.d(var_38[0]) & 1) != 0)
    result = operator delete(var_28)
    
    if ((zx.d(var_50.b) & 1) != 0)
        return operator delete(var_40)
else if ((zx.d(var_50.b) & 1) != 0)
    return operator delete(var_40)
return result
