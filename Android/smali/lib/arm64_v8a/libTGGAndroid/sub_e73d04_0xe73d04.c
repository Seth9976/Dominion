// 函数: sub_e73d04
// 地址: 0xe73d04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x9 = zx.d(*arg3)
*(arg2 + 8) = arg4

if ((x9 & 1) != 0)
    operator delete(*(arg3 + 0x10))

*(arg2 + 8) = arg3
operator delete(arg3)

if ((zx.d(arg7) & 1) != 0)
    operator delete(arg8)
    
    if ((zx.d(arg5) & 1) != 0)
    label_e73d6c:
        operator delete(arg6)
        sub_1101e04(arg1)
        noreturn
else if ((zx.d(arg5) & 1) != 0)
    goto label_e73d6c

sub_1101e04(arg1)
noreturn
