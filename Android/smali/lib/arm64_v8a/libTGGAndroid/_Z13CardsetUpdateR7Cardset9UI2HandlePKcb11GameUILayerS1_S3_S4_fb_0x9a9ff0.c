// 函数: _Z13CardsetUpdateR7Cardset9UI2HandlePKcb11GameUILayerS1_S3_S4_fb
// 地址: 0x9a9ff0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v12
int64_t var_90 = v12
int64_t v11
int64_t var_80 = v11
int64_t v10
int64_t var_78 = v10
int64_t v9
int64_t var_70 = v9
int128_t entry_v8
int64_t var_68 = entry_v8.q
uint32_t x8 = zx.d(arg10)
*(arg1 + 0x1560) = x8.b & 1

if ((x8 & 1) != 0)
    int32_t x9_1 = *(arg1 + 0x1520)
    int32_t x21_1 = arg2
    Cardset& x19_1 = arg1
    int32_t var_88_1 = arg4.d
    int32_t var_84_1 = arg8
    *(arg1 + 0x1524) = arg5 + 1
    int32_t x2
    
    x2 = x9_1 s> 1 ? x9_1 : 1
    
    int32_t x24_1 = arg6
    UI2SetInt(zx.q(x21_1), &data_11ca6f0, x2, 0xffffffff)
    float v1_1 = arg9.d f* fconvert.s(4f)
    v9.d = fconvert.s(1f)
    float v0 = v1_1 + *(x19_1 + 0x153c)
    v1_1 = *(x19_1 + 0x154c) - v1_1
    entry_v8.d = 0f
    float temp0_1 = vmin_f32(v0, v9.d)
    
    v0 = v0 < 0f ? entry_v8.d : temp0_1
    
    float temp0_2 = vmin_f32(v1_1, v9.d)
    *(x19_1 + 0x153c) = v0
    
    v0 = v1_1 < 0f ? entry_v8.d : temp0_2
    
    *(x19_1 + 0x154c) = v0
    int32_t x0_2 = UI2GetHandle(zx.q(x21_1), arg3)
    uint64_t x3 = zx.q(*(x19_1 + 0x1520))
    *(x19_1 + 0x1550) = x0_2
    float var_b0
    
    if (x3.d s>= 1)
        int64_t x26_1 = 0
        int64_t x28_1 = 0
        int64_t x27_1 = 0
        v9.d = fconvert.s(1f)
        v10.d = fconvert.s(3f)
        v11.d = fconvert.s(0.5f)
        
        do
            void* x22_1 = x19_1 + x26_1
            void* fp_1 = x19_1 + x28_1
            
            if (*(x22_1 + 0x260) != 0)
                UI2GetTransformSized(zx.q(x21_1), arg3, x27_1.d, x3.d)
                v9.d = var_b0
                float var_f0
                int32_t var_ec
                int32_t var_e4
                int32_t var_d0
                int32_t var_cc
                int32_t var_c4
                
                if (x27_1 != zx.q(*(x19_1 + 0x1538)))
                    if (x27_1 == zx.q(*(x19_1 + 0x1548)))
                        v12.d = *(x19_1 + 0x154c)
                    
                    if (x27_1 == zx.q(*(x19_1 + 0x1548)) && not(v12.d f== 0f))
                        goto label_9aa1ac
                    
                    XAsset* x25_2 = *(x19_1 + (x28_1 << 3) + 0x268)
                    int32_t v0_17
                    int32_t v1_10
                    int32_t v2_12
                    int32_t v3_7
                    v0_17, v1_10, v2_12, v3_7 = RectScreen()
                    var_d0 = v0_17
                    var_cc = v1_10
                    int32_t var_c8_1 = v2_12
                    var_c4 = v3_7
                    float v0_18
                    int32_t v1_11
                    int32_t v2_13
                    int32_t v3_8
                    v0_18, v1_11, v2_13, v3_8 = RectScreenSafe()
                    var_f0 = v0_18
                    var_ec = v1_11
                    int32_t var_e8_1 = v2_13
                    var_e4 = v3_8
                    UI2Begin("cardset card", fp_1, x25_2, &var_d0, &var_f0, arg5 + 1, x27_1.d, 
                        false)
                    UI2SetTransform(zx.q(*(x19_1 + (x27_1 << 2))), &var_b0)
                    
                    if (*(GetLocalSettings() + 0x28) == 2)
                        UI2SetState(zx.q(*(x19_1 + (x27_1 << 2))), &data_11ca738, 0xffffffff, 0)
                    
                    UI2SetState(zx.q(*(x19_1 + (x27_1 << 2))), *(x22_1 + 0x260), 0xffffffff, 0)
                    
                    if ((var_88_1 & 1) != 0)
                        void* x22_2 = x19_1 + x26_1
                        
                        if (*(x22_2 + 0x278) s>= 2)
                            int64_t x25_3 = x27_1 << 2
                            UI2SetState(zx.q(*(x19_1 + x25_3)), &data_11ca708, 0xffffffff, 0)
                            *(x22_2 + 0x278)
                            int32_t x25_4 = *(x19_1 + x25_3)
                            XFormatString("x%d")
                            UI2SetText(zx.q(x25_4), &data_11ca720, &var_d0, 0xffffffff)
                            XString::~XString()
                else
                    v12.d = *(x19_1 + 0x153c)
                label_9aa1ac:
                    UI2StateDecl* x1_3 = *(x19_1 + x26_1 + 0x270)
                    
                    if (x1_3 != 0)
                        UI2SetState(zx.q(x24_1), x1_3, 0xffffffff, 0)
                    
                    float v0_3 = 0f
                    
                    if (not(v12.d f<= 0f))
                        v0_3 = fconvert.s(1f)
                        
                        if (not(v12.d f>= v0_3))
                            v0_3 = v12.d f* v12.d * (v10.d f- (v12.d f+ v12.d))
                            v0_3 = v0_3 * v0_3 * (v10.d f- (v0_3 + v0_3)) f+ entry_v8.d
                    
                    int128_t v0_4
                    int128_t v1_3
                    int128_t v3_1
                    int128_t v5_1
                    int128_t v6_1
                    v0_4, v1_3, v3_1, v5_1, v6_1 = UI2GetTransformSized(zx.q(x24_1), arg7, 0, 1)
                    int64_t var_bc
                    v0_4.q = var_bc
                    int64_t var_9c
                    v1_3.q = var_9c
                    float v4_1 = var_b0
                    int32_t var_94
                    v3_1.d = var_94
                    v5_1.d = var_d0
                    v5_1.d = v5_1.d f- v4_1
                    int128_t v0_5
                    v0_5.d = vsub_f32(v0_4, v1_3).d f* v0_3
                    v0_5:4.d = v0_5:4.d f* v0_3
                    double v0_6 = vadd_f32(v1_3, v0_5)
                    v1_3.q = var_c4.q
                    float var_b4
                    float v2_2 = v3_1.d f+ v0_3 * (var_b4 f- v3_1.d)
                    int64_t var_a4
                    v3_1.q = var_a4
                    v5_1.d = v0_3 f* v5_1.d
                    v6_1.q = var_cc.q
                    v4_1 = v4_1 f+ v5_1.d
                    int32_t var_ac
                    v5_1.q = var_ac.q
                    double var_dc_1 = v0_6
                    uint128_t v0_7 = vmul_f32(v1_3, v3_1, 0)
                    float var_d4_1 = v2_2
                    uint128_t v2_3 = vmul_f32(v6_1, v5_1, 0)
                    var_f0 = v4_1
                    uint128_t v0_9 = vcgt_f32(entry_v8, 
                        vadd_f32(
                            vadd_f32(vadd_f32(vdup_laneq_s32(v0_7, 1), v2_3), 
                                vdup_laneq_s32(v2_3, 1)), 
                            v0_7))
                    int128_t v4_4 = vneg_f32(v1_3)
                    int128_t v0_10 = vdup_laneq_s32(v0_9, 0)
                    int128_t v2_6 = vneg_f32(v6_1)
                    int128_t v1_4 = vbsl_s8(v0_10, v4_4, v1_3)
                    int128_t v0_11 = vbsl_s8(v0_10, v2_6, v6_1)
                    int128_t v1_5
                    v1_5.d = vsub_f32(v1_4, v3_1).d f* v0_3
                    v1_5:4.d = v1_5:4.d f* v0_3
                    int128_t v0_12
                    v0_12.d = vsub_f32(v0_11, v5_1).d f* v0_3
                    v0_12:4.d = v0_12:4.d f* v0_3
                    int128_t v1_6 = vadd_f32(v3_1, v1_5)
                    int128_t v0_13 = vadd_f32(v5_1, v0_12)
                    uint128_t v2_7 = vmul_f32(v1_6, v1_6, 0)
                    uint128_t v3_2 = vmul_f32(v0_13, v0_13, 0)
                    int128_t v4_5 = vdup_laneq_s32(v2_7, 1)
                    uint128_t v2_8
                    v2_8.d = sqrt(vadd_f32(v2_7, 
                        vadd_f32(vdup_laneq_s32(v3_2, 1), vadd_f32(v4_5, v3_2))).d)
                    int128_t v2_9 = vdup_laneq_s32(v2_8, 0)
                    var_ec.q = vdiv_f32(v0_13, v2_9)
                    var_e4.q = vdiv_f32(v1_6, v2_9)
                    XAsset* x25_1 = *(x19_1 + (x28_1 << 3) + 0x268)
                    int32_t v0_15
                    int32_t v1_8
                    int32_t v2_10
                    int32_t v3_5
                    v0_15, v1_8, v2_10, v3_5 = RectScreen()
                    int32_t var_100 = v0_15
                    int32_t var_fc_1 = v1_8
                    int32_t var_f8_1 = v2_10
                    int32_t var_f4_1 = v3_5
                    float v0_16
                    int32_t v1_9
                    int32_t v2_11
                    int32_t v3_6
                    v0_16, v1_9, v2_11, v3_6 = RectScreenSafe()
                    float var_110 = v0_16
                    int32_t var_10c_1 = v1_9
                    int32_t var_108_1 = v2_11
                    int32_t var_104_1 = v3_6
                    UI2Begin("cardset card", fp_1, x25_1, &var_100, &var_110, 
                        (v0_3 f> v11.d ? 1 : 0) + var_84_1, x27_1.d, false)
                    UI2SetTransform(zx.q(*(x19_1 + (x27_1 << 2))), &var_f0)
                    
                    if (*(GetLocalSettings() + 0x28) == 2)
                        UI2SetState(zx.q(*(x19_1 + (x27_1 << 2))), &data_11ca738, 0xffffffff, 0)
                    
                    UI2SetState(zx.q(*(x19_1 + (x27_1 << 2))), *(x22_1 + 0x260), 0xffffffff, 0)
                UI2UpdateRoot(zx.q(*(x19_1 + (x27_1 << 2))), false, *gSecondsPerUpdate)
            else if (*(x19_1 + (x27_1 << 2)) != 0)
                UI2Free(fp_1)
                *(x19_1 + (x27_1 << 2)) = 0
            
            x3 = sx.q(*(x19_1 + 0x1520))
            x27_1 += 1
            x28_1 += 4
            x26_1 += 0x20
        while (x27_1 s< x3)
    
    if (zx.d(*(arg1 + 0x1554)) != 0)
        entry_v8.d = v9.d f* float.s(0x45bb8000)
        float v0_19
        float v1_12
        v0_19, v1_12 = UI2GetScrollPos(zx.q(*(x19_1 + 0x1550)))
        float v3_9 = *(x19_1 + 0x1558)
        float v2_14 = *(x19_1 + 0x155c)
        float v5_3 = v3_9 - v0_19
        entry_v8.d = entry_v8.d f* *gSecondsPerUpdate
        float v4_6 = v2_14 - v1_12
        v9.d = sqrt(v5_3 * v5_3 + v4_6 * v4_6)
        
        if (not(v9.d f< entry_v8.d))
            v2_14 = fconvert.s(1f) f/ v9.d
            v3_9 = v0_19 + entry_v8.d f* v5_3 * v2_14
            v2_14 = v1_12 + entry_v8.d f* v4_6 * v2_14
        
        var_b0 = v3_9
        float var_ac_1 = v2_14
        
        if (v0_19 != v3_9 || not(v1_12 == v2_14))
            UI2SetScrollPos(zx.q(*(x19_1 + 0x1550)), &var_b0)
        
        if (not(v9.d f>= entry_v8.d))
            *(arg1 + 0x1554) = 0
    
    arg1 = UI2GetHandle(zx.q(x21_1), arg3)
    
    if (arg1.d != 0)
        int32_t v0_20
        int32_t v1_13
        int32_t v2_15
        int32_t v3_10
        arg1, v0_20, v1_13, v2_15, v3_10 = UI2GetRect(arg1)
        *(x19_1 + 0x1528) = v0_20
        *(x19_1 + 0x152c) = v1_13
        *(x19_1 + 0x1530) = v2_15
        *(x19_1 + 0x1534) = v3_10

entry_v8.q = var_68
