// 函数: sub_703330
// 地址: 0x703330
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = 0
int32_t result_1 = 0

if (arg2 s> 0)
    void* ecx = data_147ded4
    
    while (true)
        int32_t esi_1 = result * 5
        uint32_t eax = *(arg1 + (esi_1 << 2))
        int32_t var_28_7
        
        if (eax u> 0x50)
        label_7039ff:
            char const* const var_24_23 = "GLSetFunctionRenderState"
            var_28_7 = 0x1047
        label_703a18:
            sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Engine\OpenGLGraphics.cpp", 
                var_28_7, "GLSetFunctionRenderState")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        eax = zx.d(lookup_table_703aac[eax])
        int32_t var_30_1
        int32_t var_2c_1
        int32_t var_28_3
        int32_t var_24_6
        int32_t (* const eax_10)()
        
        switch (eax)
            case 0
                int32_t esi_3 = *(arg1 + (esi_1 << 2) + 4)
                
                if (*(ecx + 0x402c) != esi_3)
                    if (esi_3 == 0)
                        glDisable(0xb71)
                        ecx = data_147ded4
                        *(ecx + 0x402c) = esi_3
                    else
                        glEnable(0xb71)
                        ecx = data_147ded4
                        *(ecx + 0x402c) = esi_3
                
                goto label_703955
            case 1
                int32_t eax_1 = *(arg1 + (esi_1 << 2) + 4)
                
                if (*(ecx + 0x405c) != eax_1)
                    *(ecx + 0x405c) = eax_1
                    glDepthMask(*(arg1 + (esi_1 << 2) + 4))
                    ecx = data_147ded4
                
                goto label_703955
            case 2
                if (*(data_cf65b8 + 0x1c) != 0)
                    int32_t esi_4 = *(arg1 + (esi_1 << 2) + 4)
                    
                    if (*(ecx + 0x4034) != esi_4)
                        if (esi_4 == 0)
                            glDisable(0x809e)
                            ecx = data_147ded4
                            *(ecx + 0x4034) = esi_4
                        else
                            glEnable(0x809e)
                            ecx = data_147ded4
                            *(ecx + 0x4034) = esi_4
                
                goto label_703955
            case 3
                int32_t edx_1 = *(arg1 + (esi_1 << 2) + 4)
                int32_t eax_4 = *(arg1 + (esi_1 << 2) + 8)
                
                if (*(ecx + 0x4060) != edx_1 || *(ecx + 0x4064) != eax_4)
                    *(ecx + 0x4060) = edx_1
                    *(ecx + 0x4064) = eax_4
                    glBlendFunc(*(arg1 + (esi_1 << 2) + 4), *(arg1 + (esi_1 << 2) + 8))
                    ecx = data_147ded4
                
                goto label_703955
            case 4
                char const* const var_24_12 = "GLSetFunctionRenderState"
                var_28_7 = 0xfbe
                goto label_703a18
            case 5
                int32_t esi_5 = *(arg1 + (esi_1 << 2) + 4)
                
                if (esi_5 == 1)
                    if (*(ecx + 0x4038) != 0)
                        glDisable(0xb44)
                        ecx = data_147ded4
                        *(ecx + 0x4038) = 0
                    
                    goto label_703955
                
                char ebx_1 = *(data_147b06c + 0x166)
                void* eax_5
                eax_5.b = ebx_1 != 0
                char edx = eax_5.b
                
                if (data_147b074 == 1 && data_cf69dc == 0)
                    edx = ebx_1 == 0
                
                if ((edx != 0 || esi_5 != 2) && data_147b074 == 1 && data_cf69dc == 0)
                    eax_5.b = ebx_1 == 0
                
                if ((edx != 0 || esi_5 != 2) && (eax_5.b == 0 || esi_5 != 3))
                    if (*(ecx + 0x4038) != 1)
                        glEnable(0xb44)
                        ecx = data_147ded4
                        *(ecx + 0x4038) = 1
                    
                    if (*(ecx + 0x4068) == 0x405)
                        goto label_703955
                    
                    *(ecx + 0x4068) = 0x405
                    glCullFace(0x405)
                    goto label_703940
                
                if (*(ecx + 0x4038) != 1)
                    glEnable(0xb44)
                    ecx = data_147ded4
                    *(ecx + 0x4038) = 1
                
                if (*(ecx + 0x4068) == 0x404)
                    goto label_703955
                
                *(ecx + 0x4068) = 0x404
                glCullFace(0x404)
                goto label_703940
            case 6
                int32_t eax_6 = *(arg1 + (esi_1 << 2) + 4)
                
                if (*(ecx + 0x406c) != eax_6)
                    *(ecx + 0x406c) = eax_6
                    glDepthFunc(*(arg1 + (esi_1 << 2) + 4))
                    ecx = data_147ded4
                
                goto label_703955
            case 7
                char const* const var_24_13 = "GLSetFunctionRenderState"
                var_28_7 = 0xfe4
                goto label_703a18
            case 8
                int32_t edx_2 = *(arg1 + (esi_1 << 2) + 4)
                int32_t eax_7 = *(arg1 + (esi_1 << 2) + 8)
                
                if (*(ecx + 0x4070) != edx_2 || *(ecx + 0x4074) != eax_7)
                    *(ecx + 0x4070) = edx_2
                    *(ecx + 0x4074) = eax_7
                    void* var_24_4 = ecx
                    glAlphaFunc(*(arg1 + (esi_1 << 2) + 4), *(arg1 + (esi_1 << 2) + 8))
                    ecx = data_147ded4
                
                goto label_703955
            case 9
                int32_t esi_6 = *(arg1 + (esi_1 << 2) + 4)
                
                if (*(ecx + 0x403c) != esi_6)
                    if (esi_6 == 0)
                        glDisable(0xbe2)
                        ecx = data_147ded4
                        *(ecx + 0x403c) = esi_6
                    else
                        glEnable(0xbe2)
                        ecx = data_147ded4
                        *(ecx + 0x403c) = esi_6
                
                goto label_703955
            case 0xa
                int32_t esi_7 = *(arg1 + (esi_1 << 2) + 4)
                
                if (*(ecx + 0x404c) != esi_7)
                    if (esi_7 == 0)
                        glDisable(0xb90)
                        ecx = data_147ded4
                        *(ecx + 0x404c) = esi_7
                    else
                        glEnable(0xb90)
                        ecx = data_147ded4
                        *(ecx + 0x404c) = esi_7
                
                goto label_703955
            case 0xb
                char const* const var_24_14 = "GLSetFunctionRenderState"
                var_28_7 = 0xff7
                goto label_703a18
            case 0xc
                char const* const var_24_15 = "GLSetFunctionRenderState"
                var_28_7 = 0xff8
                goto label_703a18
            case 0xd
                char const* const var_24_16 = "GLSetFunctionRenderState"
                var_28_7 = 0xff9
                goto label_703a18
            case 0xe
                int32_t ebx_2 = *(arg1 + (esi_1 << 2) + 4)
                int32_t eax_9 = *(arg1 + (esi_1 << 2) + 0xc)
                int32_t edx_3 = *(arg1 + (esi_1 << 2) + 8)
                
                if (*(ecx + 0x4078) == ebx_2 && *(ecx + 0x407c) == edx_3
                        && *(ecx + 0x4080) == eax_9)
                    goto label_703955
                
                *(ecx + 0x4080) = eax_9
                eax_10 = __glewStencilFuncSeparate
                *(ecx + 0x4078) = ebx_2
                *(ecx + 0x407c) = edx_3
                var_24_6 = *(arg1 + (esi_1 << 2) + 0xc)
                var_28_3 = *(arg1 + (esi_1 << 2) + 8)
                var_2c_1 = *(arg1 + (esi_1 << 2) + 4)
                var_30_1 = 0x404
            label_70393e:
                (*eax_10)(var_30_1, var_2c_1, var_28_3, var_24_6)
            label_703940:
                ecx = data_147ded4
            label_703955:
                result = result_1 + 1
                result_1 = result
                
                if (result s>= arg2)
                    break
                
                continue
            case 0xf
                char const* const var_24_17 = "GLSetFunctionRenderState"
                var_28_7 = 0x1002
                goto label_703a18
            case 0x10
                char const* const var_24_18 = "GLSetFunctionRenderState"
                var_28_7 = 0x1003
                goto label_703a18
            case 0x11
                char const* const var_24_19 = "GLSetFunctionRenderState"
                var_28_7 = 0x1004
                goto label_703a18
            case 0x12
                char const* const var_24_20 = "GLSetFunctionRenderState"
                var_28_7 = 0x1005
                goto label_703a18
            case 0x13
                char const* const var_24_21 = "GLSetFunctionRenderState"
                var_28_7 = 0x1006
                goto label_703a18
            case 0x14
                char const* const var_24_22 = "GLSetFunctionRenderState"
                var_28_7 = 0x1007
                goto label_703a18
            case 0x15
                int32_t ebx_3 = *(arg1 + (esi_1 << 2) + 4)
                int32_t eax_11 = *(arg1 + (esi_1 << 2) + 0xc)
                int32_t edx_4 = *(arg1 + (esi_1 << 2) + 8)
                
                if (*(ecx + 0x4084) == ebx_3 && *(ecx + 0x4088) == edx_4
                        && *(ecx + 0x408c) == eax_11)
                    goto label_703955
                
                *(ecx + 0x408c) = eax_11
                eax_10 = __glewStencilFuncSeparate
                *(ecx + 0x4084) = ebx_3
                *(ecx + 0x4088) = edx_4
                var_24_6 = *(arg1 + (esi_1 << 2) + 0xc)
                var_28_3 = *(arg1 + (esi_1 << 2) + 8)
                var_2c_1 = *(arg1 + (esi_1 << 2) + 4)
                var_30_1 = 0x405
                goto label_70393e
            case 0x16
                int32_t eax_12 = *(arg1 + (esi_1 << 2) + 4)
                
                if (*(ecx + 0x4050) != eax_12)
                    *(ecx + 0x4050) = eax_12
                    int32_t ecx_1 = *(arg1 + (esi_1 << 2) + 4)
                    uint8_t alpha = (ecx_1 u>> 3).b & 1
                    uint8_t blue = (ecx_1 u>> 2).b & 1
                    int32_t eax_17 = ecx_1
                    ecx_1.b &= 1
                    glColorMask(ecx_1.b, (eax_17 u>> 1).b & 1, blue, alpha)
                    ecx = data_147ded4
                
                goto label_703955
            case 0x17
                int32_t eax_21 = *(arg1 + (esi_1 << 2) + 4)
                
                if (*(ecx + 0x4040) != eax_21)
                    *(ecx + 0x4040) = eax_21
                    (*__glewBlendEquation)(*(arg1 + (esi_1 << 2) + 4))
                    ecx = data_147ded4
                
                goto label_703955
            case 0x18
                if (*(arg1 + (esi_1 << 2) + 4) != 0)
                    if (*(ecx + 0x4054) != 1)
                        glEnable(0x8037)
                        ecx = data_147ded4
                        *(ecx + 0x4054) = 1
                    
                    int32_t eax_25 = *(arg1 + (esi_1 << 2) + 4)
                    
                    if (*(ecx + 0x4094) != eax_25)
                        *(ecx + 0x4094) = eax_25
                        float eax_26 = *(arg1 + (esi_1 << 2) + 4)
                        glPolygonOffset(eax_26, eax_26)
                        ecx = data_147ded4
                else if (*(ecx + 0x4054) != 0)
                    glDisable(0x8037)
                    ecx = data_147ded4
                    *(ecx + 0x4054) = 0
                
                goto label_703955
            case 0x19
                char const* const var_24_11 = "GLSetFunctionRenderState"
                var_28_7 = 0xf9f
                goto label_703a18
            case 0x1a
                goto label_703955
            case 0x1b
                int32_t esi_2 = *(arg1 + (esi_1 << 2) + 4)
                
                if (*(ecx + 0x4028) != esi_2)
                    if (esi_2 == 0)
                        glDisable(0xb60)
                        ecx = data_147ded4
                        *(ecx + 0x4028) = esi_2
                    else
                        glEnable(0xb60)
                        ecx = data_147ded4
                        *(ecx + 0x4028) = esi_2
                
                goto label_703955
            case 0x1c
                int32_t eax_27 = *(arg1 + (esi_1 << 2) + 0x10)
                int32_t edx_6 = *(arg1 + (esi_1 << 2) + 0xc)
                int32_t ebx_4 = *(arg1 + (esi_1 << 2) + 8)
                int32_t eax_28 = *(arg1 + (esi_1 << 2) + 4)
                
                if (*(ecx + 0x4060) == eax_28 && *(ecx + 0x4064) == ebx_4
                        && *(ecx + 0x4068) == edx_6 && *(ecx + 0x406c) == eax_27)
                    goto label_703955
                
                *(ecx + 0x4060) = eax_28
                *(ecx + 0x406c) = eax_27
                eax_10 = __glewBlendFuncSeparate
                *(ecx + 0x4064) = ebx_4
                *(ecx + 0x4068) = edx_6
                var_24_6 = *(arg1 + (esi_1 << 2) + 0x10)
                var_28_3 = *(arg1 + (esi_1 << 2) + 0xc)
                var_2c_1 = *(arg1 + (esi_1 << 2) + 8)
                var_30_1 = *(arg1 + (esi_1 << 2) + 4)
                goto label_70393e
            case 0x1d
                int32_t edx_5 = *(arg1 + (esi_1 << 2) + 4)
                int32_t eax_23 = *(arg1 + (esi_1 << 2) + 8)
                
                if (*(ecx + 0x4044) != edx_5 || *(ecx + 0x4048) != eax_23)
                    *(ecx + 0x4048) = eax_23
                    *(ecx + 0x4044) = edx_5
                    (*__glewBlendEquationSeparate)(*(arg1 + (esi_1 << 2) + 4), 
                        *(arg1 + (esi_1 << 2) + 8))
                    ecx = data_147ded4
                
                goto label_703955
            case 0x1e
                goto label_7039ff

return result
