// 函数: sub_fd93b0
// 地址: 0xfd93b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x14)

if (x8 != 1 && x8 != 4)
    return XTrace("unsupported format for sanding %s") __tailcall

int64_t result
int128_t v0
int128_t v2
uint128_t v3
int128_t v4
int128_t v6
uint128_t v7
result, v0, v2, v3, v4, v6, v7 = TextureFormatPitch(arg1[1].d, zx.q(x8))
uint64_t x8_1 = zx.q(*(arg1 + 0xc))

if (x8_1.d s>= 1)
    int64_t x11_1 = sx.q(arg1[1].d)
    int64_t x10_1 = *arg1
    int64_t x16_1 = 0
    int32_t x9_1 = 0
    int32_t x1_1 = 1
    v0.q = 0xff000000ff
    result = 0x3a83126f
    float v1_1 = fconvert.s(0.5f)
    v2.d = 0x437f0000
    v2:4.d = 0x437f0000
    int64_t x2_1 = x11_1 & 0xffffffff
    uint128_t v3_1 = vnegq_s64(data_71ae20)
    int64_t x4_1
    
    do
        if (x11_1.d s<= 0)
            x4_1 = x16_1 + 1
            x9_1 += 1
        else
            x4_1 = x16_1 + 1
            int64_t x5_1 = 0
            int64_t x6_1 = x16_1 * x11_1
            int64_t x7_2 = (x16_1 - 1) * x11_1
            x9_1 += 1
            
            while (true)
                int64_t x20_1 = x5_1 + x6_1
                v4.b = *(x10_1 + (x20_1 << 2) + 3)
                v4.d = float.s(v4.d)
                v4.d = v4.d f/ float.s(0x437f0000)
                
                if (v4.d f!= 0f)
                    x5_1 += 1
                    
                    if (x5_1 == x2_1)
                        break
                else
                    v4.q = *(gRgbaBlack + 4)
                    float v5_1 = *gRgbaBlack
                    v4 = vrev64_s32(v4)
                    int32_t x21_6
                    int32_t x22_5
                    
                    if (x5_1 == 0)
                        x21_6 = 0
                        x22_5 = x9_1
                        
                        if (x16_1 != 0)
                        label_fd9648:
                            int32_t x24_10 = *(x10_1 + ((x5_1 + x7_2) << 2))
                            v7.d = float.s(0x437f0000)
                            uint64_t x23_11 = zx.q(x24_10) & 0xff00ff00
                            v6.d = float.s((x23_11 u>> 0x18).d)
                            v6.d = v6.d f/ v7.d
                            v7.d = float.s(0x3b808081)
                            
                            if (not(v6.d f<= v7.d))
                                v6.d = float.s(0x437f0000)
                                v7.d = float.s(x24_10 u>> 0x10 & 0xff)
                                int64_t x23_12 = (zx.q(x24_10 << 0x10) & 0xff0000) | x23_11
                                v6.d = v7.d f/ v6.d
                                v7.q = x23_12
                                v7:8.q = x23_12
                                v5_1 = v5_1 f+ v6.d
                                v4 = vadd_f32(v4, 
                                    vdiv_f32(vcvt_f32_u32(vmovn_s64(vshlq_u64(v7, v3_1)) & v0), v2))
                                x21_6 += 1
                    else
                        uint64_t x21_3
                        int32_t x23_1
                        
                        if (x16_1 != 0)
                            x23_1 = *(x10_1 + ((x5_1 - 1 + x7_2) << 2))
                            v7.d = float.s(0x437f0000)
                            x21_3 = zx.q(x23_1) & 0xff00ff00
                            v6.d = float.s((x21_3 u>> 0x18).d)
                            v6.d = v6.d f/ v7.d
                            v7.d = float.s(0x3b808081)
                        
                        if (x16_1 == 0 || v6.d f<= v7.d)
                            x21_6 = 0
                            
                            if ((x1_1 & 1) != 0)
                            label_fd9554:
                                int32_t x24_4 = *(x10_1 + ((x5_1 - 1 + x6_1) << 2))
                                v7.d = float.s(0x437f0000)
                                uint64_t x23_5 = zx.q(x24_4) & 0xff00ff00
                                v6.d = float.s((x23_5 u>> 0x18).d)
                                v6.d = v6.d f/ v7.d
                                v7.d = float.s(0x3b808081)
                                
                                if (not(v6.d f<= v7.d))
                                    v6.d = float.s(0x437f0000)
                                    v7.d = float.s(x24_4 u>> 0x10 & 0xff)
                                    int64_t x23_6 = (zx.q(x24_4 << 0x10) & 0xff0000) | x23_5
                                    v6.d = v7.d f/ v6.d
                                    v5_1 = v5_1 f+ v6.d
                                    v6.d = float.s((x23_6 u>> 0x10).d)
                                    v6:4.d = (x23_6 u>> 8).d
                                    v4 = vadd_f32(v4, vdiv_f32(vcvt_f32_u32(v6 & v0), v2))
                                    x21_6 += 1
                        else
                            v6.d = float.s(0x437f0000)
                            v7.d = float.s(x23_1 u>> 0x10 & 0xff)
                            int32_t x21_4 = (x23_1 << 0x10 & 0xff0000) | x21_3.d
                            v6.d = v7.d f/ v6.d
                            v5_1 = v5_1 f+ v6.d
                            v6.d = float.s(x21_4 u>> 0x10 & 0xff)
                            v7.d = float.s(x21_4 u>> 8 & 0xff)
                            v6:4.d = v7.d
                            v4 = vadd_f32(v4, vdiv_f32(v6, v2))
                            x21_6 = 1
                            
                            if ((x1_1 & 1) != 0)
                                goto label_fd9554
                        
                        if (x4_1 s< x8_1)
                            int32_t x23_8 = *(x10_1 + ((x5_1 - 1 + x4_1 * x11_1) << 2))
                            v7.d = float.s(0x437f0000)
                            uint64_t x22_3 = zx.q(x23_8) & 0xff00ff00
                            v6.d = float.s((x22_3 u>> 0x18).d)
                            v6.d = v6.d f/ v7.d
                            v7.d = float.s(0x3b808081)
                            
                            if (not(v6.d f<= v7.d))
                                v6.d = float.s(0x437f0000)
                                v7.d = float.s(x23_8 u>> 0x10 & 0xff)
                                int64_t x22_4 = (zx.q(x23_8 << 0x10) & 0xff0000) | x22_3
                                v6.d = v7.d f/ v6.d
                                v7.q = x22_4
                                v7:8.q = x22_4
                                v5_1 = v5_1 f+ v6.d
                                v4 = vadd_f32(v4, 
                                    vdiv_f32(vcvt_f32_u32(vmovn_s64(vshlq_u64(v7, v3_1)) & v0), v2))
                                x21_6 += 1
                        
                        x22_5 = x4_1.d
                        
                        if (x16_1 != 0)
                            goto label_fd9648
                    
                    if (x22_5 s< x8_1.d && (x22_5 & 0x80000000) == 0)
                        int32_t x24_12 = *(x10_1 + ((x5_1 + sx.q(x22_5 * x2_1.d)) << 2))
                        v7.d = float.s(0x437f0000)
                        uint64_t x23_15 = zx.q(x24_12) & 0xff00ff00
                        v6.d = float.s((x23_15 u>> 0x18).d)
                        v6.d = v6.d f/ v7.d
                        v7.d = float.s(0x3b808081)
                        
                        if (not(v6.d f<= v7.d))
                            v6.d = float.s(0x437f0000)
                            v7.d = float.s(x24_12 u>> 0x10 & 0xff)
                            int64_t x23_16 = (zx.q(x24_12 << 0x10) & 0xff0000) | x23_15
                            v6.d = v7.d f/ v6.d
                            v7.q = x23_16
                            v7:8.q = x23_16
                            v5_1 = v5_1 f+ v6.d
                            v4 = vadd_f32(v4, 
                                vdiv_f32(vcvt_f32_u32(vmovn_s64(vshlq_u64(v7, v3_1)) & v0), v2))
                            x21_6 += 1
                    
                    x5_1 += 1
                    
                    if (x16_1 != 0 && x5_1 s< x11_1)
                        int32_t x24_14 = *(x10_1 + ((x5_1 + x7_2) << 2))
                        v7.d = float.s(0x437f0000)
                        uint64_t x23_18 = zx.q(x24_14) & 0xff00ff00
                        v6.d = float.s((x23_18 u>> 0x18).d)
                        v6.d = v6.d f/ v7.d
                        v7.d = float.s(0x3b808081)
                        
                        if (not(v6.d f<= v7.d))
                            v6.d = float.s(0x437f0000)
                            v7.d = float.s(x24_14 u>> 0x10 & 0xff)
                            int64_t x23_19 = (zx.q(x24_14 << 0x10) & 0xff0000) | x23_18
                            v6.d = v7.d f/ v6.d
                            v7.q = x23_19
                            v7:8.q = x23_19
                            v5_1 = v5_1 f+ v6.d
                            v4 = vadd_f32(v4, 
                                vdiv_f32(vcvt_f32_u32(vmovn_s64(vshlq_u64(v7, v3_1)) & v0), v2))
                            x21_6 += 1
                    
                    v6.d = v4:4.d
                    float v16_1
                    
                    if ((((x5_1 s>= x11_1 ? 1 : 0) | not.d(x1_1)) & 1) == 0)
                        int32_t x24_16 = *(x10_1 + ((x5_1 + x6_1) << 2))
                        uint64_t x23_23 = zx.q(x24_16) & 0xff00ff00
                        v7.d = float.s((x23_23 u>> 0x18).d)
                        v7.d = v7.d f/ float.s(0x437f0000)
                        
                        if (not(v7.d f<= float.s(0x3b808081)))
                            v7.d = float.s(0x437f0000)
                            int32_t x23_24 = (x24_16 << 0x10 & 0xff0000) | x23_23.d
                            v5_1 = v5_1 + float.s(x24_16 u>> 0x10 & 0xff) f/ v7.d
                            v16_1 = float.s(x23_24 u>> 0x10 & 0xff) f/ v7.d
                            v7.d = float.s(x23_24 u>> 8 & 0xff) f/ v7.d
                            v6.d = v6.d f+ v7.d
                            v4.d = v4.d f+ v16_1
                            x21_6 += 1
                    
                    uint64_t x22_8
                    int32_t x23_26
                    
                    if (x22_5 s< x8_1.d && x5_1 s< x11_1 && (x22_5 & 0x80000000) == 0)
                        x23_26 = *(x10_1 + ((x5_1 + sx.q(x22_5 * x2_1.d)) << 2))
                        x22_8 = zx.q(x23_26) & 0xff00ff00
                        v7.d = float.s((x22_8 u>> 0x18).d)
                        v7.d = v7.d f/ float.s(0x437f0000)
                    
                    int32_t x21_9
                    int32_t x22_14
                    
                    if (x22_5 s>= x8_1.d || x5_1 s>= x11_1 || (x22_5 & 0x80000000) != 0
                            || v7.d f<= float.s(0x3b808081))
                        if (x21_6 != 0)
                            goto label_fd98a8
                        
                        void* x21_8 = *gAppInterface
                        x21_9 = zx.d(*(x21_8 + 0x43))
                        x22_14 = (0xffff00ff & zx.d(*(x21_8 + 0x41)) << 0x10)
                            | zx.d(*(x21_8 + 0x42)) << 8
                    else
                        v7.d = float.s(0x437f0000)
                        int32_t x22_9 = (x23_26 << 0x10 & 0xff0000) | x22_8.d
                        v5_1 = v5_1 + float.s(x23_26 u>> 0x10 & 0xff) f/ v7.d
                        v16_1 = float.s(x22_9 u>> 0x10 & 0xff) f/ v7.d
                        v7.d = float.s(x22_9 u>> 8 & 0xff) f/ v7.d
                        v6.d = v6.d f+ v7.d
                        v4.d = v4.d f+ v16_1
                        x21_6 += 1
                    label_fd98a8:
                        v7.d = float.s(x21_6)
                        v5_1 = v5_1 f/ v7.d
                        uint32_t x21_7
                        
                        if (v5_1 <= float.s(0x3f7fbe77))
                            if (v5_1 >= float.s(0x3a83126f))
                                x21_7 = vcvts_s32_f32(v5_1 * float.s(0x437f0000) + v1_1)
                                v5_1 = v6.d f/ v7.d
                                v6.d = float.s(0x3f7fbe77)
                                
                                if (v5_1 f> v6.d)
                                    goto label_fd98d0
                                
                                goto label_fd9950
                            
                            x21_7 = 0
                            v5_1 = v6.d f/ v7.d
                            v6.d = float.s(0x3f7fbe77)
                            
                            if (v5_1 f> v6.d)
                                goto label_fd98d0
                            
                            goto label_fd9950
                        
                        x21_7 = 0xff
                        v5_1 = v6.d f/ v7.d
                        v6.d = float.s(0x3f7fbe77)
                        uint32_t x22_11
                        uint64_t x23_29
                        
                        if (v5_1 f<= v6.d)
                        label_fd9950:
                            v6.d = float.s(0x3a83126f)
                            
                            if (v5_1 f>= v6.d)
                                v6.d = float.s(0x437f0000)
                                x22_11 = (zx.q(vcvts_s32_f32(v5_1 f* v6.d + v1_1)) << 8).d
                                v4.d = v4.d f/ v7.d
                                
                                if (not(v4.d f> float.s(0x3f7fbe77)))
                                    goto label_fd99a0
                                
                                x23_29 = 0xff0000
                            else
                                x22_11 = 0
                                v4.d = v4.d f/ v7.d
                                
                                if (not(v4.d f> float.s(0x3f7fbe77)))
                                    goto label_fd99a0
                                
                                x23_29 = 0xff0000
                        else
                        label_fd98d0:
                            x22_11 = 0xff00
                            v4.d = v4.d f/ v7.d
                            
                            if (v4.d f<= float.s(0x3f7fbe77))
                            label_fd99a0:
                                
                                if (v4.d f>= float.s(0x3a83126f))
                                    v4.d = v4.d f* float.s(0x437f0000)
                                    v4.d = v4.d f+ v1_1
                                    x23_29 = zx.q(vcvts_s32_f32(v4.d)) << 0x10
                                else
                                    x23_29 = 0
                            else
                                x23_29 = 0xff0000
                        
                        int32_t x23_33 = x22_11 | x21_7 | x23_29.d
                        x21_9 = (x23_33 & 0xff) << 0x10
                        x22_14 = (x23_29 u>> 0x10).d | (x23_33 & 0xff00)
                    
                    *(x10_1 + (x20_1 << 2)) = x22_14 | x21_9 | 0x1000000
                    
                    if (x5_1 == x2_1)
                        break
        
        x1_1 = x4_1 s< x8_1 ? 1 : 0
        x16_1 = x4_1
    while (x4_1 != x8_1)

return result
