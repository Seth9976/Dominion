// 函数: sub_10c9c90
// 地址: 0x10c9c90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(*(arg2 + 0x60)) & 1) == 0)
    if ((zx.d(*(arg2 + 0x48)) & 1) != 0)
        goto label_10c9ce0
    
    goto label_10c9ca8

operator delete(*(arg2 + 0x70))

if ((zx.d(*(arg2 + 0x48)) & 1) != 0)
label_10c9ce0:
    operator delete(*(arg2 + 0x58))
    
    if ((zx.d(*(arg2 + 0x30)) & 1) == 0)
        goto label_10c9cb0
    
    goto label_10c9cf0

label_10c9ca8:

if ((zx.d(*(arg2 + 0x30)) & 1) != 0)
label_10c9cf0:
    operator delete(*(arg2 + 0x40))
    
    if ((zx.d(*arg3) & 1) != 0)
        operator delete(*(arg2 + 0x28))
else
label_10c9cb0:
    
    if ((zx.d(*arg3) & 1) != 0)
        operator delete(*(arg2 + 0x28))

std::__ndk1::__shared_count::~__shared_count()
sub_1101e04(arg1)
noreturn
