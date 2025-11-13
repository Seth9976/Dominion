// 函数: _Z9SpineDrawjPK17SpineSlotMappings
// 地址: 0xfabbe4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_70 = v8
uint64_t x9 = zx.q(arg1) & 0xffff
int64_t x8 = *gSpine
void* x20 = *(x8 + mulu.dp.d(x9.d, 0x28) + 8)

if (not(*(x20 + 0x7c) f!= 0f) || *(x20 + 0x20) s< 1)
    return 

int64_t i = 0
v8.d = fconvert.s(0.5f)

do
    int64_t* x23_1 = *(*(x20 + 0x30) + (i << 3))
    void* x21_1 = x23_1[5]
    
    if (x21_1 != 0)
        if (arg2 == 0)
        label_fabc88:
            
            if (*(x23_1 + 0x1c) f!= 0f)
                void* x1_2 = x23_1[1]
                
                if (*(x1_2 + 0x80) != 0)
                    if (*(x21_1 + 8) != 0)
                        pthread_kill(pthread_self(), 6)
                        XAsset* x0_11
                        char** x1_7
                        int32_t x2_3
                        x0_11, x1_7, x2_3 = XNoReturn()
                        return SpineGetSkins(x0_11, x1_7, x2_3) __tailcall
                    
                    int32_t v0 = *(x21_1 + 0x58)
                    
                    if (not(v0 f== 0f))
                        int128_t var_90
                        uint128_t v0_1
                        int128_t v1_1
                        int128_t v2_1
                        v0_1, v1_1, v2_1 =
                            spRegionAttachment_computeWorldVertices(x21_1, x1_2, &var_90, 0, 2, v0)
                        v1_1 = var_90
                        int128_t var_80
                        uint128_t v0_2 = vextq_s8(var_80, var_80, 8)
                        int128_t var_b0 = v1_1
                        uint128_t var_a0_1 = v0_2
                        v2_1 = *(x21_1 + 0xa0)
                        v0_2 = *(x21_1 + 0xb0)
                        uint32_t var_64 = 0
                        uint128_t v0_3 = vextq_s8(v0_2, v0_2, 8)
                        int128_t var_d0 = v2_1
                        uint128_t var_c0_1 = v0_3
                        int32_t* x9_1 = x23_1[4]
                        
                        if (x9_1 != 0)
                            v0_3.d = *x9_1
                            v1_1.d = float.s(0x3f7fbe77)
                            uint32_t x8_8
                            
                            if (v0_3.d f<= v1_1.d)
                                v1_1.d = float.s(0x3a83126f)
                                
                                if (not(v0_3.d f>= v1_1.d))
                                    x8_8 = 0
                                    v0_3.d = x9_1[1]
                                    v1_1.d = float.s(0x3f7fbe77)
                                    
                                    if (v0_3.d f> v1_1.d)
                                        goto label_fabe00
                                    
                                    goto label_fabdb8
                                
                                v1_1.d = float.s(0x437f0000)
                                v0_3.d = v0_3.d f* v1_1.d
                                v0_3.d = v0_3.d f+ v8.d
                                x8_8 = vcvts_s32_f32(v0_3.d)
                                v0_3.d = x9_1[1]
                                v1_1.d = float.s(0x3f7fbe77)
                                
                                if (v0_3.d f<= v1_1.d)
                                    goto label_fabdb8
                                
                                goto label_fabe00
                            
                            x8_8 = 0xff
                            v0_3.d = x9_1[1]
                            v1_1.d = float.s(0x3f7fbe77)
                            uint32_t x10_2
                            
                            if (v0_3.d f<= v1_1.d)
                            label_fabdb8:
                                v1_1.d = float.s(0x3a83126f)
                                
                                if (not(v0_3.d f>= v1_1.d))
                                    x10_2 = 0
                                    v0_3.d = x9_1[2]
                                    v1_1.d = float.s(0x3f7fbe77)
                                    
                                    if (v0_3.d f> v1_1.d)
                                        goto label_fabe14
                                    
                                    goto label_fabe54
                                
                                v1_1.d = float.s(0x437f0000)
                                v0_3.d = v0_3.d f* v1_1.d
                                v0_3.d = v0_3.d f+ v8.d
                                x10_2 = vcvts_s32_f32(v0_3.d) << 8
                                v0_3.d = x9_1[2]
                                v1_1.d = float.s(0x3f7fbe77)
                                
                                if (v0_3.d f> v1_1.d)
                                    goto label_fabe14
                                
                                goto label_fabe54
                            
                        label_fabe00:
                            x10_2 = 0xff00
                            v0_3.d = x9_1[2]
                            v1_1.d = float.s(0x3f7fbe77)
                            uint32_t x9_2
                            uint32_t x11_1
                            
                            if (v0_3.d f<= v1_1.d)
                            label_fabe54:
                                v1_1.d = float.s(0x3a83126f)
                                
                                if (v0_3.d f>= v1_1.d)
                                    v1_1.d = float.s(0x437f0000)
                                    v0_3.d = v0_3.d f* v1_1.d
                                    v0_3.d = v0_3.d f+ v8.d
                                    x11_1 = vcvts_s32_f32(v0_3.d) << 0x10
                                    v0_3.d = x9_1[3]
                                    v1_1.d = float.s(0x3f7fbe77)
                                    
                                    if (v0_3.d f<= v1_1.d)
                                        goto label_fabe74
                                    
                                    x9_2 = -0x1000000
                                else
                                    x11_1 = 0
                                    v0_3.d = x9_1[3]
                                    v1_1.d = float.s(0x3f7fbe77)
                                    
                                    if (not(v0_3.d f> v1_1.d))
                                        goto label_fabe74
                                    
                                    x9_2 = -0x1000000
                            else
                            label_fabe14:
                                x11_1 = 0xff0000
                                v0_3.d = x9_1[3]
                                v1_1.d = float.s(0x3f7fbe77)
                                
                                if (v0_3.d f<= v1_1.d)
                                label_fabe74:
                                    v1_1.d = float.s(0x3a83126f)
                                    
                                    if (v0_3.d f>= v1_1.d)
                                        v1_1.d = float.s(0x437f0000)
                                        v0_3.d = v0_3.d f* v1_1.d
                                        v0_3.d = v0_3.d f+ v8.d
                                        x9_2 = vcvts_s32_f32(v0_3.d) << 0x18
                                    else
                                        x9_2 = 0
                                else
                                    x9_2 = -0x1000000
                            
                            var_64 = x10_2 | x8_8 | x11_1 | x9_2
                        
                        void* x8_12 = *(x8 + mulu.dp.d(x9.d, 0x28) + 8)
                        v2_1.d = x23_1[2].d
                        float v6_1 = *(x23_1 + 0x14)
                        float v7_1 = *(x21_1 + 0x50)
                        float v3_1 = x23_1[3].d
                        v0_3.d = *(x23_1 + 0x1c)
                        float v16_1 = *(x8_12 + 0x74)
                        float v4_1 = *(x8_12 + 0x78)
                        v1_1.d = *(x8_12 + 0x7c)
                        float v18_1 = *(x8_12 + 0x70) f* v2_1.d
                        float v5_1 = *(x21_1 + 0x54)
                        v2_1.d = *(x21_1 + 0x58)
                        float v17_1 = v18_1 * *(x21_1 + 0x4c)
                        uint32_t x8_13
                        
                        if (not(v17_1 <= float.s(0x3f7fbe77)))
                            x8_13 = 0xff
                        else if (v17_1 >= float.s(0x3a83126f))
                            x8_13 = vcvts_s32_f32(v17_1 * float.s(0x437f0000) f+ v8.d)
                        else
                            x8_13 = 0
                        
                        v6_1 = v16_1 * v6_1 * v7_1
                        uint32_t x9_4
                        
                        if (not(v6_1 <= float.s(0x3f7fbe77)))
                            x9_4 = 0xff00
                        else if (v6_1 >= float.s(0x3a83126f))
                            x9_4 = vcvts_s32_f32(v6_1 * float.s(0x437f0000) f+ v8.d) << 8
                        else
                            x9_4 = 0
                        
                        v3_1 = v4_1 * v3_1 * v5_1
                        uint32_t x10_4
                        
                        if (not(v3_1 <= float.s(0x3f7fbe77)))
                            x10_4 = 0xff0000
                        else if (v3_1 >= float.s(0x3a83126f))
                            x10_4 = vcvts_s32_f32(v3_1 * float.s(0x437f0000) f+ v8.d) << 0x10
                        else
                            x10_4 = 0
                        
                        v0_3.d = v1_1.d f* v0_3.d
                        v0_3.d = v0_3.d f* v2_1.d
                        v1_1.d = float.s(0x3f7fbe77)
                        uint32_t x11_3
                        
                        if (v0_3.d f<= v1_1.d)
                            v1_1.d = float.s(0x3a83126f)
                            
                            if (v0_3.d f>= v1_1.d)
                                v1_1.d = float.s(0x437f0000)
                                v0_3.d = v0_3.d f* v1_1.d
                                v0_3.d = v0_3.d f+ v8.d
                                x11_3 = vcvts_s32_f32(v0_3.d) << 0x18
                            else
                                x11_3 = 0
                        else
                            x11_3 = -0x1000000
                        
                        uint32_t var_68 = x9_4 | x8_13 | x10_4 | x11_3
                        int64_t var_d8 = SpriteColorSet(&var_68, &var_64)
                        XAsset* x0_5 = SpineMaterial(false, zx.q(*(*x23_1 + 0x38)))
                        int64_t* x23_2 = *(x8 + x9 * 0x28)
                        int64_t* x8_19 = *x23_2
                        
                        if (x8_19 == 0)
                            if (x23_2[1].d == 0x15)
                                XString::GetString()
                                XTrace("Unpreloaded sound %s")
                            
                            AssetCatalogLoadAsset(x23_2, false, true)
                            x8_19 = *x23_2
                        
                        void* x8_22 = x21_1 + 0x60
                        
                        if (*(*x8_19 + 0x20) != 0)
                            x8_22 = *(*x8_22 + 0x58) + 0x28
                        
                        DrawQuadParams(*x8_22, &var_b0, &var_d0, &var_d8, x0_5)
                        x20 = *(x8 + mulu.dp.d(x9.d, 0x28) + 8)
        else
            uint64_t x28_1 = zx.q(*(arg2 + 8))
            
            if (x28_1.d s< 1)
                goto label_fabc88
            
            int64_t* x27_1 = *arg2
            int64_t x22_1 = *(*x23_1 + 8)
            
            if (strcmp(*x27_1, x22_1) != 0)
                void* fp_1 = &x27_1[2]
                int64_t x8_5 = 1
                int64_t x27_2
                
                do
                    x27_2 = x8_5
                    
                    if (x28_1 == x8_5)
                        break
                    
                    int64_t x0_1 = *fp_1
                    fp_1 += 0x10
                    arg1 = strcmp(x0_1, x22_1)
                    x8_5 = x27_2 + 1
                while (arg1 != 0)
                
                if (x27_2 u>= x28_1)
                    goto label_fabc88
    
    i += 1
while (i s< sx.q(*(x20 + 0x20)))
