// 函数: sub_745c40
// 地址: 0x745c40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (data_1513462 != 0)
    int32_t eax = GetKeyState(0x11)
    int32_t var_2c
    
    if (eax.w s< 0)
        if (data_151345c != 1)
            char const* const var_28 = "OffsetActiveSet"
            var_2c = 0x297
            goto label_7461d4
        
        void* eax_1 = sub_744f10(data_151245c, nullptr)
        float xmm7_2 = *arg1 f+ *(eax_1 + 0x10)
        float xmm4_1 = *(eax_1 + 0x18)
        float xmm3_1 = *(eax_1 + 0x1c)
        float xmm6_1 = arg1[1] f+ *(eax_1 + 0x14)
        float xmm5_2
        
        if (0f <= xmm7_2)
            xmm5_2 = xmm7_2 + 0.5f
        else
            xmm5_2 = xmm7_2 - 0.5f
        
        int32_t eax_2 = int.d(xmm5_2)
        float xmm5_4
        
        if (0f <= xmm6_1)
            xmm5_4 = xmm6_1 + 0.5f
        else
            xmm5_4 = xmm6_1 - 0.5f
        
        float xmm2_2 = xmm4_1 f+ *arg1 - xmm7_2
        float xmm1_3 = xmm3_1 f+ arg1[1] - xmm6_1
        float xmm2_3
        
        if (0 f<= xmm2_2)
            xmm2_3 = xmm2_2 + 0.5f
        else
            xmm2_3 = xmm2_2 - 0.5f
        
        float xmm2_5 = _mm_cvtepi32_ps(zx.o(int.d(xmm2_3)))
        float xmm1_4
        
        if (0f <= xmm1_3)
            xmm1_4 = xmm1_3 + 0.5f
        else
            xmm1_4 = xmm1_3 - 0.5f
        
        float xmm0_1 = float.s(eax_2)
        float xmm2_6 = xmm2_5 + xmm0_1
        float xmm0_2 = *(eax_1 + 0x10)
        float xmm4_2 = xmm4_1 - xmm0_2
        float xmm7_3 = float.s(int.d(xmm5_4))
        float var_14_1 = xmm2_6
        float xmm6_4 = xmm4_2 f* *(eax_1 + 0x98) + xmm0_2
        float var_18_1 = xmm7_3
        float xmm4_4 = xmm4_2 f* *(eax_1 + 0xa0) + xmm0_2
        float xmm0_3 = *(eax_1 + 0x14)
        float xmm3_2 = xmm3_1 - xmm0_3
        float xmm1_6 = float.s(int.d(xmm1_4)) + xmm7_3
        float xmm3_4 = xmm3_2 f* *(eax_1 + 0xa4) + xmm0_3
        float var_10_1 = xmm1_6
        float xmm5_7 = xmm3_2 f* *(eax_1 + 0x9c) + xmm0_3
        float var_1c_1
        var_1c_1.o = xmm0_1.o
        float xmm0_5 = float.s(eax_2)
        
        if (not(xmm0_5 <= xmm6_4))
            var_1c_1 = xmm6_4
            float var_14_2 = xmm2_6 - xmm0_5 + xmm6_4
        else if (not(xmm4_4 <= xmm2_6))
            float var_14_3 = xmm4_4
            var_1c_1 = xmm4_4 - (xmm2_6 - xmm0_5)
        
        if (not(xmm7_3 <= xmm5_7))
            float var_18_2 = xmm5_7
            float var_10_2 = xmm1_6 - xmm7_3 + xmm5_7
        else if (not(xmm3_4 <= xmm1_6))
            float var_10_3 = xmm3_4
            float var_18_3 = xmm3_4 - (xmm1_6 - xmm7_3)
        
        *(eax_1 + 0x10) = var_1c_1.o
        float xmm1_10 = *(eax_1 + 0x10)
        float xmm0_12 = *(eax_1 + 0x18) - xmm1_10
        float xmm1_11 = *(eax_1 + 0x14)
        float xmm0_14 = *(eax_1 + 0x1c) - xmm1_11
        float var_14_4 = (xmm4_4 - xmm1_10) / xmm0_12
        float var_18_4 = (xmm5_7 - xmm1_11) / xmm0_14
        float var_10_4 = (xmm3_4 - xmm1_11) / xmm0_14
        *(eax_1 + 0x98) = ((xmm6_4 - xmm1_10) / xmm0_12).o
        return 
    
    if (data_1513462 != 0)
        eax = GetKeyState(0x11)
        
        if (eax.w s>= 0)
            if (data_151345c != 1)
                char const* const var_28_1 = "OffsetActiveSet"
                var_2c = 0x2a2
            label_7461d4:
                sub_63b870(eax, &data_801800, "gUI.s.activeSetCount == 1", 
                    "C:\x\ax2017\Engine\Editor\UIEditor.cpp", var_2c, "OffsetActiveSet")
                
                if (sub_63bc30() == 0)
                    sub_63bb00()
                    noreturn
                
                breakpoint
            
            void* eax_3 = sub_744f10(data_151245c, nullptr)
            float xmm6_7 = *(eax_3 + 0x10)
            float xmm2_11 = *(eax_3 + 0x18) - xmm6_7
            float xmm7_4 = *(eax_3 + 0x14)
            float xmm3_8 = *(eax_3 + 0x1c) - xmm7_4
            float xmm5_13 = xmm2_11 f* *(eax_3 + 0x98) + xmm6_7 f+ *arg1
            float xmm2_14 = xmm2_11 f* *(eax_3 + 0xa0) + xmm6_7 f+ *arg1
            float xmm4_10 = xmm3_8 f* *(eax_3 + 0x9c) + xmm7_4 f+ arg1[1]
            float xmm1_15 = xmm3_8 f* *(eax_3 + 0xa4) + xmm7_4 f+ arg1[1]
            float xmm6_9
            
            if (0f <= xmm5_13)
                xmm6_9 = xmm5_13 + 0.5f
            else
                xmm6_9 = xmm5_13 - 0.5f
            
            float xmm7_6 = _mm_cvtepi32_ps(zx.o(int.d(xmm6_9)))
            float xmm6_11
            
            if (0f <= xmm4_10)
                xmm6_11 = xmm4_10 + 0.5f
            else
                xmm6_11 = xmm4_10 - 0.5f
            
            float xmm2_15 = xmm2_14 - xmm5_13
            float xmm1_16 = xmm1_15 - xmm4_10
            float xmm6_13 = _mm_cvtepi32_ps(zx.o(int.d(xmm6_11)))
            float xmm2_16
            
            if (0f <= xmm2_15)
                xmm2_16 = xmm2_15 + 0.5f
            else
                xmm2_16 = xmm2_15 - 0.5f
            
            float xmm2_18 = _mm_cvtepi32_ps(zx.o(int.d(xmm2_16)))
            float xmm1_17
            
            if (0f <= xmm1_16)
                xmm1_17 = xmm1_16 + 0.5f
            else
                xmm1_17 = xmm1_16 - 0.5f
            
            float xmm7_8 = (xmm7_6 f- *(eax_3 + 0x10)) / xmm2_11
            float var_14_5 = (xmm2_18 + xmm7_6 f- *(eax_3 + 0x10)) / xmm2_11
            float xmm0_18 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_17))) + xmm6_13
            float var_18_5 = (xmm6_13 f- *(eax_3 + 0x14)) / xmm3_8
            float var_10_5 = (xmm0_18 f- *(eax_3 + 0x14)) / xmm3_8
            *(eax_3 + 0x98) = xmm7_8.o
            float xmm1_18 = *(eax_3 + 0xa0)
            float var_1c_3
            var_1c_3.o = *(eax_3 + 0x98)
            float xmm0_23 = *(eax_3 + 0x98)
            
            if (not(0 f<= xmm0_23))
                var_1c_3 = 0f
                float var_14_6 = xmm1_18 - xmm0_23 + 0f
            else if (not(xmm1_18 <= 1f))
                int32_t var_14_7 = 0x3f800000
                var_1c_3 = 1f - (xmm1_18 - xmm0_23)
            
            float xmm1_22 = *(eax_3 + 0x9c)
            float xmm0_25 = *(eax_3 + 0xa4)
            
            if (not(0f <= xmm1_22))
                int32_t var_18_6 = 0
                float var_10_6 = xmm0_25 - xmm1_22 + 0f
                *(eax_3 + 0x98) = var_1c_3.o
                return 
            
            if (not(xmm0_25 <= 1f))
                int32_t var_10_7 = 0x3f800000
                float var_18_7 = 1f - (xmm0_25 - xmm1_22)
            
            *(eax_3 + 0x98) = var_1c_3.o
            return 

int32_t i = 0

if (data_151345c s<= 0)
    return 

do
    void* eax_8 = sub_744f10((&data_151245c)[i], nullptr)
    float xmm0_31 = *arg1
    float xmm1_23 = arg1[1]
    float xmm5_15 = xmm0_31 f+ *(eax_8 + 0x10)
    float xmm4_12 = xmm1_23 f+ *(eax_8 + 0x14)
    float xmm3_10
    
    if (0f <= xmm5_15)
        xmm3_10 = xmm5_15 + 0.5f
    else
        xmm3_10 = xmm5_15 - 0.5f
    
    float xmm3_12
    
    if (0f <= xmm4_12)
        xmm3_12 = xmm4_12 + 0.5f
    else
        xmm3_12 = xmm4_12 - 0.5f
    
    float xmm0_33 = xmm0_31 f+ *(eax_8 + 0x18) - xmm5_15
    float xmm1_25 = xmm1_23 f+ *(eax_8 + 0x1c) - xmm4_12
    float xmm7_10 = _mm_cvtepi32_ps(zx.o(int.d(xmm3_12)))
    float xmm0_34
    
    if (0f <= xmm0_33)
        xmm0_34 = xmm0_33 + 0.5f
    else
        xmm0_34 = xmm0_33 - 0.5f
    
    float xmm3_14 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_34)))
    float xmm1_26
    
    if (0f <= xmm1_25)
        xmm1_26 = xmm1_25 + 0.5f
    else
        xmm1_26 = xmm1_25 - 0.5f
    
    i += 1
    float xmm1_28 = _mm_cvtepi32_ps(zx.o(int.d(xmm3_10)))
    float var_18_8 = xmm7_10
    float var_14_8 = xmm3_14 + xmm1_28
    float var_10_8 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_26))) + xmm7_10
    *(eax_8 + 0x10) = xmm1_28.o
while (i s< data_151345c)
