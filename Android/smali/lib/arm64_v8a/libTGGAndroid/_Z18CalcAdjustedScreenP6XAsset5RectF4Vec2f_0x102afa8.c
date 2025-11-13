// 函数: _Z18CalcAdjustedScreenP6XAsset5RectF4Vec2f
// 地址: 0x102afa8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg1
int128_t v3
int128_t entry_v4
int128_t entry_v5
int128_t entry_v6

if (x8 == 0)
    XAsset* x19_1 = arg1
    int128_t var_40_1 = entry_v4
    int128_t var_30_1 = entry_v5
    int128_t var_20_1 = entry_v6
    
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    arg1, v3, entry_v4, entry_v5, entry_v6 = AssetCatalogLoadAsset(x19_1, false, true)
    x8 = *x19_1
    entry_v5 = var_30_1
    entry_v6 = var_20_1

void* x8_2 = *x8
entry_v4:4.d = entry_v5.d
float128 v2
v2.d = vneg_f32(entry_v4).d f* entry_v6.d
v2:4.d = v2:4.d f* entry_v6.d
*(x8_2 + 0x10)
float128 v1
v1:8.q = (*V20).d.q
v2:8.q = v2.q
float128 v0
v0.d = vsubq_f32(*(x8_2 + 0x14), v1).d f* entry_v6.d
v0:4.d = v0:4.d f* entry_v6.d
v0:8.d = v0:8.d f* entry_v6.d
v0:0xc.d = v0:0xc.d f* entry_v6.d
float128 v0_2 = vaddq_f32(v2, vaddq_f32(v1, v0))
v1.d = v0_2:4.d
v2.d = v0_2:8.d
v3.d = v0_2:0xc.d
