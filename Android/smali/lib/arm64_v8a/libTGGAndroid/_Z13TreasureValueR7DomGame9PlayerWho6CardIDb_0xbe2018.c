// 函数: _Z13TreasureValueR7DomGame9PlayerWho6CardIDb
// 地址: 0xbe2018
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
int32_t x23 = *(arg1 + muls.dp.d(x19, 0x5a30) + 0x18194)
DomGame var_60d68
SimulateGame(&var_60d68, arg1, zx.q(x19))
int32_t var_5f85c = 6
int32_t var_44 = arg3
PlayTreasures(&var_60d68, zx.q(x19), &var_44, 1, 0)
return zx.q(*(&var_60d68 + muls.dp.d(x19, 0x5a30) + 0x18194) - x23)
