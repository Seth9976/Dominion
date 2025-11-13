// 函数: sub_69d0f0
// 地址: 0x69d0f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg3
uint32_t result = sub_69c520(arg2[3])

if (result.b != 0)
    void* ebx_1 = arg2[3]
    int32_t ecx_1 = *(ebx_1 + 0x10)
    result = ecx_1 - 5
    int32_t var_1c_1
    char const* const var_18_1
    char* ecx_2
    
    if (result u> 0xc)
    label_69d2dc:
        
        if (ecx_1 s> 0 && ecx_1 s< 0x12)
            var_18_1 = "DefDeepCopyField"
            var_1c_1 = 0x314
            ecx_2 = "!DefTypeIsBuiltIn(pField->pDefMap)"
            goto label_69d32e
        
        void* edx_7 = arg4
        
        if (edx_7 == 0 && (ecx_1 == 0x13 || ecx_1 == 0x14))
            edx_7 = arg2[7]
        
        int32_t ecx_21 = *arg2
        uint32_t eax_16 = arg5 + ecx_21
        return sub_69d380(eax_16, ebx_1, ecx_21 + arg3, edx_7, eax_16)
    
    result = zx.d(lookup_table_69d364[result])
    
    switch (result)
        case 0
            int32_t* eax = arg2[4]
            return sub_69d050(eax, arg2, arg3, arg4, *(eax + arg5), arg5)
        case 1
            void* ecx_5 = *arg2
            void* eax_3 = arg5 + ecx_5
            return sub_69cf40(eax_3, arg2[7], ecx_5 + arg3, arg2, nullptr, eax_3)
        case 2
            void* ecx_7 = *arg2
            result = arg5
            char* edi_1 = *(ecx_7 + result)
            
            if (edi_1 == 0)
                var_18_1 = "DefDeepCopyString"
                var_1c_1 = 0x25b
                ecx_2 = "pExistingString"
                goto label_69d32e
            
            char* esi_1 = edi_1
            void* ecx_8 = &esi_1[1]
            
            do
                result.b = *esi_1
                esi_1 = &esi_1[1]
            while (result.b != 0)
            
            int32_t eax_5 = sub_687730(esi_1 - ecx_8 + 1)
            *(ecx_7 + arg3) = eax_5
            return memcpy(eax_5, edi_1, esi_1 - ecx_8 + 1)
        case 3
            result = arg2[4]
            int32_t edx_4 = *(arg5 + result)
            
            if (edx_4 != 0xffffffff)
                void* eax_9 = sub_6dd320(arg4, edx_4)
                result = sub_69c520(eax_9)
                
                if (result.b != 0)
                    int32_t ecx_14 = *(eax_9 + 0x10)
                    
                    if (ecx_14 == 8)
                        result = *arg2
                        int32_t* ecx_15 = result + arg3
                        char* edi_2 = *(result + arg5)
                        
                        if (edi_2 != 0)
                            char* esi_4 = edi_2
                            void* ecx_16 = &esi_4[1]
                            
                            do
                                result.b = *esi_4
                                esi_4 = &esi_4[1]
                            while (result.b != 0)
                            
                            int32_t eax_10 = sub_687730(esi_4 - ecx_16 + 1)
                            *ecx_15 = eax_10
                            return memcpy(eax_10, edi_2, esi_4 - ecx_16 + 1)
                        
                        var_18_1 = "DefDeepCopyString"
                        var_1c_1 = 0x25b
                        ecx_2 = "pExistingString"
                    else if (ecx_14 s<= 0 || ecx_14 s>= 0x12)
                        result = *arg2
                        int32_t* edi_3 = arg3 + result
                        uint32_t count = *(eax_9 + 0xc)
                        int32_t* ebx_4 = *(result + arg5)
                        
                        if (count != 0)
                            int32_t eax_12 = sub_687730(count)
                            *edi_3 = eax_12
                            return sub_69d380(memcpy(eax_12, ebx_4, count), eax_9, *edi_3, nullptr, 
                                ebx_4)
                        
                        var_18_1 = "DefinitionGetSize"
                        var_1c_1 = 0x6d
                        ecx_2 = "pDefMap->definitionSize != 0"
                    else
                        var_18_1 = "DefDeepCopyTagValue"
                        var_1c_1 = 0x28d
                        ecx_2 = "!DefTypeIsBuiltIn(pDefMap)"
                    
                    goto label_69d32e
        case 4
            int32_t eax_7 = *arg2
            int32_t ecx_10
            ecx_10.b = *(arg5 + eax_7) != 0
            return sub_69d050(eax_7, arg2, arg3, nullptr, ecx_10, arg5)
        case 5
            var_18_1 = "DefDeepCopyField"
            var_1c_1 = 0x2eb
            ecx_2 = "Halt"
        label_69d32e:
            sub_63b870(result, &data_801800, ecx_2, "C:\x\ax2017\Engine\Definition.cpp", var_1c_1, 
                var_18_1)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        case 6
            goto label_69d2dc

return result
