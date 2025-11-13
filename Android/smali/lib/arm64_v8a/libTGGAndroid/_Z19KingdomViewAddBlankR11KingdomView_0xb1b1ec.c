// 函数: _Z19KingdomViewAddBlankR11KingdomView
// 地址: 0xb1b1ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1 = sx.q(*(arg1 + 0x3a20))
void* x9 = arg1 + x8_1 * 0x74
*(arg1 + 0x3a20) = x8_1.d + 1
*(x9 + 0x20) = 0
float v2 = *(arg1 + 4)
float v0 = *(arg1 + 8)
*(x9 + 0x28) = 0
*(x9 + 0x2c) = v0
*(arg1 + 4) = vmax_f32(v2, float.s(0x45282000))
*(arg1 + 8) = v0 + fconvert.s(15f) + float.s(0x42f00000)
