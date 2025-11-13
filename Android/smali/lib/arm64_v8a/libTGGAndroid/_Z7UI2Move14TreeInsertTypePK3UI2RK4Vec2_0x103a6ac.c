// 函数: _Z7UI2Move14TreeInsertTypePK3UI2RK4Vec2
// 地址: 0x103a6ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t entry_v15
int64_t var_a0 = entry_v15.q
int128_t entry_v14
int64_t var_98 = entry_v14.q
int64_t v13
int64_t var_90 = v13
int64_t v12
int64_t var_88 = v12
int64_t v10
int64_t var_78 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
int32_t x25 = arg1
uint64_t i_4 = zx.q(*(gUI2Editor + 0x704c))
uint64_t x19 = zx.q(*(gUI2Editor + 0x6010))
int16_t var_10a0[0x7a8]

if (i_4.d s>= 1)
    int64_t (* x21_1)() = gUI2Editor + 0x604c
    int16_t (* x23_1)[0x7a8] = &var_10a0
    uint64_t i_3 = i_4
    uint64_t i
    
    do
        uint64_t x0 = zx.q(*x21_1)
        x21_1 += 4
        i = i_3
        i_3 -= 1
        *x23_1 = *(UI2GetIndex(x0) + 0x19a0)
        x23_1 = &(*x23_1)[2]
    while (i != 1)

int64_t x8_2 = *gUI2
int32_t var_10a4 = i_4.d
FilterParentsOnlyRec(x8_2 + x19 * 0x19a8, &var_10a0, &var_10a4, false)
int64_t x8_3 = sx.q(var_10a4)
int64_t x10 = x8_3 & 0xffffffff
bool (* var_10b8)(UI2Handle, UI2Handle) = CompareParentsOnly
std::__ndk1::__sort<bool (*&)(UI2Handle, UI2Handle), UI2Handle*>(&var_10a0, &var_10a0[x8_3 * 2], 
    &var_10b8)
int64_t* x20 = *(gUI2Editor + 0x6008)
AttribTree** x8_4 = *x20
int32_t x22_1
int128_t v11

if (x8_4 == 0)
    if (x20[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x20, false, true)
    x8_4 = *x20
    
    if (x25 != 1)
        goto label_103a7e8
    
    v11.q = *(arg2 + 0x16c4)
    x22_1 = *(arg2 + 0x1690)
else if (x25 != 1)
label_103a7e8:
    
    if (x25 != 2)
        v11.q = *(*gUI2 + zx.q(*(gUI2Editor + 0x6010)) * 0x19a8 + 0x16c4)
        
        if (arg2 == 0)
            x22_1 = -1
        else
            x22_1 = *(arg2 + 0x1690)
    else
        v11.q = *(*(arg2 + 0x17d0) + 0x16c4)
        x22_1 = *(arg2 + 0x1690)
else
    v11.q = *(arg2 + 0x16c4)
    x22_1 = *(arg2 + 0x1690)

AttribTree* x8_6 = *x8_4
int64_t v0 = GameGetTimeSimulation()

if (x10.d s>= 1)
    int64_t x9_3 = 0
    v12.d = fconvert.s(0.5f)
    v13.d = fconvert.s(-0.5f)
    entry_v14.d = 0x3f000000
    entry_v14:4.d = 0x3f000000
    entry_v15.d = 0xbf000000
    entry_v15:4.d = 0xbf000000
    
    do
        uint64_t x26_1 = zx.q(var_10a0[x9_3 * 2])
        int64_t x24_1 = *gUI2
        int64_t v0_2 = UI2PropDynamic<float>::Eval(v0.d)
        int32_t v0_4 = UI2PropDynamic<float>::Eval(v0.d)
        int64_t v0_6 = UI2PropDynamic<float>::Eval(v0.d)
        int128_t v0_8
        int128_t v1_1
        uint128_t v4_1
        v0_8, v1_1, v4_1 = UI2PropDynamic<float>::Eval(v0.d)
        v4_1.q = *arg3
        v1_1.q = *V20
        int128_t v1_2 = vceq_f32(v4_1, v1_1)
        int128_t v1_3
        int128_t v2_2
        
        if (((vdup_laneq_s32(not.o(v1_2), 1) | not.o(v1_2)).d & 1) == 0)
            v1_3.q = *(*(x24_1 + x26_1 * 0x19a8 + 0x17d0) + 0x16c4)
            v2_2.d = *(gUI2Editor + 0x603c)
            v1_3 = vsub_f32(v1_3, v11)
            v2_2.d = fconvert.s(1f) f/ v2_2.d
            v4_1.d = v1_3.d f* v2_2.d
            v4_1:4.d = v1_3:4.d f* v2_2.d
        
        v2_2.d = v0_2.d f+ v4_1.d
        v1_3.d = v0_2.d f+ v0_6.d
        v0_8.d = v0_4 f+ v0_8.d
        v0_8:4.d = v0_4
        v1_3.d = v1_3.d f+ v4_1.d
        double v0_9 = vadd_f32(v0_8, vdup_laneq_s32(v4_1, 1))
        int128_t v3_2
        
        if (v2_2.d f< 0f)
            v3_2.d = v13.d
        else
            v3_2.d = v12.d
        
        v1_3.d = v1_3.d f- v2_2.d
        v2_2.d = v2_2.d f+ v3_2.d
        v3_2.d = v0_9:4.d
        uint128_t var_10f0_1 = v4_1
        v0_9.d = v0_9.d f- v3_2.d
        
        if (v3_2.d f< 0f)
            v4_1.d = v13.d
        else
            v4_1.d = v12.d
        
        uint32_t temp0_1 = vcvts_s32_f32(v2_2.d)
        v3_2.d = v3_2.d f+ v4_1.d
        
        if (v1_3.d f< 0f)
            v4_1.d = v13.d
        else
            v4_1.d = v12.d
        
        v2_2.d = float.s(temp0_1)
        uint32_t temp0_2 = vcvts_s32_f32(v3_2.d)
        v1_3.d = v1_3.d f+ v4_1.d
        
        if (v0_9.d f< 0f)
            v3_2.d = v13.d
        else
            v3_2.d = v12.d
        
        v4_1.d = float.s(temp0_2)
        v0_9.d = v0_9.d f+ v3_2.d
        v1_3.d = float.s(sx.d(vcvts_s32_f32(v1_3.d)))
        v0_9.d = float.s(sx.d(vcvts_s32_f32(v0_9.d)))
        void* x22_2 = x24_1 + x26_1 * 0x19a8
        v1_3.d = v2_2.d f+ v1_3.d
        v0_9.d = v4_1.d f+ v0_9.d
        var_10b8.d = v2_2.d
        var_10b8:4.d = v4_1.d
        int32_t var_10b0_1 = v1_3.d
        int32_t var_10ac_1 = v0_9.d
        *(x22_2 + 0x1370) = 0
        *(x22_2 + 0x1694) = 0
        AttribMap* x0_12 = GetEdittedMap(x24_1 + x26_1 * 0x19a8, 0x76)
        AttribMapSetDef(*gUI2AttribTable, x0_12, 0x76, &var_10b8)
        AttribMapGetDef(*gUI2AttribTable, x0_12, *macro_ptr_RectF, 0x76)
        int64_t* x25_3 = *(x22_2 + 0x1688)
        int64_t* x8_20 = *x25_3
        int64_t* x9_5
        
        if (x8_20 == 0)
            if (x25_3[1].d == 0x15)
                XString::GetString()
                XTrace("Unpreloaded sound %s")
            
            AssetCatalogLoadAsset(x25_3, false, true)
            x9_5 = *x25_3
            x25_3 = *(x22_2 + 0x1688)
            x8_20 = *x25_3
        else
            x9_5 = x8_20
        
        void* x10_2 = x24_1 + x26_1 * 0x19a8
        int64_t x23_2 = sx.q(*(x10_2 + 0x1690))
        AttribTable* x26_2 = *gUI2AttribTable
        int64_t x24_2 = **x9_5
        int64_t x9_7
        
        if (x8_20 == 0)
            if (x25_3[1].d == 0x15)
                XString::GetString()
                XTrace("Unpreloaded sound %s")
            
            AssetCatalogLoadAsset(x25_3, false, true)
            x8_20 = *x25_3
            x9_7 = sx.q(*(x10_2 + 0x1690))
        else
            x9_7 = x23_2
        
        int64_t* x0_22 =
            AttribMapGetDef(x26_2, **x8_20 + x9_7 * 0x18, *macro_ptr_UI2StateOverrides, 0x69)
        
        if (x0_22 != 0 && x0_22[1].d s>= 1)
            int64_t i_1 = 0
            AttribMap* x26_3 = x24_2 + x23_2 * 0x18
            int64_t x23_3 = 0x18
            
            do
                if ((AttribMapTagExists(*x0_22 + x23_3, 0x76) & 1) != 0)
                    int64_t* x0_26
                    int128_t v0_10
                    int128_t v1_4
                    int128_t v2_3
                    x0_26, v0_10, v1_4, v2_3 =
                        AttribMapGetDef(*gUI2AttribTable, x26_3, *macro_ptr_RectF, 0x76)
                    v0_10.q = *x0_26
                    v1_4.q = x0_26[1]
                    AttribTable* x0_27 = *gUI2AttribTable
                    int128_t v0_11 = vadd_f32(var_10f0_1, v0_10)
                    int128_t v1_5 = vadd_f32(var_10f0_1, v1_4)
                    int128_t v2_4 = vcltz_f32(v0_11, 0)
                    int128_t v1_6 = vsub_f32(v1_5, v0_11)
                    int128_t v0_12 = vadd_f32(v0_11, vbsl_s8(v2_4, entry_v15, entry_v14))
                    int128_t v1_7 =
                        vadd_f32(v1_6, vbsl_s8(vcltz_f32(v1_6, 0), entry_v15, entry_v14))
                    int128_t v0_13 = vcvt_s32_f32(v0_12)
                    int128_t v1_8 = vcvt_s32_f32(v1_7)
                    int128_t v0_14 = vcvt_f32_s32(v0_13)
                    double v1_10 = vadd_f32(v0_14, vcvt_f32_s32(v1_8))
                    var_10b8 = v0_14.q
                    var_10b0_1.q = v1_10
                    AttribMapSetDef(x0_27, x26_3, 0x76, &var_10b8)
                    AttribMapGetDef(*gUI2AttribTable, x26_3, *macro_ptr_RectF, 0x76)
                
                i_1 += 1
                x23_3 += 0x30
            while (i_1 s< sx.q(x0_22[1].d))
        
        int64_t var_10e0
        int64_t* var_1148_1 = &var_10e0
        int64_t var_10d8
        int64_t* var_1150_1 = &var_10d8
        uint64_t var_10d0
        uint64_t var_10c8
        uint64_t var_10c0
        AttribTreeItemMove(x8_6, zx.q(*(x10_2 + 0x1690)), zx.q(x22_1), zx.q(x25), &var_10b8, 
            &var_10c0, &var_10c8, &var_10d0)
        uint32_t x8_29 = var_10c0.d
        bool (* x9_8)(UI2Handle, UI2Handle) = var_10b8
        uint64_t x10_3 = var_10d0
        int32_t x11_1 = x8_29 - x9_8.d
        int32_t x12_2 = var_10d8.d - x10_3.d
        uint64_t x16_1 = zx.q(*(gUI2 + 8))
        
        if (x16_1.d != 0)
            void* x13_1 = *gUI2
            void* x14_2 = var_10c8 + x9_8
            int64_t x15_2 = var_10e0 + x10_3
            int64_t x16_2 = x13_1 + x16_1 * 0x19a8
            
            while (true)
                if (zx.d(*(x13_1 + 0x19a2)) == 0)
                    x13_1 += 0x19a8
                    
                    if (x13_1 u>= x16_2)
                        break
                else
                    if (*(x13_1 + 0x1688) == x20)
                        int64_t x17_3 = sx.q(*(x13_1 + 0x1690))
                        
                        if (x9_8 u<= x17_3 && x14_2 u> x17_3)
                            *(x13_1 + 0x1690) = x17_3.d + x11_1
                        else if (x10_3 u<= x17_3 && x15_2 u> x17_3)
                            *(x13_1 + 0x1690) = x17_3.d + x12_2
                    
                    x13_1 += 0x19a8
                    
                    if (x16_2 u<= x13_1)
                        break
        
        uint64_t x13_2 = var_10c8
        
        if (*(gUI2Editor + 0x704c) s>= 1)
            int64_t i_2 = 0
            int64_t x16_4 = var_10e0 + x10_3
            
            do
                int64_t x17_8 = sx.q(*(gUI2Editor + (i_2 << 2) + 0x604c))
                int32_t x0_30
                
                if (x9_8 u<= x17_8)
                    x0_30 = x11_1
                
                if (x9_8 u<= x17_8 && x13_2 + x9_8 u> x17_8)
                    *(gUI2Editor + (i_2 << 2) + 0x604c) = x17_8.d + x0_30
                else if (x10_3 u<= x17_8)
                    x0_30 = x12_2
                    
                    if (x16_4 u> x17_8)
                        *(gUI2Editor + (i_2 << 2) + 0x604c) = x17_8.d + x0_30
                
                i_2 += 1
            while (i_2 s< sx.q(*(gUI2Editor + 0x704c)))
        
        x22_1 = x13_2.d + x8_29 - 1
        x25 = 2
        x9_3 += 1
    while (x9_3 != x10)

entry_v15.q = var_a0
entry_v14.q = var_98
return UI2Free(gUI2Editor + 0x6010)
