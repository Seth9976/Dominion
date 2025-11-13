// 函数: sub_d1c850
// 地址: 0xd1c850
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg5) & 1) != 0)
    operator delete(arg6)

if ((zx.d(arg7) & 1) != 0)
    operator delete(arg8)

void* x0_2 = *arg3
void* x0_3

if (x0_2 != 0)
    *(arg2 + 0x28) = x0_2
    operator delete(x0_2)
    x0_3 = *arg4
    
    if (x0_3 != 0)
    label_d1c910:
        *(arg2 + 0x10) = x0_3
        operator delete(x0_3)
        sub_1101e04(arg1)
        noreturn
else
    x0_3 = *arg4
    
    if (x0_3 != 0)
        goto label_d1c910
sub_1101e04(arg1)
noreturn
