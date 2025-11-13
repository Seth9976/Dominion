// 函数: sub_f7c944
// 地址: 0xf7c944
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_70 = v8
int64_t* x24 = arg1
*arg2 = arg1
int64_t* x8

if (arg1 == 0)
    x24 = AssetPtrGetNull(4)
    x8 = *x24
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x24, false, true)
        x8 = *x24
else
    x8 = *x24
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x24, false, true)
        x8 = *x24

*(x24 + 0x24) += 1
int64_t x19 = *x8
int32_t* result = ShaderBindGraphicsBuffers(arg1, zx.q(arg4))

if (*(x19 + mulu.dp.d(arg4, 0x28) + 0x18) s< 1)
    *(x24 + 0x24) -= 1
else
    void* x24_1 = nullptr
    int64_t x25_1 = 0
    v8.d = fconvert.s(0.5f)
    
    while (true)
        int64_t x19_1 = sx.q(arg2[1].d)
        int32_t* fp_1 = *(x19 + zx.q(arg4) * 0x28 + 0x20) + x24_1
        arg2[1].d = x19_1.d + 1
        void* x28_1 = &arg2[x19_1 * 4]
        *(x28_1 + 0x10) = fp_1[2]
        *(x28_1 + 0x14) = *fp_1
        *(x28_1 + 0x18) = fp_1[1]
        uint32_t x22_1 = fp_1[2]
        *(x28_1 + 0x20) = AttribTagGetDefMap(*gMaterialAttribTable, x22_1)
        result = AttribMapTagExists(arg3, x22_1)
        DefMap* x2 = *(x28_1 + 0x20)
        uint64_t x8_10 = zx.q(*(x2 + 0x18) - 1)
        uint64_t x8_11
        uint64_t x9_5
        uint64_t x10_3
        float v0_1
        
        if ((result.d & 1) == 0)
            if (x8_10.d u> 0x28)
                goto label_f7ce8c
            
            switch (x8_10)
                case 0, 3, 9
                    result = AttribTagGetDefaultValue(*gMaterialAttribTable, x22_1)
                label_f7cba8:
                    arg2[x19_1 * 4 + 5] = result
                label_f7ce8c:
                    
                    if (*(*(x28_1 + 0x20) + 0x18) == 0x21 && fp_1[1] == 3)
                        *(x28_1 + 0x20) = *macro_ptr_Mat43
                    
                    x25_1 += 1
                    x24_1 += 0xc
                    
                    if (x25_1 s>= sx.q(*(x19 + mulu.dp.d(arg4, 0x28) + 0x18)))
                        break
                    
                    continue
                case 1, 2, 4, 5, 6, 7, 8, 0xa, 0xb, 0xc, 0xd, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 
                        0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 
                        0x21, 0x22, 0x23, 0x24, 0x25, 0x26
                    goto label_f7ce8c
                case 0xe
                    result = AttribMapGetAssetPtr(*gMaterialAttribTable, arg3, x22_1)
                    goto label_f7cba8
                case 0x27
                    result = AttribTagGetDefaultValue(*gMaterialAttribTable, x22_1)
                    
                    if (result == 0)
                        goto label_f7ce8c
                    
                    v0_1 = *result
                    
                    if (v0_1 <= float.s(0x3f7fbe77))
                        if (v0_1 >= float.s(0x3a83126f))
                            x8_11 = zx.q(vcvts_s32_f32(v0_1 * float.s(0x437f0000) f+ v8.d))
                            v0_1 = result[1]
                            
                            if (v0_1 > float.s(0x3f7fbe77))
                                goto label_f7cbf4
                            
                            goto label_f7cd80
                        
                        x8_11 = 0
                        v0_1 = result[1]
                        
                        if (v0_1 > float.s(0x3f7fbe77))
                            goto label_f7cbf4
                        
                        goto label_f7cd80
                    
                    x8_11 = 0xff
                    v0_1 = result[1]
                    
                    if (v0_1 <= float.s(0x3f7fbe77))
                    label_f7cd80:
                        
                        if (v0_1 >= float.s(0x3a83126f))
                            x9_5 = zx.q(vcvts_s32_f32(v0_1 * float.s(0x437f0000) f+ v8.d)) << 8
                            v0_1 = result[2]
                            
                            if (v0_1 > float.s(0x3f7fbe77))
                                goto label_f7cc08
                            
                            goto label_f7cdd0
                        
                        x9_5 = 0
                        v0_1 = result[2]
                        
                        if (v0_1 > float.s(0x3f7fbe77))
                            goto label_f7cc08
                        
                        goto label_f7cdd0
                    
                label_f7cbf4:
                    x9_5 = 0xff00
                    v0_1 = result[2]
                    
                    if (v0_1 <= float.s(0x3f7fbe77))
                    label_f7cdd0:
                        
                        if (v0_1 >= float.s(0x3a83126f))
                            x10_3 = zx.q(vcvts_s32_f32(v0_1 * float.s(0x437f0000) f+ v8.d)) << 0x10
                            v0_1 = result[3]
                            
                            if (not(v0_1 <= float.s(0x3f7fbe77)))
                                goto label_f7ce44
                        else
                            x10_3 = 0
                            v0_1 = result[3]
                            
                            if (v0_1 > float.s(0x3f7fbe77))
                                goto label_f7ce44
                    else
                    label_f7cc08:
                        x10_3 = 0xff0000
                        v0_1 = result[3]
                        
                        if (not(v0_1 <= float.s(0x3f7fbe77)))
                            goto label_f7ce44
                    
                    if (v0_1 < float.s(0x3a83126f))
                        goto label_f7cd4c
                    
                    goto label_f7ce10
                case 0x28
                    result = AttribTagGetDefaultValue(*gMaterialAttribTable, x22_1)
        else
            if (x8_10.d u> 0x28)
            label_f7cf0c:
                pthread_kill(pthread_self(), 6)
                int64_t* x0_15 = XNoReturn()
                *(x24_1 + 0x24) -= 1
                sub_1101e04(x0_15)
                noreturn
            
            switch (x8_10)
                case 0, 3, 9
                    result = AttribMapGetDef(*gMaterialAttribTable, arg3, x2, x22_1)
                    goto label_f7cba8
                case 1, 2, 4, 5, 6, 7, 8, 0xa, 0xb, 0xc, 0xd, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 
                        0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 
                        0x21, 0x22, 0x23, 0x24, 0x25, 0x26
                    goto label_f7cf0c
                case 0xe
                    result = AttribMapGetAssetPtr(*gMaterialAttribTable, arg3, x22_1)
                    goto label_f7cba8
                case 0x27
                    result =
                        AttribMapGetDef(*gMaterialAttribTable, arg3, *macro_ptr_ColorRgba, x22_1)
                    v0_1 = *result
                    
                    if (v0_1 <= float.s(0x3f7fbe77))
                        if (v0_1 >= float.s(0x3a83126f))
                            x8_11 = zx.q(vcvts_s32_f32(v0_1 * float.s(0x437f0000) f+ v8.d))
                            v0_1 = result[1]
                            
                            if (v0_1 > float.s(0x3f7fbe77))
                                goto label_f7cb04
                            
                            goto label_f7cca4
                        
                        x8_11 = 0
                        v0_1 = result[1]
                        
                        if (v0_1 > float.s(0x3f7fbe77))
                            goto label_f7cb04
                        
                        goto label_f7cca4
                    
                    x8_11 = 0xff
                    v0_1 = result[1]
                    
                    if (v0_1 <= float.s(0x3f7fbe77))
                    label_f7cca4:
                        
                        if (v0_1 >= float.s(0x3a83126f))
                            x9_5 = zx.q(vcvts_s32_f32(v0_1 * float.s(0x437f0000) f+ v8.d)) << 8
                            v0_1 = result[2]
                            
                            if (v0_1 > float.s(0x3f7fbe77))
                                goto label_f7cb18
                            
                            goto label_f7ccf4
                        
                        x9_5 = 0
                        v0_1 = result[2]
                        
                        if (v0_1 > float.s(0x3f7fbe77))
                            goto label_f7cb18
                        
                        goto label_f7ccf4
                    
                label_f7cb04:
                    x9_5 = 0xff00
                    v0_1 = result[2]
                    
                    if (v0_1 <= float.s(0x3f7fbe77))
                    label_f7ccf4:
                        
                        if (v0_1 >= float.s(0x3a83126f))
                            x10_3 = zx.q(vcvts_s32_f32(v0_1 * float.s(0x437f0000) f+ v8.d)) << 0x10
                            v0_1 = result[3]
                            
                            if (v0_1 > float.s(0x3f7fbe77))
                                goto label_f7ce44
                            
                            goto label_f7cd44
                        
                        x10_3 = 0
                        v0_1 = result[3]
                        
                        if (v0_1 > float.s(0x3f7fbe77))
                            goto label_f7ce44
                        
                        goto label_f7cd44
                    
                label_f7cb18:
                    x10_3 = 0xff0000
                    v0_1 = result[3]
                    uint64_t x11_3
                    
                    if (v0_1 <= float.s(0x3f7fbe77))
                    label_f7cd44:
                        
                        if (v0_1 >= float.s(0x3a83126f))
                        label_f7ce10:
                            x11_3 = zx.q(vcvts_s32_f32(v0_1 * float.s(0x437f0000) f+ v8.d)) << 0x18
                        else
                        label_f7cd4c:
                            x11_3 = 0
                    else
                    label_f7ce44:
                        x11_3 = 0xff000000
                    
                    uint64_t x8_19 = x9_5 | x8_11 | x10_3
                    uint64_t x9_12 = x11_3 | x8_19
                    arg2[x19_1 * 4 + 5] =
                        (x9_12 & 0xff00ff00) | x8_19 u>> 0x10 | (zx.q(x9_12.d << 0x10) & 0xff0000)
                    goto label_f7ce8c
                case 0x28
                    result =
                        AttribMapGetDef(*gMaterialAttribTable, arg3, *macro_ptr_ColorRgbaI, x22_1)
        
        if (result == 0)
            goto label_f7ce8c
        
        uint64_t x8_12 = zx.q(*result)
        arg2[x19_1 * 4 + 5] = (zx.q(x8_12.d << 0x10) & 0xff0000) | (zx.q(x8_12.d) & 0xff00ff00)
            | (x8_12 u>> 0x10 & 0xff)
        goto label_f7ce8c
    
    if (x24 != 0)
        *(x24 + 0x24) -= 1

return result
