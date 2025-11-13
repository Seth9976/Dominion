// 函数: _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE7getlineEPwlw
// 地址: 0x10aa034
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 8) = 0
int64_t x20 = arg3
int64_t x8_1 = *(*arg1 - 0x18)
int64_t x21 = arg2
void* x9 = arg1 + x8_1
int32_t x10 = *(x9 + 0x20)
int32_t x8_4

if (x10 != 0)
    int32_t x10_2 = x10 | (*(x9 + 0x28) == 0 ? 1 : 0) | 4
    bool cond:1_1 = (x10_2 & *(x9 + 0x24)) != 0
    *(x9 + 0x20) = x10_2
    
    if (not(cond:1_1))
    label_10aa098:
        x8_4 = 0
    label_10aa0a0:
        
        if (x20 s>= 1)
            *x21 = 0
        
        int32_t x8_5
        
        if (*(arg1 + 8) == 0)
            x8_5 = x8_4 | 4
        else
            x8_5 = x8_4
        
        void* x9_3 = arg1 + *(*arg1 - 0x18)
        int32_t x8_7 = *(x9_3 + 0x20) | x8_5 | (*(x9_3 + 0x28) == 0 ? 1 : 0)
        bool cond:3_1 = (x8_7 & *(x9_3 + 0x24)) != 0
        *(x9_3 + 0x20) = x8_7
        
        if (not(cond:3_1))
            return arg1
    
    sub_10b053c()
    noreturn

if (*(x9 + 0x88) != 0)
    std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::flush()
    x8_1 = *(*arg1 - 0x18)

if (*(x9 + 0x88) != 0 && *(arg1 + x8_1 + 0x20) != 0)
    goto label_10aa098

while (true)
    int64_t* x0_2 = *(arg1 + 0x28 + x8_1)
    int32_t* x8_10 = x0_2[3]
    int32_t x0_3
    
    if (x8_10 == x0_2[4])
        x0_3 = (*(*x0_2 + 0x48))()
    else
        x0_3 = *x8_10
    
    if (x0_3 == 0xffffffff)
        x8_4 = 2
        break
    
    int32_t entry_x3
    
    if (x0_3 == entry_x3)
        int64_t* x0_5 = *(arg1 + *(*arg1 - 0x18) + 0x28)
        int64_t x8_19 = x0_5[3]
        
        if (x8_19 == x0_5[4])
            (*(*x0_5 + 0x50))()
        else
            x0_5[3] = x8_19 + 4
        
        x8_4 = 0
        *(arg1 + 8) += 1
        break
    
    int64_t x8_13 = *(arg1 + 8)
    
    if (x8_13 s>= x20 - 1)
        x8_4 = 4
        break
    
    *x21 = x0_3
    void* x9_6 = *arg1
    int64_t* x0_4 = *(arg1 + 0x28 + *(x9_6 - 0x18))
    int64_t x10_8 = x0_4[3]
    
    if (x10_8 != x0_4[4])
        x0_4[3] = x10_8 + 4
    else
        (*(*x0_4 + 0x50))()
        x9_6 = *arg1
        x8_13 = *(arg1 + 8)
    
    *(arg1 + 8) = x8_13 + 1
    x8_1 = *(x9_6 - 0x18)
    x21 += 4

goto label_10aa0a0
