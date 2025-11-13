// 函数: sub_ccca48
// 地址: 0xccca48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0

if ((zx.d(arg2) & 1) == 0)
    x0 = arg6
    
    if (x0 != 0)
        goto label_ccca7c
    
    goto label_ccca60

operator delete(arg3)
x0 = arg6

if (x0 == 0)
label_ccca60:
    
    if ((zx.d(arg4) & 1) == 0)
        sub_1101e04(arg1)
        noreturn
else
label_ccca7c:
    operator delete(x0)
    
    if ((zx.d(arg4) & 1) == 0)
        sub_1101e04(arg1)
        noreturn

operator delete(arg5)
sub_1101e04(arg1)
noreturn
