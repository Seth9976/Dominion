// 函数: sub_d630b0
// 地址: 0xd630b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg10) & 1) == 0)
    if ((zx.d(arg2) & 1) != 0)
        goto label_d63108
    
    goto label_d630c8

operator delete(arg11)

if ((zx.d(arg2) & 1) != 0)
label_d63108:
    operator delete(arg3)
    
    if ((zx.d(arg8) & 1) == 0)
        goto label_d630d0
    
    goto label_d63128

label_d630c8:

if ((zx.d(arg8) & 1) == 0)
label_d630d0:
    
    if ((zx.d(arg6) & 1) != 0)
        goto label_d63148
    
    goto label_d630d8

label_d63128:
operator delete(arg9)

if ((zx.d(arg6) & 1) == 0)
label_d630d8:
    
    if ((zx.d(arg4) & 1) == 0)
        sub_1101e04(arg1)
        noreturn
else
label_d63148:
    operator delete(arg7)
    
    if ((zx.d(arg4) & 1) == 0)
        sub_1101e04(arg1)
        noreturn

operator delete(arg5)
sub_1101e04(arg1)
noreturn
