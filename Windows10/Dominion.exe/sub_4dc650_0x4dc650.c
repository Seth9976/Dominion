// 函数: sub_4dc650
// 地址: 0x4dc650
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* result = arg1
result[2] = 0
result[3] = 0
int32_t arg_8
int32_t ecx = arg_8
*result = ecx
result[1] = arg2

if (ecx != 0)
    char var_9
    int32_t eax_2
    int32_t edx_1
    eax_2, edx_1 = sub_4dc570(&var_9, "():,", result, &var_9)
    int32_t var_14_1 = edx_1
    
    if (eax_2 != 0)
        char ecx_2 = var_9
        var_9 = ecx_2
        
        if (ecx_2 == 0x2c || ecx_2 == 0x29)
            result[1] = eax_2 - *result
        else if (ecx_2 != 0x3a)
            if (ecx_2 != 0x28)
                sub_63b870(eax_2, &data_801800, "Halt", 
                    "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp", 0x6e8, 
                    "STokenize::STokenizeIter::ParseStr")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            result[1] = eax_2 - *result
            void* eax_10
            void* edx_8
            eax_10, edx_8 = sub_4dc5e0(result, &arg_8)
            void* ebx_1 = edx_8
            void* var_14_2 = eax_10
            result[2] = eax_10
            result[3] = ebx_1
            int32_t var_10_1 = 1
            void* edi_5
            
            while (true)
                void* esi = nullptr
                void* ebx_2
                void* edi_1
                
                if (edx_8 s<= 0)
                label_4dc768:
                    eax_10.b = var_9
                    int64_t var_18_1 = 0
                    ebx_2 = var_14_2
                    edi_1 = nullptr
                else
                    while (true)
                        edi_1 = esi + eax_10
                        eax_10 = strchr(&data_8070b0, *edi_1)
                        
                        if (eax_10 != 0)
                            eax_10.b = *eax_10
                            ebx_2 = ebx_1 - esi
                            var_9 = eax_10.b
                            break
                        
                        eax_10 = var_14_2
                        esi += 1
                        
                        if (esi s>= ebx_1)
                            goto label_4dc768
                
                if (edi_1 != 0)
                    int32_t ecx_6 = var_10_1
                    
                    if (eax_10.b == 0x28)
                        ecx_6 += 1
                        var_10_1 = ecx_6
                    else if (eax_10.b == 0x29)
                        ecx_6 -= 1
                        var_10_1 = ecx_6
                    
                    eax_10 = edi_1 + 1
                    ebx_1 = ebx_2 - 1
                    var_14_2 = eax_10
                    edx_8 = ebx_1
                    
                    if (ecx_6 s> 0)
                        continue
                    else if (eax_10 != 0)
                        result = arg1
                        edi_5 = eax_10 - result[2]
                        break
                
                result = arg1
                edi_5 = arg2 - result[2] + arg_8
                break
            
            result[3] = edi_5
            
            if (edi_5 == 0)
                result[2] = edi_5
        else
            result[1] = eax_2 - *result
            void* eax_4
            int32_t edx_3
            eax_4, edx_3 = sub_4dc5e0(result, &arg_8)
            result[2] = eax_4
            result[3] = edx_3
            void var_28
            uint128_t xmm1_1 = *sub_4dc650(&var_28, eax_4, edx_3)
            int32_t xmm0_2 = _mm_bsrli_si128(xmm1_1, 4)
            int32_t xmm0_4 = _mm_bsrli_si128(xmm1_1, 0xc)
            int32_t edx_5 = xmm0_2 + xmm1_1
            int32_t eax_8 = _mm_bsrli_si128(xmm1_1, 8) + xmm0_4
            
            if (eax_8 u> edx_5)
                edx_5 = eax_8
            
            result[3] = edx_5 - result[2]
    
    sub_63e5a0(result)
    sub_63e5a0(&result[2])
    int32_t eax_13 = result[3]
    
    if (eax_13 != 0 && *(result[2] + eax_13 - 1) == 0x29)
        result[3] = eax_13 - 1

return result
