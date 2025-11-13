// 函数: sub_697fa0
// 地址: 0x697fa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* ecx = arg5
int32_t edi = *arg2
float var_88 = arg3
int32_t eax_5

if (arg2[0xf] s<= edi)
    eax_5 = 0
else
    eax_5 = arg2[0x10]

char* var_c8 = eax_5

if (ecx == 0)
    if (arg2[0x25] s<= edi)
        ecx = *(arg3 i+ 0x88)
    else
        ecx = arg2[0x26]

int32_t* edi_1 = nullptr

if (eax_5 == 0)
    edi_1 = ecx

if (eax_5 != 0 || edi_1 != 0)
    int32_t eax_7
    int32_t ecx_1
    
    if (arg6 != 0)
        eax_7 = *arg6
        ecx_1 = 0
    else if (arg2[0x22] s<= *arg2)
        eax_7 = *(arg3 i+ 0xa8)
        ecx_1 = 0
    else
        eax_7 = arg2[0x23]
        ecx_1 = arg2[0x24]
    
    int32_t var_b8 = eax_7
    int32_t var_b4_1 = ecx_1
    float xmm0_3 = _mm_cvtepi32_ps(zx.o((eax_7 u>> 0x18).b) | zx.o((ecx_1 << 8).b)) f* arg4[2]
    float xmm0_4
    
    if (0 f<= xmm0_3)
        xmm0_4 = xmm0_3 + 0.5f
    else
        xmm0_4 = xmm0_3 - 0.5f
    
    eax_5 = int.d(xmm0_4)
    var_b8:3.b = eax_5.b
    
    if (eax_5.b != 0)
        int128_t var_60 = *(arg3 i+ 0x10)
        float var_70[0x4]
        int128_t xmm0_6 = *sub_697400(&var_70, &var_60, arg4, &var_70, arg3 i+ 0x20)
        eax_5 = data_cf65b8
        int128_t var_b0 = xmm0_6
        float xmm3_1 = var_b0:0xc.d
        float xmm2_1 = var_b0:8.d
        float xmm6_1 = var_b0:4.d
        float xmm4_1 = var_b0.d
        
        if (*(eax_5 + 0x28) != 0 || *(eax_5 + 0x39) != 0)
        label_69811a:
            int32_t edx_2 = *arg2
            float xmm5_3
            float xmm7_1
            
            if (arg2[0x14] s<= edx_2)
                xmm5_3 = 1f
                xmm7_1 = 1f
            else
                xmm5_3 = arg2[0x15]
                xmm7_1 = arg2[0x16]
            
            float eax_14 = var_88
            float xmm0_10 = (xmm2_1 - xmm4_1) * xmm5_3 * 0.5f
            float xmm1_6 = (xmm3_1 - xmm6_1) * xmm7_1 * 0.5f
            float xmm4_3 = (xmm4_1 + xmm2_1) * 0.5f
            float xmm6_3 = (xmm6_1 + xmm3_1) * 0.5f
            float xmm5_5 = xmm0_10 + xmm4_3
            float xmm4_4 = xmm4_3 - xmm0_10
            float xmm7_3 = xmm1_6 + xmm6_3
            float xmm6_4 = xmm6_3 - xmm1_6
            
            if (*(eax_14 i+ 0x90) != 0)
                int128_t xmm0_11 = data_8002b0
                float xmm1_7[0x4] = data_8002c0
                int128_t var_50
                __builtin_memcpy(&var_50, 
                    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
                "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                    0x24)
                float xmm2_2 = arg4[3]
                int32_t var_e4_2 = 0
                int128_t* const var_e8_2 = &data_7ff520
                int32_t var_ec_1 = 1
                int32_t var_f0 = 0
                int32_t var_f4 = 0
                int32_t* var_f8 = &var_b8
                var_50.d = xmm0_11 f* xmm2_2
                float xmm0_14 = var_50:0xc.d * xmm2_2
                float xmm1_8 = _mm_shuffle_ps(xmm1_7, xmm1_7, 0xaa)
                var_50:0xc.d = xmm0_14
                var_50:4.d = var_50:4.d * xmm2_2
                int128_t var_40
                var_40.d = var_40.d * xmm2_2
                float xmm0_20 = var_40:0xc.d * xmm2_2
                var_40:8.d = xmm1_8 * xmm2_2
                var_40:0xc.d = xmm0_20
                int32_t* eax_17 = sub_685a90(&var_b8, &var_50, edi_1, &data_8002b0, 
                    xmm6_4 / xmm2_2, (xmm5_5 - xmm4_4) / xmm2_2, ((xmm7_3 - xmm6_4) / xmm2_2).b)
                CookieCheckFunction(eax_17)
                return eax_17
            
            void* ecx_6 = arg7
            
            if (ecx_6 == 0)
                ecx_6 = eax_14 i+ 0x98
            
            float xmm5_8 = xmm5_5 - xmm4_4
            float xmm7_6 = xmm7_3 - xmm6_4
            float xmm1_10[0x4] = *ecx_6
            float xmm0_22 = xmm1_10[0] * xmm5_8
            float xmm3_4 = _mm_shuffle_ps(xmm1_10, xmm1_10, 0xaa)
            float xmm0_23 = xmm0_22 + xmm4_4
            var_b0.d = xmm0_23
            float xmm5_10 = _mm_shuffle_ps(xmm1_10, xmm1_10, 0xff)
            float xmm0_26 = xmm3_4 * xmm5_8 + xmm4_4
            float xmm4_7 = _mm_shuffle_ps(xmm1_10, xmm1_10, 0x55)
            var_b0:8.d = xmm0_26
            float xmm0_29 = xmm7_6 * xmm4_7 + xmm6_4
            float xmm7_8 = xmm7_6 * xmm5_10 + xmm6_4
            var_b0:4.d = xmm0_29
            var_b0:0xc.d = xmm7_8
            var_b0 = var_b0
            float xmm0_31
            float xmm6_6
            
            if (arg2[0x11] s<= edx_2)
                xmm0_31 = 1f
                xmm6_6 = 1f
            else
                xmm0_31 = arg2[0x12]
                xmm6_6 = arg2[0x13]
            
            bool cond:5_1 = *(eax_14 i+ 0x94) != 0
            float var_a0 = (xmm1_10 f- 0.5f) * xmm0_31 + 0.5f
            float var_98_1 = (xmm3_4 - 0.5f) * xmm0_31 + 0.5f
            float var_9c_1 = (xmm4_7 - 0.5f) * xmm6_6 + 0.5f
            float var_94_1 = (xmm5_10 - 0.5f) * xmm6_6 + 0.5f
            var_60 = var_a0.o
            float* eax_20
            void** edx_5
            
            if (cond:5_1)
                int32_t* ecx_9 = *sub_5af880(edi_1)
                int32_t eax_22 = *ecx_9
                float xmm1_15 = ecx_9[3] f* ecx_9[2]
                double xmm0_35[0x2] =
                    _mm_cvtepi32_pd(zx.q(eax_22)) f+ *((eax_22 u>> 0x1f << 3) + &data_893660)
                int32_t eax_24 = ecx_9[1]
                float ecx_10 = var_88
                float xmm3_8 = _mm_cvtpd_ps(xmm0_35)
                int32_t ecx_11 = *(ecx_10 i+ 0x94)
                float xmm3_9 = xmm3_8 * xmm1_15
                float xmm0_40 = xmm7_8 - xmm0_29
                float xmm2_4 = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_24)) f+
                    *((eax_24 u>> 0x1f << 3) + &data_893660)) * xmm1_15
                float xmm1_17 = xmm0_26 - xmm0_23
                float xmm1_19 = _mm_min_ss(xmm1_17 / xmm3_9, xmm0_40 / xmm2_4)
                float xmm3_10 = xmm3_9 * xmm1_19
                float xmm2_5 = xmm2_4 * xmm1_19
                float eax_26
                float edx_6
                eax_26, edx_6 = sub_6b7590(ecx_11)
                var_88 = eax_26
                void* eax_27 = data_147abe4
                bool cond:4_1 = *(eax_27 + 0x38) == 0
                float xmm3_14 = var_88 * xmm1_17 + xmm0_23 - ((xmm3_10 - 0f) * var_88 + 0f)
                var_a0 = xmm3_14
                float var_98_2 = xmm3_10 + xmm3_14
                float xmm2_9 = edx_6 * xmm0_40 + xmm0_29 - ((xmm2_5 - 0f) * edx_6 + 0f)
                float var_9c_2 = xmm2_9
                float var_94_2 = xmm2_5 + xmm2_9
                var_a0.o = var_a0.o
                
                if (cond:4_1)
                    edx_5 = &var_a0
                label_69858a:
                    eax_20 = &var_60
                    eax_5 = sub_6827e0(eax_20, edx_5, edi_1, eax_20, &var_b8, var_c8)
                else
                    eax_5 =
                        sub_682670(eax_27 + 0x28, &var_60, &var_a0, eax_27 + 0x28, &var_88, &var_b0)
                    
                    if (eax_5.b != 0)
                        eax_20 = &var_b0
                        eax_5 = sub_6827e0(eax_20, &var_88, edi_1, eax_20, &var_b8, var_c8)
            else
                void* eax_18 = data_147abe4
                
                if (*(eax_18 + 0x38) == 0)
                    edx_5 = &var_b0
                    goto label_69858a
                
                eax_5 = sub_682670(eax_18 + 0x28, &var_60, &var_b0, eax_18 + 0x28, &var_88, &var_a0)
                
                if (eax_5.b != 0)
                    eax_20 = &var_a0
                    eax_5 = sub_6827e0(eax_20, &var_88, edi_1, eax_20, &var_b8, var_c8)
        else if (not(0f > xmm2_1) && not(xmm4_1 f> _mm_cvtepi32_ps(zx.o(*(eax_5 + 0x14))))
                && not(0 f> xmm3_1) && not(xmm6_1 f> _mm_cvtepi32_ps(zx.o(*(eax_5 + 0x18)))))
            goto label_69811a

CookieCheckFunction(eax_5)
return eax_5
