// 函数: _Z25FlanimHasUnlerpableChangeP18DefFlanimTransformS0_
// 地址: 0xf662b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t entry_v8
int64_t var_30 = entry_v8.q
int128_t v0
v0.q = *(arg1 + 0x10)
int128_t v1
v1.q = *arg1
int128_t v2
v2.q = *(arg1 + 0x20)
int128_t v3
v3.q = *(arg2 + 0x10)
int128_t v4
v4.q = *arg2
int128_t v5
v5.q = *(arg2 + 0x20)
int128_t v0_1 = vsub_f32(v0, v1)
int128_t v1_1 = vsub_f32(v2, v1)
int128_t v2_1 = vsub_f32(v3, v4)
int128_t v3_1 = vsub_f32(v5, v4)
int128_t v1_2 = vrev64_s32(v1_1)
int128_t v3_2 = vrev64_s32(v3_1)
uint128_t v0_2 = vmul_f32(v0_1, v1_2, 0)
uint128_t v1_3 = vmul_f32(v2_1, v3_2, 0)
int128_t v0_3 = vsub_f32(v0_2, vdup_laneq_s32(v0_2, 1))
float v1_4 = vsub_f32(v1_3, vdup_laneq_s32(v1_3, 1))

if ((v0_3.d f>= 0f || not(v1_4 > 0f)) && (v0_3.d f<= 0f || not(v1_4 < 0f)))
    int64_t* x20_1 = *(arg2 + 0x48)
    
    if (x20_1 == 0)
        entry_v8.q = var_30
        return 0
    
    int64_t* x21_1 = *(arg1 + 0x48)
    
    if (x21_1 == 0 || x21_1 == x20_1)
        entry_v8.q = var_30
        return 0
    
    int64_t* x8_1 = *x21_1
    int128_t v2_3
    
    if (x8_1 == 0)
        if (x21_1[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        v0_3, v2_3 = AssetCatalogLoadAsset(x21_1, false, true)
        x8_1 = *x21_1
        x20_1 = *(arg2 + 0x48)
    
    int64_t* x8_4 = **x8_1
    v0_3.q = *x8_4
    v2_3.d = x8_4[1].d
    v1_4 = *(x8_4 + 0xc)
    int64_t*** x8_5 = *x20_1
    int128_t v0_4 = vcvt_f32_u32(v0_3)
    v1_4 = v1_4 f* v2_3.d
    entry_v8.d = v0_4.d f* v1_4
    entry_v8:4.d = v0_4:4.d f* v1_4
    
    if (x8_5 == 0)
        if (x20_1[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        v0_4, v2_3 = AssetCatalogLoadAsset(x20_1, false, true)
        x8_5 = *x20_1
    
    int64_t* x8_8 = **x8_5
    v0_4.q = *x8_8
    v2_3.d = x8_8[1].d
    v1_4 = *(x8_8 + 0xc) f* v2_3.d
    int128_t v0_5
    v0_5.d = vcvt_f32_u32(v0_4).d f* v1_4
    v0_5:4.d = v0_5:4.d f* v1_4
    int128_t v0_6 = vceq_f32(entry_v8, v0_5)
    
    if (((vdup_laneq_s32(not.o(v0_6), 1) | (not.o(v0_6)).d) & 1) == 0)
        entry_v8.q = var_30
        return 0

entry_v8.q = var_30
return 1
