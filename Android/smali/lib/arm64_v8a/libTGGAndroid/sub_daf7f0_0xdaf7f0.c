// 函数: sub_daf7f0
// 地址: 0xdaf7f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

operator delete(arg2)

if ((zx.d(arg7) & 1) == 0)
    if ((zx.d(arg5) & 1) != 0)
        goto label_daf840
    
    goto label_daf810

operator delete(arg8)

if ((zx.d(arg5) & 1) == 0)
label_daf810:
    
    if ((zx.d(arg3) & 1) != 0)
    label_daf8cc:
        operator delete(arg4)
        sub_1101e04(arg1)
        noreturn
else
label_daf840:
    operator delete(arg6)
    
    if ((zx.d(arg3) & 1) != 0)
        goto label_daf8cc

sub_1101e04(arg1)
noreturn
