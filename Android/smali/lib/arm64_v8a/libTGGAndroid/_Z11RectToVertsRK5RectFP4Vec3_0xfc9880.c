// 函数: _Z11RectToVertsRK5RectFP4Vec3
// 地址: 0xfc9880
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = *arg1
*(arg2 + 8) = 0
*arg2 = v0.q
v0.q = *(arg1 + 4)
*(arg2 + 0x14) = 0
*(arg2 + 0xc) = vrev64_s32(v0)
uint64_t v0_1
v0_1.d = *arg1
int32_t v1 = *(arg1 + 0xc)
*(arg2 + 0x20) = 0
*(arg2 + 0x18) = v0_1.d
*(arg2 + 0x1c) = v1
v0_1 = *(arg1 + 8)
*(arg2 + 0x2c) = 0
*(arg2 + 0x24) = v0_1
