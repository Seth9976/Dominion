// 函数: sub_daf870
// 地址: 0xdaf870
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x20 = arg3

do
    x20 = &x20[-0x18]
    
    if ((zx.d(*x20) & 1) != 0)
        operator delete(*(arg3 - 8))
    
    arg3 = x20
while (arg2 != x20)

operator delete(arg2)

if ((zx.d(arg8) & 1) == 0)
    if ((zx.d(arg6) & 1) != 0)
        goto label_daf840
    
    goto label_daf810

operator delete(arg9)

if ((zx.d(arg6) & 1) == 0)
label_daf810:
    
    if ((zx.d(arg4) & 1) != 0)
    label_daf8cc:
        operator delete(arg5)
        sub_1101e04(arg1)
        noreturn
else
label_daf840:
    operator delete(arg7)
    
    if ((zx.d(arg4) & 1) != 0)
        goto label_daf8cc

sub_1101e04(arg1)
noreturn
