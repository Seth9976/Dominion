// 函数: sub_65e740
// 地址: 0x65e740
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (*(arg3 + 0x18) == 0)
    return 

float edx
arg1, edx = sub_6b7590(*(arg5 + 0x10))
float xmm1_3 = (*(arg2 + 4) - arg4) * edx
void* ecx_2
void* edi_1

if (*(arg3 + 0x18) s> 0)
    edi_1 = *(arg3 + 0x18)
    ecx_2 = *(arg3 + 0x14)
    arg1 = edi_1 - 1

char const* const var_44
int32_t var_40
char const* const var_3c
char* ecx_4

if (*(arg3 + 0x18) s<= 0 || arg1 s< 0)
label_65e99d:
    var_3c = "XDynArray<struct TextEntry>::operator []"
    var_40 = 0xd4
    var_44 = "C:\x\ax2017\Engine\xDynArray.h"
    ecx_4 = "index >= 0 && index < mSize"
else
    while (true)
        if (arg1 s>= *(arg3 + 0x18))
            goto label_65e99d
        
        int32_t* edx_1 = *(arg3 + 0x14)
        arg1 = arg1 * 0x34 + edx_1
        
        if (ecx_2 u> arg1)
            int32_t ebx_1 = 0
            *(arg3 + 0x20) = data_7ff530
            
            if (edi_1 s<= 0)
                return 
            
            int32_t ecx_3 = 0
            
            while (true)
                if (ecx_3 s< 0)
                    goto label_65e99d
                
                if (ebx_1 s>= edi_1)
                    goto label_65e99d
                
                float xmm0_4 = *(edx_1 + ecx_3 + 0x18)
                xmm0_4 f- 0
                arg1:1.b = (xmm0_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, 0f) ? 1 : 0) << 2
                    | (xmm0_4 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    float xmm0_5 = *(edx_1 + ecx_3 + 0x1c)
                    xmm0_5 f- 0
                    arg1:1.b = (xmm0_5 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_5, 0f) ? 1 : 0) << 2 | (xmm0_5 < 0f ? 1 : 0)
                    bool p_4 = unimplemented  {test ah, 0x44}
                    
                    if (p_4)
                        arg1 = *(edx_1 + ecx_3)
                        float xmm5_1 = *(edx_1 + ecx_3 + 0x10)
                        float xmm1_4 = *(edx_1 + ecx_3 + 0x14)
                        
                        if (arg1 == 0)
                            xmm1_4 = xmm1_4 f- *(edx_1 + ecx_3 + 0x20)
                            
                            if (arg1 == 2)
                                xmm1_4 = xmm1_4 f- *(edx_1 + ecx_3 + 0x24)
                        else if (arg1 == 3 || arg1 == 2)
                            xmm1_4 = xmm1_4 f- *(edx_1 + ecx_3 + 0x24)
                        
                        if (ebx_1 s>= *(arg3 + 0x18))
                            goto label_65e99d
                        
                        float xmm3 = *(arg3 + 0x20)
                        xmm3 f- 0
                        float xmm6_2 = xmm5_1 f+ *(ecx_3 + edx_1 + 0x18)
                        float var_24_1 = xmm1_4
                        float xmm0_7 = xmm1_4 f+ *(ecx_3 + edx_1 + 0x1c)
                        arg1:1.b = (xmm3 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm3, 0f) ? 1 : 0) << 2 | (xmm3 < 0f ? 1 : 0)
                        float var_20_1 = xmm6_2
                        float var_c_1 = xmm0_7
                        float var_1c_1 = xmm0_7
                        bool p_6 = unimplemented  {test ah, 0x44}
                        
                        if (p_6)
                            goto label_65e8c4
                        
                        float xmm0_8 = *(arg3 + 0x24)
                        xmm0_8 f- 0
                        arg1:1.b = (xmm0_8 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_8, 0f) ? 1 : 0) << 2 | (xmm0_8 < 0f ? 1 : 0)
                        bool p_8 = unimplemented  {test ah, 0x44}
                        
                        if (p_8)
                        label_65e8bf:
                            xmm0_7 = var_c_1
                        label_65e8c4:
                            xmm5_1 f- 0
                            arg1:1.b = (xmm5_1 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm5_1, 0f) ? 1 : 0) << 2 | (xmm5_1 < 0f ? 1 : 0)
                            bool p_14 = unimplemented  {test ah, 0x44}
                            
                            if (p_14)
                            label_65e8ec:
                                float xmm0_12 = *(arg3 + 0x28)
                                float xmm4_1
                                float xmm7_1
                                
                                if (not(xmm0_12 < xmm3))
                                    xmm4_1 = *(arg3 + 0x24)
                                    xmm7_1 = *(arg3 + 0x2c)
                                
                                if (xmm0_12 < xmm3 || xmm7_1 < xmm4_1)
                                    var_3c = "RectUnion"
                                    var_40 = 0xdb
                                    var_44 = "C:\x\ax2017\Engine\Rect.cpp"
                                    ecx_4 = "RectIsNormalized(r0)"
                                    break
                                
                                if (not(xmm5_1 > xmm3))
                                    xmm3 = xmm5_1
                                
                                float xmm5_2 = xmm3
                                float var_14_2
                                
                                if (xmm0_12 <= xmm6_2)
                                    xmm0_12 = xmm6_2
                                    var_14_2 = xmm3
                                else
                                    var_14_2 = xmm3
                                
                                float xmm6_4 = xmm0_12
                                float xmm1_5
                                
                                if (xmm1_4 <= xmm4_1)
                                    xmm5_2 = xmm3
                                    xmm4_1 = xmm1_4
                                    xmm1_5 = xmm3
                                else
                                    xmm1_5 = var_14_2
                                
                                if (not(xmm7_1 > var_c_1))
                                    xmm7_1 = var_c_1
                                    xmm6_4 = xmm0_12
                                    xmm5_2 = xmm1_5
                                
                                *(arg3 + 0x20) = xmm5_2
                                *(arg3 + 0x24) = xmm4_1
                                *(arg3 + 0x28) = xmm6_4
                                *(arg3 + 0x2c) = xmm7_1
                            else
                                xmm1_4 f- 0
                                arg1:1.b = (xmm1_4 == 0f ? 1 : 0) << 6
                                    | (is_unordered.d(xmm1_4, 0f) ? 1 : 0) << 2
                                    | (xmm1_4 < 0f ? 1 : 0)
                                bool p_16 = unimplemented  {test ah, 0x44}
                                
                                if (p_16)
                                    goto label_65e8ec
                                
                                xmm6_2 f- 0
                                arg1:1.b = (xmm6_2 == 0f ? 1 : 0) << 6
                                    | (is_unordered.d(xmm6_2, 0f) ? 1 : 0) << 2
                                    | (xmm6_2 < 0f ? 1 : 0)
                                bool p_18 = unimplemented  {test ah, 0x44}
                                
                                if (p_18)
                                    goto label_65e8ec
                                
                                xmm0_7 f- 0
                                arg1:1.b = (xmm0_7 == 0f ? 1 : 0) << 6
                                    | (is_unordered.d(xmm0_7, 0f) ? 1 : 0) << 2
                                    | (xmm0_7 < 0f ? 1 : 0)
                                bool p_20 = unimplemented  {test ah, 0x44}
                                
                                if (p_20)
                                    goto label_65e8ec
                        else
                            float xmm0_9 = *(arg3 + 0x28)
                            xmm0_9 f- 0
                            arg1:1.b = (xmm0_9 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_9, 0f) ? 1 : 0) << 2 | (xmm0_9 < 0f ? 1 : 0)
                            bool p_10 = unimplemented  {test ah, 0x44}
                            
                            if (p_10)
                                goto label_65e8bf
                            
                            float xmm0_10 = *(arg3 + 0x2c)
                            xmm0_10 f- 0
                            arg1:1.b = (xmm0_10 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_10, 0f) ? 1 : 0) << 2
                                | (xmm0_10 < 0f ? 1 : 0)
                            bool p_12 = unimplemented  {test ah, 0x44}
                            
                            if (p_12)
                                goto label_65e8bf
                            
                            *(arg3 + 0x20) = xmm5_1.o
                
                edi_1 = *(arg3 + 0x18)
                ebx_1 += 1
                ecx_3 += 0x34
                
                if (ebx_1 s>= edi_1)
                    return 
            
            break
        
        *(ecx_2 + 0x14) = xmm1_3 f+ *(ecx_2 + 0x14)
        ecx_2 += 0x34
        edi_1 = *(arg3 + 0x18)
        arg1 = edi_1 - 1
        
        if (arg1 s< 0)
            goto label_65e99d

sub_63b870(arg1, &data_801800, ecx_4, var_44, var_40, var_3c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
