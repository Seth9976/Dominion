// 函数: _ZN5Botan4HTTPlsERNSt6__ndk113basic_ostreamIcNS1_11char_traitsIcEEEERKNS0_8ResponseE
// 地址: 0xd8c228
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x0 =
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(arg1, "HTTP ", 5)
*arg2
std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_2 =
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(x0), " ", 1)
char var_90
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_90)
uint64_t x8 = zx.q(var_90)
int32_t temp0 = x8.d & 1
char* var_80
char* x1_2

if (temp0 == 0)
    x1_2 = &var_90 | 1
else
    x1_2 = var_80

uint64_t var_88
uint64_t x2

if (temp0 == 0)
    x2 = x8 u>> 1
else
    x2 = var_88

std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_2, x1_2, x2), 
    "\n", 1)

if ((zx.d(var_90) & 1) != 0)
    operator delete(var_80)

int64_t* i = *(arg2 + 0x38)

while (i != arg2 + 0x40)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_90)
    char var_78
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_78)
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_10 =
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(arg1, 
        "Header '", 8)
    uint64_t x8_2 = zx.q(var_90)
    int32_t temp2_1 = x8_2.d & 1
    char* x1_5
    
    if (temp2_1 == 0)
        x1_5 = &var_90 | 1
    else
        x1_5 = var_80
    
    uint64_t x2_1
    
    if (temp2_1 == 0)
        x2_1 = x8_2 u>> 1
    else
        x2_1 = var_88
    
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_12 =
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_10, x1_5, 
            x2_1), 
        "' = '", 5)
    uint64_t x8_3 = zx.q(var_78)
    int32_t temp3_1 = x8_3.d & 1
    char* var_68
    char* x1_6
    void var_77
    
    x1_6 = temp3_1 == 0 ? &var_77 : var_68
    uint64_t x2_2
    uint64_t var_70
    
    if (temp3_1 == 0)
        x2_2 = x8_3 u>> 1
    else
        x2_2 = var_70
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_12, x1_6, 
            x2_2), 
        "'\n", 2)
    
    if ((zx.d(var_78) & 1) == 0)
        if ((zx.d(var_90) & 1) != 0)
            goto label_d8c3c0
        
        goto label_d8c3a0
    
    operator delete(var_68)
    int64_t* j
    
    if ((zx.d(var_90) & 1) != 0)
    label_d8c3c0:
        operator delete(var_80)
        j = i[1]
        
        if (j == 0)
            goto label_d8c3e0
        
        goto label_d8c3d4
    
label_d8c3a0:
    j = i[1]
    
    if (j != 0)
    label_d8c3d4:
        
        do
            i = j
            j = *j
        while (j != 0)
    else
    label_d8c3e0:
        void* x8_8 = &i[2]
        int64_t* i_1 = *x8_8
        
        if (*i_1 == i)
            i = i_1
        else
            void* j_1
            
            do
                j_1 = *x8_8
                x8_8 = j_1 + 0x10
                i = *x8_8
            while (*i != j_1)

std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_17 =
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(arg1, "Body ", 5)
std::__ndk1::to_string(*(arg2 + 0x28) - *(arg2 + 0x20))
uint64_t x8_11 = zx.q(var_90)
int32_t temp1 = x8_11.d & 1
char* x1_7

if (temp1 == 0)
    x1_7 = &var_90 | 1
else
    x1_7 = var_80

uint64_t x2_3

if (temp1 == 0)
    x2_3 = x8_11 u>> 1
else
    x2_3 = var_88

std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_17, x1_7, 
        x2_3), 
    " bytes:\n", 8)

if ((zx.d(var_90) & 1) != 0)
    operator delete(var_80)

*(arg2 + 0x28)
std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::write(arg1, *(arg2 + 0x20))
return arg1
