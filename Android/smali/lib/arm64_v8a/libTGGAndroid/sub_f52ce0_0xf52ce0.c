// 函数: sub_f52ce0
// 地址: 0xf52ce0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x23 = arg4
int128_t* x22 = arg3
int128_t* x19 = arg2
int128_t* x20 = arg1
int32_t x0
int128_t v0
x0, v0 = std::__ndk1::__sort4<std::__ndk1::__less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*>(
    arg1, arg2, arg3, arg4, arg6)
uint64_t x8 = zx.q(*x23)
uint64_t x9 = zx.q(*arg5)
uint64_t x26

if ((x8.d & 1) == 0)
    x26 = x8 u>> 1
else
    x26 = *(x23 + 8)

uint64_t x27

if ((x9.d & 1) == 0)
    x27 = x9 u>> 1
else
    x27 = *(arg5 + 8)

uint64_t x2

x2 = x26 u< x27 ? x26 : x27

int32_t x24 = x0
int32_t x0_2

if (x2 != 0)
    void* x0_1
    
    if ((x9.d & 1) != 0)
        x0_1 = *(arg5 + 0x10)
    else
        x0_1 = &arg5[1]
    
    void* x1
    
    if ((x8.d & 1) != 0)
        x1 = *(x23 + 0x10)
    else
        x1 = &x23[1]
    
    x0_2, v0 = memcmp(x0_1, x1, x2)

if (x2 == 0 || x0_2 == 0)
    if (x27 u< x26)
    label_f52d80:
        int64_t x8_1 = *(x23 + 0x10)
        x24 = x0 + 1
        int128_t var_70_1 = *x23
        v0 = *arg5
        *(x23 + 0x10) = *(arg5 + 0x10)
        *x23 = v0
        *(arg5 + 0x10) = x8_1
        *arg5 = var_70_1
        uint64_t x8_4 = zx.q(*x22)
        uint64_t x9_1 = zx.q(*x23)
        uint64_t x25_1
        
        if ((x8_4.d & 1) == 0)
            x25_1 = x8_4 u>> 1
        else
            x25_1 = *(x22 + 8)
        
        uint64_t x26_1
        
        if ((x9_1.d & 1) == 0)
            x26_1 = x9_1 u>> 1
        else
            x26_1 = *(x23 + 8)
        
        uint64_t x2_1
        
        x2_1 = x25_1 u< x26_1 ? x25_1 : x26_1
        
        int32_t x0_4
        
        if (x2_1 != 0)
            void* x0_3
            
            if ((x9_1.d & 1) != 0)
                x0_3 = *(x23 + 0x10)
            else
                x0_3 = &x23[1]
            
            void* x1_1
            
            if ((x8_4.d & 1) != 0)
                x1_1 = x22[1].q
            else
                x1_1 = x22 + 1
            
            x0_4, v0 = memcmp(x0_3, x1_1, x2_1)
        
        if (x2_1 == 0 || x0_4 == 0)
            if (x26_1 u< x25_1)
            label_f52e18:
                int64_t x8_5 = x22[1].q
                x24 = x0 + 2
                int128_t var_70_2 = *x22
                x22[1].q = *(x23 + 0x10)
                *x22 = *x23
                *(x23 + 0x10) = x8_5
                *x23 = var_70_2
                uint64_t x8_8 = zx.q(*x19)
                uint64_t x9_2 = zx.q(*x22)
                uint64_t x23_1
                
                if ((x8_8.d & 1) == 0)
                    x23_1 = x8_8 u>> 1
                else
                    x23_1 = *(x19 + 8)
                
                uint64_t x25_2
                
                if ((x9_2.d & 1) == 0)
                    x25_2 = x9_2 u>> 1
                else
                    x25_2 = *(x22 + 8)
                
                uint64_t x2_2
                
                x2_2 = x23_1 u< x25_2 ? x23_1 : x25_2
                
                int32_t x0_6
                
                if (x2_2 != 0)
                    void* x0_5
                    
                    if ((x9_2.d & 1) != 0)
                        x0_5 = x22[1].q
                    else
                        x0_5 = x22 + 1
                    
                    void* x1_2
                    
                    if ((x8_8.d & 1) != 0)
                        x1_2 = x19[1].q
                    else
                        x1_2 = x19 + 1
                    
                    x0_6, v0 = memcmp(x0_5, x1_2, x2_2)
                
                if (x2_2 == 0 || x0_6 == 0)
                    if (x25_2 u< x23_1)
                    label_f52eb0:
                        int64_t x8_9 = x19[1].q
                        x24 = x0 + 3
                        int128_t var_70_3 = *x19
                        x19[1].q = x22[1].q
                        *x19 = *x22
                        x22[1].q = x8_9
                        *x22 = var_70_3
                        uint64_t x8_12 = zx.q(*x20)
                        uint64_t x9_3 = zx.q(*x19)
                        uint64_t x22_1
                        
                        if ((x8_12.d & 1) == 0)
                            x22_1 = x8_12 u>> 1
                        else
                            x22_1 = *(x20 + 8)
                        
                        uint64_t x23_2
                        
                        if ((x9_3.d & 1) == 0)
                            x23_2 = x9_3 u>> 1
                        else
                            x23_2 = *(x19 + 8)
                        
                        uint64_t x2_3
                        
                        x2_3 = x22_1 u< x23_2 ? x22_1 : x23_2
                        
                        int32_t x0_8
                        
                        if (x2_3 != 0)
                            void* x0_7
                            
                            if ((x9_3.d & 1) != 0)
                                x0_7 = x19[1].q
                            else
                                x0_7 = x19 + 1
                            
                            void* x1_3
                            
                            if ((x8_12.d & 1) != 0)
                                x1_3 = x20[1].q
                            else
                                x1_3 = x20 + 1
                            
                            x0_8, v0 = memcmp(x0_7, x1_3, x2_3)
                        
                        if (x2_3 == 0 || x0_8 == 0)
                            if (x23_2 u< x22_1)
                            label_f52f48:
                                int64_t x8_13 = x20[1].q
                                x24 = x0 + 4
                                int128_t var_70_4 = *x20
                                x20[1].q = x19[1].q
                                *x20 = *x19
                                x19[1].q = x8_13
                                *x19 = var_70_4
                        else if ((x0_8 & 0x80000000) != 0)
                            goto label_f52f48
                else if ((x0_6 & 0x80000000) != 0)
                    goto label_f52eb0
        else if ((x0_4 & 0x80000000) != 0)
            goto label_f52e18
else if ((x0_2 & 0x80000000) != 0)
    goto label_f52d80

return zx.q(x24)
