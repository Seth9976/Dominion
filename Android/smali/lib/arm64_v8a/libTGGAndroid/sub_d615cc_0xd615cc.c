// 函数: sub_d615cc
// 地址: 0xd615cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0

if ((zx.d(arg4) & 1) == 0)
    x0 = *arg3
    
    if (x0 != 0)
        goto label_d61614
    
    goto label_d615e0

operator delete(arg5)
x0 = *arg3
int64_t* x0_3

if (x0 == 0)
label_d615e0:
    x0_3 = *(arg2 + 8)
    *(arg2 + 8) = 0
    
    if (x0_3 == 0)
        sub_1101e04(arg1)
        noreturn
else
label_d61614:
    *(arg2 + 0x18) = x0
    operator delete(x0)
    x0_3 = *(arg2 + 8)
    *(arg2 + 8) = 0
    
    if (x0_3 == 0)
        sub_1101e04(arg1)
        noreturn

(*(*x0_3 + 0x10))()
sub_1101e04(arg1)
noreturn
