// 函数: _Z8MapBleakR9RandomPCG
// 地址: 0xc187e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t* entry_x8
*entry_x8 = zx.o(0)
__builtin_memset(&entry_x8[1], 0, 0x1b4)
*(entry_x8 + 0x1c8) = 0x3f00000040000000
*(entry_x8 + 4) = 0
int64_t result
float v0
int128_t v1
result, v0, v1 = RandomUnit(arg1)
v1.d = *TWO_PI
v0 = v0 f* v1.d
v1.q = 0x2800000003
*(entry_x8 + 0x14) = 0x40000000
entry_x8[2].q = 0x2800000003
v1 = data_71d370
*(entry_x8 + 0x58) = 4
uint64_t x8 = *V20
*(entry_x8 + 0x74) = 5
*(entry_x8 + 0x3c) = 6
*(entry_x8 + 0x1c4) = 6
*(entry_x8 + 0xc) = x8
*(entry_x8 + 0x28) = v1
*(entry_x8 + 8) = v0
entry_x8[9].q = -0x407ffffffffffff9
return result
