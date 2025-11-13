// 函数: sub_6e7e80
// 地址: 0x6e7e80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_24 = arg2
int32_t esi = 0
float result = arg3[2]
int32_t edi = 0
float result_3 = 0f
float var_20 = 0f
float var_1c = 0f
int32_t ecx = result << 3

if (result s> 0)
    do
        float eax
        float edx_1
        eax, edx_1 = sub_6e7d30(result, esi, arg3, arg4)
        float xmm1_1 = eax
        
        if (esi == 0)
        label_6e7f05:
            var_20 = xmm1_1
            edi += 1
            var_1c = edx_1
        else
            var_20 - xmm1_1
            eax:1.b = (var_20 == xmm1_1 ? 1 : 0) << 6
                | (is_unordered.d(var_20, xmm1_1) ? 1 : 0) << 2 | (var_20 < xmm1_1 ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                goto label_6e7f05
            
            var_1c - edx_1
            eax:1.b = (var_1c == edx_1 ? 1 : 0) << 6 | (is_unordered.d(var_1c, edx_1) ? 1 : 0) << 2
                | (var_1c < edx_1 ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (p_4)
                goto label_6e7f05
        
        result = arg3[2]
        esi += 1
    while (esi s< result)
    
    arg2 = var_24

uint32_t count = edi * 0xa

if (count s>= ecx)
    int32_t count_1 = result << 3
    arg2[2] = count_1
    int32_t edi_2
    
    if (count_1 != 0)
        edi_2 = sub_687730(count_1)
        result = memset(edi_2, 0, count_1)
        arg2 = var_24
    else
        edi_2 = 0
    
    *arg2 = edi_2
    int32_t i = 0
    arg2[3] = 1
    
    if (arg3[2] s> 0)
        do
            int32_t esi_2 = *arg2
            int32_t edx_7
            result, edx_7 = sub_6e7d30(result, i, arg3, arg4)
            arg2 = var_24
            *(esi_2 + (i << 3)) = result
            *(esi_2 + (i << 3) + 4) = edx_7
            i += 1
        while (i s< arg3[2])
else
    arg2[2] = count
    float result_1
    float result_4
    
    if (count != 0)
        result_4 = sub_687730(count)
        result_1 = result_4
        memset(result_4, 0, count)
        arg2 = var_24
    else
        result_4 = 0f
        result_1 = 0f
    
    *arg2 = result_4
    arg2[3] = 3
    float var_20_1 = 0f
    int32_t eax_5 = count s/ 0xa
    int32_t edi_1 = 0
    result = arg3[2]
    int32_t var_38
    char const* const ecx_3
    
    if (result s>= 0xffff)
        char const* const var_34_3 = "FlanimCompressConstantVec2"
        var_38 = 0x5a2
        ecx_3 = "pMayaVertex->mFrameCount < MAXUINT16"
    label_6e80c0:
        sub_63b870(result, &data_801800, ecx_3, "C:\x\ax2017\Engine\Flanim.cpp", var_38, 
            "FlanimCompressConstantVec2")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t i_1 = 0
    
    if (result s> 0)
        do
            float edx_5
            result, edx_5 = sub_6e7d30(result, i_1, arg3, arg4)
            float result_2 = result
            
            if (i_1 == 0)
            label_6e7ff9:
                result_3 = result_2
                var_20_1 = edx_5
                *(result_4 i+ (eax_5 << 3) + (edi_1 << 1)) = i_1.w
                result = result_1
                *(result i+ (edi_1 << 3)) = result_2
                *(result i+ (edi_1 << 3) + 4) = edx_5
                edi_1 += 1
            else
                result_3 - result_2
                result:1.b = (result_3 == result_2 ? 1 : 0) << 6
                    | (is_unordered.d(result_3, result_2) ? 1 : 0) << 2
                    | (result_3 < result_2 ? 1 : 0)
                bool p_6 = unimplemented  {test ah, 0x44}
                
                if (p_6)
                    goto label_6e7ff9
                
                var_20_1 - edx_5
                result:1.b = (var_20_1 == edx_5 ? 1 : 0) << 6
                    | (is_unordered.d(var_20_1, edx_5) ? 1 : 0) << 2 | (var_20_1 < edx_5 ? 1 : 0)
                bool p_8 = unimplemented  {test ah, 0x44}
                
                if (p_8)
                    goto label_6e7ff9
            
            i_1 += 1
        while (i_1 s< arg3[2])
    
    if (edi_1 != eax_5)
        char const* const var_34_7 = "FlanimCompressConstantVec2"
        var_38 = 0x5b1
        ecx_3 = "dataIndex == numValues"
        goto label_6e80c0

return result
