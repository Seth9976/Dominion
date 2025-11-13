// 函数: sub_d90f94
// 地址: 0xd90f94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg8) & 1) == 0)
    if ((zx.d(arg6) & 1) != 0)
        goto label_d90fe4
    
    goto label_d90fac

operator delete(arg9)

if ((zx.d(arg6) & 1) != 0)
label_d90fe4:
    operator delete(arg7)
    
    if ((zx.d(arg4) & 1) == 0)
        goto label_d90fb4
    
    goto label_d91004

label_d90fac:

if ((zx.d(arg4) & 1) != 0)
label_d91004:
    operator delete(arg5)
    
    if ((zx.d(arg2) & 1) != 0)
    label_d91024:
        operator delete(arg3)
        sub_1101e04(arg1)
        noreturn
else
label_d90fb4:
    
    if ((zx.d(arg2) & 1) != 0)
        goto label_d91024

sub_1101e04(arg1)
noreturn
