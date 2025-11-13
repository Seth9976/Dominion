// 函数: _Z8SkipTurnR7DomGame9PlayerWhoS1_RK7CardRefS4_14ExtraTurnFlags12DomTokenIcon
// 地址: 0xbfc9f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = sx.q(*(arg1 + 0x19c0))
*(arg1 + 0x19c0) = x9.d + 1
__builtin_memset(arg1 + x9 * 0xb8 + 0x3c208, 0, 0xb8)
int32_t x10_1 = *(arg1 + 0x19c4)
*(arg1 + 0x19c4) = x10_1 + 1
*(arg1 + x9 * 0xb8 + 0x3c234) = x10_1
int32_t x10_2 = *(arg1 + 0x19c8)
*(arg1 + 0x19c8) = x10_2 + 1
*(arg1 + x9 * 0xb8 + 0x3c248) = x10_2
*(arg1 + x9 * 0xb8 + 0x3c21c) = 0xffffffff
*(arg1 + x9 * 0xb8 + 0x3c208) = 3
*(arg1 + x9 * 0xb8 + 0x3c254) = 1
int64_t x10_3 = *arg4
*(arg1 + x9 * 0xb8 + 0x3c22c) = 0
*(arg1 + x9 * 0xb8 + 0x3c224) = x10_3
int64_t x10_4 = *arg5
*(arg1 + x9 * 0xb8 + 0x3c20c) = 2
*(arg1 + x9 * 0xb8 + 0x3c258) = arg2
*(arg1 + x9 * 0xb8 + 0x3c25c) = arg3
*(arg1 + x9 * 0xb8 + 0x3c260) = arg6
*(arg1 + x9 * 0xb8 + 0x3c288) = 0
*(arg1 + x9 * 0xb8 + 0x3c24c) = x10_4
*(arg1 + x9 * 0xb8 + 0x3c294) = arg7
int32_t x9_3 = *(arg1 + 0x150c)

if (x9_3 - 3 u< 4)
    return 

int64_t var_18_1 = 0
int32_t var_20_1 = 0
int32_t var_28_1 = 0
int32_t var_30_1 = 0
DomNotifyEffect(zx.q(x9_3 == 2 ? 1 : 0), 0x1b, zx.q(arg2), 0x14, zx.q(arg7), 0, 0, 0)
