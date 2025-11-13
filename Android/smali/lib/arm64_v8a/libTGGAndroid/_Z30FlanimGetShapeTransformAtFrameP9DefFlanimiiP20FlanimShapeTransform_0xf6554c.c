// 函数: _Z30FlanimGetShapeTransformAtFrameP9DefFlanimiiP20FlanimShapeTransform
// 地址: 0xf6554c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x8_2 = *(arg1 + 0x20) + muls.dp.d(arg2, 0x18) + 8
int64_t x9 = sx.q(*x8_2)
int64_t x10 = *(arg1 + 0x30)
void* x12 = x10 + (x9 << 7)
int32_t x13 = *(x12 + 0x4c)
int64_t x11_1
int32_t x12_1

if (x13 == 4)
    int64_t x12_2 = sx.q(*(x12 + 0x48))
    x11_1 = *(x12 + 0x40)
    uint64_t x12_3
    
    if (x12_2.d - 6 u>= 6)
        int64_t x12_4 = x12_2 * 0x2aaaaaab
        uint64_t x13_3 = zx.q((x12_4 u>> 0x20).d + (x12_4 u>> 0x3f).d)
        x12_3 = 1
        
        while (zx.d(*(x11_1 + (sx.q(x13_3.d) << 2) + (x12_3 << 1))) s<= arg3)
            x12_3 += 1
            
            if (x13_3 == x12_3)
                x12_3 = zx.q(x13_3.d)
                break
    else
        x12_3 = 1
    
    x12_1 = x12_3.d - 1
    goto label_f65604

if (x13 == 2)
    x11_1 = *(x12 + 0x40)
    x12_1 = arg3
label_f65604:
    void* x12_6 = x10 + (x9 << 7)
    *(arg4 + 0x20) = *(x11_1 + (sx.q(x12_1) << 2))
    int32_t x13_4 = *(x12_6 + 0x5c)
    int64_t x11_4
    int32_t x12_7
    
    if (x13_4 == 4)
        int64_t x12_8 = sx.q(*(x12_6 + 0x58))
        x11_4 = *(x12_6 + 0x50)
        uint64_t x12_9
        
        if (x12_8.d - 6 u>= 6)
            int64_t x12_10 = x12_8 * 0x2aaaaaab
            uint64_t x13_7 = zx.q((x12_10 u>> 0x20).d + (x12_10 u>> 0x3f).d)
            x12_9 = 1
            
            while (zx.d(*(x11_4 + (sx.q(x13_7.d) << 2) + (x12_9 << 1))) s<= arg3)
                x12_9 += 1
                
                if (x13_7 == x12_9)
                    x12_9 = zx.q(x13_7.d)
                    break
        else
            x12_9 = 1
        
        x12_7 = x12_9.d - 1
        goto label_f65690
    
    if (x13_4 == 2)
        x11_4 = *(x12_6 + 0x50)
        x12_7 = arg3
    label_f65690:
        void* x12_12 = x10 + (x9 << 7)
        *(arg4 + 0x24) = *(x11_4 + (sx.q(x12_7) << 2))
        int32_t x13_8 = *(x12_12 + 0x6c)
        int64_t x11_7
        int32_t x12_13
        
        if (x13_8 == 4)
            int64_t x12_14 = sx.q(*(x12_12 + 0x68))
            x11_7 = *(x12_12 + 0x60)
            uint64_t x12_15
            
            if (x12_14.d - 6 u>= 6)
                int64_t x12_16 = x12_14 * 0x2aaaaaab
                uint64_t x13_11 = zx.q((x12_16 u>> 0x20).d + (x12_16 u>> 0x3f).d)
                x12_15 = 1
                
                while (zx.d(*(x11_7 + (sx.q(x13_11.d) << 2) + (x12_15 << 1))) s<= arg3)
                    x12_15 += 1
                    
                    if (x13_11 == x12_15)
                        x12_15 = zx.q(x13_11.d)
                        break
            else
                x12_15 = 1
            
            x12_13 = x12_15.d - 1
            goto label_f65720
        
        if (x13_8 == 2)
            x11_7 = *(x12_12 + 0x60)
            x12_13 = arg3
        label_f65720:
            void* x10_1 = x10 + (x9 << 7)
            int64_t* x21_1 = *(*(arg1 + 0x40) + (sx.q(*(x11_7 + (sx.q(x12_13) << 2))) << 3))
            *(arg4 + 0x28) = x21_1
            int32_t x11_9 = *(x10_1 + 0x7c)
            int64_t x9_2
            int32_t x10_2
            
            if (x11_9 == 4)
                int64_t x10_3 = sx.q(*(x10_1 + 0x78))
                x9_2 = *(x10_1 + 0x70)
                uint64_t x10_4
                
                if (x10_3.d - 6 u>= 6)
                    int64_t x10_5 = x10_3 * 0x2aaaaaab
                    uint64_t x11_12 = zx.q((x10_5 u>> 0x20).d + (x10_5 u>> 0x3f).d)
                    x10_4 = 1
                    
                    while (zx.d(*(x9_2 + (sx.q(x11_12.d) << 2) + (x10_4 << 1))) s<= arg3)
                        x10_4 += 1
                        
                        if (x11_12 == x10_4)
                            x10_4 = zx.q(x11_12.d)
                            break
                else
                    x10_4 = 1
                
                x10_2 = x10_4.d - 1
                goto label_f657b0
            
            if (x11_9 == 2)
                x9_2 = *(x10_1 + 0x70)
                x10_2 = arg3
            label_f657b0:
                *(arg4 + 0x30) = *(x9_2 + (sx.q(x10_2) << 2))
                int64_t x8_3 = sx.q(*x8_2)
                int64_t x9_4 = *(arg1 + 0x30)
                int64_t* x10_7 = x9_4 + (x8_3 << 7)
                int32_t x11_13 = *(x10_7 + 0xc)
                int32_t* x10_9
                int32_t* x11_14
                
                if (x11_13 == 3)
                    int64_t x11_15 = sx.q(x10_7[1].d)
                    int64_t x10_10 = *x10_7
                    uint64_t x11_16
                    
                    if (x11_15.d - 0xa u>= 0xa)
                        int64_t x11_17 = x11_15 * 0x66666667
                        uint64_t x12_22 = zx.q((x11_17 s>> 0x22).d + (x11_17 u>> 0x3f).d)
                        x11_16 = 1
                        
                        while (zx.d(*(x10_10 + (sx.q(x12_22.d) << 3) + (x11_16 << 1))) s<= arg3)
                            x11_16 += 1
                            
                            if (x12_22 == x11_16)
                                x11_16 = zx.q(x12_22.d)
                                break
                    else
                        x11_16 = 1
                    
                    int64_t x11_19 = x10_10 + (sx.q(x11_16.d) << 3)
                    x10_9 = x11_19 - 8
                    x11_14 = x11_19 - 4
                    goto label_f65848
                
                if (x11_13 == 1)
                    x10_9 = *x10_7 + (sx.q(arg3) << 3)
                    x11_14 = &x10_9[1]
                label_f65848:
                    int128_t v0
                    v0.d = *x10_9
                    uint64_t v1
                    v1.d = *x11_14
                    void* x11_20 = x9_4 + (x8_3 << 7)
                    *arg4 = v0.d
                    *(arg4 + 4) = v1.d
                    int32_t x12_23 = *(x11_20 + 0x2c)
                    int32_t* x10_13
                    int32_t* x11_21
                    
                    if (x12_23 == 3)
                        int64_t x11_22 = sx.q(*(x11_20 + 0x28))
                        int64_t x10_14 = *(x11_20 + 0x20)
                        uint64_t x11_23
                        
                        if (x11_22.d - 0xa u>= 0xa)
                            int64_t x11_24 = x11_22 * 0x66666667
                            uint64_t x12_26 = zx.q((x11_24 s>> 0x22).d + (x11_24 u>> 0x3f).d)
                            x11_23 = 1
                            
                            while (zx.d(*(x10_14 + (sx.q(x12_26.d) << 3) + (x11_23 << 1))) s<= arg3)
                                x11_23 += 1
                                
                                if (x12_26 == x11_23)
                                    x11_23 = zx.q(x12_26.d)
                                    break
                        else
                            x11_23 = 1
                        
                        int64_t x11_26 = x10_14 + (sx.q(x11_23.d) << 3)
                        x10_13 = x11_26 - 8
                        x11_21 = x11_26 - 4
                        goto label_f658e4
                    
                    if (x12_23 == 1)
                        x10_13 = *(x11_20 + 0x20) + (sx.q(arg3) << 3)
                        x11_21 = &x10_13[1]
                    label_f658e4:
                        v0.d = *x10_13
                        v1.d = *x11_21
                        void* x9_5 = x9_4 + (x8_3 << 7)
                        *(arg4 + 8) = v0.d
                        *(arg4 + 0xc) = v1.d
                        int32_t x10_15 = *(x9_5 + 0x3c)
                        int32_t* x8_6
                        int32_t* x9_6
                        
                        if (x10_15 == 3)
                            int64_t x9_7 = sx.q(*(x9_5 + 0x38))
                            int64_t x8_7 = *(x9_5 + 0x30)
                            uint64_t x9_8
                            
                            if (x9_7.d - 0xa u>= 0xa)
                                int64_t x9_9 = x9_7 * 0x66666667
                                uint64_t x10_18 = zx.q((x9_9 s>> 0x22).d + (x9_9 u>> 0x3f).d)
                                x9_8 = 1
                                
                                while (zx.d(*(x8_7 + (sx.q(x10_18.d) << 3) + (x9_8 << 1))) s<= arg3)
                                    x9_8 += 1
                                    
                                    if (x10_18 == x9_8)
                                        x9_8 = zx.q(x10_18.d)
                                        break
                            else
                                x9_8 = 1
                            
                            int64_t x9_11 = x8_7 + (sx.q(x9_8.d) << 3)
                            x8_6 = x9_11 - 8
                            x9_6 = x9_11 - 4
                            goto label_f65980
                        
                        if (x10_15 == 1)
                            x8_6 = *(x9_5 + 0x30) + (sx.q(arg3) << 3)
                            x9_6 = &x8_6[1]
                        label_f65980:
                            v0.d = *x8_6
                            v1.d = *x9_6
                            *(arg4 + 0x10) = v0.d
                            *(arg4 + 0x14) = v1.d
                            float v2
                            
                            if (x21_1 != 0)
                                int64_t* x8_8 = *x21_1
                                
                                if (x8_8 == 0)
                                    if (x21_1[1].d == 0x15)
                                        XString::GetString()
                                        XTrace("Unpreloaded sound %s")
                                    
                                    v0, v1 = AssetCatalogLoadAsset(x21_1, false, true)
                                    x8_8 = *x21_1
                                
                                int64_t* x8_11 = **x8_8
                                v0.q = *x8_11
                                v2 = x8_11[1].d
                                v1.d = *(x8_11 + 0xc)
                                v0 = vcvt_f32_u32(v0)
                                v1.d = v1.d f* v2
                                v1.d = v0.d f* v1.d
                                v1:4.d = v0:4.d f* v1.d
                                *(arg4 + 0x18) = v1
                                
                                if (zx.d(*(arg1 + 0x5c)) != 0)
                                    goto label_f65ab8
                                
                                goto label_f65a04
                            
                            v1 = *V21
                            *(arg4 + 0x18) = v1
                            
                            if (zx.d(*(arg1 + 0x5c)) == 0)
                            label_f65a04:
                                
                                if (zx.d(*(arg1 + 0x5d)) == 0)
                                    v0.d = *(arg4 + 0x10)
                                    v2 = *(arg4 + 8) f* v1.d
                                    v1.d = *(arg4 + 0xc) f* v1:4.d
                                    float var_50 = v1.d
                                    float cosp
                                    float sinp
                                    sincosf(&sinp, &cosp, v0.d)
                                    int64_t v1_1
                                    v1_1.d = cosp
                                    v1_1:4.d = sinp
                                    int64_t v8
                                    v8.d = v1_1.d f* v2
                                    v8:4.d = v1_1:4.d f* v2
                                    float cosp_1
                                    float sinp_1
                                    int64_t result
                                    int128_t v0_2
                                    int128_t v1_2
                                    int128_t v2_2
                                    result, v0_2, v1_2, v2_2 =
                                        sincosf(&sinp_1, &cosp_1, *(arg4 + 0x14))
                                    v0_2.d = sinp_1
                                    v2_2.d = *V21
                                    float v4_1 = fconvert.s(0.5f)
                                    v1_2.q = *arg4
                                    v0_2.d = fneg(v0_2.d)
                                    v0_2:4.d = cosp_1
                                    v2_2.d = v2_2.d f* v4_1
                                    float v3_1 = *(V21 + 4) * v4_1
                                    v2_2.d = v8.d f* v2_2.d
                                    v2_2:4.d = v8:4.d f* v2_2.d
                                    v0_2.d = v0_2.d f* var_50
                                    v0_2:4.d = v0_2:4.d f* var_50
                                    v0_2.d = v0_2.d f* v3_1
                                    v0_2:4.d = v0_2:4.d f* v3_1
                                    *arg4 = vadd_f32(v1_2, vadd_f32(v2_2, v0_2))
                                    return result
                            else
                            label_f65ab8:
                                v0.d = v1:4.d
                                v1.d = v1.d f/ v0.d
                                v0.d = fconvert.s(1f) f/ v0.d
                                v1.d = v1.d f* *(arg4 + 8)
                                v2 = v0.d f* *(arg4 + 0xc)
                                v0.d = v0.d f* v1.d
                                *(arg4 + 8) = v0.d
                                *(arg4 + 0xc) = v2

pthread_kill(pthread_self(), 6)
DefFlanim* x0_6
int32_t x1_3
int32_t x2
DefFlanimTransform* x3
x0_6, x1_3, x2, x3 = XNoReturn()
return FlanimGetTransformAtFrame(x0_6, x1_3, x2, x3) __tailcall
