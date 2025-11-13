// 函数: sub_ce6464
// 地址: 0xce6464
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x23 = arg3
char* arg_50 = arg3

do
    x23 = &x23[-0x18]
    
    if ((zx.d(*x23) & 1) != 0)
        operator delete(*(arg3 - 8))
    
    arg3 = x23
while (arg2 != x23)

arg_50 = arg2
operator delete(arg10)

if ((zx.d(arg8) & 1) != 0)
    operator delete(arg9)
    
    if ((zx.d(arg6) & 1) == 0)
        goto label_ce63ec
    
    goto label_ce64c4

if ((zx.d(arg6) & 1) != 0)
label_ce64c4:
    operator delete(arg7)
    
    if ((zx.d(arg4) & 1) != 0)
    label_ce64d4:
        operator delete(arg5)
        sub_1101e04(arg1)
        noreturn
else
label_ce63ec:
    
    if ((zx.d(arg4) & 1) != 0)
        goto label_ce64d4

sub_1101e04(arg1)
noreturn
