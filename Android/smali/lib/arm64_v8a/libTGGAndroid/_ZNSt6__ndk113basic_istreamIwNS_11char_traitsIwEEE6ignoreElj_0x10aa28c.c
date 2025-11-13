// 函数: _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE6ignoreElj
// 地址: 0x10aa28c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 8) = 0
int64_t x8_1 = *(*arg1 - 0x18)
void* x9 = arg1 + x8_1
int32_t x10 = *(x9 + 0x20)

if (x10 == 0)
    int64_t x21_1 = arg2
    
    if (*(x9 + 0x88) != 0)
        std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::flush()
        x8_1 = *(*arg1 - 0x18)
    
    if (*(x9 + 0x88) == 0 || *(arg1 + x8_1 + 0x20) == 0)
        int32_t x8_18
        int32_t entry_x2
        
        if (x21_1 != 0x7fffffffffffffff)
            int64_t x8_11 = *(arg1 + 8)
            
            while (true)
                if (x8_11 s>= x21_1)
                    goto label_10aa3cc
                
                int64_t* x0_3 = *(arg1 + 0x28 + *(*arg1 - 0x18))
                int32_t* x8_14 = x0_3[3]
                int32_t x0_4
                
                if (x8_14 == x0_3[4])
                    x0_4 = (*(*x0_3 + 0x50))()
                else
                    x0_3[3] = &x8_14[1]
                    x0_4 = *x8_14
                
                if (x0_4 == 0xffffffff)
                    break
                
                x8_11 = *(arg1 + 8) + 1
                *(arg1 + 8) = x8_11
                
                if (x0_4 == entry_x2)
                    goto label_10aa3cc
        else
            while (true)
                int64_t* x0_1 = *(arg1 + 0x28 + x8_1)
                int32_t* x8_5 = x0_1[3]
                int32_t x0_2
                
                if (x8_5 == x0_1[4])
                    x0_2 = (*(*x0_1 + 0x50))()
                else
                    x0_1[3] = &x8_5[1]
                    x0_2 = *x8_5
                
                if (x0_2 == 0xffffffff)
                    break
                
                *(arg1 + 8) += 1
                
                if (x0_2 == entry_x2)
                label_10aa3cc:
                    x8_18 = 0
                    goto label_10aa3e0
                
                x8_1 = *(*arg1 - 0x18)
        x8_18 = 2
    label_10aa3e0:
        void* x9_9 = arg1 + *(*arg1 - 0x18)
        int32_t x8_20 = *(x9_9 + 0x20) | x8_18 | (*(x9_9 + 0x28) == 0 ? 1 : 0)
        bool cond:4_1 = (x8_20 & *(x9_9 + 0x24)) != 0
        *(x9_9 + 0x20) = x8_20
        
        if (cond:4_1)
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
