// 函数: _Z23TextureUpdateUVForAtlasP6XAssetPK4Vec2PS1_iS4_
// 地址: 0xfd79c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg1
int32_t* x25
uint128_t v0
uint128_t v1
uint128_t v2
uint128_t v3
uint128_t v4
float128 v16
float128 v17

if (x8 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    v0, v1, v2, v3, v4, v16, v17 = AssetCatalogLoadAsset(arg1, false, true)
    x25 = ***arg1
    
    if (x25 != 0)
        goto label_fd7a44
else
    x25 = **x8
    
    if (x25 != 0)
    label_fd7a44:
        int64_t* x24_1 = *(x25 + 0x28)
        
        if (x24_1 != 0)
            int32_t x8_5 = x25[0xc]
            char const* const x0_5
            
            if (x8_5 != 1)
                int64_t* x9_1 = *x24_1
                
                if (x9_1 == 0)
                    if (x24_1[1].d == 0x15)
                        XString::GetString()
                        XTrace("Unpreloaded sound %s")
                    
                    v0, v1, v2, v3, v4, v16, v17 = AssetCatalogLoadAsset(x24_1, false, true)
                    x9_1 = *x24_1
                    x8_5 = x25[0xc]
                
                int32_t* x9_3 = **x9_1
                
                if (x8_5 == x9_3[0xc])
                    if (arg5 != 0)
                        pthread_kill(pthread_self(), 6)
                        return TextureAssetGet(XNoReturn()) __tailcall
                    
                    if (arg4 s>= 1)
                        v1.d = *x9_3
                        v2.d = x9_3[1]
                        v0.d = fconvert.s(1f)
                        v3.d = x25[0xd]
                        v4.d = x25[0xe]
                        v1.d = float.s(v1.d)
                        v2.d = float.s(v2.d)
                        v1.d = v0.d f/ v1.d
                        v2.d = v0.d f/ v2.d
                        v0.d = *x25
                        v3.d = float.s(v3.d)
                        v4.d = float.s(v4.d)
                        uint64_t x8_7 = zx.q(arg4)
                        v0.d = float.s(v0.d)
                        float v6 = v3.d f+ v0.d
                        v0.d = v1.d f* v3.d
                        v3.d = v1.d f* v6
                        v1.d = v2.d f* v4.d
                        v4.d = v2.d f* (v4.d f+ float.s(x25[1]))
                        v2.d = v3.d f- v0.d
                        v3.d = v4.d f- v1.d
                        uint64_t x9_4
                        
                        if (arg4 u>= 4)
                            x9_4 = x8_7 << 3
                        
                        int64_t i_4
                        
                        if (arg4 u>= 4 && (arg2 + x9_4 u<= arg3 || arg3 + x9_4 u<= arg2))
                            i_4 = x8_7 & 0xfffffffc
                            v4 = vdupq_laneq_s32(v2, 0)
                            uint128_t v5_1 = vdupq_laneq_s32(v0, 0)
                            uint128_t v6_1 = vdupq_laneq_s32(v3, 0)
                            uint128_t v7_1 = vdupq_laneq_s32(v1, 0)
                            int64_t i_3 = i_4
                            Vec2* x11_3 = arg3
                            Vec2 const* x12_2 = arg2
                            int64_t i
                            
                            do
                                v16.d = *x12_2
                                v17.d = *(x12_2 + 4)
                                v16:4.d = *(x12_2 + 8)
                                v17:4.d = *(x12_2 + 0xc)
                                v16:8.d = *(x12_2 + 0x10)
                                v17:8.d = *(x12_2 + 0x14)
                                v16:0xc.d = *(x12_2 + 0x18)
                                v17:0xc.d = *(x12_2 + 0x1c)
                                x12_2 += 0x20
                                i = i_3
                                i_3 -= 4
                                float128 v18_1 = vmulq_f32(v4, v16, 0)
                                v16 = vmulq_f32(v6_1, v17, 0)
                                v17 = vaddq_f32(v5_1, v18_1)
                                float128 v18_2 = vaddq_f32(v7_1, v16)
                                *x11_3 = v17.d
                                *(x11_3 + 4) = v18_2.d
                                *(x11_3 + 8) = v17:4.d
                                *(x11_3 + 0xc) = v18_2:4.d
                                *(x11_3 + 0x10) = v17:8.d
                                *(x11_3 + 0x14) = v18_2:8.d
                                *(x11_3 + 0x18) = v17:0xc.d
                                *(x11_3 + 0x1c) = v18_2:0xc.d
                                x11_3 += 0x20
                            while (i != 4)
                            
                            if (i_4 != x8_7)
                                goto label_fd7b58
                        else
                            i_4 = 0
                        label_fd7b58:
                            int64_t x10_3 = i_4 << 3
                            void* x10_4 = arg2 + x10_3 + 4
                            void* x11_2 = arg3 + x10_3 + 4
                            int64_t i_2 = x8_7 - i_4
                            int64_t i_1
                            
                            do
                                v4.d = *(x10_4 - 4)
                                i_1 = i_2
                                i_2 -= 1
                                v4.d = v2.d f* v4.d
                                v4.d = v0.d f+ v4.d
                                *(x11_2 - 4) = v4.d
                                v4.d = *x10_4
                                x10_4 += 8
                                v4.d = v3.d f* v4.d
                                v4.d = v1.d f+ v4.d
                                *x11_2 = v4.d
                                x11_2 += 8
                            while (i_1 != 1)
                    
                    return 1
                
                XString::operator char const*()
                x0_5 = "didn't find asset in atlas forcing a reimport %s"
            else
                XString::operator char const*()
                x0_5 = "reimporting atlased font texture %s"
            
            XTrace(x0_5)
            AssetCatalogPurgeAsset(arg1)
            AssetCatalogLoadAsset(arg1, true, false)
return 0
