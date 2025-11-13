// 函数: _ZNSt6__ndk17__sort3IRNS_6__lessINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EEPS7_EEjT0_SB_SB_T_
// 地址: 0xf527b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*arg1)
uint64_t x23 = zx.q(*arg2)
uint64_t x24

if ((x9.d & 1) == 0)
    x24 = x9 u>> 1
else
    x24 = *(arg1 + 8)

uint64_t x22

if ((x23.d & 1) == 0)
    x22 = x23 u>> 1
else
    x22 = *(arg2 + 8)

uint64_t x8_1

x8_1 = x24 u< x22 ? x24 : x22

int32_t x0_1
int128_t v0

if (x8_1 != 0)
    void* __offset(
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0x1) x0
    
    if ((x23.d & 1) != 0)
        x0 = *(arg2 + 0x10)
    else
        x0 = arg2 + 1
    
    void* __offset(
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0x1) x1
    
    if ((x9.d & 1) != 0)
        x1 = *(arg1 + 0x10)
    else
        x1 = arg1 + 1
    
    x0_1, v0 = memcmp(x0, x1, x8_1)

if (x8_1 == 0 || x0_1 == 0)
    if (x22 u>= x24)
    label_f52830:
        uint64_t x8_2 = zx.q(*arg3)
        uint64_t x24_1
        
        if ((x8_2.d & 1) == 0)
            x24_1 = x8_2 u>> 1
        else
            x24_1 = *(arg3 + 8)
        
        uint64_t x2_1
        
        x2_1 = x22 u< x24_1 ? x22 : x24_1
        
        int32_t x0_3
        
        if (x2_1 != 0)
            void* __offset(
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                0x1) x0_2
            
            if ((x8_2.d & 1) != 0)
                x0_2 = *(arg3 + 0x10)
            else
                x0_2 = arg3 + 1
            
            void* __offset(
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                0x1) x1_1
            
            if ((x23.d & 1) != 0)
                x1_1 = *(arg2 + 0x10)
            else
                x1_1 = arg2 + 1
            
            x0_3, v0 = memcmp(x0_2, x1_1, x2_1)
        
        if (x2_1 == 0 || x0_3 == 0)
            if (x24_1 u>= x22)
                return 0
        else if ((x0_3 & 0x80000000) == 0)
            return 0
        
        int64_t x8_8 = *(arg2 + 0x10)
        int128_t var_60_2 = *arg2
        v0 = *arg3
        *(arg2 + 0x10) = *(arg3 + 0x10)
        *arg2 = v0
        *(arg3 + 0x10) = x8_8
        *arg3 = var_60_2
        uint64_t x8_11 = zx.q(*arg1)
        uint64_t x9_6 = zx.q(*arg2)
        uint64_t x21_1
        
        if ((x8_11.d & 1) == 0)
            x21_1 = x8_11 u>> 1
        else
            x21_1 = *(arg1 + 8)
        
        uint64_t x22_2
        
        if ((x9_6.d & 1) == 0)
            x22_2 = x9_6 u>> 1
        else
            x22_2 = *(arg2 + 8)
        
        uint64_t x2_4
        
        x2_4 = x21_1 u< x22_2 ? x21_1 : x22_2
        
        int32_t x0_9
        
        if (x2_4 != 0)
            void* __offset(
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                0x1) x0_8
            
            if ((x9_6.d & 1) != 0)
                x0_8 = *(arg2 + 0x10)
            else
                x0_8 = arg2 + 1
            
            void* __offset(
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                0x1) x1_4
            
            if ((x8_11.d & 1) != 0)
                x1_4 = *(arg1 + 0x10)
            else
                x1_4 = arg1 + 1
            
            x0_9, v0 = memcmp(x0_8, x1_4, x2_4)
        
        if (x2_4 == 0 || x0_9 == 0)
            if (x22_2 u>= x21_1)
                return 1
        else if ((x0_9 & 0x80000000) == 0)
            return 1
        
        int64_t x8_18 = *(arg1 + 0x10)
        int128_t var_60_5 = *arg1
        v0 = *arg2
        *(arg1 + 0x10) = *(arg2 + 0x10)
        *arg1 = v0
        *(arg2 + 0x10) = x8_18
        *arg2 = var_60_5
        return 2
else if ((x0_1 & 0x80000000) == 0)
    goto label_f52830

uint64_t x8_3 = zx.q(*arg3)
uint64_t x24_2

if ((x8_3.d & 1) == 0)
    x24_2 = x8_3 u>> 1
else
    x24_2 = *(arg3 + 8)

uint64_t x2_2

x2_2 = x22 u< x24_2 ? x22 : x24_2

int32_t x0_5

if (x2_2 != 0)
    void* __offset(
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0x1) x0_4
    
    if ((x8_3.d & 1) != 0)
        x0_4 = *(arg3 + 0x10)
    else
        x0_4 = arg3 + 1
    
    void* __offset(
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0x1) x1_2
    
    if ((x23.d & 1) != 0)
        x1_2 = *(arg2 + 0x10)
    else
        x1_2 = arg2 + 1
    
    x0_5, v0 = memcmp(x0_4, x1_2, x2_2)

if (x2_2 == 0 || x0_5 == 0)
    if (x24_2 u>= x22)
    label_f528c8:
        int64_t x8_4 = *(arg1 + 0x10)
        int128_t var_60_1 = *arg1
        v0 = *arg2
        *(arg1 + 0x10) = *(arg2 + 0x10)
        *arg1 = v0
        *arg2 = var_60_1
        *(arg2 + 0x10) = x8_4
        uint64_t x8_7 = zx.q(*arg2)
        uint64_t x9_5 = zx.q(*arg3)
        uint64_t x20_1
        
        if ((x8_7.d & 1) == 0)
            x20_1 = x8_7 u>> 1
        else
            x20_1 = *(arg2 + 8)
        
        uint64_t x22_1
        
        if ((x9_5.d & 1) == 0)
            x22_1 = x9_5 u>> 1
        else
            x22_1 = *(arg3 + 8)
        
        uint64_t x2_3
        
        x2_3 = x20_1 u< x22_1 ? x20_1 : x22_1
        
        int32_t x0_7
        
        if (x2_3 != 0)
            void* __offset(
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                0x1) x0_6
            
            if ((x9_5.d & 1) != 0)
                x0_6 = *(arg3 + 0x10)
            else
                x0_6 = arg3 + 1
            
            void* __offset(
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                0x1) x1_3
            
            if ((x8_7.d & 1) != 0)
                x1_3 = *(arg2 + 0x10)
            else
                x1_3 = arg2 + 1
            
            x0_7, v0 = memcmp(x0_6, x1_3, x2_3)
        
        if (x2_3 == 0 || x0_7 == 0)
            if (x22_1 u>= x20_1)
                return 1
        else if ((x0_7 & 0x80000000) == 0)
            return 1
        
        int64_t x8_15 = *(arg2 + 0x10)
        int128_t var_60_4 = *arg2
        v0 = *arg3
        *(arg2 + 0x10) = *(arg3 + 0x10)
        *arg2 = v0
        *(arg3 + 0x10) = x8_15
        *arg3 = var_60_4
        return 2
else if ((x0_5 & 0x80000000) == 0)
    goto label_f528c8

int64_t x8_12 = *(arg1 + 0x10)
int128_t var_60_3 = *arg1
v0 = *arg3
*(arg1 + 0x10) = *(arg3 + 0x10)
*arg1 = v0
*(arg3 + 0x10) = x8_12
*arg3 = var_60_3
return 1
