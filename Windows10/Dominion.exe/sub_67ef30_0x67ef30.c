// 函数: sub_67ef30
// 地址: 0x67ef30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = arg1[0xc]

if (eax != 0)
    if (eax != 1)
        if (eax != 2)
            sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Engine\UI2.cpp", 0x7f8, "GraphEval")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        float xmm1_3[0x2] = arg1[3]
        xmm1_3 f- 0
        eax:1.b = (xmm1_3 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_3, 0f) ? 1 : 0) << 2
            | (xmm1_3 f< 0f ? 1 : 0)
        bool p_6 = unimplemented  {test ah, 0x44}
        float xmm3_3
        
        if (p_6)
            double var_14_2 = fconvert.d(arg2)
            long double x87_r6_2 = fconvert.t(_mm_cvtps_pd(xmm1_3))
            _CIfmod()
            xmm3_3 = fconvert.s(x87_r6_2)
        else
            xmm3_3 = (zx.o(0)).d
        
        float xmm3_4 = xmm3_3 - 0f
        float xmm2_4
        
        if (0 f< xmm3_4)
            xmm2_4 = 1f
            
            if (not(xmm3_4 >= 1f))
                float xmm0_9
                eax, xmm0_9 = sub_4ae110(0x18, xmm3_4, (zx.o(0)).d, 1f)
                xmm2_4 = xmm0_9
        else
            xmm2_4 = (zx.o(0)).d
        
        xmm2_4 f- 0
        eax:1.b = (xmm2_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_4, 0f) ? 1 : 0) << 2
            | (xmm2_4 < 0f ? 1 : 0)
        bool p_8 = unimplemented  {test ah, 0x44}
        
        if (p_8)
            return sub_5af6f0(arg1, &arg1[4], xmm2_4)
    else
        float xmm1[0x2] = arg1[3]
        xmm1 f- 0
        eax:1.b = (xmm1 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1, 0f) ? 1 : 0) << 2
            | (xmm1 f< 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        int32_t xmm3_1
        
        if (p_2)
            double var_14_1 = fconvert.d(arg2)
            long double x87_r6_1 = fconvert.t(_mm_cvtps_pd(xmm1))
            _CIfmod()
            xmm3_1 = fconvert.s(x87_r6_1)
        else
            xmm3_1 = (zx.o(0)).d
        
        int32_t ecx = arg1[2]
        float xmm3_2 = xmm3_1 f- 0f
        double var_14
        var_14:4.d = xmm3_2
        float var_8_1
        
        if (not(0f < xmm3_2))
            var_8_1 = 0f
        else if (xmm3_2 < 1f)
            float xmm0_4
            eax, xmm0_4 = sub_4ae110(ecx, xmm3_2, (zx.o(0)).d, 1f)
            xmm3_2 = var_14:4.d
            var_8_1 = xmm0_4
        else if (ecx == 0xa || ecx == 0xc || ecx == 0xb || ecx == 0xd || ecx == 0xe || ecx == 0xf
                || ecx == 0x13)
            var_8_1 = 0f
        else
            var_8_1 = 1f
        
        if (not(0 f>= xmm3_2) && not(xmm3_2 >= 1f))
            sub_4ae110(arg1[2], xmm3_2, (zx.o(0)).d, 1f)
        
        var_8_1 f- 0
        eax:1.b = (var_8_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(var_8_1, 0f) ? 1 : 0) << 2
            | (var_8_1 < 0f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            return sub_5af6f0(arg1, arg1, var_8_1)

return *arg1
