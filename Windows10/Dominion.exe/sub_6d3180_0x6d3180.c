// 函数: sub_6d3180
// 地址: 0x6d3180
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
int32_t var_1a4 = 1
int32_t var_1a0 = 0
int32_t eax_2 = *(arg3 + 0x64)
int64_t var_1e4 = *(arg3 + 0x5c)
int32_t var_1dc = eax_2
int32_t var_1a8 = 0
void* var_154 = nullptr
int32_t var_1c0 = 0
int32_t var_1f8
int64_t* eax_5 = sub_6d17c0(&var_1f8, arg3, arg2, &var_1f8, *(arg3 + 0x44), *(arg3 + 0x4c))
float var_b0
float xmm2 = var_b0
float var_c0
float xmm3 = var_c0
float var_c4
float xmm5 = var_c4
void* edi_1 = eax_5[1].d
float var_cc
float xmm1 = var_cc
float var_d4
float xmm7 = var_d4
float var_d8
float xmm4 = var_d8
int64_t var_19c = *eax_5
char* eax_6 = var_19c.d
void* edx_1 = var_19c:4.d
float var_b4
float var_1b0 = var_b4
float var_b8
float var_1ac = var_b8
float var_bc
float var_188 = var_bc
float var_c8
float var_18c = var_c8
float var_d0
float xmm0_7 = var_d0
void* var_158 = edi_1
void* var_194 = edi_1
char* var_17c = eax_6
float var_1b8 = xmm2
float var_170 = xmm3
float var_178 = xmm5
float var_160 = xmm1
float var_15c = xmm0_7
float var_184 = xmm7
float var_180 = xmm4

while (true)
    int32_t var_1bc_1 = var_1a8
    
    if (edx_1 s>= edi_1)
        break
    
    eax_6.b = *(eax_6 + edx_1)
    void* edi_2 = nullptr
    uint32_t eax_7 = zx.d(eax_6.b)
    edx_1 += 1
    char* ecx_2 = edx_1
    int32_t var_190_1 = 1
    void* var_164_1 = edx_1
    var_19c:4.d = edx_1
    
    if (eax_7 - 1 u> 0x1e)
    label_6d448a:
        float xmm0_60
        
        if (eax_7 == 0xff)
            edi_1 = var_158
            char* eax_167
            
            if (ecx_2 s< edi_1)
                edx_1 = &ecx_2[1]
                char* eax_168
                eax_168.b = *(ecx_2 + var_17c)
                eax_167 = edx_1
                ecx_2.b = eax_168.b
            else
                eax_167 = ecx_2
                ecx_2.b = 0
            
            if (eax_167 s< edi_1)
                eax_167.b = *(var_17c + edx_1)
                edx_1 += 1
            else
                eax_167.b = 0
            
            char* eax_169
            
            if (edx_1 s< edi_1)
                eax_169.b = *(var_17c + edx_1)
                edx_1 += 1
            else
                eax_169.b = 0
            
            char* eax_170
            
            if (edx_1 s< edi_1)
                eax_170.b = *(var_17c + edx_1)
                edx_1 += 1
            else
                eax_170.b = 0
            
            xmm0_60 = _mm_cvtepi32_ps(
                zx.o(((zx.d(ecx_2.b) << 8 | zx.d(eax_167.b)) << 8 | zx.d(eax_169.b)) << 8)
                | zx.o(eax_170.b)) * 1.52587891e-05f
        else
            if (eax_7 != 0x1c && eax_7 - 0x20 u> 0xde)
                break
            
            if (edx_1 - 1 s<= var_158)
                var_19c:4.d = edx_1 - 1
            
            if (edx_1 - 1 s> var_158 || edx_1 - 1 s< 0)
                var_19c:4.d = var_158
            
            int16_t eax_164 = sub_6d14d0(&var_19c)
            edi_1 = var_194
            edx_1 = var_19c:4.d
            var_158 = edi_1
            char* eax_166 = var_19c.d
            xmm0_60 = _mm_cvtepi32_ps(zx.o(sx.d(eax_164)))
            var_17c = eax_166
        
        void* eax_172 = var_154
        
        if (eax_172 s>= 0x30)
            break
        
        (&var_d8)[eax_172] = xmm0_60
        xmm3 = var_c0
        xmm5 = var_c4
        float xmm2_32 = var_c8
        xmm1 = var_cc
        xmm7 = var_d4
        xmm4 = var_d8
        var_1b8 = var_b0
        var_1b0 = var_b4
        var_1ac = var_b8
        var_188 = var_bc
        xmm0_7 = var_d0
        var_154 = eax_172 + 1
        var_190_1 = 0
        var_170 = xmm3
        var_178 = xmm5
        var_18c = xmm2_32
        var_160 = xmm1
        var_15c = xmm0_7
        var_184 = xmm7
        var_180 = xmm4
        goto label_6d39dd
    
    int64_t var_22c
    void var_dc
    void* eax_20
    int32_t eax_22
    void* eax_35
    void* eax_50
    int32_t ecx_6
    void* ecx_39
    int32_t edx_10
    int32_t edi_3
    void* edi_9
    float xmm0_9
    float xmm1_2
    
    switch (eax_7 + &jump_table_6d46bc[0x13]:3)
        case &lookup_table_6d470c, &lookup_table_6d470c[2], &lookup_table_6d470c[0x11], 
                &lookup_table_6d470c[0x16]
            int32_t eax_17
            int32_t edx_9
            edx_9:eax_17 = sx.q(var_154)
            edx_1 = var_164_1
            var_1a0 += (eax_17 - edx_9) s>> 1
        label_6d39d7:
            edi_1 = var_158
        label_6d39dd:
            ecx_39 = var_154
        label_6d39e3:
            xmm2 = var_1b8
            void* eax_76 = nullptr
            
            if (var_190_1 == 0)
                eax_76 = ecx_39
            
            var_154 = eax_76
            eax_6 = var_17c
            continue
        case &lookup_table_6d470c[1], &lookup_table_6d470c[8], &lookup_table_6d470c[0xc], 
                &lookup_table_6d470c[0xe], &lookup_table_6d470c[0xf], &lookup_table_6d470c[0x10], 
                &lookup_table_6d470c[0x1b]
            goto label_6d448a
        case &lookup_table_6d470c[3]
            var_1a4 = 0
            
            if (var_154 s< 1)
                break
            
            sub_6d2f70(arg4)
            eax_20 = var_154
            xmm1_2 = arg4[4] f+ 0f
            goto label_6d3426
        case &lookup_table_6d470c[4]
            if (var_154 s< 2)
                break
            
            int32_t ecx_13 = arg4[0xb]
            int32_t* edi_4 = &var_d4
            int32_t var_168_2 = 1
            int32_t eax_34
            
            do
                bool cond:10_1 = *arg4 == 0
                float xmm1_6 = edi_4[-1] f+ arg4[4]
                float xmm0_12 = *edi_4 f+ arg4[5]
                arg4[4] = xmm1_6
                arg4[5] = xmm0_12
                int32_t eax_27 = int.d(xmm1_6)
                
                if (cond:10_1)
                    int32_t eax_28 = arg4[0xa]
                    int32_t ecx_16 = (ecx_13 << 3) - arg4[0xb]
                    *(eax_28 + (ecx_16 << 1) + 0xc) = 2
                    *(eax_28 + (ecx_16 << 1)) = (int.d(xmm1_6)).w
                    *(eax_28 + (ecx_16 << 1) + 2) = (int.d(xmm0_12)).w
                    *(eax_28 + (ecx_16 << 1) + 4) = 0
                    *(arg4[0xa] + arg4[0xb] * 0xe + 8) = 0
                    *(arg4[0xa] + arg4[0xb] * 0xe + 0xa) = 0
                else
                    sub_6d2e70(eax_27, eax_27, arg4, int.d(xmm0_12))
                
                edi_4 = &edi_4[2]
                arg4[0xb] += 1
                eax_34 = var_168_2 + 2
                ecx_13 = arg4[0xb]
                var_168_2 = eax_34
            while (eax_34 s< var_154)
            xmm0_7 = var_15c
            xmm1 = var_160
            edx_1 = var_164_1
            goto label_6d39d7
        case &lookup_table_6d470c[5]
            if (var_154 s< 1)
                break
            
            do
                bool cond:5_1 = *arg4 == 0
                float xmm0_14 = arg4[5] f+ 0f
                float xmm1_8 = (&var_d8)[edi_2] f+ arg4[4]
                arg4[5] = xmm0_14
                arg4[4] = xmm1_8
                int32_t eax_36 = int.d(xmm1_8)
                
                if (cond:5_1)
                    int32_t ecx_25 = arg4[0xb] * 7
                    int32_t eax_38 = arg4[0xa]
                    *(eax_38 + (ecx_25 << 1)) = (int.d(xmm1_8)).w
                    *(eax_38 + (ecx_25 << 1) + 0xc) = 2
                    *(eax_38 + (ecx_25 << 1) + 2) = (int.d(xmm0_14)).w
                    *(eax_38 + (ecx_25 << 1) + 4) = 0
                    *(arg4[0xa] + arg4[0xb] * 0xe + 8) = 0
                    *(arg4[0xa] + arg4[0xb] * 0xe + 0xa) = 0
                else
                    sub_6d2e70(eax_36, eax_36, arg4, int.d(xmm0_14))
                
                arg4[0xb] += 1
                edi_2 += 1
                eax_35 = var_154
            label_6d36dc:
                
                if (edi_2 s>= eax_35)
                    goto label_6d34a7
                
                bool cond:7_1 = *arg4 == 0
                float xmm1_10 = arg4[4] f+ 0f
                float xmm0_16 = (&var_d8)[edi_2] f+ arg4[5]
                arg4[4] = xmm1_10
                arg4[5] = xmm0_16
                int32_t eax_43 = int.d(xmm1_10)
                
                if (cond:7_1)
                    int32_t ecx_32 = arg4[0xb] * 7
                    int32_t eax_45 = arg4[0xa]
                    *(eax_45 + (ecx_32 << 1)) = (int.d(xmm1_10)).w
                    *(eax_45 + (ecx_32 << 1) + 0xc) = 2
                    *(eax_45 + (ecx_32 << 1) + 2) = (int.d(xmm0_16)).w
                    *(eax_45 + (ecx_32 << 1) + 4) = 0
                    *(arg4[0xa] + arg4[0xb] * 0xe + 8) = 0
                    *(arg4[0xa] + arg4[0xb] * 0xe + 0xa) = 0
                else
                    sub_6d2e70(eax_43, eax_43, arg4, int.d(xmm0_16))
                
                arg4[0xb] += 1
                edi_2 += 1
            while (edi_2 s< var_154)
            
            xmm0_7 = var_15c
            xmm1 = var_160
            edx_1 = var_164_1
            goto label_6d39d7
        case &lookup_table_6d470c[6]
            eax_35 = var_154
            
            if (eax_35 s>= 1)
                goto label_6d36dc
            
            break
        case &lookup_table_6d470c[7]
            if (var_154 s< 6)
                break
            
            int32_t var_168_3 = 5
            int32_t* edi_5 = &var_d4
            int32_t eax_75
            
            do
                edx_1.b = 4
                float xmm4_6 = *edi_5 f+ arg4[5]
                float xmm5_6 = edi_5[-1] f+ arg4[4]
                float xmm0_22 = xmm4_6 f+ edi_5[2]
                float xmm2_6 = xmm5_6 f+ edi_5[1]
                float xmm1_17 = xmm0_22 f+ edi_5[4]
                float xmm3_6 = xmm2_6 f+ edi_5[3]
                var_22c:4.d = int.d(xmm2_6)
                arg4[4] = xmm3_6
                var_22c.d = int.d(xmm4_6)
                arg4[5] = xmm1_17
                int32_t eax_73 = int.d(xmm3_6)
                sub_6d2ee0(eax_73, edx_1, arg4, eax_73, int.d(xmm1_17), int.d(xmm5_6), var_22c, 
                    int.d(xmm0_22))
                eax_75 = var_168_3 + 6
                edi_5 = &edi_5[6]
                var_168_3 = eax_75
            while (eax_75 s< var_154)
            goto label_6d39a9
        case &lookup_table_6d470c[9]
            edi_9 = arg3
            
            if (var_1c0 == 0)
                if (*(edi_9 + 0x7c) != 0)
                    void var_208
                    int64_t* eax_112 = sub_6d2fe0(&var_208, arg2, edi_9, &var_208)
                    int32_t eax_113 = eax_112[1].d
                    var_1e4 = *eax_112
                    int32_t var_1dc_1 = eax_113
                
                var_1c0 = 1
            
            goto label_6d3e40
        case &lookup_table_6d470c[0xa]
            if (var_1a8 s<= 0)
                break
            
            var_190_1 = 0
            var_1a8 -= 1
            int32_t eax_127 = var_1bc_1 * 3
            edi_1 = (&var_154)[eax_127]
            var_19c = *(&var_15c + (eax_127 << 2))
            edx_1 = var_19c:4.d
            xmm0_7 = var_15c
            var_158 = edi_1
            var_194 = edi_1
            var_17c = var_19c.d
            goto label_6d39dd
        case &lookup_table_6d470c[0xb]
            edi_1 = var_158
            
            if (ecx_2 s< edi_1)
                edx_1.b = *(ecx_2 + var_17c)
                var_164_1 = &ecx_2[1]
            else
                edx_1.b = 0
            
            if (zx.d(edx_1.b) - 0x22 u> 3)
                break
            
            float xmm0_43
            float xmm1_31
            float xmm2_16
            float xmm3_18
            float xmm4_16
            float xmm5_17
            
            switch (edx_1.b)
                case 0x22
                    if (var_154 s< 7)
                        break
                    
                    float xmm5_15 = xmm4 f+ arg4[4]
                    float xmm4_14 = arg4[5] f+ 0f
                    edx_1.b = 4
                    float xmm2_14 = xmm7 + xmm5_15
                    float xmm0_41 = xmm0_7 + xmm4_14
                    float xmm3_16 = xmm1 + xmm2_14
                    arg4[4] = xmm3_16
                    float xmm1_29 = xmm0_41 + 0f
                    var_22c:4.d = int.d(xmm2_14)
                    arg4[5] = xmm1_29
                    var_22c.d = int.d(xmm4_14)
                    int32_t eax_138 = int.d(xmm3_16)
                    sub_6d2ee0(eax_138, edx_1, arg4, eax_138, int.d(xmm1_29), int.d(xmm5_15), 
                        var_22c, int.d(xmm0_41))
                    xmm4_16 = arg4[5] f+ 0f
                    xmm3_18 = var_18c f+ arg4[4]
                    xmm0_43 = xmm4_16 - var_15c
                    xmm5_17 = var_178 + xmm3_18
                    xmm1_31 = var_170 + xmm5_17
                    xmm2_16 = xmm0_43 + 0f
                case 0x23
                    if (var_154 s< 0xd)
                        break
                    
                    float xmm5_19 = xmm4 f+ arg4[4]
                    float xmm4_18 = xmm7 f+ arg4[5]
                    edx_1.b = 4
                    float xmm2_18 = xmm0_7 + xmm5_19
                    float xmm0_45 = xmm1 + xmm4_18
                    float xmm3_20 = var_18c + xmm2_18
                    float xmm1_33 = var_178 + xmm0_45
                    arg4[4] = xmm3_20
                    arg4[5] = xmm1_33
                    var_22c:4.d = int.d(xmm2_18)
                    var_22c.d = int.d(xmm4_18)
                    int32_t eax_144 = int.d(xmm3_20)
                    sub_6d2ee0(eax_144, edx_1, arg4, eax_144, int.d(xmm1_33), int.d(xmm5_19), 
                        var_22c, int.d(xmm0_45))
                    xmm3_18 = var_170 f+ arg4[4]
                    xmm4_16 = var_188 f+ arg4[5]
                    xmm5_17 = var_1ac + xmm3_18
                    xmm0_43 = var_1b0 + xmm4_16
                    xmm1_31 = var_1b8 + xmm5_17
                    float var_ac
                    xmm2_16 = var_ac + xmm0_43
                case 0x24
                    if (var_154 s< 9)
                        break
                    
                    float xmm5_22 = xmm4 f+ arg4[4]
                    float xmm4_21 = xmm7 f+ arg4[5]
                    edx_1.b = 4
                    float xmm2_21 = xmm0_7 + xmm5_22
                    float xmm0_48 = xmm1 + xmm4_21
                    float xmm3_23 = var_18c + xmm2_21
                    arg4[4] = xmm3_23
                    float xmm1_36 = xmm0_48 + 0f
                    var_22c:4.d = int.d(xmm2_21)
                    arg4[5] = xmm1_36
                    var_22c.d = int.d(xmm4_21)
                    int32_t eax_150 = int.d(xmm3_23)
                    sub_6d2ee0(eax_150, edx_1, arg4, eax_150, int.d(xmm1_36), int.d(xmm5_22), 
                        var_22c, int.d(xmm0_48))
                    xmm4_16 = arg4[5] f+ 0f
                    xmm3_18 = var_178 f+ arg4[4]
                    float xmm2_23 = var_188 + xmm4_16
                    xmm5_17 = var_170 + xmm3_18
                    xmm2_16 = xmm2_23 - (var_160 + xmm7 + var_188)
                    xmm0_43 = xmm2_23
                    xmm1_31 = var_1ac + xmm5_17
                case 0x25
                    if (var_154 s< 0xb)
                        break
                    
                    float xmm7_4 = xmm2
                    float var_174_6 = xmm7_4
                    float xmm2_28 = xmm4 + xmm0_7 + var_18c + xmm3 + var_1ac
                    uint128_t xmm5_24 = 0x7fffffffffffffff
                    float xmm3_29 = xmm1 + var_184 + xmm5 + var_188 + var_1b0
                    
                    if (_mm_and_ps(fconvert.d(xmm2_28), xmm5_24)
                            f<= _mm_and_ps(fconvert.d(xmm3_29), xmm5_24))
                        var_174_6 = xmm2_28 ^ (data_8937c0.o).d
                    else
                        xmm7_4 = xmm3_29 ^ (data_8937c0.o).d
                    
                    edx_1.b = 4
                    float xmm4_24 = var_184 f+ arg4[5]
                    float xmm5_26 = xmm4 f+ arg4[4]
                    float xmm0_57 = var_160 + xmm4_24
                    float xmm2_30 = var_15c + xmm5_26
                    float xmm1_41 = var_178 + xmm0_57
                    float xmm3_31 = var_18c + xmm2_30
                    arg4[5] = xmm1_41
                    var_22c:4.d = int.d(xmm2_30)
                    arg4[4] = xmm3_31
                    var_22c.d = int.d(xmm4_24)
                    int32_t eax_156 = int.d(xmm3_31)
                    sub_6d2ee0(eax_156, edx_1, arg4, eax_156, int.d(xmm1_41), int.d(xmm5_26), 
                        var_22c, int.d(xmm0_57))
                    xmm4_16 = var_188 f+ arg4[5]
                    xmm3_18 = var_170 f+ arg4[4]
                    xmm0_43 = var_1b0 + xmm4_16
                    xmm5_17 = var_1ac + xmm3_18
                    xmm2_16 = xmm0_43 + xmm7_4
                    xmm1_31 = xmm5_17 + var_174_6
                    xmm7 = var_184
            
            arg4[4] = xmm1_31
            int32_t edx_32
            edx_32.b = 4
            arg4[5] = xmm2_16
            var_22c:4.d = int.d(xmm5_17)
            var_22c.d = int.d(xmm4_16)
            int32_t eax_162 = int.d(xmm1_31)
            sub_6d2ee0(eax_162, edx_32, arg4, eax_162, int.d(xmm2_16), int.d(xmm3_18), var_22c, 
                int.d(xmm0_43))
            xmm4 = var_180
            xmm0_7 = var_15c
            xmm1 = var_160
            xmm3 = var_170
            xmm5 = var_178
            edx_1 = var_164_1
            goto label_6d39dd
        case &lookup_table_6d470c[0xd]
            sub_6d2f70(arg4)
            CookieCheckFunction(1)
            return 1
        case &lookup_table_6d470c[0x12], &lookup_table_6d470c[0x13]
            int32_t edx_4
            
            if (var_1a4 == 0)
                edx_4 = var_1a0
            else
                int32_t eax_11
                int32_t edx_2
                edx_2:eax_11 = sx.q(var_154)
                edx_4 = var_1a0 + ((eax_11 - edx_2) s>> 1)
                var_1a0 = edx_4
            
            var_1a4 = 0
            edi_1 = var_158
            int32_t eax_15
            int32_t edx_5
            edx_5:eax_15 = sx.q(edx_4 + 7)
            edx_1 = &ecx_2[((edx_5 & 7) + eax_15) s>> 3]
            
            if (edx_1 s> edi_1 || edx_1 s< 0)
                edx_1 = edi_1
            
            goto label_6d39dd
        case &lookup_table_6d470c[0x14]
            var_1a4 = 0
            
            if (var_154 s< 2)
                break
            
            sub_6d2f70(arg4)
            eax_20 = var_154
            void var_e0
            xmm1_2 = *(&var_e0 + (eax_20 << 2)) f+ arg4[4]
        label_6d3426:
            xmm0_9 = *(&var_dc + (eax_20 << 2)) f+ arg4[5]
        label_6d342b:
            bool cond:6_1 = *arg4 == 0
            arg4[4] = xmm1_2
            arg4[2] = xmm1_2
            arg4[5] = xmm0_9
            arg4[3] = xmm0_9
            edi_3 = int.d(xmm0_9)
            edx_10 = int.d(xmm1_2)
            
            if (cond:6_1)
                ecx_6 = arg4[0xb] * 7
                eax_22 = arg4[0xa]
                *(eax_22 + (ecx_6 << 1) + 0xc) = 1
            label_6d346d:
                *(eax_22 + (ecx_6 << 1)) = edx_10.w
                *(eax_22 + (ecx_6 << 1) + 2) = edi_3.w
                *(eax_22 + (ecx_6 << 1) + 4) = 0
                *(arg4[0xa] + arg4[0xb] * 0xe + 8) = 0
                *(arg4[0xa] + arg4[0xb] * 0xe + 0xa) = 0
            else
            label_6d344f:
                sub_6d2e70(eax_20, edx_10, arg4, edi_3)
            
            arg4[0xb] += 1
        label_6d34a7:
            xmm0_7 = var_15c
            xmm1 = var_160
            edx_1 = var_164_1
            goto label_6d39d7
        case &lookup_table_6d470c[0x15]
            var_1a4 = 0
            
            if (var_154 s< 1)
                break
            
            sub_6d2f70(arg4)
            eax_20 = var_154
            xmm0_9 = arg4[5] f+ 0f
            xmm1_2 = *(&var_dc + (eax_20 << 2)) f+ arg4[4]
            goto label_6d342b
        case &lookup_table_6d470c[0x17]
            void* eax_77 = var_154
            
            if (eax_77 s< 8)
                break
            
            eax_20 = eax_77 - 2
            
            if (eax_20 s> 5)
                int32_t var_168_4 = 5
                int32_t eax_85
                
                do
                    edx_1.b = 4
                    float xmm4_8 = (&var_d4)[edi_2] f+ arg4[5]
                    float xmm5_8 = (&var_d8)[edi_2] f+ arg4[4]
                    float xmm0_24 = xmm4_8 + (&var_cc)[edi_2]
                    float xmm2_8 = xmm5_8 + (&var_d0)[edi_2]
                    float xmm1_19 = xmm0_24 + (&var_c4)[edi_2]
                    float xmm3_8 = xmm2_8 + (&var_c8)[edi_2]
                    var_22c:4.d = int.d(xmm2_8)
                    arg4[4] = xmm3_8
                    var_22c.d = int.d(xmm4_8)
                    arg4[5] = xmm1_19
                    int32_t eax_83 = int.d(xmm3_8)
                    sub_6d2ee0(eax_83, edx_1, arg4, eax_83, int.d(xmm1_19), int.d(xmm5_8), var_22c, 
                        int.d(xmm0_24))
                    edi_2 += 6
                    eax_85 = var_168_4 + 6
                    var_168_4 = eax_85
                while (eax_85 s< eax_20)
                eax_20 = edi_2 + 1
                
                if (eax_20 s>= var_154)
                    break
                
                xmm4 = var_180
                xmm3 = var_170
                xmm5 = var_178
            
            bool cond:8_1 = *arg4 != 0
            float xmm1_21 = (&var_d8)[edi_2] f+ arg4[4]
            float xmm0_26 = (&var_d4)[edi_2] f+ arg4[5]
            arg4[4] = xmm1_21
            arg4[5] = xmm0_26
            edi_3 = int.d(xmm0_26)
            edx_10 = int.d(xmm1_21)
            
            if (cond:8_1)
                goto label_6d344f
            
            ecx_6 = arg4[0xb] * 7
            eax_22 = arg4[0xa]
            *(eax_22 + (ecx_6 << 1) + 0xc) = 2
            goto label_6d346d
        case &lookup_table_6d470c[0x18]
            void* eax_87 = var_154
            
            if (eax_87 s< 8)
                break
            
            if (eax_87 - 6 s> 1)
                int32_t ecx_44 = arg4[0xb]
                int32_t i_1 = 1
                int32_t i
                
                do
                    bool cond:12_1 = *arg4 == 0
                    float xmm1_23 = (&var_d8)[edi_2] f+ arg4[4]
                    float xmm0_28 = (&var_d4)[edi_2] f+ arg4[5]
                    arg4[4] = xmm1_23
                    arg4[5] = xmm0_28
                    int32_t eax_89 = int.d(xmm1_23)
                    
                    if (cond:12_1)
                        int32_t eax_90 = arg4[0xa]
                        int32_t ecx_47 = (ecx_44 << 3) - arg4[0xb]
                        *(eax_90 + (ecx_47 << 1) + 0xc) = 2
                        *(eax_90 + (ecx_47 << 1)) = (int.d(xmm1_23)).w
                        *(eax_90 + (ecx_47 << 1) + 2) = (int.d(xmm0_28)).w
                        *(eax_90 + (ecx_47 << 1) + 4) = 0
                        *(arg4[0xa] + arg4[0xb] * 0xe + 8) = 0
                        *(arg4[0xa] + arg4[0xb] * 0xe + 0xa) = 0
                    else
                        sub_6d2e70(eax_89, eax_89, arg4, int.d(xmm0_28))
                    
                    edi_2 += 2
                    arg4[0xb] += 1
                    i = i_1 + 2
                    ecx_44 = arg4[0xb]
                    i_1 = i
                while (i s< eax_87 - 6)
                
                if (edi_2 + 5 s>= var_154)
                    break
            
            edx_1.b = 4
            float xmm4_10 = (&var_d4)[edi_2] f+ arg4[5]
            float xmm5_10 = (&var_d8)[edi_2] f+ arg4[4]
            float xmm0_30 = xmm4_10 + (&var_cc)[edi_2]
            float xmm2_10 = xmm5_10 + (&var_d0)[edi_2]
            float xmm1_25 = xmm0_30 + (&var_c4)[edi_2]
            float xmm3_10 = xmm2_10 + (&var_c8)[edi_2]
            var_22c:4.d = int.d(xmm2_10)
            arg4[4] = xmm3_10
            var_22c.d = int.d(xmm4_10)
            arg4[5] = xmm1_25
            int32_t eax_102 = int.d(xmm3_10)
            sub_6d2ee0(eax_102, edx_1, arg4, eax_102, int.d(xmm1_25), int.d(xmm5_10), var_22c, 
                int.d(xmm0_30))
            goto label_6d39a9
        case &lookup_table_6d470c[0x19], &lookup_table_6d470c[0x1a]
            void* eax_103 = var_154
            
            if (eax_103 s< 4)
                break
            
            float xmm3_11 = (zx.o(0)).d
            void* edi_7 = eax_103 & 1
            
            if (edi_7 != 0)
                xmm3_11 = xmm4
            
            void* var_174_4 = edi_7 + 3
            
            if (edi_7 + 3 s>= eax_103)
                xmm3 = var_170
                goto label_6d39d7
            
            void* eax_104 = &arg4[4]
            void* ecx_54 = &arg4[5]
            int32_t __saved_ebp
            void* edi_8 = &(&__saved_ebp)[edi_7 - 0x30]
            void* ecx_57
            
            do
                float xmm7_2 = *eax_104
                float xmm4_11 = *ecx_54
                float xmm1_26 = *edi_8
                float xmm2_11 = *(edi_8 - 8)
                float xmm5_11 = *(edi_8 - 4)
                float xmm0_31 = *(edi_8 + 4)
                float xmm0_34
                float xmm1_27
                float xmm2_12
                float xmm3_13
                float xmm4_12
                float xmm5_12
                
                if (eax_7 != 0x1b)
                    float xmm7_3 = xmm7_2 + xmm3_11
                    xmm4_12 = xmm4_11 + xmm2_11
                    xmm2_12 = xmm7_3
                    xmm3_13 = xmm7_3 + xmm5_11
                    xmm1_27 = xmm1_26 + xmm4_12
                    xmm5_12 = xmm3_13 + 0f
                    xmm0_34 = xmm0_31 + xmm1_27
                else
                    xmm2_12 = xmm2_11 + xmm7_2
                    xmm4_12 = xmm4_11 + xmm3_11
                    xmm3_13 = xmm2_12 + xmm5_11
                    xmm1_27 = xmm1_26 + xmm4_12
                    xmm5_12 = xmm0_31 + xmm3_13
                    xmm0_34 = xmm1_27 + 0f
                
                *eax_104 = xmm5_12
                edx_1.b = 4
                *ecx_54 = xmm0_34
                var_22c:4.d = int.d(xmm3_13)
                var_22c.d = int.d(xmm4_12)
                int32_t eax_110 = int.d(xmm5_12)
                sub_6d2ee0(eax_110, edx_1, arg4, eax_110, int.d(xmm0_34), int.d(xmm2_12), var_22c, 
                    int.d(xmm1_27))
                eax_104 = &arg4[4]
                ecx_57 = var_174_4 + 4
                edi_8 += 0x10
                var_174_4 = ecx_57
                xmm3_11 = (zx.o(0)).d
                ecx_54 = &arg4[5]
            while (ecx_57 s< var_154)
            xmm7 = var_184
        label_6d39a9:
            edx_1 = var_164_1
            xmm5 = var_178
            xmm1 = var_160
            xmm0_7 = var_15c
            xmm4 = var_180
            xmm3 = var_170
            goto label_6d39d7
        case &lookup_table_6d470c[0x1c]
            edi_9 = arg3
        label_6d3e40:
            void* eax_114 = var_154
            
            if (eax_114 s< 1)
                break
            
            var_154 = eax_114 - 1
            int32_t eax_116 = int.d(fconvert.t((&var_d8)[eax_114 - 1]))
            
            if (var_1a8 s>= 0xa)
                break
            
            int32_t eax_117 = var_1a8 * 3
            void var_150
            *(&var_150 + (eax_117 << 2)) = var_19c
            var_1a8 += 1
            void* edx_30 = &var_1e4
            int32_t var_148[0x1a]
            var_148[eax_117] = var_158
            
            if (eax_7 != 0xa)
                edx_30 = edi_9 + 0x50
            
            uint32_t edx_31 = *(edx_30 + 8)
            uint32_t eax_118 = edx_31
            char* edi_10 = (*edx_30).d
            
            if (edx_31 s>= 0)
                eax_118 = 0
            
            uint32_t var_174_5 = edx_31
            int64_t var_1d8_1
            var_1d8_1:4.d = eax_118
            char ecx_60
            
            if (eax_118 s< edx_31)
                ecx_60 = edi_10[eax_118]
                eax_118 += 1
                var_1d8_1:4.d = eax_118
            else
                ecx_60 = 0
            
            if (eax_118 s< edx_31)
                edx_31.b = edi_10[eax_118]
                char var_169_1 = edx_31.b
                edx_31 = var_174_5
                var_1d8_1:4.d = eax_118 + 1
                eax_118.b = var_169_1
            else
                eax_118.b = 0
            
            uint32_t ecx_63 = zx.d(ecx_60) << 8 | zx.d(eax_118.b)
            int32_t eax_120 = 0x6b
            
            if (ecx_63 u>= 0x846c)
                eax_120 = 0x8000
            else if (ecx_63 u>= 0x4d8)
                eax_120 = 0x46b
            
            int32_t edi_12 = eax_116 + eax_120
            int64_t xmm0_39
            
            if (eax_116 + eax_120 s< 0 || edi_12 s>= ecx_63)
                var_1f8 = 0
                edi_1 = nullptr
                int32_t var_1f4_1 = 0
                xmm0_39 = var_1f8.q
            else
                void var_218
                int64_t* eax_122 = sub_6d17c0(&var_218, edx_31, edi_12, &var_218, var_1d8_1, edx_31)
                xmm0_39 = *eax_122
                edi_1 = eax_122[1].d
                var_1f8.q = xmm0_39
            
            var_158 = edi_1
            var_19c = xmm0_39
            var_194 = edi_1
            
            if (edi_1 == 0)
                break
            
            edx_1 = nullptr
            xmm0_7 = var_15c
            var_190_1 = 0
            var_17c = var_19c.d
            goto label_6d39dd
        case &lookup_table_6d470c[0x1d]
            eax_50 = var_154
            
            if (eax_50 s>= 4)
                goto label_6d37c2
            
            break
        case &lookup_table_6d470c[0x1e]
            if (var_154 s< 4)
                break
            
            while (true)
                ecx_39 = var_154
                
                if (edi_2 + 3 s>= ecx_39)
                    break
                
                float xmm1_13
                
                if (ecx_39 - edi_2 != 5)
                    xmm1_13 = (zx.o(0)).d
                else
                    xmm1_13 = (&var_c8)[edi_2]
                
                edx_1.b = 4
                float xmm4_4 = arg4[5] f+ 0f
                float xmm5_4 = (&var_d8)[edi_2] f+ arg4[4]
                float xmm0_20 = xmm4_4 + (&var_d0)[edi_2]
                float xmm2_4 = xmm5_4 + (&var_d4)[edi_2]
                float xmm3_4 = xmm2_4 + xmm1_13
                float xmm1_15 = xmm0_20 + (&var_cc)[edi_2]
                var_22c:4.d = int.d(xmm2_4)
                arg4[4] = xmm3_4
                var_22c.d = int.d(xmm4_4)
                arg4[5] = xmm1_15
                int32_t eax_66 = int.d(xmm3_4)
                sub_6d2ee0(eax_66, edx_1, arg4, eax_66, int.d(xmm1_15), int.d(xmm5_4), var_22c, 
                    int.d(xmm0_20))
                ecx_39 = var_154
                edi_2 += 4
                
                if (edi_2 + 3 s>= ecx_39)
                    break
                
                eax_50 = ecx_39
            label_6d37c2:
                float xmm7_1
                
                if (eax_50 - edi_2 != 5)
                    xmm7_1 = (zx.o(0)).d
                else
                    xmm7_1 = (&var_c8)[edi_2]
                
                edx_1.b = 4
                float xmm4_2 = (&var_d8)[edi_2] f+ arg4[5]
                float xmm5_2 = arg4[4] f+ 0f
                float xmm0_18 = xmm4_2 + (&var_d0)[edi_2]
                float xmm2_2 = xmm5_2 + (&var_d4)[edi_2]
                float xmm3_2 = xmm2_2 + (&var_cc)[edi_2]
                var_22c:4.d = int.d(xmm2_2)
                float xmm1_12 = xmm0_18 + xmm7_1
                arg4[4] = xmm3_2
                var_22c.d = int.d(xmm4_2)
                arg4[5] = xmm1_12
                int32_t eax_57 = int.d(xmm3_2)
                sub_6d2ee0(eax_57, edx_1, arg4, eax_57, int.d(xmm1_12), int.d(xmm5_2), var_22c, 
                    int.d(xmm0_18))
                edi_2 += 4
            
            xmm4 = var_180
            xmm0_7 = var_15c
            xmm1 = var_160
            xmm7 = var_184
            xmm3 = var_170
            xmm5 = var_178
            edx_1 = var_164_1
            edi_1 = var_158
            goto label_6d39e3

CookieCheckFunction(0)
return 0
