// 函数: _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE3getERNS_15basic_streambufIcS2_EEc
// 地址: 0x10a6814
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg1
*(arg1 + 8) = 0
int64_t x8_1 = *(x8 - 0x18)
void* x9 = arg1 + x8_1
int32_t x10 = *(x9 + 0x20)

if (x10 == 0)
    int64_t* x21_1 = arg2
    
    if (*(x9 + 0x88) != 0)
        std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::flush()
        x8_1 = *(*arg1 - 0x18)
    
    if (*(x9 + 0x88) == 0 || *(arg1 + x8_1 + 0x20) == 0)
        int32_t x8_16
        
        while (true)
            int64_t* x0_1 = *(arg1 + 0x28 + x8_1)
            char* x8_5 = x0_1[3]
            uint32_t x0_2
            
            if (x8_5 == x0_1[4])
                x0_2 = (*(*x0_1 + 0x48))()
                
                if (x0_2 == 0xffffffff)
                    x8_16 = 2
                    break
            else
                x0_2 = zx.d(*x8_5)
            
            char entry_x2
            
            if ((x0_2 & 0xff) != zx.d(entry_x2))
                uint8_t* x8_9 = x21_1[6]
                
                if (x8_9 == x21_1[7])
                    if ((*(*x21_1 + 0x68))(x21_1, zx.q(x0_2) & 0xff) != 0xffffffff)
                        goto label_10a6918
                else
                    x21_1[6] = &x8_9[1]
                    *x8_9 = x0_2.b
                label_10a6918:
                    void* x8_12 = *arg1
                    *(arg1 + 8) += 1
                    int64_t* x0_5 = *(arg1 + 0x28 + *(x8_12 - 0x18))
                    int64_t x9_10 = x0_5[3]
                    
                    if (x9_10 != x0_5[4])
                        x0_5[3] = x9_10 + 1
                        x8_1 = *(x8_12 - 0x18)
                        continue
                    else
                        (*(*x0_5 + 0x50))()
                        x8_1 = *(*arg1 - 0x18)
                        continue
            
            x8_16 = 0
            break
        
        int32_t x8_17
        
        if (*(arg1 + 8) == 0)
            x8_17 = x8_16 | 4
        else
            x8_17 = x8_16
        
        void* x9_13 = arg1 + *(*arg1 - 0x18)
        int32_t x8_19 = *(x9_13 + 0x20) | x8_17 | (*(x9_13 + 0x28) == 0 ? 1 : 0)
        bool cond:3_1 = (x8_19 & *(x9_13 + 0x24)) != 0
        *(x9_13 + 0x20) = x8_19
        
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
