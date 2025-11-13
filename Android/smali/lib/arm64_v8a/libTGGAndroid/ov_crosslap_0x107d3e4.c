// 函数: ov_crosslap
// 地址: 0x107d3e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x28 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x28 + 0x28)
int32_t result

if (arg1 == arg2)
    result = 0
else
    int32_t x8_1 = arg1[0x10].d
    
    if (x8_1 s< 2 || arg2[0x10].d s< 2)
        result = -0x83
    else
        while (true)
            if (x8_1 == 4)
                while (true)
                    if (arg2[0x10].d == 4 && vorbis_synthesis_pcmout(&arg2[0x48], 0) != 0)
                        void* x0_4
                        void* x22_1
                        
                        if (arg1[1].d != 0)
                            x0_4 = arg1[0xd]
                            
                            if (arg1[0x10].d s< 3)
                                goto label_107d510
                            
                            x22_1 = x0_4 + sx.q(arg1[0x12].d) * 0x38
                            
                            if (arg2[1].d != 0)
                                goto label_107d520
                            
                            goto label_107d504
                        
                        x0_4 = arg1[0xd]
                    label_107d510:
                        x22_1 = x0_4
                        void* x8_9
                        void* x26_1
                        
                        if (arg2[1].d != 0)
                        label_107d520:
                            x8_9 = arg2[0xd]
                            
                            if (arg2[0x10].d s< 3)
                                goto label_107d54c
                            
                            x26_1 = x8_9 + sx.q(arg2[0x12].d) * 0x38
                            
                            if (x0_4 != 0)
                                goto label_107d554
                            
                            goto label_107d53c
                        
                    label_107d504:
                        x8_9 = arg2[0xd]
                    label_107d54c:
                        x26_1 = x8_9
                        int32_t x23_1
                        int32_t x25_1
                        
                        if (x0_4 == 0)
                        label_107d53c:
                            x23_1 = -0x82
                            
                            if (x8_9 != 0)
                                x25_1 = vorbis_synthesis_halfrate_p(x8_9) + 1
                            else
                                x25_1 = -0x82
                        else
                        label_107d554:
                            int32_t x0_5 = vorbis_synthesis_halfrate_p(x0_4)
                            x8_9 = arg2[0xd]
                            x23_1 = x0_5 + 1
                            
                            if (x8_9 == 0)
                                x25_1 = -0x82
                            else
                                x25_1 = vorbis_synthesis_halfrate_p(x8_9) + 1
                        
                        void var_80
                        int64_t* x20_1 =
                            &var_80 - (((sx.q(*(x22_1 + 4)) << 3) + 0xf) & 0xfffffffffffffff0)
                        int64_t* sp_1 = x20_1
                        int32_t x24_1 = vorbis_info_blocksize(x22_1, 0) s>> x23_1
                        int32_t x23_2 = vorbis_info_blocksize(x26_1, 0) s>> x25_1
                        int32_t* x0_13 = vorbis_window(&arg1[0x48], 0)
                        int32_t* x0_15 = vorbis_window(&arg2[0x48], 0)
                        int64_t x8_14 = sx.q(*(x22_1 + 4))
                        
                        if (x8_14.d s>= 1)
                            int64_t i_5 = 0
                            int64_t x10_1 = sx.q(x24_1)
                            
                            if (x8_14.d != 1)
                                i_5 = x8_14 & 0xfffffffffffffffe
                                void* x11_1 = &x20_1[1]
                                int64_t x12_3 = ((x10_1 << 2) + 0xf) & 0xfffffffffffffff0
                                int64_t i_4 = i_5
                                int64_t i
                                
                                do
                                    void* x14_2 = sp_1 - x12_3
                                    void* x15_2 = x14_2 - x12_3
                                    sp_1 = x15_2
                                    *(x11_1 - 8) = x14_2
                                    *x11_1 = x15_2
                                    i = i_4
                                    i_4 -= 2
                                    x11_1 += 0x10
                                while (i != 2)
                            
                            if (x8_14.d == 1 || i_5 != x8_14)
                                do
                                    void* x11_3 = sp_1 - (((x10_1 << 2) + 0xf) & 0xfffffffffffffff0)
                                    sp_1 = x11_3
                                    x20_1[i_5] = x11_3
                                    i_5 += 1
                                while (i_5 s< x8_14)
                        
                        sub_107d8bc(arg1, x22_1, &arg1[0x48], x20_1, x24_1)
                        int64_t* var_70
                        float128 v0_1
                        float128 v1_1
                        float128 v2_1
                        float128 v3_1
                        float128 v4_1
                        float128 v5_1
                        float128 v6_1
                        float128 v7_1
                        v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
                            vorbis_synthesis_lapout(&arg2[0x48], &var_70)
                        int64_t* x8_15 = var_70
                        int64_t x13_1 = sx.q(*(x22_1 + 4))
                        int32_t* x10_5
                        
                        x10_5 = x24_1 s> x23_2 ? x0_15 : x0_13
                        
                        int32_t x12_4 = *(x26_1 + 4)
                        int32_t x9_6
                        
                        x9_6 = x24_1 s> x23_2 ? x23_2 : x24_1
                        
                        int64_t x11_4 = sx.q(x12_4)
                        int64_t x12_5
                        
                        if (x13_1.d s< 1)
                            x12_5 = 0
                        else
                            x12_5 = 0
                            
                            if (x12_4 s>= 1)
                                int64_t x14_3 = sx.q(x9_6)
                                x12_5 = 0
                                v0_1.d = fconvert.s(1f)
                                int64_t i_6 = x14_3 & 0xfffffffffffffff8
                                v1_1.d = fconvert.s(1f)
                                v1_1:4.d = fconvert.s(1f)
                                v1_1:8.d = fconvert.s(1f)
                                v1_1:0xc.d = fconvert.s(1f)
                                
                                do
                                    if (x9_6 s>= 1)
                                        int32_t* x0_18 = x20_1[x12_5]
                                        int32_t* x1_3 = x8_15[x12_5]
                                        int64_t i_7 = 0
                                        
                                        if (x9_6 u< 8)
                                            goto label_107d720
                                        
                                        void* x3_3 = &x1_3[x14_3]
                                        
                                        if (((x1_3 u< &x10_5[sx.q(x9_6)] ? 1 : 0)
                                                & (x10_5 u< x3_3 ? 1 : 0) & 1) != 0)
                                            i_7 = 0
                                        label_107d720:
                                            
                                            do
                                                v2_1.d = x10_5[i_7]
                                                v3_1.d = x1_3[i_7]
                                                v4_1.d = x0_18[i_7]
                                                i_7 += 1
                                                v2_1.d = v2_1.d f* v2_1.d
                                                v5_1.d = v0_1.d f- v2_1.d
                                                v2_1.d = v3_1.d f* v2_1.d
                                                v2_1.d = vfma_f32(v2_1.d, v4_1.d, v5_1.d)
                                                x1_3[i_7] = v2_1.d
                                            while (i_7 s< x14_3)
                                        else
                                            i_7 = 0
                                            
                                            if (((x1_3 u< &x0_18[x14_3] ? 1 : 0)
                                                    & (x0_18 u< x3_3 ? 1 : 0) & 1) != 0)
                                                goto label_107d720
                                            
                                            void* x2_4 = &x1_3[4]
                                            void* x3_6 = &x0_18[4]
                                            int64_t i_3 = i_6
                                            void* x5_2 = &x10_5[4]
                                            int64_t i_1
                                            
                                            do
                                                v2_1 = *(x5_2 - 0x10)
                                                v3_1 = *x5_2
                                                v4_1 = *(x2_4 - 0x10)
                                                v5_1 = *x2_4
                                                v6_1 = *(x3_6 - 0x10)
                                                v7_1 = *x3_6
                                                x5_2 += 0x20
                                                float128 v2_2 = vmulq_f32(v2_1, v2_1, 0)
                                                float128 v3_2 = vmulq_f32(v3_1, v3_1, 0)
                                                float128 v4_2 = vmulq_f32(v4_1, v2_2, 0)
                                                v2_1 = vsubq_f32(v1_1, v2_2)
                                                float128 v5_2 = vmulq_f32(v5_1, v3_2, 0)
                                                v3_1 = vsubq_f32(v1_1, v3_2)
                                                v4_1 = vfmaq_f32(v4_2, v2_1, v6_1)
                                                v5_1 = vfmaq_f32(v5_2, v3_1, v7_1)
                                                i_1 = i_3
                                                i_3 -= 8
                                                *(x2_4 - 0x10) = v4_1
                                                *x2_4 = v5_1
                                                x2_4 += 0x20
                                                x3_6 += 0x20
                                            while (i_1 != 8)
                                            i_7 = i_6
                                            
                                            if (i_6 != x14_3)
                                                goto label_107d720
                                    
                                    x12_5 += 1
                                    
                                    if (x12_5 s>= x13_1)
                                        break
                                while (x12_5 s< x11_4)
                        
                        result = 0
                        
                        if (x12_5.d s< x11_4.d)
                            int64_t x13_2 = sx.q(x9_6)
                            uint64_t i_2 = zx.q(x12_5.d)
                            int64_t j_2 = x13_2 & 0xfffffffffffffff8
                            
                            do
                                if (x9_6 s>= 1)
                                    int32_t* x17_1 = x8_15[i_2]
                                    int64_t j_3 = 0
                                    
                                    if (x9_6 u< 8)
                                    label_107d8a0:
                                        
                                        do
                                            v0_1.d = x10_5[j_3]
                                            v1_1.d = x17_1[j_3]
                                            j_3 += 1
                                            v1_1.d = v0_1.d f* v1_1.d
                                            v0_1.d = v0_1.d f* v1_1.d
                                            x17_1[j_3] = v0_1.d
                                        while (j_3 s< x13_2)
                                    else
                                        if (x17_1 u< &x10_5[sx.q(x9_6)])
                                            j_3 = 0
                                        
                                        if (x17_1 u< &x10_5[sx.q(x9_6)] && x10_5 u< &x17_1[x13_2])
                                            goto label_107d8a0
                                        
                                        void* x18_3 = &x17_1[4]
                                        int64_t j_1 = j_2
                                        void* x1_4 = &x10_5[4]
                                        int64_t j
                                        
                                        do
                                            v0_1 = *(x1_4 - 0x10)
                                            v1_1 = *x1_4
                                            v3_1 = *x18_3
                                            x1_4 += 0x20
                                            j = j_1
                                            j_1 -= 8
                                            v2_1 = vmulq_f32(v0_1, *(x18_3 - 0x10), 0)
                                            v3_1 = vmulq_f32(v1_1, v3_1, 0)
                                            v0_1 = vmulq_f32(v0_1, v2_1, 0)
                                            v1_1 = vmulq_f32(v1_1, v3_1, 0)
                                            *(x18_3 - 0x10) = v0_1
                                            *x18_3 = v1_1
                                            x18_3 += 0x20
                                        while (j != 8)
                                        j_3 = j_2
                                        
                                        if (j_2 != x13_2)
                                            goto label_107d8a0
                                
                                i_2 += 1
                                result = 0
                            while (i_2 != (x11_4 & 0xffffffff))
                        
                        break
                    
                    result = sub_107c6cc(arg2, 0)
                    
                    if ((result & 0x80000000) != 0)
                        if (result != 0xfffffffd)
                            break
                
                break
            
            result = sub_107c6cc(arg1, 0)
            
            if ((result & 0x80000000) != 0 && result != 0xfffffffd)
                break
            
            x8_1 = arg1[0x10].d

if (*(x28 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
