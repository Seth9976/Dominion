// 函数: _Z21UIStateTableTransformjiRK11UITransformRK5Vec2IPS3_PKi
// 地址: 0x105938c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x24 = *(gUISystem + 0x28)
int128_t v0
int128_t v1
int128_t v2
int128_t v3
v0, v1, v2, v3 = UIStateTransform(arg1, arg2, arg3)
int64_t* x24_1 = *(x24 + mulu.dp.d(arg1 & 0xffff, 0x458) + 8)
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
int64_t* x8_1 = *x24_1

if (x8_1 == 0)
    if (x24_1[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x24_1, false, true)
    x8_1 = *x24_1

return UIStateTableTransform(**x8_1 + muls.dp.d(arg2, 0x178), &data_24b7c48, &var_b0, arg4, arg5, 
    arg6)
