// 函数: _Z15ColorRampLookupRK9ColorRampf
// 地址: 0xc1e02c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v2 = *arg1
int64_t x8

if (v2 != fconvert.s(1f))
    float v1 = *(arg1 + 8)
    int64_t x8_3
    int64_t x9
    float v3
    
    if (not(v2 > arg2) && not(v1 < arg2))
        x9 = 0
        x8_3 = 1
    label_c1e074:
        void* x9_1 = arg1 + (x9 << 3)
        void* x8_4 = arg1 + (x8_3 << 3)
        uint32_t x10 = zx.d(*(x9_1 + 4))
        uint32_t x12 = zx.d(*(x9_1 + 5))
        uint32_t x11_2 = zx.d(*(x9_1 + 6))
        uint32_t x9_2 = zx.d(*(x9_1 + 7))
        arg2 = (arg2 - v2) / (v1 - v2)
        v3 = arg2 * float.s(zx.d(*(x8_4 + 4)) - x10)
        v2 = fconvert.s(0.5f)
        float v5 = fconvert.s(-0.5f)
        float v4 = arg2 * float.s(zx.d(*(x8_4 + 5)) - x12)
        v1 = arg2 * float.s(zx.d(*(x8_4 + 6)) - x11_2)
        arg2 = arg2 * float.s(zx.d(*(x8_4 + 7)) - x9_2)
        float v6
        
        v6 = v3 < 0f ? v5 : v2
        
        uint32_t temp0 = vcvts_s32_f32(v3 + v6)
        
        v3 = v4 < 0f ? v5 : v2
        
        char temp0_1 = vcvts_s32_f32(v4 + v3)
        
        v3 = v1 < 0f ? v5 : v2
        
        if (arg2 < 0f)
            v2 = v5
        
        int32_t x8_11 = (0xffffff & ((0xff00ffff
            & ((0xffff00ff & (x10 + temp0)) | zx.d(x12.b + temp0_1) << 8))
            | zx.d(x11_2.b + vcvts_s32_f32(v1 + v3)) << 0x10))
            | zx.d(x9_2.b + vcvts_s32_f32(arg2 + v2)) << 0x18
        return zx.q(x8_11)
    
    if (v1 != fconvert.s(1f))
        v3 = *(arg1 + 0x10)
        
        if (not(v1 > arg2) && not(v3 < arg2))
            x8_3 = 2
            x9 = 1
        label_c1e180:
            v2 = v1
            v1 = v3
            goto label_c1e074
        
        if (v3 != fconvert.s(1f))
            v1 = *(arg1 + 0x18)
            
            if (not(v3 > arg2) && not(v1 < arg2))
                x8_3 = 3
                x9 = 2
                v2 = v3
                goto label_c1e074
            
            if (v1 != fconvert.s(1f))
                v3 = *(arg1 + 0x20)
                
                if (not(v1 > arg2) && not(v3 < arg2))
                    x8_3 = 4
                    x9 = 3
                    goto label_c1e180
                
                if (v3 != fconvert.s(1f))
                    v1 = *(arg1 + 0x28)
                    
                    if (not(v3 > arg2) && not(v1 < arg2))
                        x8_3 = 5
                        x9 = 4
                        v2 = v3
                        goto label_c1e074
                    
                    if (v1 != fconvert.s(1f))
                        v3 = *(arg1 + 0x30)
                        
                        if (not(v1 > arg2) && not(v3 < arg2))
                            x8_3 = 6
                            x9 = 5
                            goto label_c1e180
                        
                        if (v3 != fconvert.s(1f))
                            v1 = *(arg1 + 0x38)
                            
                            if (not(v3 > arg2) && not(v1 < arg2))
                                x8_3 = 7
                                x9 = 6
                                v2 = v3
                                goto label_c1e074
                            
                            if (v1 != fconvert.s(1f))
                                v3 = *(arg1 + 0x40)
                                
                                if (not(v1 > arg2) && not(v3 < arg2))
                                    x8_3 = 8
                                    x9 = 7
                                    goto label_c1e180
                                
                                if (v3 != fconvert.s(1f))
                                    v1 = *(arg1 + 0x48)
                                    
                                    if (not(v3 > arg2) && not(v1 < arg2))
                                        x8_3 = 9
                                        x9 = 8
                                        v2 = v3
                                        goto label_c1e074
                                    
                                    if (v1 != fconvert.s(1f))
                                        v3 = *(arg1 + 0x50)
                                        
                                        if (not(v1 > arg2) && not(v3 < arg2))
                                            x8_3 = 0xa
                                            x9 = 9
                                            goto label_c1e180
                                        
                                        if (v3 != fconvert.s(1f))
                                            v1 = *(arg1 + 0x58)
                                            
                                            if (not(v3 > arg2) && not(v1 < arg2))
                                                x8_3 = 0xb
                                                x9 = 0xa
                                                v2 = v3
                                                goto label_c1e074
                                            
                                            if (v1 != fconvert.s(1f))
                                                v3 = *(arg1 + 0x60)
                                                
                                                if (not(v1 > arg2) && not(v3 < arg2))
                                                    x8_3 = 0xc
                                                    x9 = 0xb
                                                    goto label_c1e180
                                                
                                                if (v3 != fconvert.s(1f))
                                                    v1 = *(arg1 + 0x68)
                                                    
                                                    if (not(v3 > arg2) && not(v1 < arg2))
                                                        x8_3 = 0xd
                                                        x9 = 0xc
                                                        v2 = v3
                                                        goto label_c1e074
                                                    
                                                    if (v1 != fconvert.s(1f))
                                                        v3 = *(arg1 + 0x70)
                                                        
                                                        if (not(v1 > arg2) && not(v3 < arg2))
                                                            x8_3 = 0xe
                                                            x9 = 0xd
                                                            goto label_c1e180
                                                        
                                                        if (v3 != fconvert.s(1f))
                                                            if (not(v3 > arg2))
                                                                v1 = *(arg1 + 0x78)
                                                            
                                                            if (v3 > arg2 || v1 < arg2)
                                                                pthread_kill(pthread_self(), 6)
                                                                MeshMap* x0_3
                                                                int32_t* x1
                                                                ColorRgbaI* x2
                                                                Vec3I* x3
                                                                ColorRgbaI* x4
                                                                x0_3, x1, x2, x3, x4 = XNoReturn()
                                                                return UpdateBestColors(x0_3, x1, x2, 
                                                                    x3, x4) __tailcall
                                                            
                                                            x8_3 = 0xf
                                                            x9 = 0xe
                                                            v2 = v3
                                                            goto label_c1e074
                                                        
                                                        x8 = 0xe
                                                    else
                                                        x8 = 0xd
                                                else
                                                    x8 = 0xc
                                            else
                                                x8 = 0xb
                                        else
                                            x8 = 0xa
                                    else
                                        x8 = 9
                                else
                                    x8 = 8
                            else
                                x8 = 7
                        else
                            x8 = 6
                    else
                        x8 = 5
                else
                    x8 = 4
            else
                x8 = 3
        else
            x8 = 2
    else
        x8 = 1
else
    x8 = 0

return zx.q(*(arg1 + (x8 << 3) + 4))
