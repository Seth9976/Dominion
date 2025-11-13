// 函数: _ZNKSt6__ndk112regex_traitsIcE19__transform_primaryIPcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SA_c
// 地址: 0xf150e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x21 = arg3 - arg2
char var_58
void* var_48

if (x21 u>= -0x10)
    int64_t* x0_5 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
    
    if ((zx.d(var_58) & 1) != 0)
        operator delete(var_48)
    
    sub_1101e04(x0_5)
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
int64_t* x0_3 = *(arg1 + 0x10)
uint64_t x8_3 = zx.q(var_58)
int32_t temp0 = x8_3.d & 1
void* x1_1

if (temp0 == 0)
    x1_1 = &var_58 | 1
else
    x1_1 = var_48

uint64_t x8_4

if (temp0 == 0)
    x8_4 = x8_3 u>> 1
else
    x8_4 = var_50

int64_t result = (*(*x0_3 + 0x20))(x0_3, x1_1, x1_1 + x8_4)
char* entry_x8
uint64_t x8_6 = zx.q(*entry_x8)
uint64_t x9_2

if ((x8_6.d & 1) == 0)
    x9_2 = x8_6 u>> 1
else
    x9_2 = *(entry_x8 + 8)

if (x9_2 == 1)
    goto label_f15204

if (x9_2 == 0xc)
    void* x8_7
    
    if ((x8_6.d & 1) != 0)
        x8_7 = *(entry_x8 + 0x10)
    else
        x8_7 = &entry_x8[1]
    
    *(x8_7 + 0xb) = *(x8_7 + 3)
    
    if ((zx.d(var_58) & 1) != 0)
        return operator delete(var_48)
else if ((x8_6.d & 1) != 0)
    **(entry_x8 + 0x10) = 0
    *(entry_x8 + 8) = 0
    
    if ((zx.d(var_58) & 1) != 0)
        return operator delete(var_48)
else
    *entry_x8 = 0
label_f15204:
    
    if ((zx.d(var_58) & 1) != 0)
        return operator delete(var_48)

return result
