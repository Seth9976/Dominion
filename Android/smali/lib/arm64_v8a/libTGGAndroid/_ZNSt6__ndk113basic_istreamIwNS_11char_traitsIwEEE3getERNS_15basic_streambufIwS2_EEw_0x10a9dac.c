// 函数: _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE3getERNS_15basic_streambufIwS2_EEw
// 地址: 0x10a9dac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg1
*(arg1 + 8) = 0
int64_t x8_1 = *(x8 - 0x18)
void* x9 = arg1 + x8_1
int32_t x10 = *(x9 + 0x20)

if (x10 == 0)
    int64_t* x21_1 = arg2
    
    if (*(x9 + 0x88) != 0)
        std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::flush()
        x8_1 = *(*arg1 - 0x18)
    
    if (*(x9 + 0x88) == 0 || *(arg1 + x8_1 + 0x20) == 0)
        int32_t x8_15
        
        while (true)
            int64_t* x0_1 = *(arg1 + 0x28 + x8_1)
            int32_t* x8_5 = x0_1[3]
            int32_t x1
            
            if (x8_5 == x0_1[4])
                x1 = (*(*x0_1 + 0x48))()
            else
                x1 = *x8_5
            
            if (x1 == 0xffffffff)
                x8_15 = 2
                break
            
            int32_t entry_x2
            
            if (x1 != entry_x2)
                int32_t* x8_8 = x21_1[6]
                
                if (x8_8 == x21_1[7])
                    if ((*(*x21_1 + 0x68))(x21_1) != 0xffffffff)
                        goto label_10a9eac
                else
                    x21_1[6] = &x8_8[1]
                    *x8_8 = x1
                label_10a9eac:
                    void* x8_11 = *arg1
                    *(arg1 + 8) += 1
                    int64_t* x0_5 = *(arg1 + 0x28 + *(x8_11 - 0x18))
                    int64_t x9_10 = x0_5[3]
                    
                    if (x9_10 != x0_5[4])
                        x0_5[3] = x9_10 + 4
                        x8_1 = *(x8_11 - 0x18)
                        continue
                    else
                        (*(*x0_5 + 0x50))()
                        x8_1 = *(*arg1 - 0x18)
                        continue
            
            x8_15 = 0
            break
        
        int32_t x8_16
        
        if (*(arg1 + 8) == 0)
            x8_16 = x8_15 | 4
        else
            x8_16 = x8_15
        
        void* x9_13 = arg1 + *(*arg1 - 0x18)
        int32_t x8_18 = *(x9_13 + 0x20) | x8_16 | (*(x9_13 + 0x28) == 0 ? 1 : 0)
        bool cond:3_1 = (x8_18 & *(x9_13 + 0x24)) != 0
        *(x9_13 + 0x20) = x8_18
        
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

return arg1
