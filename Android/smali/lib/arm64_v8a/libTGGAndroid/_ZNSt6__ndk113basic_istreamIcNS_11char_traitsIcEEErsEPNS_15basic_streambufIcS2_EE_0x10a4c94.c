// 函数: _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsEPNS_15basic_streambufIcS2_EE
// 地址: 0x10a4c94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 8) = 0
int64_t x8_1 = *(*arg1 - 0x18)
void* x9 = arg1 + x8_1
int32_t x10 = *(x9 + 0x20)

if (x10 == 0)
    if (*(x9 + 0x88) != 0)
        std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::flush()
        x8_1 = *(*arg1 - 0x18)
    
    if (*(x9 + 0x88) == 0 || *(arg1 + x8_1 + 0x20) == 0)
        int64_t* entry_x1
        int32_t x20_2
        
        if (entry_x1 == 0)
            x20_2 = 4
        else
            int32_t x8_15
            
            while (true)
                int64_t* x0_1 = *(arg1 + 0x28 + x8_1)
                char* x8_5 = x0_1[3]
                uint32_t x0_2
                
                if (x8_5 == x0_1[4])
                    x0_2 = (*(*x0_1 + 0x48))()
                    
                    if (x0_2 == 0xffffffff)
                        x8_15 = 2
                        break
                else
                    x0_2 = zx.d(*x8_5)
                
                uint8_t* x8_8 = entry_x1[6]
                
                if (x8_8 == entry_x1[7])
                    if ((*(*entry_x1 + 0x68))(entry_x1, zx.q(x0_2) & 0xff) == 0xffffffff)
                        x8_15 = 0
                        break
                else
                    entry_x1[6] = &x8_8[1]
                    *x8_8 = x0_2.b
                
                void* x8_11 = *arg1
                *(arg1 + 8) += 1
                int64_t* x0_5 = *(arg1 + 0x28 + *(x8_11 - 0x18))
                int64_t x9_10 = x0_5[3]
                
                if (x9_10 != x0_5[4])
                    x0_5[3] = x9_10 + 1
                    x8_1 = *(x8_11 - 0x18)
                else
                    (*(*x0_5 + 0x50))()
                    x8_1 = *(*arg1 - 0x18)
            
            if (*(arg1 + 8) == 0)
                x20_2 = x8_15 | 4
            else
                x20_2 = x8_15
        
        void* x8_18 = arg1 + *(*arg1 - 0x18)
        int32_t x9_14 = *(x8_18 + 0x20) | x20_2 | (*(x8_18 + 0x28) == 0 ? 1 : 0)
        bool cond:3_1 = (x9_14 & *(x8_18 + 0x24)) != 0
        *(x8_18 + 0x20) = x9_14
        
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
