// 函数: sub_5eeeb0
// 地址: 0x5eeeb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
void* var_14 = __security_cookie ^ &__saved_ebp
void* result

if (*(arg1 + 0x1ba0) != 0)
    void* var_64_1 = arg1 + 0x2c
    char const* const edx
    
    if (sub_5e2c00(arg1).b == 0)
        edx = "itemCard"
        var_64_1 = arg1 + 0x2c
    label_5eef26:
        result = sub_67bd70(*(arg1 + 0x1ba0), edx)
        
        if (result != 0)
            uint32_t eax_1 = zx.d(result.w)
            int128_t xmm0_1
            float xmm1_1[0x4]
            
            if (eax_1 u>= data_c23bac || *(eax_1 * 0x18d0 + data_c23ba8 + 0x18c8) != result)
                xmm0_1 = data_bf21e8
                xmm1_1 = data_bf21f8
            else
                uint32_t eax_2 = sub_64e7a0(result)
                xmm0_1 = *(eax_2 + 0x1620)
                xmm1_1 = *(eax_2 + 0x1630)
            
            int128_t var_40_1 = xmm0_1
            float var_30_1[0x4] = xmm1_1
            uint32_t eax_3 = sub_64e7a0(result)
            float xmm0_2 = *(eax_3 + 0x16cc)
            float xmm1_2 = *(eax_3 + 0x16d0)
            void* eax_4 = var_64_1
            float var_90_1
            var_90_1.o = 0f.o
            
            if (*eax_4 == 3 && *(arg1 + 0x70) != 0 && *(arg1 + 0x38) != 0)
                int32_t i_1 = 0
                int32_t* edi_3 = arg1 + 0x1ba4
                int32_t i
                
                do
                    int32_t ecx_5 = *edi_3
                    
                    if (ecx_5 == 0)
                        break
                    
                    int32_t eax_5 = sub_67bd70(ecx_5, "itemCard")
                    
                    if (eax_5 != 0)
                        float xmm2_1 = var_30_1[1]
                        float xmm3_1 = var_30_1[2]
                        uint32_t eax_6 = zx.d(eax_5.w)
                        float xmm1_3[0x4]
                        int128_t xmm4_1
                        
                        if (eax_6 u>= data_c23bac
                                || *(eax_6 * 0x18d0 + data_c23ba8 + 0x18c8) != eax_5)
                            xmm4_1 = data_bf21e8
                            xmm1_3 = data_bf21f8
                        else
                            uint32_t eax_9 = sub_64e7a0(eax_5)
                            xmm4_1 = *(eax_9 + 0x1620)
                            xmm1_3 = *(eax_9 + 0x1630)
                        
                        int32_t var_a4_1 = 0
                        float xmm0_6 = 1f f/ xmm4_1
                        var_30_1 = xmm1_3
                        var_40_1 = xmm4_1
                        float var_a0_1 = xmm0_2 - var_90_1
                            + (xmm2_1 - _mm_shuffle_ps(xmm1_3, xmm1_3, 0x55)) * xmm0_6
                        float var_9c_1 =
                            xmm1_2 - 0f + (xmm3_1 - _mm_shuffle_ps(xmm1_3, xmm1_3, 0xaa)) * xmm0_6
                        var_90_1.o = 0f.o
                    
                    edi_3 = &edi_3[1]
                    i = i_1 + 1
                    i_1 = i
                while (i s<= 2)
                eax_4 = var_64_1
            
            void* result_1 = data_b604e0
            float var_70_1
            int32_t* edi_4
            
            if (*eax_4 != 0)
                edi_4 = arg1 + 0xa4
                var_70_1 = xmm1_2
            label_5ef1b6:
                char const* const var_bc
                int32_t var_b8
                char const* const var_b4
                char* ecx_9
                bool cond:5_1
                
                if (*var_64_1 != 0 || *edi_4 != 0x3ea
                        || (*(arg1 + 0x1a18) != 0 && *(arg1 + 0x4a0) != 3))
                    result = arg2
                    float xmm1_31 = var_30_1[0]
                    float xmm6_10 = var_40_1:8.d
                    float xmm1_32 = xmm1_31 * xmm1_31
                    float xmm0_81 = *result - var_30_1[1]
                    float xmm2_13 = 0f - var_30_1[3]
                    float xmm7_8 = var_40_1:0xc.d
                    float xmm4_14 = xmm6_10 * xmm6_10
                    float xmm0_83 = *(result + 4) - var_30_1[2]
                    float xmm2_15 = xmm7_8 * var_30_1[0]
                    float xmm3_17 = xmm7_8 * xmm7_8
                    float xmm0_84 = var_40_1:4.d
                    float xmm1_34 = xmm6_10 * xmm0_84
                    float xmm5_23 = xmm0_84 * xmm0_84
                    float xmm0_85 = 1f f/ var_40_1.d
                    float xmm0_99 = ((xmm2_15 + xmm1_34) * (xmm0_83 + xmm0_83)
                        + (xmm5_23 + xmm1_32 - xmm4_14 - xmm3_17) * xmm0_81
                        + (xmm7_8 f* var_40_1:4.d - xmm6_10 * var_30_1[0]) * (xmm2_13 + xmm2_13))
                        * xmm0_85
                    float xmm1_48 = ((xmm1_34 - xmm2_15) * (xmm0_81 + xmm0_81)
                        + (xmm1_32 - xmm5_23 + xmm4_14 - xmm3_17) * xmm0_83
                        + (xmm7_8 * xmm6_10 + var_40_1:4.d * var_30_1[0]) * (xmm2_13 + xmm2_13))
                        * xmm0_85
                    
                    if (xmm0_2 < var_90_1 || var_70_1 < 0f)
                    label_5ef7e6:
                        var_b4 = "RectContains"
                        var_b8 = 0xa4
                        ecx_9 = "RectIsNormalized(r)"
                        var_bc = "C:\x\ax2017\Engine\Rect.cpp"
                    label_5ef7ff:
                        sub_63b870(result, &data_801800, ecx_9, var_bc, var_b8, var_b4)
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    if (not(xmm0_99 < var_90_1) && not(xmm1_48 < 0f) && not(xmm0_2 < xmm0_99))
                        cond:5_1 = var_70_1 < xmm1_48
                    label_5ef7ba:
                        
                        if (not(cond:5_1))
                            result.b = 1
                            CookieCheckFunction(result)
                            return result
                else
                    if (result_1 == 0xffffffff)
                        result_1 = nullptr
                    
                    if (*(arg1 + 0xa0) == result_1)
                        float xmm0_14 = var_40_1.d
                        float xmm1_9 = var_90_1 * xmm0_14
                        float xmm7_1 = 0f * xmm0_14
                        float xmm0_15 = xmm0_14 * 0f
                        float xmm5_1 = var_40_1:8.d
                        float xmm6_1 = var_40_1:4.d
                        float xmm0_16 = var_30_1[0]
                        float xmm1_11 = xmm0_16 * xmm0_16
                        float xmm3_5 = xmm5_1 * xmm5_1
                        float xmm2_4 = var_40_1:0xc.d
                        float xmm5_3 = var_40_1:0xc.d * xmm0_16
                        float xmm1_13 = xmm5_1 * xmm6_1
                        float xmm4_3 = xmm6_1 * xmm6_1
                        float xmm2_5 = xmm2_4 * xmm2_4
                        float xmm5_6 = (xmm1_13 - xmm5_3) * (xmm7_1 + xmm7_1)
                        float xmm0_22 = xmm4_3 + xmm1_11 - xmm3_5 - xmm2_5
                        float xmm5_9 = (var_40_1:0xc.d * xmm6_1 + var_40_1:8.d * var_30_1[0])
                            * (xmm0_15 + xmm0_15)
                        float xmm0_30 = xmm5_3 + xmm1_13
                        float xmm0_35 = (xmm1_11 - xmm4_3 + xmm3_5 - xmm2_5) * xmm7_1
                        float xmm7_5 = (var_40_1:0xc.d f* var_40_1:8.d - xmm6_1 * var_30_1[0])
                            * (xmm0_15 + xmm0_15)
                        float xmm4_8 = xmm1_9 * xmm0_22 + xmm5_6 + xmm5_9 + var_30_1[1]
                        float xmm0_42 = (xmm1_9 + xmm1_9) * xmm0_30 + xmm0_35 + xmm7_5
                        float var_64_3 = xmm0_42
                        float xmm5_11 = xmm0_42 + var_30_1[2]
                        float xmm5_13 = xmm0_2 f* var_40_1.d
                        float xmm0_47 = xmm5_13 * xmm0_22 + xmm5_6 + xmm5_9 + var_30_1[1]
                        float xmm5_18 =
                            (xmm5_13 + xmm5_13) * xmm0_30 + xmm0_35 + xmm7_5 + var_30_1[2]
                        result = sub_5ee900(*(arg1 + 0x1c28), 1)
                        float xmm0_48 = xmm5_18
                        void* result_2 = result
                        
                        if (result_2 == 0)
                            goto label_5ef3d9
                        
                        result = sub_5cba00(result_2)
                        float xmm2_6
                        float xmm5_19
                        
                        if (*(result + 0x1a18) == 0 || *(result + 0x4a0) == 3)
                            result = sub_5cba00(result_2)
                            xmm0_48 = xmm5_18
                            int32_t ecx_11 = *(result + 0x1ba0)
                            
                            if (ecx_11 == 0)
                                goto label_5ef3d9
                            
                            result = sub_66b2b0(result, "itemCard", ecx_11, 0)
                            
                            if (result == 0)
                                var_b4 = "UI2GetTransform"
                                var_b8 = 0x5b0e
                                var_bc = "C:\x\ax2017\Engine\UI2.cpp"
                                ecx_9 = "handle != UI2_NULL"
                                goto label_5ef7ff
                            
                            result = sub_64e7a0(result)
                            float xmm2_7[0x4] = *(result + 0x1620)
                            int96_t xmm1_14 = (*(result + 0x1630)).12
                            float xmm0_50 = xmm2_7[0] * var_90_1
                            float xmm7_7 = xmm1_14.d f* xmm1_14
                            float xmm0_52 = xmm2_7[0] * 0f
                            float xmm1_16[0x4] = _mm_shuffle_ps(xmm2_7, xmm2_7, 0x55)
                            float xmm0_54 = xmm2_7[0] * 0f
                            float xmm6_5 = xmm1_16[0] f* xmm1_16
                            float xmm0_56 = _mm_shuffle_ps(xmm2_7, xmm2_7, 0xaa)
                            float xmm3_9 = xmm0_56 f* xmm1_16
                            float xmm5_21 = xmm0_56 * xmm0_56
                            float xmm2_8[0x4] = _mm_shuffle_ps(xmm2_7, xmm2_7, 0xff)
                            var_90_1.o = xmm1_16
                            float var_a8
                            var_a8.o = xmm2_8
                            float xmm4_11 = xmm2_8[0] f* xmm2_8
                            float xmm2_9 = xmm2_8 f* *(result + 0x1630)
                            float xmm2_10[0x4] = *(result + 0x1630)
                            float xmm0_69 = (xmm0_50 + xmm0_50) * (xmm2_9 + xmm3_9)
                                + (xmm7_7 - xmm6_5 + xmm5_21 - xmm4_11) * xmm0_52
                                + (var_a8 * xmm0_56 - var_90_1 f* *(result + 0x1630))
                                * (xmm0_54 + xmm0_54)
                            xmm0_48 = xmm5_18
                            float xmm3_14 = (xmm0_52 + xmm0_52) * (xmm3_9 - xmm2_9)
                                + (xmm6_5 + xmm7_7 - xmm5_21 - xmm4_11) * xmm0_50
                                + (var_a8 * var_90_1 + xmm0_56 f* xmm2_10) * (xmm0_54 + xmm0_54)
                                + _mm_shuffle_ps(xmm2_10, xmm2_10, 0x55)
                            xmm2_6 = xmm4_8
                            
                            if (xmm3_14 <= xmm2_6)
                                goto label_5ef3de
                            
                            xmm5_19 = xmm3_14
                            xmm0_48 = xmm1_14:8.d + xmm0_69
                            goto label_5ef3e3
                        
                        xmm0_48 = xmm5_18
                    label_5ef3d9:
                        xmm2_6 = xmm4_8
                    label_5ef3de:
                        xmm5_19 = xmm0_47
                    label_5ef3e3:
                        xmm5_19 - xmm2_6
                        
                        if (not(xmm5_19 >= xmm2_6))
                            var_b4 = "CardHitTest"
                            var_b8 = 0x6d77
                            var_bc = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                            ecx_9 = "topLeft.x <= topRight.x"
                            goto label_5ef7ff
                        
                        float xmm0_78 = _mm_min_ss(xmm0_48, xmm5_11)
                        float xmm1_30 = xmm5_11 + 10000f
                        float xmm3_15
                        
                        if (xmm5_19 <= xmm2_6)
                            xmm3_15 = xmm5_19
                            xmm5_19 = xmm2_6
                        else
                            xmm3_15 = xmm2_6
                        
                        float xmm2_12
                        
                        if (xmm1_30 <= xmm0_78)
                            xmm2_12 = xmm1_30
                            xmm1_30 = xmm0_78
                        else
                            xmm2_12 = xmm0_78
                        
                        if (xmm5_19 < xmm3_15 || xmm1_30 < xmm2_12)
                            goto label_5ef7e6
                        
                        int32_t xmm4_12 = *arg2
                        
                        if (not(xmm4_12 f< xmm3_15))
                            float xmm0_79 = *(arg2 + 4)
                            
                            if (not(xmm0_79 < xmm2_12) && not(xmm5_19 f< xmm4_12))
                                cond:5_1 = xmm1_30 < xmm0_79
                                goto label_5ef7ba
            else
                result = result_1
                
                if (result_1 == 0xffffffff)
                    result = nullptr
                
                float xmm0_12
                
                if (*(arg1 + 0xa0) != result || *(arg1 + 0x1a18) != 0 || *(arg1 + 0x370) != 1)
                    xmm0_12 = xmm1_2
                else
                    result = *(arg1 + 0x378)
                    
                    if ((result == 6 || result == 7) && *(arg1 + 0x37c) == 0x3ea)
                        xmm0_12 = xmm1_2 + 10000f
                    else
                        xmm0_12 = xmm1_2
                
                edi_4 = arg1 + 0xa4
                var_70_1 = xmm0_12
                
                if (*(arg1 + 0xa4) != 0x474)
                    if (*edi_4 != 0x3eb)
                        goto label_5ef1b6
                    
                    if (result_1 == 0xffffffff)
                        result_1 = nullptr
                    
                    if (sub_5e4d40(result_1).b != 0)
                        result_1 = data_b604e0
                        goto label_5ef1b6
    else if (*(arg1 + 0x2c) == 3 || *(arg1 + 0xa4) == 0x3f1)
        edx = "btn_icon"
        goto label_5eef26

result.b = 0
CookieCheckFunction(result)
return result
