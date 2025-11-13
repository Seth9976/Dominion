// 函数: _ZNSt6__ndk17__sort4IRNS_6__lessINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EEPS7_EEjT0_SB_SB_SB_T_
// 地址: 0xf52ac0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t result_1
int128_t v0
result_1, v0 = std::__ndk1::__sort3<std::__ndk1::__less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*>(
    arg1, arg2, arg3, arg5)
uint64_t x8 = zx.q(*arg3)
uint64_t x9 = zx.q(*arg4)
uint64_t x25

if ((x8.d & 1) == 0)
    x25 = x8 u>> 1
else
    x25 = *(arg3 + 8)

uint64_t x26

if ((x9.d & 1) == 0)
    x26 = x9 u>> 1
else
    x26 = *(arg4 + 8)

uint64_t x2

x2 = x25 u< x26 ? x25 : x26

int32_t result = result_1
int32_t x0_1

if (x2 != 0)
    void* __offset(
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0x1) x0
    
    if ((x9.d & 1) != 0)
        x0 = *(arg4 + 0x10)
    else
        x0 = arg4 + 1
    
    void* __offset(
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0x1) x1
    
    if ((x8.d & 1) != 0)
        x1 = *(arg3 + 0x10)
    else
        x1 = arg3 + 1
    
    x0_1, v0 = memcmp(x0, x1, x2)

if (x2 == 0 || x0_1 == 0)
    if (x26 u< x25)
    label_f52b5c:
        int64_t x8_1 = *(arg3 + 0x10)
        result = result_1 + 1
        int128_t var_70_1 = *arg3
        v0 = *arg4
        *(arg3 + 0x10) = *(arg4 + 0x10)
        *arg3 = v0
        *(arg4 + 0x10) = x8_1
        *arg4 = var_70_1
        uint64_t x8_4 = zx.q(*arg2)
        uint64_t x9_1 = zx.q(*arg3)
        uint64_t x24_1
        
        if ((x8_4.d & 1) == 0)
            x24_1 = x8_4 u>> 1
        else
            x24_1 = *(arg2 + 8)
        
        uint64_t x25_1
        
        if ((x9_1.d & 1) == 0)
            x25_1 = x9_1 u>> 1
        else
            x25_1 = *(arg3 + 8)
        
        uint64_t x2_1
        
        x2_1 = x24_1 u< x25_1 ? x24_1 : x25_1
        
        int32_t x0_3
        
        if (x2_1 != 0)
            void* __offset(
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                0x1) x0_2
            
            if ((x9_1.d & 1) != 0)
                x0_2 = *(arg3 + 0x10)
            else
                x0_2 = arg3 + 1
            
            void* __offset(
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                0x1) x1_1
            
            if ((x8_4.d & 1) != 0)
                x1_1 = *(arg2 + 0x10)
            else
                x1_1 = arg2 + 1
            
            x0_3, v0 = memcmp(x0_2, x1_1, x2_1)
        
        if (x2_1 == 0 || x0_3 == 0)
            if (x25_1 u< x24_1)
            label_f52bf4:
                int64_t x8_5 = *(arg2 + 0x10)
                result = result_1 + 2
                int128_t var_70_2 = *arg2
                v0 = *arg3
                *(arg2 + 0x10) = *(arg3 + 0x10)
                *arg2 = v0
                *(arg3 + 0x10) = x8_5
                *arg3 = var_70_2
                uint64_t x8_8 = zx.q(*arg1)
                uint64_t x9_2 = zx.q(*arg2)
                uint64_t x22_1
                
                if ((x8_8.d & 1) == 0)
                    x22_1 = x8_8 u>> 1
                else
                    x22_1 = *(arg1 + 8)
                
                uint64_t x24_2
                
                if ((x9_2.d & 1) == 0)
                    x24_2 = x9_2 u>> 1
                else
                    x24_2 = *(arg2 + 8)
                
                uint64_t x2_2
                
                x2_2 = x22_1 u< x24_2 ? x22_1 : x24_2
                
                int32_t x0_5
                
                if (x2_2 != 0)
                    void* __offset(
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                        0x1) x0_4
                    
                    if ((x9_2.d & 1) != 0)
                        x0_4 = *(arg2 + 0x10)
                    else
                        x0_4 = arg2 + 1
                    
                    void* __offset(
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                        0x1) x1_2
                    
                    if ((x8_8.d & 1) != 0)
                        x1_2 = *(arg1 + 0x10)
                    else
                        x1_2 = arg1 + 1
                    
                    x0_5, v0 = memcmp(x0_4, x1_2, x2_2)
                
                if (x2_2 == 0 || x0_5 == 0)
                    if (x24_2 u< x22_1)
                    label_f52c8c:
                        int64_t x8_9 = *(arg1 + 0x10)
                        result = result_1 + 3
                        int128_t var_70_3 = *arg1
                        v0 = *arg2
                        *(arg1 + 0x10) = *(arg2 + 0x10)
                        *arg1 = v0
                        *(arg2 + 0x10) = x8_9
                        *arg2 = var_70_3
                else if ((x0_5 & 0x80000000) != 0)
                    goto label_f52c8c
        else if ((x0_3 & 0x80000000) != 0)
            goto label_f52bf4
else if ((x0_1 & 0x80000000) != 0)
    goto label_f52b5c

return result
