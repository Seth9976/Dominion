// 函数: _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE3getEPwlw
// 地址: 0x10a9ab0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 8) = 0
int64_t x20 = arg3
int64_t x8_1 = *(*arg1 - 0x18)
int64_t x21 = arg2
void* x9 = arg1 + x8_1
int32_t x10 = *(x9 + 0x20)

if (x10 == 0)
    if (*(x9 + 0x88) != 0)
        std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::flush()
        x8_1 = *(*arg1 - 0x18)
    
    if (*(x9 + 0x88) == 0 || *(arg1 + x8_1 + 0x20) == 0)
        int32_t x8_14
        
        if (x20 s< 1)
            x8_14 = 4
        else
            int64_t x9_3 = *(arg1 + 8)
            int32_t x8_15
            
            if (x9_3 s>= x20 - 1)
                x8_15 = 0
            else
                while (true)
                    int64_t* x0_1 = *(arg1 + 0x28 + x8_1)
                    int32_t* x8_5 = x0_1[3]
                    int32_t x0_2
                    
                    if (x8_5 == x0_1[4])
                        x0_2 = (*(*x0_1 + 0x48))()
                    else
                        x0_2 = *x8_5
                    
                    if (x0_2 == 0xffffffff)
                        x8_15 = 2
                        break
                    
                    int32_t entry_x3
                    
                    if (x0_2 == entry_x3)
                        x8_15 = 0
                        break
                    
                    *x21 = x0_2
                    void* x9_5 = *arg1
                    int64_t x8_9 = *(arg1 + 8) + 1
                    *(arg1 + 8) = x8_9
                    int64_t* x0_3 = *(arg1 + 0x28 + *(x9_5 - 0x18))
                    int64_t x9_7 = x0_3[3]
                    
                    if (x9_7 == x0_3[4])
                        (*(*x0_3 + 0x50))()
                        
                        if (*(arg1 + 8) s< x20 - 1)
                        label_10a9be0:
                            x21 += 4
                            x8_1 = *(*arg1 - 0x18)
                            continue
                    else
                        x0_3[3] = x9_7 + 4
                        
                        if (x8_9 s< x20 - 1)
                            goto label_10a9be0
                    
                    x8_15 = 0
                    x21 += 4
                    break
                
                x9_3 = *(arg1 + 8)
            
            if (x9_3 == 0)
                x8_14 = x8_15 | 4
            else
                x8_14 = x8_15
            
            *x21 = 0
        
        void* x9_11 = arg1 + *(*arg1 - 0x18)
        int32_t x8_17 = *(x9_11 + 0x20) | x8_14 | (*(x9_11 + 0x28) == 0 ? 1 : 0)
        bool cond:3_1 = (x8_17 & *(x9_11 + 0x24)) != 0
        *(x9_11 + 0x20) = x8_17
        
        if (cond:3_1)
            sub_10b053c()
            noreturn
else
    int32_t x10_2 = x10 | (*(x9 + 0x28) == 0 ? 1 : 0) | 4
    bool cond:1_1 = (x10_2 & *(x9 + 0x24)) == 0
    *(x9 + 0x20) = x10_2
    
    if (not(cond:1_1))
        sub_10b053c()
        noreturn

if (x20 s>= 1)
    *x21 = 0

return arg1
