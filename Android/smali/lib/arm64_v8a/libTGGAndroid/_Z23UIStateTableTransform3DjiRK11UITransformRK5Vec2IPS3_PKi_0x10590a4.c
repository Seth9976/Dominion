// 函数: _Z23UIStateTableTransform3DjiRK11UITransformRK5Vec2IPS3_PKi
// 地址: 0x10590a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x25 = *(gUISystem + 0x28)
int128_t v0
int128_t v1
int128_t v2
int128_t v3
v0, v1, v2, v3 = UIStateTransform(arg1, arg2, arg3)
int64_t* x25_1 = *(x25 + mulu.dp.d(arg1 & 0xffff, 0x458) + 8)
int128_t var_110
int128_t var_b0 = var_110
int128_t var_100
int128_t var_a0 = var_100
int128_t var_d0
int128_t var_70 = var_d0
int128_t var_c0
int128_t var_60 = var_c0
int128_t var_f0
int128_t var_90 = var_f0
int128_t var_e0
int128_t var_80 = var_e0
int64_t* x8_1 = *x25_1

if (x8_1 == 0)
    if (x25_1[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x25_1, false, true)
    x8_1 = *x25_1

UIStateTableTransform(**x8_1 + muls.dp.d(arg2, 0x178), &data_24b7c48, &var_b0, arg4, arg5, arg6)
int32_t var_170
int64_t result
float v0_1
float v1_1
int128_t v3_1
result, v0_1, v1_1, v3_1 = UIStateTableElementsSize(arg1, arg2, &var_170)
float v2_1 = fconvert.s(0.5f)
v3_1.d = var_170
v0_1 = v3_1.d f+ v0_1 * v2_1
float* entry_x8
entry_x8[6] = 0
v3_1 = *QI
float var_164
*entry_x8 = var_164
entry_x8[5] = v0_1
float var_16c
entry_x8[7] = v1_1 * v2_1 - var_16c
*(entry_x8 + 4) = v3_1
return result
