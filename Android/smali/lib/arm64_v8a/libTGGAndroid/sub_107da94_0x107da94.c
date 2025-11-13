// 函数: sub_107da94
// 地址: 0x107da94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x27 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x27 + 0x28)
int32_t x8_1 = arg1[0x10].d
int32_t result

if (x8_1 s>= 2)
    while (true)
        if (x8_1 == 4)
            void* x0_1 = arg1[0xd]
            void* x26_1 = x0_1
            
            if (arg1[1].d != 0)
                x26_1 = x0_1 + sx.q(arg1[0x12].d) * 0x38
            
            int32_t x19_1
            
            if (x0_1 == 0)
                x19_1 = -0x82
            else
                x19_1 = vorbis_synthesis_halfrate_p() + 1
            
            int64_t x28_1 = sx.q(*(x26_1 + 4))
            int64_t x23_1 = x28_1 & 0xffffffff
            int32_t x21_1 = vorbis_info_blocksize(x26_1, 0) s>> x19_1
            int32_t* var_80
            int64_t* x19_2 = &var_80 - (((x28_1 << 3) + 0xf) & 0xfffffffffffffff0)
            var_80 = vorbis_window(&arg1[0x48], 0)
            int64_t* sp_1 = x19_2
            
            if (x28_1.d s>= 1)
                int64_t i_7 = 0
                int64_t x9_4 = sx.q(x21_1)
                
                if (x28_1.d != 1)
                    i_7 = x23_1 & 0xfffffffe
                    void* x10_1 = &x19_2[1]
                    int64_t x11_3 = ((x9_4 << 2) + 0xf) & 0xfffffffffffffff0
                    int64_t i_6 = i_7
                    int64_t i
                    
                    do
                        void* x13_2 = sp_1 - x11_3
                        void* x14_2 = x13_2 - x11_3
                        sp_1 = x14_2
                        *(x10_1 - 8) = x13_2
                        *x10_1 = x14_2
                        i = i_6
                        i_6 -= 2
                        x10_1 += 0x10
                    while (i != 2)
                
                if (x28_1.d == 1 || i_7 != x23_1)
                    void* x10_2 = &x19_2[i_7]
                    int64_t i_5 = x23_1 - i_7
                    int64_t i_1
                    
                    do
                        void* x11_5 = sp_1 - (((x9_4 << 2) + 0xf) & 0xfffffffffffffff0)
                        sp_1 = x11_5
                        i_1 = i_5
                        i_5 -= 1
                        *x10_2 = x11_5
                        x10_2 += 8
                    while (i_1 != 1)
            
            sub_107d8bc(arg1, x26_1, &arg1[0x48], x19_2, x21_1)
            result = arg3(arg1, arg2)
            
            if (result == 0)
                while (true)
                    if (arg1[0x10].d == 4 && vorbis_synthesis_pcmout(&arg1[0x48], 0) != 0)
                        void* x0_12
                        
                        if (arg1[1].d == 0)
                            x0_12 = arg1[0xd]
                        else
                            x0_12 = arg1[0xd]
                            
                            if (arg1[0x10].d s>= 3)
                                x0_12 += sx.q(arg1[0x12].d) * 0x38
                        
                        int32_t x25_1 = *(x0_12 + 4)
                        int64_t x24_1 = sx.q(x25_1)
                        int32_t x26_2 = vorbis_info_blocksize(x0_12, 0) s>> x19_1
                        int32_t* x0_15 = vorbis_window(&arg1[0x48], 0)
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
                            vorbis_synthesis_lapout(&arg1[0x48], &var_70)
                        int64_t* x8_9 = var_70
                        int32_t x9_8
                        
                        x9_8 = x21_1 s> x26_2 ? x26_2 : x21_1
                        
                        int32_t* x10_4
                        
                        x10_4 = x21_1 s> x26_2 ? x0_15 : var_80
                        
                        int64_t x11_6
                        
                        if (x23_1.d s< 1)
                            x11_6 = 0
                        else
                            x11_6 = 0
                            
                            if (x25_1 s>= 1)
                                int64_t x12_1 = sx.q(x9_8)
                                x11_6 = 0
                                v0_1.d = fconvert.s(1f)
                                int64_t i_8 = x12_1 & 0xfffffffffffffff8
                                v1_1.d = fconvert.s(1f)
                                v1_1:4.d = fconvert.s(1f)
                                v1_1:8.d = fconvert.s(1f)
                                v1_1:0xc.d = fconvert.s(1f)
                                
                                do
                                    if (x9_8 s>= 1)
                                        int32_t* x17_1 = x19_2[x11_6]
                                        int32_t* x18_2 = x8_9[x11_6]
                                        int64_t i_9 = 0
                                        
                                        if (x9_8 u< 8)
                                            goto label_107dd60
                                        
                                        void* x1_4 = &x18_2[x12_1]
                                        
                                        if (((x18_2 u< &x10_4[sx.q(x9_8)] ? 1 : 0)
                                                & (x10_4 u< x1_4 ? 1 : 0) & 1) != 0)
                                            i_9 = 0
                                        label_107dd60:
                                            
                                            do
                                                v2_1.d = x10_4[i_9]
                                                v3_1.d = x18_2[i_9]
                                                v4_1.d = x17_1[i_9]
                                                i_9 += 1
                                                v2_1.d = v2_1.d f* v2_1.d
                                                v5_1.d = v0_1.d f- v2_1.d
                                                v2_1.d = v3_1.d f* v2_1.d
                                                v2_1.d = vfma_f32(v2_1.d, v4_1.d, v5_1.d)
                                                x18_2[i_9] = v2_1.d
                                            while (i_9 s< x12_1)
                                        else
                                            i_9 = 0
                                            
                                            if (((x18_2 u< &x17_1[x12_1] ? 1 : 0)
                                                    & (x17_1 u< x1_4 ? 1 : 0) & 1) != 0)
                                                goto label_107dd60
                                            
                                            void* x0_19 = &x18_2[4]
                                            void* x1_7 = &x17_1[4]
                                            int64_t i_4 = i_8
                                            void* x3_3 = &x10_4[4]
                                            int64_t i_2
                                            
                                            do
                                                v2_1 = *(x3_3 - 0x10)
                                                v3_1 = *x3_3
                                                v4_1 = *(x0_19 - 0x10)
                                                v5_1 = *x0_19
                                                v6_1 = *(x1_7 - 0x10)
                                                v7_1 = *x1_7
                                                x3_3 += 0x20
                                                float128 v2_2 = vmulq_f32(v2_1, v2_1, 0)
                                                float128 v3_2 = vmulq_f32(v3_1, v3_1, 0)
                                                float128 v4_2 = vmulq_f32(v4_1, v2_2, 0)
                                                v2_1 = vsubq_f32(v1_1, v2_2)
                                                float128 v5_2 = vmulq_f32(v5_1, v3_2, 0)
                                                v3_1 = vsubq_f32(v1_1, v3_2)
                                                v4_1 = vfmaq_f32(v4_2, v2_1, v6_1)
                                                v5_1 = vfmaq_f32(v5_2, v3_1, v7_1)
                                                i_2 = i_4
                                                i_4 -= 8
                                                *(x0_19 - 0x10) = v4_1
                                                *x0_19 = v5_1
                                                x0_19 += 0x20
                                                x1_7 += 0x20
                                            while (i_2 != 8)
                                            i_9 = i_8
                                            
                                            if (i_8 != x12_1)
                                                goto label_107dd60
                                    
                                    x11_6 += 1
                                    
                                    if (x11_6 s>= x28_1)
                                        break
                                while (x11_6 s< x24_1)
                        
                        result = 0
                        
                        if (x11_6.d s< x24_1.d)
                            int64_t x12_2 = sx.q(x9_8)
                            uint64_t i_3 = zx.q(x11_6.d)
                            int64_t j_2 = x12_2 & 0xfffffffffffffff8
                            
                            do
                                if (x9_8 s>= 1)
                                    int32_t* x17_2 = x8_9[i_3]
                                    int64_t j_3 = 0
                                    
                                    if (x9_8 u< 8)
                                    label_107dee0:
                                        
                                        do
                                            v0_1.d = x10_4[j_3]
                                            v1_1.d = x17_2[j_3]
                                            j_3 += 1
                                            v1_1.d = v0_1.d f* v1_1.d
                                            v0_1.d = v0_1.d f* v1_1.d
                                            x17_2[j_3] = v0_1.d
                                        while (j_3 s< x12_2)
                                    else
                                        if (x17_2 u< &x10_4[sx.q(x9_8)])
                                            j_3 = 0
                                        
                                        if (x17_2 u< &x10_4[sx.q(x9_8)] && x10_4 u< &x17_2[x12_2])
                                            goto label_107dee0
                                        
                                        void* x18_4 = &x17_2[4]
                                        int64_t j_1 = j_2
                                        void* x1_8 = &x10_4[4]
                                        int64_t j
                                        
                                        do
                                            v0_1 = *(x1_8 - 0x10)
                                            v1_1 = *x1_8
                                            v3_1 = *x18_4
                                            x1_8 += 0x20
                                            j = j_1
                                            j_1 -= 8
                                            v2_1 = vmulq_f32(v0_1, *(x18_4 - 0x10), 0)
                                            v3_1 = vmulq_f32(v1_1, v3_1, 0)
                                            v0_1 = vmulq_f32(v0_1, v2_1, 0)
                                            v1_1 = vmulq_f32(v1_1, v3_1, 0)
                                            *(x18_4 - 0x10) = v0_1
                                            *x18_4 = v1_1
                                            x18_4 += 0x20
                                        while (j != 8)
                                        j_3 = j_2
                                        
                                        if (j_2 != x12_2)
                                            goto label_107dee0
                                
                                i_3 += 1
                                result = 0
                            while (i_3 != (x24_1 & 0xffffffff))
                        
                        break
                    
                    result = sub_107c6cc(arg1, 0)
                    
                    if ((result & 0x80000000) != 0)
                        if (result != 0xfffffffd)
                            break
            
            break
        
        result = sub_107c6cc(arg1, 0)
        
        if ((result & 0x80000000) != 0 && result != 0xfffffffd)
            break
        
        x8_1 = arg1[0x10].d
else
    result = -0x83

if (*(x27 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
