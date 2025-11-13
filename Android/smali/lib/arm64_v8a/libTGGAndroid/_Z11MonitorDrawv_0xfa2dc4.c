// 函数: _Z11MonitorDrawv
// 地址: 0xfa2dc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

(*(**gGraphicsInterface + 0x130))()
uint64_t x8_2 = *gpRenderAppData
*(x8_2 + 0x398) = 0
*(x8_2 + 0x170) = 0x100000001
DrawModeSet(0)
int64_t* x0_1 = *gGraphicsInterface
(*(*x0_1 + 0x110))(x0_1, 1)
*(*gpRenderAppData + 0x165) = 0
int128_t v0
int128_t v1
int128_t v2
v0, v1, v2 = Draw3DSetRTInversion(false)
uint128_t var_60
int64_t var_40
int32_t var_38

if ((zx.d(*(*gpGameData + 0x39)) & 2) != 0)
    int64_t* x0_7 = *gGraphicsInterface
    uint128_t v0_2
    uint128_t v1_2
    uint128_t v2_4
    v0_2, v1_2, v2_4 = (*(*x0_7 + 0x120))(x0_7, zx.q(*gRgbaIBlack), 0)
    
    if ((zx.d(data_2421e88) & 1) == 0)
        int32_t x0_15
        x0_15, v0_2, v1_2, v2_4 = __cxa_guard_acquire(&data_2421e88)
        
        if (x0_15 != 0)
            data_2421e80 = AssetPtrFromPath("sys/sprite_opaque.material", 5)
            v0_2, v1_2, v2_4 = __cxa_guard_release(&data_2421e88)
    
    if (*gGlobalVRAppType == 5)
        v0_2.d = *gGraphicsDriverType
        v2_4.d = 1f
        v1_2 = data_71ae80
        uint128_t v0_3 = vceqq_u32(v0_2, v2_4)
        int64_t x8_15 = sx.q(*(gVR + 0xa8))
        var_60 = vbslq_s8(vdupq_laneq_s32(v0_3, 0), data_71ca70, v1_2)
        XAsset* x0_8 = *(gVR + (x8_15 << 3) + 0x38)
        uint128_t v0_5
        
        if (x0_8 != 0)
            uint64_t x8_16 = *gAppInterface
            v0_5.d = fconvert.s(0.5f)
            XAsset* x4_1 = data_2421e80
            v1_2.d = *(x8_16 + 0x28)
            v2_4.d = *(x8_16 + 0x2c)
            var_40 = 0
            v1_2.d = float.s(v1_2.d)
            v2_4.d = float.s(v2_4.d)
            v0_5.d = v1_2.d f* v0_5.d
            var_38 = v0_5.d
            int32_t var_34_1 = v2_4.d
            v0_5, v1_2 = DrawImageParams(x0_8, &var_40, &var_60, gSpriteWhite, x4_1)
            x8_15 = sx.q(*(gVR + 0xa8))
        
        XAsset* x0_9 = *(gVR + (x8_15 << 3) + 0x50)
        
        if (x0_9 != 0)
            v1_2.d = fconvert.s(0.5f)
            XAsset* x4_2 = data_2421e80
            v0_5.q = *(*gAppInterface + 0x28)
            var_40:4.d = 0
            double v0_6 = vcvt_f32_s32(v0_5)
            v1_2.d = v1_2.d f* v0_6.d
            var_40.d = v1_2.d
            var_38.q = v0_6
            DrawImageParams(x0_9, &var_40, &var_60, gSpriteWhite, x4_2)
else
    if (zx.d(*gAlwaysVRMode) == 0)
    label_fa3094:
        uint64_t x8_19 = *gAppInterface
        
        if (zx.d(*(x8_19 + 0x3f)) == 0)
            if (zx.d(*(x8_19 + 0x3c)) != 0)
                uint64_t x8_23 = *gpRenderAppData
                v1 = *(x8_23 + 0x44)
                v2 = *(x8_23 + 0x54)
                *(x8_23 + 4) = *(x8_23 + 0x34)
                *(x8_23 + 0x14) = v1
                *(x8_23 + 0x24) = v2
            
            int64_t* x0_11 = *gGraphicsInterface
            (*(*x0_11 + 0x120))(x0_11, zx.q(*(gDraw3DData + 0x38)), 0)
            RenderUseSubmittedCamera()
            RenderItemListDraw(2)
        else
            DrawModeSet(1)
            int64_t* x0_10 = *gAppInterface
            *(gDraw3DData + &data_7a4604) = 2
            (*(*x0_10 + 0x60))()
    else
        int32_t x0_2
        x0_2, v0, v1, v2 = VRIsDisconnected()
        
        if ((x0_2 & 1) != 0)
            goto label_fa3094
        
        int32_t x0_3
        x0_3, v0, v1, v2 = VRHasFocus()
        
        if ((x0_3 & 1) == 0)
            goto label_fa3094
        
        int64_t* x0_4 = *gGraphicsInterface
        int128_t v2_1
        int128_t v3_1
        int128_t v4_1
        int128_t v5_1
        int128_t v6_1
        int128_t v7_1
        v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
            (*(*x0_4 + 0x120))(x0_4, zx.q(*(gDraw3DData + 0x38)), 0)
        float v0_1 = fconvert.s(0.5f)
        float v1_1 = *(gVR + 0xd4)
        v4_1.d = *(gVR + 0xe4)
        v6_1.d = *(gVR + 0xdc)
        v7_1.d = *(gVR + 0xec)
        v2_1.q = *(gVR + 0xd0)
        v5_1.q = *(gVR + 0xd8)
        v4_1.d = v4_1.d f- v1_1
        v4_1.d = v4_1.d f* v0_1
        v1_1 = v1_1 f+ v4_1.d
        v3_1.q = *(gVR + 0xe0)
        v4_1.q = *(gVR + 0xe8)
        v7_1.d = v7_1.d f- v6_1.d
        v7_1.d = v7_1.d f* v0_1
        v6_1.d = v6_1.d f+ v7_1.d
        v3_1:4.d = v1_1
        v4_1:4.d = v6_1.d
        v6_1.d = (v1_1 f+ v6_1.d) * v0_1
        v2_1:4.d = v6_1.d
        v5_1:4.d = v6_1.d
        v6_1.q = 0x3f4ccccd3f000000
        int128_t v3_2 = vsub_f32(v3_1, v2_1)
        int128_t v4_2 = vsub_f32(v4_1, v5_1)
        v7_1.d = 0x3f000000
        v7_1:4.d = 0x3f000000
        int128_t v3_3 = vmul_f32(v3_2, v6_1, 0)
        int128_t v4_3 = vmul_f32(v4_2, v6_1, 0)
        int128_t v2_2 = vadd_f32(v2_1, v3_3)
        int128_t v4_4 = vadd_f32(v5_1, v4_3)
        v6_1.d = float.s(0x3f4ccccd)
        int128_t v5_3 = vmul_f32(vadd_f32(v2_2, v4_4), v7_1, 0)
        v7_1.q = 0x3f19999a3f4ccccd
        v0_1 = *(gDraw3DData + 8)
        v1_1 = *(gDraw3DData + 0xc)
        v3_3.d = float.s(0x3f19999a)
        double v2_3 = vsub_f32(v2_2, v5_3)
        v6_1.d = v6_1.d f* v2_3.d
        v2_3.d = v3_3.d f* v2_3:4.d
        v3_3.d = v5_3:4.d
        v6_1.d = v5_3.d f+ v6_1.d
        v2_3.d = v3_3.d f+ v2_3.d
        double v3_4 = vadd_f32(v5_3, vmul_f32(vsub_f32(v4_4, v5_3), v7_1, 0))
        var_40.d = v6_1.d
        var_40:4.d = v2_3.d
        var_38.q = v3_4
        FrustumSet(&var_40, v0_1, v1_1)
        Draw3DSetCameraFrustum(&var_60)
        RenderItemListDraw(2)
    
    RendererDrawStatOverlay()
DrawModeSet(0)
(*(**gGraphicsInterface + 0x138))()
int64_t* x0_13 = *gGraphicsInterface
return (*(*x0_13 + 0x140))(x0_13, 1)
