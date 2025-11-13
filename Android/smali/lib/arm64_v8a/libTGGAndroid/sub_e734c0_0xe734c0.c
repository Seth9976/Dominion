// 函数: sub_e734c0
// 地址: 0xe734c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0

if ((zx.d(arg3) & 1) != 0)
    operator delete(arg4)
    x0 = *arg2
    
    if (x0 != 0)
    label_e73500:
        arg2[1] = x0
        operator delete(x0)
        sub_1101e04(arg1)
        noreturn
else
    x0 = *arg2
    
    if (x0 != 0)
        goto label_e73500
sub_1101e04(arg1)
noreturn
