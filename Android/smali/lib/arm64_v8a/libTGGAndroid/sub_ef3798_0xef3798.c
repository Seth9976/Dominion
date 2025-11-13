// 函数: sub_ef3798
// 地址: 0xef3798
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(*arg4) & 1) != 0)
    operator delete(*(arg2 + 0x38))
    
    if ((zx.d(*arg3) & 1) != 0)
    label_ef37d0:
        operator delete(*(arg2 + 0x20))
        operator delete(arg2)
        sub_1101e04(arg1)
        noreturn
else if ((zx.d(*arg3) & 1) != 0)
    goto label_ef37d0

operator delete(arg2)
sub_1101e04(arg1)
noreturn
