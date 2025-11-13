// 函数: _Z15RendererPreDrawv
// 地址: 0xfa355c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = 0
v0:8.q = 0
__builtin_memset(*gpRenderAppData + 4, 0, 0x30)
int64_t result
int128_t v0_1
int128_t v1
int128_t v2
result, v0_1, v1, v2 = (*(**gAppInterface + 0x80))(v0)
uint64_t x8_3 = *gAppInterface

if (zx.d(*(x8_3 + 0x3c)) != 0 || zx.d(*(x8_3 + 0x3d)) != 0)
    v1 = *(DEFAULT_IBL_CONFIG + 0x10)
    int32_t var_30_1 = 1
    int128_t var_50 = *DEFAULT_IBL_CONFIG
    int128_t var_40_1 = v1
    result, v0_1, v1, v2 = HDRMakeBRDFLUT(&var_50, "sys/pbr/brdf_lut")

uint64_t x8_5 = *gpRenderAppData
v1 = *(x8_5 + 0x14)
v2 = *(x8_5 + 0x24)
*(x8_5 + 0x34) = *(x8_5 + 4)
*(x8_5 + 0x44) = v1
*(x8_5 + 0x54) = v2
return result
