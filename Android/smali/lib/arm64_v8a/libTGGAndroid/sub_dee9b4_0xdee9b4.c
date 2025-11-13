// 函数: sub_dee9b4
// 地址: 0xdee9b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg2) & 1) == 0)
    if ((zx.d(arg4) & 1) != 0)
        goto label_deea00
    
    goto label_dee9c8

operator delete(arg3)
int64_t* x0_3

if ((zx.d(arg4) & 1) != 0)
label_deea00:
    operator delete(arg5)
    x0_3 = arg10
    arg10 = nullptr
    
    if (x0_3 == 0)
        goto label_dee9d8
    
    goto label_deea18

label_dee9c8:
x0_3 = arg10
arg10 = nullptr

if (x0_3 == 0)
label_dee9d8:
    
    if ((zx.d(arg6) & 1) != 0)
        goto label_deea38
    
    goto label_dee9e0

label_deea18:
(*(*x0_3 + 0x10))()

if ((zx.d(arg6) & 1) == 0)
label_dee9e0:
    
    if ((zx.d(arg8) & 1) == 0)
        sub_1101e04(arg1)
        noreturn
else
label_deea38:
    operator delete(arg7)
    
    if ((zx.d(arg8) & 1) == 0)
        sub_1101e04(arg1)
        noreturn

operator delete(arg9)
sub_1101e04(arg1)
noreturn
