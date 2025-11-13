// 函数: sub_e42cb4
// 地址: 0xe42cb4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 == 0)
    if ((zx.d(arg5) & 1) != 0)
        goto label_e42cf0
    
    goto label_e42cc8

void* arg_8 = arg4
operator delete(arg4)
void* x0_3

if ((zx.d(arg5) & 1) == 0)
label_e42cc8:
    x0_3 = *arg3
    
    if (x0_3 == 0)
        sub_1101e04(arg1)
        noreturn
else
label_e42cf0:
    operator delete(arg6)
    x0_3 = *arg3
    
    if (x0_3 == 0)
        sub_1101e04(arg1)
        noreturn

*(arg2 + 0x10) = x0_3
operator delete(x0_3)
sub_1101e04(arg1)
noreturn
