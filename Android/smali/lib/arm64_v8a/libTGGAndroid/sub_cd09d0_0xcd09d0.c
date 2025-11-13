// 函数: sub_cd09d0
// 地址: 0xcd09d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_68
__builtin_memset(&var_68, 0, 0x18)
void* result_1
__builtin_memset(&result_1, 0, 0x18)
int64_t i_2 = -1
int32_t var_70 = 1
int64_t i = *(arg2 + 0x18)
int64_t i_3 = arg3

if (i == -1)
    goto label_cd0a2c

int64_t var_80_1

while (i != 0)
    uint8_t var_44
    Botan::ct_divide_u8(arg2, 0x3a, &result_1, &var_44)
    int128_t v0_1
    int128_t v1_1
    v0_1, v1_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
        &var_68)
    v1_1 = *arg2
    *arg2 = result_1.o
    result_1.o = v1_1
    i = i_2
    int64_t x11_8 = arg2[1].q
    int64_t i_4 = *(arg2 + 0x18)
    arg2[1].q = var_80_1
    *(arg2 + 0x18) = i
    var_80_1 = x11_8
    i_2 = i_4
    arg2[2].d = var_70
    var_70 = arg2[2].d
    
    if (i == -1)
    label_cd0a2c:
        int64_t x9_1 = *arg2
        int64_t x11_1 = *(arg2 + 8)
        int64_t x10_1 = x11_1 - x9_1
        
        if (x11_1 == x9_1)
            i = 0
        else
            int64_t x12_1
            
            x12_1 = x10_1 s>= 0 ? x10_1 : -1
            
            int64_t x11_2 = x9_1 - x11_1
            int64_t x12_2
            
            x12_2 = x12_1 s< 1 ? x12_1 : 1
            
            int64_t x10_2
            
            x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
            
            int64_t x10_4 = x12_2 * (x10_2 u>> 2)
        label_cd0a68:
            int32_t x12_3 = *(x9_1 - 4 + (x10_4 << 2))
            i = (x10_1 s>> 2) - (zx.q(1.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f))
            
            if (x10_4 != 1)
                break
        
        *(arg2 + 0x18) = i

if (i_3 != 0)
    int64_t i_1
    
    do
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
            &var_68)
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

uint64_t x10_10 = zx.q(var_68.b)
void* x11_9 = &var_68 | 1
int32_t temp0 = x10_10.d & 1
void* var_58
char* x21_1
int64_t var_60

if (temp0 == 0)
    x21_1 = x11_9 + (x10_10 u>> 1)
else
    x21_1 = var_58 + var_60
void* x22

x22 = temp0 == 0 ? x11_9 : var_58

void* x23 = x21_1 - x22

if (x23 u>= -0x10)
    sub_c776cc(std::__ndk1::__basic_string_common<true>::__throw_length_error())
    noreturn

void* x19_1

if (x23 u> 0x16)
    uint64_t x20 = (x23 + 0x10) & 0xfffffffffffffff0
    void* x0_7 = operator new(x20)
    *(arg1 + 8) = x23
    *(arg1 + 0x10) = x0_7
    *arg1 = x20 | 1
    x19_1 = x0_7
    
    if (x21_1 != x22)
    label_cd0c0c:
        
        do
            x21_1 = &x21_1[-1]
            *x19_1 = *x21_1
            x19_1 += 1
        while (x22 != x21_1)
else
    *arg1 = (x23.d << 1).b
    x19_1 = &arg1[1]
    
    if (x21_1 != x22)
        goto label_cd0c0c

void* result = result_1
*x19_1 = 0

if (result != 0)
    void* result_2 = result
    result = Botan::deallocate_memory(result, (var_80_1 - result) s>> 2, 4)

if ((zx.d(var_68.b) & 1) == 0)
    return result

return operator delete(var_58)
