// 函数: sub_e4080c
// 地址: 0xe4080c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg8) & 1) != 0)
    operator delete(arg9)
    
    if ((zx.d(arg6) & 1) == 0)
        goto label_e408c8
    
    goto label_e4092c

if ((zx.d(arg6) & 1) != 0)
label_e4092c:
    operator delete(arg7)
    
    if ((zx.d(arg4) & 1) != 0)
        operator delete(arg5)
else
label_e408c8:
    
    if ((zx.d(arg4) & 1) != 0)
        operator delete(arg5)

void* x19 = *arg3

if (x19 != 0)
    void** x22_1 = *(arg2 + 0x10)
    void* x0_3 = x19
    
    if (x22_1 != x19)
        do
            x22_1 -= 0x38
            sub_f276a8(arg2 + 0x18, x22_1)
        while (x19 != x22_1)
        
        x0_3 = *arg3
    
    *(arg2 + 0x10) = x19
    operator delete(x0_3)

sub_1101e04(arg1)
noreturn
