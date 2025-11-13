// 函数: _Z12RectToVerts2RK5RectFP4Vec2
// 地址: 0xfc9854
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = *arg1
*arg2 = v0.q
v0.q = *(arg1 + 4)
*(arg2 + 8) = vrev64_s32(v0)
uint64_t v0_1
v0_1.d = *arg1
int32_t v1 = *(arg1 + 0xc)
*(arg2 + 0x10) = v0_1.d
*(arg2 + 0x14) = v1
*(arg2 + 0x18) = *(arg1 + 8)
