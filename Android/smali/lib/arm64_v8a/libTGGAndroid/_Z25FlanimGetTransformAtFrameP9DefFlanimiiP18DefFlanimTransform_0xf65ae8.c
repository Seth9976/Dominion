// 函数: _Z25FlanimGetTransformAtFrameP9DefFlanimiiP18DefFlanimTransform
// 地址: 0xf65ae8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_90 = v15
int64_t v14
int64_t var_88 = v14
int64_t v13
int64_t var_80 = v13
int64_t v12
int64_t var_78 = v12
int64_t v11
int64_t var_70 = v11
int64_t v10
int64_t var_68 = v10
int64_t v9
int64_t var_60 = v9
int64_t v8
int64_t var_58 = v8
int64_t x25 = *(arg1 + 0x20)
int64_t x26 = sx.q(*(x25 + muls.dp.d(arg2, 0x18) + 8))
int64_t x27 = *(arg1 + 0x30)
DefFlanim* x20 = arg1
void* x9 = x27 + (x26 << 7)
int32_t x10 = *(x9 + 0x4c)
int64_t x8_1
int32_t x9_1

if (x10 == 4)
    int64_t x9_2 = sx.q(*(x9 + 0x48))
    x8_1 = *(x9 + 0x40)
    uint64_t x9_3
    
    if (x9_2.d - 6 u>= 6)
        int64_t x9_4 = x9_2 * 0x2aaaaaab
        uint64_t x10_3 = zx.q((x9_4 u>> 0x20).d + (x9_4 u>> 0x3f).d)
        x9_3 = 1
        
        while (zx.d(*(x8_1 + (sx.q(x10_3.d) << 2) + (x9_3 << 1))) s<= arg3)
            x9_3 += 1
            
            if (x10_3 == x9_3)
                x9_3 = zx.q(x10_3.d)
                break
    else
        x9_3 = 1
    
    x9_1 = x9_3.d - 1
    goto label_f65bbc

if (x10 == 2)
    x8_1 = *(x9 + 0x40)
    x9_1 = arg3
label_f65bbc:
    void* x9_6 = x27 + (x26 << 7)
    *(arg4 + 0x40) = *(x8_1 + (sx.q(x9_1) << 2))
    int32_t x10_4 = *(x9_6 + 0x5c)
    int64_t x8_4
    int32_t x9_7
    
    if (x10_4 == 4)
        int64_t x9_8 = sx.q(*(x9_6 + 0x58))
        x8_4 = *(x9_6 + 0x50)
        uint64_t x9_9
        
        if (x9_8.d - 6 u>= 6)
            int64_t x9_10 = x9_8 * 0x2aaaaaab
            uint64_t x10_7 = zx.q((x9_10 u>> 0x20).d + (x9_10 u>> 0x3f).d)
            x9_9 = 1
            
            while (zx.d(*(x8_4 + (sx.q(x10_7.d) << 2) + (x9_9 << 1))) s<= arg3)
                x9_9 += 1
                
                if (x10_7 == x9_9)
                    x9_9 = zx.q(x10_7.d)
                    break
        else
            x9_9 = 1
        
        x9_7 = x9_9.d - 1
        goto label_f65c48
    
    if (x10_4 == 2)
        x8_4 = *(x9_6 + 0x50)
        x9_7 = arg3
    label_f65c48:
        void* x9_12 = x27 + (x26 << 7)
        *(arg4 + 0x44) = *(x8_4 + (sx.q(x9_7) << 2))
        int32_t x10_8 = *(x9_12 + 0x6c)
        int64_t x22_1
        
        if (x10_8 == 4)
            int64_t x9_14 = sx.q(*(x9_12 + 0x68))
            int64_t x8_8 = *(x9_12 + 0x60)
            uint64_t x9_15
            
            if (x9_14.d - 6 u>= 6)
                int64_t x9_16 = x9_14 * 0x2aaaaaab
                uint64_t x10_11 = zx.q((x9_16 u>> 0x20).d + (x9_16 u>> 0x3f).d)
                x9_15 = 1
                
                while (zx.d(*(x8_8 + (sx.q(x10_11.d) << 2) + (x9_15 << 1))) s<= arg3)
                    x9_15 += 1
                    
                    if (x10_11 == x9_15)
                        x9_15 = zx.q(x10_11.d)
                        break
            else
                x9_15 = 1
            
            x22_1 = sx.q(*(x8_8 + (sx.q(x9_15.d - 1) << 2)))
            
            if ((x22_1.d & 0x80000000) == 0)
                goto label_f65cf8
            
            goto label_f65cec
        
        if (x10_8 == 2)
            x22_1 = sx.q(*(*(x9_12 + 0x60) + (sx.q(arg3) << 2)))
            
            if ((x22_1.d & 0x80000000) == 0)
                goto label_f65cf8
            
        label_f65cec:
            XTrace("image index <0 (%d)")
        label_f65cf8:
            
            if (x22_1.d s>= *(x20 + 0x48))
                XTrace("image index >end (%d >= %d)")
            
            void* x9_19 = x27 + (x26 << 7)
            int64_t* x22_2 = *(*(x20 + 0x40) + (x22_1 << 3))
            *(arg4 + 0x48) = x22_2
            int32_t x10_12 = *(x9_19 + 0x7c)
            int64_t x8_11
            int32_t x9_20
            
            if (x10_12 == 4)
                int64_t x9_21 = sx.q(*(x9_19 + 0x78))
                x8_11 = *(x9_19 + 0x70)
                uint64_t x9_22
                
                if (x9_21.d - 6 u>= 6)
                    int64_t x9_23 = x9_21 * 0x2aaaaaab
                    uint64_t x10_15 = zx.q((x9_23 u>> 0x20).d + (x9_23 u>> 0x3f).d)
                    x9_22 = 1
                    
                    while (zx.d(*(x8_11 + (sx.q(x10_15.d) << 2) + (x9_22 << 1))) s<= arg3)
                        x9_22 += 1
                        
                        if (x10_15 == x9_22)
                            x9_22 = zx.q(x10_15.d)
                            break
                else
                    x9_22 = 1
                
                x9_20 = x9_22.d - 1
                goto label_f65dac
            
            if (x10_12 == 2)
                x8_11 = *(x9_19 + 0x70)
                x9_20 = arg3
            label_f65dac:
                *(arg4 + 0x50) = *(x8_11 + (sx.q(x9_20) << 2))
                int32_t x11_5 = *(x25 + muls.dp.d(arg2, 0x18) + 8)
                
                if (x11_5 != *(x25 + sx.q(arg2) * 0x18 + 0xc))
                    int64_t x8_15 = 0
                    int64_t x9_28 = sx.q(arg3)
                    int32_t x12_5 = x11_5
                    
                    while (true)
                        int64_t x11_8 = *(x20 + 0x30)
                        int64_t x12_6 = sx.q(x12_5)
                        int64_t* x13_1 = x11_8 + (x12_6 << 7)
                        int32_t x14_1 = *(x13_1 + 0xc)
                        float* x13_3
                        void* x14_2
                        
                        if (x14_1 == 3)
                            int64_t x14_3 = sx.q(x13_1[1].d)
                            int64_t x13_4 = *x13_1
                            uint64_t x14_4
                            
                            if (x14_3.d - 0xa u>= 0xa)
                                int64_t x14_5 = x14_3 * 0x66666667
                                uint64_t x15_3 = zx.q((x14_5 s>> 0x22).d + (x14_5 u>> 0x3f).d)
                                x14_4 = 1
                                
                                while (zx.d(*(x13_4 + (sx.q(x15_3.d) << 3) + (x14_4 << 1)))
                                        s<= arg3)
                                    x14_4 += 1
                                    
                                    if (x15_3 == x14_4)
                                        x14_4 = zx.q(x15_3.d)
                                        break
                            else
                                x14_4 = 1
                            
                            int64_t x14_7 = x13_4 + (sx.q(x14_4.d) << 3)
                            x13_3 = x14_7 - 8
                            x14_2 = x14_7 - 4
                        else
                            if (x14_1 != 1)
                                break
                            
                            x13_3 = *x13_1 + (x9_28 << 3)
                            x14_2 = &x13_3[1]
                        
                        int32_t v1 = *x14_2
                        void* x13_5 = arg4 + (x8_15 << 4)
                        void* x12_7 = x11_8 + (x12_6 << 7)
                        *x13_5 = *x13_3
                        *(x13_5 + 4) = v1
                        int32_t x13_6 = *(x12_7 + 0x1c)
                        int32_t* x11_11
                        float* x12_8
                        
                        if (x13_6 == 3)
                            int64_t x12_9 = sx.q(*(x12_7 + 0x18))
                            int64_t x11_12 = *(x12_7 + 0x10)
                            uint64_t x12_10
                            
                            if (x12_9.d - 0xa u>= 0xa)
                                int64_t x12_11 = x12_9 * 0x66666667
                                uint64_t x13_9 = zx.q((x12_11 s>> 0x22).d + (x12_11 u>> 0x3f).d)
                                x12_10 = 1
                                
                                while (zx.d(*(x11_12 + (sx.q(x13_9.d) << 3) + (x12_10 << 1)))
                                        s<= arg3)
                                    x12_10 += 1
                                    
                                    if (x13_9 == x12_10)
                                        x12_10 = zx.q(x13_9.d)
                                        break
                            else
                                x12_10 = 1
                            
                            int64_t x12_13 = x11_12 + (sx.q(x12_10.d) << 3)
                            x11_11 = x12_13 - 8
                            x12_8 = x12_13 - 4
                        else
                            if (x13_6 != 1)
                                break
                            
                            x11_11 = *(x12_7 + 0x10) + (x9_28 << 3)
                            x12_8 = &x11_11[1]
                        
                        float v0 = *x12_8
                        void* x11_13 = arg4 + (x8_15 << 4)
                        x8_15 += 1
                        *(x11_13 + 8) = *x11_11
                        *(x11_13 + 0xc) = v0
                        
                        if (x8_15 == 4)
                            return 
                        
                        x12_5 = (x25 + muls.dp.d(arg2, 0x18) + 8)[x8_15]
                else
                    int64_t x8_14 = *(x20 + 0x30)
                    int64_t x9_27 = sx.q(x11_5)
                    int64_t* x10_16 = x8_14 + (x9_27 << 7)
                    int32_t x11_6 = *(x10_16 + 0xc)
                    int32_t* x10_18
                    int32_t* x11_7
                    
                    if (x11_6 == 3)
                        int64_t x11_14 = sx.q(x10_16[1].d)
                        int64_t x10_19 = *x10_16
                        uint64_t x11_15
                        
                        if (x11_14.d - 0xa u>= 0xa)
                            int64_t x11_16 = x11_14 * 0x66666667
                            uint64_t x12_16 = zx.q((x11_16 s>> 0x22).d + (x11_16 u>> 0x3f).d)
                            x11_15 = 1
                            
                            while (zx.d(*(x10_19 + (sx.q(x12_16.d) << 3) + (x11_15 << 1))) s<= arg3)
                                x11_15 += 1
                                
                                if (x12_16 == x11_15)
                                    x11_15 = zx.q(x12_16.d)
                                    break
                        else
                            x11_15 = 1
                        
                        int64_t x11_18 = x10_19 + (sx.q(x11_15.d) << 3)
                        x10_18 = x11_18 - 8
                        x11_7 = x11_18 - 4
                        goto label_f65fb0
                    
                    if (x11_6 == 1)
                        x10_18 = *x10_16 + (sx.q(arg3) << 3)
                        x11_7 = &x10_18[1]
                    label_f65fb0:
                        void* x12_17 = x8_14 + (x9_27 << 7)
                        int32_t x13_11 = *(x12_17 + 0x2c)
                        v9.d = *x11_7
                        v10.d = *x10_18
                        int32_t* x10_22
                        int32_t* x11_19
                        
                        if (x13_11 == 3)
                            int64_t x11_20 = sx.q(*(x12_17 + 0x28))
                            int64_t x10_23 = *(x12_17 + 0x20)
                            uint64_t x11_21
                            
                            if (x11_20.d - 0xa u>= 0xa)
                                int64_t x11_22 = x11_20 * 0x66666667
                                uint64_t x12_20 = zx.q((x11_22 s>> 0x22).d + (x11_22 u>> 0x3f).d)
                                x11_21 = 1
                                
                                while (zx.d(*(x10_23 + (sx.q(x12_20.d) << 3) + (x11_21 << 1)))
                                        s<= arg3)
                                    x11_21 += 1
                                    
                                    if (x12_20 == x11_21)
                                        x11_21 = zx.q(x12_20.d)
                                        break
                            else
                                x11_21 = 1
                            
                            int64_t x11_24 = x10_23 + (sx.q(x11_21.d) << 3)
                            x10_22 = x11_24 - 8
                            x11_19 = x11_24 - 4
                            goto label_f66048
                        
                        if (x13_11 == 1)
                            x10_22 = *(x12_17 + 0x20) + (sx.q(arg3) << 3)
                            x11_19 = &x10_22[1]
                        label_f66048:
                            void* x9_29 = x8_14 + (x9_27 << 7)
                            int32_t x12_21 = *(x9_29 + 0x3c)
                            v11.d = *x11_19
                            v12.d = *x10_22
                            int32_t* x8_18
                            int32_t* x9_30
                            
                            if (x12_21 == 3)
                                int64_t x9_31 = sx.q(*(x9_29 + 0x38))
                                int64_t x8_19 = *(x9_29 + 0x30)
                                uint64_t x9_32
                                
                                if (x9_31.d - 0xa u>= 0xa)
                                    int64_t x9_33 = x9_31 * 0x66666667
                                    uint64_t x10_26 = zx.q((x9_33 s>> 0x22).d + (x9_33 u>> 0x3f).d)
                                    x9_32 = 1
                                    
                                    while (zx.d(*(x8_19 + (sx.q(x10_26.d) << 3) + (x9_32 << 1)))
                                            s<= arg3)
                                        x9_32 += 1
                                        
                                        if (x10_26 == x9_32)
                                            x9_32 = zx.q(x10_26.d)
                                            break
                                else
                                    x9_32 = 1
                                
                                int64_t x9_35 = x8_19 + (sx.q(x9_32.d) << 3)
                                x8_18 = x9_35 - 8
                                x9_30 = x9_35 - 4
                                goto label_f660e4
                            
                            if (x12_21 == 1)
                                x8_18 = *(x9_29 + 0x30) + (sx.q(arg3) << 3)
                                x9_30 = &x8_18[1]
                            label_f660e4:
                                v8.d = *x9_30
                                float cosp
                                float sinp
                                sincosf(&sinp, &cosp, *x8_18)
                                v14.d = cosp
                                v13.d = sinp
                                float cosp_1
                                float sinp_1
                                uint128_t v0_2
                                int64_t v5_1
                                int128_t v7_1
                                arg1, v0_2, v5_1, v7_1 = sincosf(&sinp_1, &cosp_1, v8.d)
                                v8.d = cosp_1
                                v0_2.d = sinp_1
                                v15.d = fneg(v0_2.d)
                                float v1_1
                                
                                if (x22_2 == 0)
                                    v0_2.q = *V20
                                else
                                    int64_t* x8_20 = *x22_2
                                    
                                    if (x8_20 == 0)
                                        if (x22_2[1].d == 0x15)
                                            XString::GetString()
                                            XTrace("Unpreloaded sound %s")
                                        
                                        arg1, v0_2, v5_1, v7_1 =
                                            AssetCatalogLoadAsset(x22_2, false, true)
                                        x8_20 = *x22_2
                                    
                                    int64_t* x8_23 = **x8_20
                                    v0_2.q = *x8_23
                                    v1_1 = *(x8_23 + 0xc) f* x8_23[1].d
                                    v0_2.d = vcvt_f32_u32(v0_2).d f* v1_1
                                    v0_2:4.d = v0_2:4.d f* v1_1
                                
                                float v4_1 = v12.d f* v14.d
                                float v3_1 = v12.d f* v13.d
                                float v2_1 = v11.d f* v15.d
                                v1_1 = v11.d f* v8.d
                                float v6_1
                                float v16_1
                                
                                if (zx.d(*(x20 + 0x5c)) == 0)
                                    v5_1.d = v0_2:4.d
                                    
                                    if (zx.d(*(x20 + 0x5d)) == 0)
                                        v6_1 = 0f
                                        v7_1.d = 0f
                                    else
                                        v6_1 = fconvert.s(-0.5f)
                                        v16_1 = fconvert.s(0.5f)
                                        v7_1.d = v0_2.d f* v6_1
                                        v6_1 = v5_1.d f* v6_1
                                        v0_2.d = v0_2.d f* v16_1
                                        v5_1.d = v5_1.d f* v16_1
                                else
                                    v6_1 = fconvert.s(-0.5f)
                                    v5_1.d = fconvert.s(0.5f)
                                    v0_2 = vdiv_f32(v0_2, vdup_laneq_s32(v0_2, 1))
                                    v7_1.d = v6_1 f* v0_2.d
                                    v0_2.d = v5_1.d f* v0_2.d
                                
                                v16_1 = v4_1 f* v7_1.d
                                float v17_1 = v2_1 * v6_1
                                v7_1.d = v3_1 f* v7_1.d
                                v6_1 = v1_1 * v6_1
                                v4_1 = v4_1 f* v0_2.d
                                v0_2.d = v3_1 f* v0_2.d
                                v1_1 = v1_1 f* v5_1.d
                                float v19_1 = v6_1 f+ v7_1.d
                                v6_1 = v0_2.d f+ v6_1
                                v7_1.d = v1_1 f+ v7_1.d
                                v0_2.d = v1_1 f+ v0_2.d
                                v2_1 = v2_1 f* v5_1.d
                                v5_1.d = fconvert.s(1f)
                                v5_1:4.d = fconvert.s(1f)
                                v7_1.d = v9.d f+ v7_1.d
                                v0_2.d = v9.d f+ v0_2.d
                                *(arg4 + 8) = 0
                                *arg4 = v10.d f+ v17_1 + v16_1
                                *(arg4 + 4) = v9.d f+ v19_1
                                *(arg4 + 0x10) = v10.d f+ v4_1 + v17_1
                                *(arg4 + 0x14) = v9.d f+ v6_1
                                *(arg4 + 0x20) = v10.d f+ v2_1 + v16_1
                                *(arg4 + 0x24) = v7_1.d
                                *(arg4 + 0x30) = v10.d f+ v2_1 + v4_1
                                *(arg4 + 0x34) = v0_2.d
                                *(arg4 + 0x18) = 0x3f800000
                                *(arg4 + 0x28) = 0x3f80000000000000
                                *(arg4 + 0x38) = v5_1
                                return 

pthread_kill(pthread_self(), 6)
DefFlanimTransform* x0_6
DefFlanimTransform* x1_5
x0_6, x1_5 = XNoReturn()
return FlanimHasUnlerpableChange(x0_6, x1_5) __tailcall
