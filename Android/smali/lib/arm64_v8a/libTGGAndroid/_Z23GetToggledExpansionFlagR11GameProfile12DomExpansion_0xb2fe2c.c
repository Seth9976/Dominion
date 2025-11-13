// 函数: _Z23GetToggledExpansionFlagR11GameProfile12DomExpansion
// 地址: 0xb2fe2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2

if (*(arg1 + (zx.q(arg2) << 2) + 0x7760) == 0)
    return DefaultEditionFlag(GameLatestVersion(4, true), zx.q(x19)) __tailcall

return zx.q(*(arg1 + (zx.q(x19) << 2) + 0x7800))
