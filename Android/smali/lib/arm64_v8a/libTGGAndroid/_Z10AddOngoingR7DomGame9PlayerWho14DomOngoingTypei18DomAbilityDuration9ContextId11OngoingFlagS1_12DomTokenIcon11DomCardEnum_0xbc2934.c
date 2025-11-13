// 函数: _Z10AddOngoingR7DomGame9PlayerWho14DomOngoingTypei18DomAbilityDuration9ContextId11OngoingFlagS1_12DomTokenIcon11DomCardEnum
// 地址: 0xbc2934
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x10 = sx.q(*(arg1 + 0x19c0))
*(arg1 + 0x19c0) = x10.d + 1
__builtin_memset(arg1 + x10 * 0xb8 + 0x3c2a8, 0, 0x18)
__builtin_memset(arg1 + x10 * 0xb8 + 0x3c258, 0, 0x40)
__builtin_memset(arg1 + x10 * 0xb8 + 0x3c208, 0, 0x40)
*(arg1 + x10 * 0xb8 + 0x3c298) = zx.o(0)
*(arg1 + x10 * 0xb8 + 0x3c248) = zx.o(0)
int32_t x10_2 = *(arg1 + 0x19c4)
uint64_t x4 = zx.q(arg9.d)
*(arg1 + 0x19c4) = x10_2 + 1
*(arg1 + x10 * 0xb8 + 0x3c234) = x10_2
int32_t x10_3 = *(arg1 + 0x19c8)
int32_t x13_1

x13_1 = arg8 == 0xffffffff ? arg2 : arg8

*(arg1 + 0x19c8) = x10_3 + 1
*(arg1 + x10 * 0xb8 + 0x3c248) = x10_3
*(arg1 + x10 * 0xb8 + 0x3c21c) = x13_1
*(arg1 + x10 * 0xb8 + 0x3c220) = arg2
*(arg1 + x10 * 0xb8 + 0x3c224) = 0
*(arg1 + x10 * 0xb8 + 0x3c22c) = 0
*(arg1 + x10 * 0xb8 + 0x3c208) = arg5
*(arg1 + x10 * 0xb8 + 0x3c210) = arg6
*(arg1 + x10 * 0xb8 + 0x3c254) = 3
*(arg1 + x10 * 0xb8 + 0x3c258) = arg3
*(arg1 + x10 * 0xb8 + 0x3c25c) = arg4
*(arg1 + x10 * 0xb8 + 0x3c260) = arg7
*(arg1 + x10 * 0xb8 + 0x3c24c) = 0
*(arg1 + x10 * 0xb8 + 0x3c288) = 0
*(arg1 + x10 * 0xb8 + 0x3c294) = x4.d
*(arg1 + x10 * 0xb8 + 0x3c298) = arg10.d
int32_t x9_1 = *(arg1 + 0x150c)
int32_t x19 = arg2

if (x9_1 - 3 u>= 4)
    int64_t var_38_1 = 0
    int32_t var_40_1 = 0
    int32_t var_48_1 = 0
    int32_t var_50_1 = 0
    DomNotifyEffect(zx.q(x9_1 == 2 ? 1 : 0), 0x1b, zx.q(x19), zx.q(arg3), zx.q(arg4), 0, 0, 0)
    x4 = zx.q(*(arg1 + x10 * 0xb8 + 0x3c294))

if (x4.d != 0)
    int32_t x8_1 = *(arg1 + 0x150c)
    
    if (x8_1 - 3 u>= 4)
        int64_t var_38_2 = 0
        int32_t var_40_2 = 0
        int32_t var_48_2 = 0
        int32_t var_50_2 = 0
        DomNotifyEffect(zx.q(x8_1 == 2 ? 1 : 0), 0x1b, zx.q(x19), 0x14, x4, 
            zx.q(*(arg1 + x10 * 0xb8 + 0x3c298)), 0, 0)

return zx.q(*(arg1 + x10 * 0xb8 + 0x3c248))
