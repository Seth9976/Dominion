// 函数: _Z16DomDragCardStartR6DomGfxRK4Vec2S3_
// 地址: 0xb92350
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UI2SetDragging(true)
int32_t x0_1 = GetMouseoverStyle(arg1)
int32_t x10 = *(arg1 + 0xa4)
int32_t x8 = *(arg1 + 0xb4)
*(arg1 + 0x2190) = *(arg1 + 0xc8)
int64_t x11 = 0xfffffffe | zx.q(x8) << 0x20
int32_t x8_1

if (x10 - 0x3ee u< 3)
    x8_1 = x10 - 0x3ee
else
    x8_1 = 4

*(arg1 + 0x2130) = x0_1
*(arg1 + 0x21a0) = x8_1
*(arg1 + 0x2188) = x10
*(arg1 + 0x2198) = x11
*(arg1 + 0x21a4) = x11
int64_t result
int128_t v0
int128_t v1
int128_t v2
int128_t v3
result, v0, v1, v2, v3 = CurrentTransformWithMouseover(arg1)
*(arg1 + 0x308) = 0
int128_t var_a4
*(arg1 + 0x32c) = var_a4
int128_t var_b4
*(arg1 + 0x31c) = var_b4
int128_t var_c4
*(arg1 + 0x30c) = var_c4
int128_t var_84
*(arg1 + 0x34c) = var_84
int128_t var_74
*(arg1 + 0x35c) = var_74
int128_t var_64
*(arg1 + 0x36c) = var_64
int128_t var_94
*(arg1 + 0x33c) = var_94
int128_t var_d8
*(arg1 + 0x3ac) = var_d8:0xc.d
int128_t var_44
*(arg1 + 0x38c) = var_44
int128_t var_e8
*(arg1 + 0x39c) = var_e8
int128_t var_54
*(arg1 + 0x37c) = var_54
*(arg1 + 0x3b0) = 0
*(arg1 + 0x3c4) = var_b4
*(arg1 + 0x3d4) = var_a4
*(arg1 + 0x3b4) = var_c4
*(arg1 + 0x404) = var_74
*(arg1 + 0x414) = var_64
*(arg1 + 0x3e4) = var_94
*(arg1 + 0x3f4) = var_84
*(arg1 + 0x434) = var_44
*(arg1 + 0x444) = var_e8
*(arg1 + 0x454) = var_d8:0xc.d
*(arg1 + 0x424) = var_54
*(arg1 + 0x1f78) = 0
int32_t x9_8 = *(gDomClient + 0x20758)

if (x9_8 - 0x33 u< 2 || x9_8 == 0x101)
    *(gDomClient + 0x1f8e0) = *(arg1 + 0x21d0)

return result
