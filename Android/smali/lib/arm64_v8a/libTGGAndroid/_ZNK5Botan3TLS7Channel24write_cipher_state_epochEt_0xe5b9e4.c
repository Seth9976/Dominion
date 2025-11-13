// 函数: _ZNK5Botan3TLS7Channel24write_cipher_state_epochEt
// 地址: 0xe5b9e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* i = *(arg1 + 0x58)
int16_t entry_x1

if (i != 0)
    int64_t* i_2 = arg1 + 0x58
    
    do
        uint32_t x11_1 = zx.d(i[4].w)
        uint32_t temp0_1 = zx.d(entry_x1)
        
        if (x11_1 u>= temp0_1)
            i_2 = i
        
        i = i[zx.q(x11_1 u< temp0_1 ? 1 : 0)]
    while (i != 0)
    
    if (i_2 != arg1 + 0x58 && zx.d(i_2[4].w) u<= zx.d(entry_x1))
        int64_t x9_1 = i_2[6]
        int64_t* entry_x8
        *entry_x8 = i_2[5]
        entry_x8[1] = x9_1
        
        if (x9_1 != 0)
            int32_t i_1
            
            do
                i_1 = __stxr(__ldxr(x9_1 + 8) + 1, x9_1 + 8)
            while (i_1 != 0)
        
        return arg1 + 0x58

void** x0_1 = __cxa_allocate_exception(0x20)
std::__ndk1::to_string(zx.d(entry_x1))
void var_68
int128_t* x0_4
int128_t v0
x0_4, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_68, nullptr)
int64_t var_40 = x0_4[1].q
int128_t var_50 = *x0_4
__builtin_memset(x0_4, 0, 0x18)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Internal error: ", &var_50)
*x0_1 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_1[1])
char var_38
void* var_28

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_28)
*x0_1 = _vtable_for_Botan::Internal_Error + 0x10
__cxa_throw(x0_1, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
noreturn
