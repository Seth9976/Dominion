// 函数: sub_e6e26c
// 地址: 0xe6e26c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg5) & 1) != 0)
    operator delete(arg6)

void* x0_1 = *arg4
void* x21

if (x0_1 == 0)
    x21 = *(arg2 + 0x20)
    
    if (x21 != 0)
        goto label_e6e2fc
    
    goto label_e6e2dc

*(arg2 + 0x40) = x0_1
operator delete(x0_1)
x21 = *(arg2 + 0x20)
void* x0_5

if (x21 == 0)
label_e6e2dc:
    x0_5 = *arg3
    
    if (x0_5 == 0)
        sub_1101e04(arg1)
        noreturn
else
label_e6e2fc:
    int64_t* x8 = *(arg2 + 0x28)
    void* x0_3 = x21
    
    if (x8 != x21)
        int64_t* x23 = x8
        
        do
            x23 = &x23[-3]
            void* x0_4 = *x23
            
            if (x0_4 != 0)
                x8[-2] = x0_4
                operator delete(x0_4)
            
            x8 = x23
        while (x21 != x23)
        
        x0_3 = *(arg2 + 0x20)
    
    *(arg2 + 0x28) = x21
    operator delete(x0_3)
    x0_5 = *arg3
    
    if (x0_5 == 0)
        sub_1101e04(arg1)
        noreturn

*(arg2 + 0x10) = x0_5
operator delete(x0_5)
sub_1101e04(arg1)
noreturn
