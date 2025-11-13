// 函数: _Z24FabSubstateCoordFromSlotRK5FabElRK8FabStatei
// 地址: 0xf5b7ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_2 = *(arg1 + 0x94)
int32_t x9 = *(arg1 + 0x98)
return zx.q(arg3 s% x8_2) | zx.q(arg3 s/ x8_2 s% x9) << 0x20
