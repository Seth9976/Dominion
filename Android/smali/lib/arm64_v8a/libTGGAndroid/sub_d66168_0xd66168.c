// 函数: sub_d66168
// 地址: 0xd66168
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x23 = arg3
char* arg_d0 = arg3

do
    x23 = &x23[-0x18]
    
    if ((zx.d(*x23) & 1) != 0)
        operator delete(*(arg3 - 8))
    
    arg3 = x23
while (arg2 != x23)

arg_d0 = arg2
operator delete(arg2)

if ((zx.d(arg18) & 1) != 0)
    operator delete(arg19)

if ((zx.d(arg16) & 1) == 0)
    if ((zx.d(arg14) & 1) != 0)
        goto label_d66108
    
    goto label_d660b4

operator delete(arg17)

if ((zx.d(arg14) & 1) != 0)
label_d66108:
    operator delete(arg15)
    
    if ((zx.d(arg12) & 1) == 0)
        goto label_d660bc
    
    goto label_d66118

label_d660b4:

if ((zx.d(arg12) & 1) == 0)
label_d660bc:
    
    if ((zx.d(arg10) & 1) != 0)
        goto label_d66128
    
    goto label_d660c4

label_d66118:
operator delete(arg13)

if ((zx.d(arg10) & 1) != 0)
label_d66128:
    operator delete(arg11)
    
    if ((zx.d(arg8) & 1) == 0)
        goto label_d660cc
    
    goto label_d66138

label_d660c4:

if ((zx.d(arg8) & 1) == 0)
label_d660cc:
    
    if ((zx.d(arg6) & 1) != 0)
        goto label_d66148
    
    goto label_d660d4

label_d66138:
operator delete(arg9)

if ((zx.d(arg6) & 1) == 0)
label_d660d4:
    
    if ((zx.d(arg4) & 1) != 0)
        operator delete(arg5)
else
label_d66148:
    operator delete(arg7)
    
    if ((zx.d(arg4) & 1) != 0)
        operator delete(arg5)

__cxa_guard_abort(&data_23ec9c8)
sub_1101e04(arg1)
noreturn
