// 函数: _Z29DomCreateIconPlaceholder_ZoomR6DomGfx
// 地址: 0xaeecec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = zx.q(*(gDomClient + 0x205f0))
int64_t x8_1
int32_t x9

if (x23.d != *(gDomClient + 0x205e8))
    x8_1 = *(gDomClient + 0x205e0)
    x9 = *(x8_1 + x23 * 0x21d8 + 0x21d0)
else
    x8_1 = *(gDomClient + 0x205e0)
    x9 = x23.d + 1
    *(gDomClient + 0x205e8) = x9

void* result = x8_1 + x23 * 0x21d8
*(gDomClient + 0x205f0) = x9
memset(result, 0, 0x21d0)
*(result + 0x21d0) = x23.d | *(gDomClient + 0x205f8) << 0x10
int32_t x9_4 = *(gDomClient + 0x205f8)
int32_t x9_5

if (x9_4 == 0xffff)
    x9_5 = 1
else
    x9_5 = x9_4 + 1

*(gDomClient + 0x205f8) = x9_5
*(gDomClient + 0x205f4) += 1
*(result + 0x2c) = 2
int32_t x9_6 = *(result + 0x21d0)
*(result + 0x24c) = *(arg1 + 0x21d0)
*(arg1 + 0x2134) = x9_6
int128_t v0
int128_t v1
int128_t v2
int128_t v3
v0, v1, v2, v3 = CurrentTransformWithMouseover(arg1)
*(result + 0x308) = 0
int128_t var_c4
*(result + 0x32c) = var_c4
int128_t var_d4
*(result + 0x31c) = var_d4
int128_t var_e4
*(result + 0x30c) = var_e4
int128_t var_a4
*(result + 0x34c) = var_a4
int128_t var_94
*(result + 0x35c) = var_94
int128_t var_84
*(result + 0x36c) = var_84
int128_t var_b4
*(result + 0x33c) = var_b4
int128_t var_f8
*(result + 0x3ac) = var_f8:0xc.d
int128_t var_64
*(result + 0x38c) = var_64
int128_t var_108
*(result + 0x39c) = var_108
int128_t var_74
*(result + 0x37c) = var_74
*(result + 0x3b0) = 0
*(result + 0x3c4) = var_d4
*(result + 0x3d4) = var_c4
*(result + 0x3b4) = var_e4
*(result + 0x404) = var_94
*(result + 0x414) = var_84
*(result + 0x3e4) = var_b4
*(result + 0x3f4) = var_a4
*(result + 0x454) = var_f8:0xc.d
*(result + 0x434) = var_64
*(result + 0x444) = var_108
*(result + 0x424) = var_74
*(result + 0x1f78) = 0
return result
