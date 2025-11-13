// 函数: sub_f32078
// 地址: 0xf32078
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = operator new(0x18)
uint8_t* x0_1 = operator new(0x10)
char* x25 = *(arg1 + 0x20)
uint64_t x22 = *(arg1 + 0x10)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x23 = *(arg1 + 0x18)
size_t x0_3 = strlen(x25)
char var_68
void* var_58

if (x0_3 u>= -0x10)
    int64_t* x0_10 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
    
    if ((zx.d(var_68) & 1) != 0)
        operator delete(var_58)
    
    operator delete(x0_1)
    operator delete(x0)
    sub_1101e04(x0_10)
    noreturn

void* x26

if (x0_3 u>= 0x17)
    uint64_t x27_1 = (x0_3 + 0x10) & 0xfffffffffffffff0
    void* x0_5 = operator new(x27_1)
    x26 = x0_5
    size_t var_60_1 = x0_3
    var_58 = x0_5
    var_68.q = x27_1 | 1
    memcpy(x26, x25, x0_3)
else
    x26 = &var_68 | 1
    var_68 = (x0_3.d << 1).b
    
    if (x0_3 != 0)
        memcpy(x26, x25, x0_3)

*(x26 + x0_3) = 0
*(arg1 + 0x28)
Botan::HOTP::HOTP(x0_1, x22, x23, &var_68)
x0[2] = x0_1
x0[1].d = 0x89cbf191
*x0 = _vtable_for_botan_hotp_struct + 0x10
**(arg1 + 8) = x0

if ((zx.d(var_68) & 1) != 0)
    operator delete(var_58)

return 0
