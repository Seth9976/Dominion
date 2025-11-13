// 函数: sub_d89218
// 地址: 0xd89218
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
        goto label_d891a0
    
    goto label_d89278

if ((zx.d(arg6) & 1) != 0)
label_d89278:
    operator delete(arg7)
    
    if ((zx.d(arg4) & 1) != 0)
    label_d89288:
        operator delete(arg5)
        sub_1101e04(arg1)
        noreturn
else
label_d891a0:
    
    if ((zx.d(arg4) & 1) != 0)
        goto label_d89288

sub_1101e04(arg1)
noreturn
