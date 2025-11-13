// 函数: _ZNKSt6__ndk112regex_traitsIcE18__lookup_classnameIPKcEEtT_S5_bc
// 地址: 0xf1680c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x21 = arg3 - arg2
char var_58
void* var_48

if (x21 u>= -0x10)
    int64_t* x0_7 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
    
    if ((zx.d(var_58) & 1) != 0)
        operator delete(var_48)
    
    sub_1101e04(x0_7)
    noreturn

int64_t x23 = arg3
uint64_t var_50
void* x24

if (x21 u> 0x16)
    uint64_t x25_1 = (x21 + 0x10) & 0xfffffffffffffff0
    void* x0_1 = operator new(x25_1)
    x24 = x0_1
    var_50 = x21
    var_48 = x0_1
    var_58.q = x25_1 | 1
    
    if (arg2 != x23)
        memcpy(x24, arg2, x21)
        x24 += x21
else
    var_58 = (x21.d << 1).b
    x24 = &var_58 | 1
    
    if (arg2 != x23)
        memcpy(x24, arg2, x21)
        x24 += x21

*x24 = 0
int64_t* x0_3 = *(arg1 + 8)
uint64_t x8_3 = zx.q(var_58)
void* x20_1 = &var_58 | 1
int32_t temp0 = x8_3.d & 1
void* x1_1

x1_1 = temp0 == 0 ? x20_1 : var_48

uint64_t x9_1

if (temp0 == 0)
    x9_1 = x8_3 u>> 1
else
    x9_1 = var_50

(*(*x0_3 + 0x30))(x0_3, x1_1, x1_1 + x9_1)
void* x0_4

if ((zx.d(var_58) & 1) == 0)
    x0_4 = x20_1
else
    x0_4 = var_48

int16_t result = std::__ndk1::__get_classname(x0_4, arg4 & 1)

if ((zx.d(var_58) & 1) != 0)
    operator delete(var_48)

return result
