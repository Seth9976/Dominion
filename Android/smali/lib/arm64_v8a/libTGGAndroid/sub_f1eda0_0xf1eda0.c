// 函数: sub_f1eda0
// 地址: 0xf1eda0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg2) & 1) == 0)
    if ((zx.d(arg4) & 1) != 0)
        goto label_f1ede0
    
    goto label_f1edb8

operator delete(arg3)

if ((zx.d(arg4) & 1) != 0)
label_f1ede0:
    operator delete(arg5)
    
    if ((zx.d(arg6) & 1) == 0)
        goto label_f1edc0
    
    goto label_f1edf0

label_f1edb8:

if ((zx.d(arg6) & 1) != 0)
label_f1edf0:
    operator delete(arg7)
    
    if ((zx.d(arg8) & 1) != 0)
    label_f1ee00:
        operator delete(arg9)
        sub_1101e04(arg1)
        noreturn
else
label_f1edc0:
    
    if ((zx.d(arg8) & 1) != 0)
        goto label_f1ee00

sub_1101e04(arg1)
noreturn
