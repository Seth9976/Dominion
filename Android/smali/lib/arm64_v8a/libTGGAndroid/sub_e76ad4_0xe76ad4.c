// 函数: sub_e76ad4
// 地址: 0xe76ad4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(arg1, arg2, 
        strlen(arg2)), 
    " = ", 3)
void* x8 = *arg3

if (arg3[1] != x8)
    int64_t x21_1 = 0
    int64_t x22_1 = 0
    int64_t x9_1
    
    do
        char* x8_1 = x8 + x21_1
        uint64_t x9_2 = zx.q(*x8_1)
        int32_t temp0_1 = x9_2.d & 1
        char* x1_1
        
        if (temp0_1 != 0)
            x1_1 = *(x8_1 + 0x10)
        else
            x1_1 = &x8_1[1]
        
        uint64_t x2_1
        
        if (temp0_1 == 0)
            x2_1 = x9_2 u>> 1
        else
            x2_1 = *(x8_1 + 8)
        
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(arg1, x1_1, 
            x2_1)
        x8 = *arg3
        x9_1 = ((arg3[1] - x8) s>> 3) * -0x5555555555555555
        
        if (x22_1 != x9_1 - 1)
            char var_34 = 0x20
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(arg1, 
                &var_34, 1)
            x8 = *arg3
            x9_1 = ((arg3[1] - x8) s>> 3) * -0x5555555555555555
        
        x22_1 += 1
        x21_1 += 0x18
    while (x22_1 != x9_1)

char var_38 = 0xa
return std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(arg1, &var_38, 
    1)
