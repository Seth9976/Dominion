// 函数: sub_ec8b24
// 地址: 0xec8b24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg11) & 1) == 0)
    if ((zx.d(arg9) & 1) != 0)
        goto label_ec8b8c
    
    goto label_ec8b3c

operator delete(arg12)

if ((zx.d(arg9) & 1) != 0)
label_ec8b8c:
    operator delete(arg10)
    
    if ((zx.d(arg7) & 1) == 0)
        goto label_ec8b44
    
    goto label_ec8bac

label_ec8b3c:

if ((zx.d(arg7) & 1) == 0)
label_ec8b44:
    
    if ((zx.d(arg5) & 1) != 0)
        goto label_ec8bcc
    
    goto label_ec8b4c

label_ec8bac:
operator delete(arg8)

if ((zx.d(arg5) & 1) != 0)
label_ec8bcc:
    operator delete(arg6)
    
    if ((zx.d(arg3) & 1) == 0)
        goto label_ec8b54
    
    goto label_ec8bec

label_ec8b4c:

if ((zx.d(arg3) & 1) == 0)
label_ec8b54:
    
    if ((zx.d(*arg2) & 1) != 0)
        goto label_ec8c0c
    
    goto label_ec8b5c

label_ec8bec:
operator delete(arg4)

if ((zx.d(*arg2) & 1) == 0)
label_ec8b5c:
    
    if ((zx.d(arg13) & 1) == 0)
        sub_1101e04(arg1)
        noreturn
else
label_ec8c0c:
    operator delete(*(arg2 + 0x10))
    
    if ((zx.d(arg13) & 1) == 0)
        sub_1101e04(arg1)
        noreturn

operator delete(arg14)
sub_1101e04(arg1)
noreturn
