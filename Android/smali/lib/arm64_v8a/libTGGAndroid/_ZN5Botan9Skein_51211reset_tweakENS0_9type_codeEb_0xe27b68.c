// 函数: _ZN5Botan9Skein_51211reset_tweakENS0_9type_codeEb
// 地址: 0xe27b68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x2
int64_t x9

if ((entry_x2 & 1) == 0)
    x9 = 0x4000000000000000
else
    x9 = -0x4000000000000000

**(arg1 + 0x30) = 0
*(*(arg1 + 0x30) + 8) = x9 | arg2 << 0x38
