// 函数: sub_ef41b8
// 地址: 0xef41b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = *(arg2 + 0x30)
*(arg2 + 0x28) = arg4 + 0x10

if (x0 != 0)
    *(arg2 + 0x38) = x0
    operator delete(x0)
    
    if ((zx.d(*arg3) & 1) != 0)
    label_ef41f8:
        operator delete(*(arg2 + 0x20))
        operator delete(arg2)
        sub_1101e04(arg1)
        noreturn
else if ((zx.d(*arg3) & 1) != 0)
    goto label_ef41f8

operator delete(arg2)
sub_1101e04(arg1)
noreturn
