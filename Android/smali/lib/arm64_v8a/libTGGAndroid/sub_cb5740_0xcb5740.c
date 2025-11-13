// 函数: sub_cb5740
// 地址: 0xcb5740
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0

if ((zx.d(*arg3) & 1) != 0)
    operator delete(*(arg2 + 0x30))
    x0 = *arg4
    
    if (x0 != 0)
    label_cb577c:
        *(arg2 + 0x10) = x0
        operator delete(x0)
        sub_1101e04(arg1)
        noreturn
else
    x0 = *arg4
    
    if (x0 != 0)
        goto label_cb577c
sub_1101e04(arg1)
noreturn
