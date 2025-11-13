// 函数: sub_f2af14
// 地址: 0xf2af14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *(arg1 + 8)
size_t x20 = *(arg1 + 0x10)
int64_t x9_1

if ((x20 & 3) == 0)
    x9_1 = 0
else
    x9_1 = 4 - (x20 & 3)

uint64_t x9_4 = ((x9_1 + x20) * 3) u>> 2

if (*x8 u< x9_4)
    *x8 = x9_4
    return 0xfffffff6

char var_58
char* var_48

if (x20 u>= -0x10)
    int64_t* x0_7 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
    
    if ((zx.d(var_58) & 1) != 0)
        operator delete(var_48)
    
    sub_1101e04(x0_7)
    noreturn

uint8_t* x21_1 = *(arg1 + 0x18)
int64_t x22_1 = *(arg1 + 0x20)
size_t var_50
char* x23_1

if (x20 u>= 0x17)
    uint64_t x24_1 = (x20 + 0x10) & 0xfffffffffffffff0
    char* x0_2 = operator new(x24_1)
    x23_1 = x0_2
    var_50 = x20
    var_48 = x0_2
    var_58.q = x24_1 | 1
    memcpy(x23_1, x22_1, x20)
else
    x23_1 = &var_58 | 1
    var_58 = (x20.d << 1).b
    
    if (x20 != 0)
        memcpy(x23_1, x22_1, x20)

x23_1[x20] = 0
uint64_t x8_4 = zx.q(var_58)
int32_t temp0_1 = x8_4.d & 1
char* x1_2
void var_57

x1_2 = temp0_1 != 0 ? var_48 : &var_57
uint64_t x2_2

if (temp0_1 == 0)
    x2_2 = x8_4 u>> 1
else
    x2_2 = var_50

**(arg1 + 8) = Botan::base64_decode(x21_1, x1_2, x2_2, true)

if ((zx.d(var_58) & 1) != 0)
    operator delete(var_48)

return 0
