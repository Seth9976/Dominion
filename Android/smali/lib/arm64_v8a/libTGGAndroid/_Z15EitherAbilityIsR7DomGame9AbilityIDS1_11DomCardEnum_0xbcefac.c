// 函数: _Z15EitherAbilityIsR7DomGame9AbilityIDS1_11DomCardEnum
// 地址: 0xbcefac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.q(not.d(arg2)) & 0x30) == 0 || (arg3 & 0x30) == 0x30)
    return 0

int32_t x19 = arg4
return zx.q(AbilitySource(arg1, zx.q(arg2)) == x19 ? 1 : 0)
    | zx.q(AbilitySource(arg1, zx.q(arg3.d)) == x19 ? 1 : 0)
