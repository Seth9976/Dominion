// 函数: sub_d90c48
// 地址: 0xd90c48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg14) & 1) == 0)
    if ((zx.d(arg2) & 1) != 0)
        goto label_d90cb0
    
    goto label_d90c60

operator delete(arg15)

if ((zx.d(arg2) & 1) != 0)
label_d90cb0:
    operator delete(arg3)
    
    if ((zx.d(arg12) & 1) == 0)
        goto label_d90c68
    
    goto label_d90cd0

label_d90c60:

if ((zx.d(arg12) & 1) == 0)
label_d90c68:
    
    if ((zx.d(arg10) & 1) != 0)
        goto label_d90cf0
    
    goto label_d90c70

label_d90cd0:
operator delete(arg13)

if ((zx.d(arg10) & 1) != 0)
label_d90cf0:
    operator delete(arg11)
    
    if ((zx.d(arg8) & 1) == 0)
        goto label_d90c78
    
    goto label_d90d10

label_d90c70:

if ((zx.d(arg8) & 1) == 0)
label_d90c78:
    
    if ((zx.d(arg6) & 1) != 0)
        goto label_d90d30
    
    goto label_d90c80

label_d90d10:
operator delete(arg9)

if ((zx.d(arg6) & 1) == 0)
label_d90c80:
    
    if ((zx.d(arg4) & 1) == 0)
        sub_1101e04(arg1)
        noreturn
else
label_d90d30:
    operator delete(arg7)
    
    if ((zx.d(arg4) & 1) == 0)
        sub_1101e04(arg1)
        noreturn

operator delete(arg5)
sub_1101e04(arg1)
noreturn
