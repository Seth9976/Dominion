// 函数: _Z25CollectUniversalAbilitiesR10AbilityIDsR7DomGame9PlayerWho13TriggerAlways6CardID
// 地址: 0xbd36ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg3
int32_t x20 = arg5
int32_t x25 = (arg5 & 0xfff) << 6
int32_t x0_1 = CardTypeHasAlways(arg2, 0xf47, zx.q(arg4))

if (x0_1 != 0xffffffff)
    uint64_t x24_1 = zx.q(x25) | (zx.q(x0_1) & 0xf) | 0x3d1c0020
    
    if ((TriggerAbilityTestValid(arg2, zx.q(x21), x24_1, zx.q(x20), 0, 0xffffffff, nullptr) & 1)
            != 0)
        int64_t x8_3 = sx.q(*(arg1 + 0x400))
        *(arg1 + 0x400) = x8_3.d + 1
        *(arg1 + (x8_3 << 2)) = x24_1.d

int64_t result = CardTypeHasAlways(arg2, 0x123e, zx.q(arg4))

if (result.d != 0xffffffff)
    uint64_t x23_1 = zx.q(x25) | (zx.q(result.d) & 0xf) | 0x48f80020
    result = TriggerAbilityTestValid(arg2, zx.q(x21), x23_1, zx.q(x20), 0, 0xffffffff, nullptr)
    
    if ((result.d & 1) != 0)
        int64_t x8_6 = sx.q(*(arg1 + 0x400))
        *(arg1 + 0x400) = x8_6.d + 1
        *(arg1 + (x8_6 << 2)) = x23_1.d

return result
