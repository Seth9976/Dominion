// 函数: _ZNKSt6__ndk112regex_traitsIcE9transformINS_11__wrap_iterIPcEEEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SC_
// 地址: 0xf16b10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x2
uint64_t x24 = entry_x2 - arg2
char var_58
char* var_48

if (x24 u>= -0x10)
    int64_t* x0_4 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
    
    if ((zx.d(var_58) & 1) != 0)
        operator delete(var_48)
    
    sub_1101e04(x0_4)
    noreturn

char* x22 = arg2
uint64_t var_50
char* x8_1
char* x0

if (x24 u> 0x16)
    uint64_t x23_1 = (x24 + 0x10) & 0xfffffffffffffff0
    int128_t v0
    int128_t v1
    x0, v0, v1 = operator new(x23_1)
    var_50 = x24
    var_48 = x0
    var_58.q = x23_1 | 1
    
    if (x22 != entry_x2)
    label_f16b60:
        
        if (x24 u>= 0x20)
            if (x0 u< entry_x2 && &x0[x24] u> x22)
                x8_1 = x0
                goto label_f16bfc
            
            int64_t i_2 = x24 & 0xffffffffffffffe0
            void* x10_1 = &x22[0x10]
            x8_1 = &x0[i_2]
            x22 = &x22[i_2]
            void* x11_1 = &x0[0x10]
            int64_t i_1 = i_2
            int64_t i
            
            do
                v0 = *(x10_1 - 0x10)
                v1 = *x10_1
                x10_1 += 0x20
                i = i_1
                i_1 -= 0x20
                *(x11_1 - 0x10) = v0
                *x11_1 = v1
                x11_1 += 0x20
            while (i != 0x20)
            
            if (i_2 != x24)
                goto label_f16bfc
        else
            x8_1 = x0
        label_f16bfc:
            
            do
                char x9_1 = *x22
                x22 = &x22[1]
                *x8_1 = x9_1
                x8_1 = &x8_1[1]
            while (entry_x2 != x22)
    else
        x8_1 = x0
else
    var_58 = (x24.d << 1).b
    x0 = &var_58 | 1
    
    if (x22 != entry_x2)
        goto label_f16b60
    
    x8_1 = x0
*x8_1 = 0
int64_t* x0_2 = *(arg1 + 0x10)
uint64_t x8_5 = zx.q(var_58)
int32_t temp0 = x8_5.d & 1
char* x1

if (temp0 == 0)
    x1 = &var_58 | 1
else
    x1 = var_48

uint64_t x8_6

if (temp0 == 0)
    x8_6 = x8_5 u>> 1
else
    x8_6 = var_50

int64_t result = (*(*x0_2 + 0x20))(x0_2, x1, &x1[x8_6])

if ((zx.d(var_58) & 1) == 0)
    return result

return operator delete(var_48)
