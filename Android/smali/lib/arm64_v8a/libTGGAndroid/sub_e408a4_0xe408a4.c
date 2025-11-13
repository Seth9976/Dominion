// 函数: sub_e408a4
// 地址: 0xe408a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19_1 = *(arg4 + 0x20)
*(arg4 + 0x28) = arg3

if (x19_1 != 0)
    void* x0 = x19_1
    
    if (arg3 != x19_1)
        char* x22_1 = arg3
        
        do
            x22_1 = &x22_1[-0x18]
            
            if ((zx.d(*x22_1) & 1) != 0)
                operator delete(*(arg3 - 8))
            
            arg3 = x22_1
        while (x19_1 != x22_1)
        
        x0 = *arg2
    
    *(arg4 + 0x28) = x19_1
    operator delete(x0)
    
    if ((zx.d(arg10) & 1) == 0)
        goto label_e408c0
    
    goto label_e4091c

if ((zx.d(arg10) & 1) == 0)
label_e408c0:
    
    if ((zx.d(arg8) & 1) != 0)
        goto label_e4092c
    
    goto label_e408c8

label_e4091c:
operator delete(arg11)

if ((zx.d(arg8) & 1) == 0)
label_e408c8:
    
    if ((zx.d(arg6) & 1) != 0)
        operator delete(arg7)
else
label_e4092c:
    operator delete(arg9)
    
    if ((zx.d(arg6) & 1) != 0)
        operator delete(arg7)

void* x19 = *arg5

if (x19 != 0)
    void** x22_2 = *(arg4 + 0x10)
    void* x0_5 = x19
    
    if (x22_2 != x19)
        do
            x22_2 -= 0x38
            sub_f276a8(arg4 + 0x18, x22_2)
        while (x19 != x22_2)
        
        x0_5 = *arg5
    
    *(arg4 + 0x10) = x19
    operator delete(x0_5)

sub_1101e04(arg1)
noreturn
