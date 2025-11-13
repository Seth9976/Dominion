// 函数: sub_10ca0b0
// 地址: 0x10ca0b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(*(arg2 + 0x60)) & 1) == 0)
    if ((zx.d(*(arg2 + 0x48)) & 1) != 0)
        goto label_10ca100
    
    goto label_10ca0c8

operator delete(*(arg2 + 0x70))

if ((zx.d(*(arg2 + 0x48)) & 1) != 0)
label_10ca100:
    operator delete(*(arg2 + 0x58))
    
    if ((zx.d(*(arg2 + 0x30)) & 1) == 0)
        goto label_10ca0d0
    
    goto label_10ca110

label_10ca0c8:

if ((zx.d(*(arg2 + 0x30)) & 1) != 0)
label_10ca110:
    operator delete(*(arg2 + 0x40))
    
    if ((zx.d(*arg3) & 1) != 0)
        operator delete(*(arg2 + 0x28))
else
label_10ca0d0:
    
    if ((zx.d(*arg3) & 1) != 0)
        operator delete(*(arg2 + 0x28))

std::__ndk1::__shared_count::~__shared_count()
sub_1101e04(arg1)
noreturn
