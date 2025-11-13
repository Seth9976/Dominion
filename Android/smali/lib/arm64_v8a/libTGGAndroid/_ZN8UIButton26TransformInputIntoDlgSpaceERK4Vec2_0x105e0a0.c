// 函数: _ZN8UIButton26TransformInputIntoDlgSpaceERK4Vec2
// 地址: 0x105e0a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x1
float v1 = *entry_x1
int128_t v2
v2.d = entry_x1[1]
uint32_t x9 = zx.d(*(*gAppInterface + 0x45))
int32_t* x8_1 = *(arg1 + 0xb8)
float v0

if (x9 == 0)
    v0 = v1
else
    v0 = float.s(0x44b40000) f- v2.d

if (x9 == 0)
    v1 = v2.d

if (x8_1 == 0)
    return 

v2.d = *x8_1
v2.d = v0 f* v2.d
v2.d = v2.d f+ v1 f* x8_1[1]
v0 f* x8_1[4] + v1 f* x8_1[5]
x8_1[7]
v2.d = x8_1[2] f+ v2.d
v2.d = x8_1[3] f+ v2.d
x8_1[6]
