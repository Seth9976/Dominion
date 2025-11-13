// 函数: sub_e6e2a8
// 地址: 0xe6e2a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = *arg4
void* x21

if (x0 == 0)
    x21 = *(arg2 + 0x20)
    
    if (x21 != 0)
        goto label_e6e2fc
    
    goto label_e6e2dc

*(arg2 + 0x40) = x0
operator delete(x0)
x21 = *(arg2 + 0x20)
void* x0_4

if (x21 == 0)
label_e6e2dc:
    x0_4 = *arg3
    
    if (x0_4 == 0)
        sub_1101e04(arg1)
        noreturn
else
label_e6e2fc:
    int64_t* x8_1 = *(arg2 + 0x28)
    void* x0_2 = x21
    
    if (x8_1 != x21)
        int64_t* x23 = x8_1
        
        do
            x23 = &x23[-3]
            void* x0_3 = *x23
            
            if (x0_3 != 0)
                x8_1[-2] = x0_3
                operator delete(x0_3)
            
            x8_1 = x23
        while (x21 != x23)
        
        x0_2 = *(arg2 + 0x20)
    
    *(arg2 + 0x28) = x21
    operator delete(x0_2)
    x0_4 = *arg3
    
    if (x0_4 == 0)
        sub_1101e04(arg1)
        noreturn

*(arg2 + 0x10) = x0_4
operator delete(x0_4)
sub_1101e04(arg1)
noreturn
