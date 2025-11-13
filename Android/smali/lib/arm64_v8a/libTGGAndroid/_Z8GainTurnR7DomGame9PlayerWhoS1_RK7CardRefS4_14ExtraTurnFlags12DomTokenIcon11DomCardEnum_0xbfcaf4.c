// 函数: _Z8GainTurnR7DomGame9PlayerWhoS1_RK7CardRefS4_14ExtraTurnFlags12DomTokenIcon11DomCardEnum
// 地址: 0xbfcaf4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = sx.q(*(arg1 + 0x19c0))
*(arg1 + 0x19c0) = x9.d + 1
__builtin_memset(arg1 + x9 * 0xb8 + 0x3c208, 0, 0xb8)
int32_t x8_1 = *(arg1 + 0x19c4)
*(arg1 + 0x19c4) = x8_1 + 1
*(arg1 + x9 * 0xb8 + 0x3c234) = x8_1
int32_t x8_2 = *(arg1 + 0x19c8)
*(arg1 + 0x19c8) = x8_2 + 1
*(arg1 + x9 * 0xb8 + 0x3c248) = x8_2
*(arg1 + x9 * 0xb8 + 0x3c21c) = 0xffffffff
*(arg1 + x9 * 0xb8 + 0x3c208) = 3
*(arg1 + x9 * 0xb8 + 0x3c254) = 0
int32_t x8_3 = arg2
*(arg1 + x9 * 0xb8 + 0x3c224) = *arg4

if (arg2 != arg3)
    *(arg1 + x9 * 0xb8 + 0x3c20c) = 2

void* x9_1 = arg1 + x9 * 0xb8
*(x9_1 + 0x3c22c) = arg8
*(x9_1 + 0x3c24c) = *arg5
*(x9_1 + 0x3c258) = x8_3
*(x9_1 + 0x3c25c) = arg3
*(x9_1 + 0x3c260) = arg6
*(x9_1 + 0x3c28c) = 0
*(x9_1 + 0x3c288) = 0
*(x9_1 + 0x3c294) = arg7
int32_t x9_2 = *(arg1 + 0x150c)

if (x9_2 - 3 u< 4)
    return 

int64_t var_18_1 = 0
int32_t var_20_1 = 0
int32_t var_28_1 = 0
int32_t var_30_1 = 0
DomNotifyEffect(zx.q(x9_2 == 2 ? 1 : 0), 0x1b, zx.q(x8_3), 0, zx.q(arg7), 0, 0, 0)
