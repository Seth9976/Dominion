// 函数: _Z12AbilitiesAreR7DomGame9AbilityIDS1_11DomCardEnumS2_
// 地址: 0xbcf02c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x24 = arg2 & 0x30
int64_t x25 = arg3 & 0x30
int32_t x0
int32_t x0_2
int32_t x19_1
int32_t x20_1

if (x24 != 0x30 && x25 != 0x30)
    x19_1 = arg5
    x20_1 = arg4
    x0 = AbilitySource(arg1, arg2 & 0xffffffff)
    x0_2 = AbilitySource(arg1, zx.q(arg3.d))

int32_t x8
int32_t x9

if (x24 != 0x30 && x25 != 0x30 && (x0 != x20_1 || x0_2 != x19_1))
    x8 = x0_2 == x20_1 ? 1 : 0
    x9 = x0 == x19_1 ? 1 : 0
else
    x8 = x25 != 0x30 ? 1 : 0
    x9 = x24 != 0x30 ? 1 : 0

return zx.q(x9) & zx.q(x8)
