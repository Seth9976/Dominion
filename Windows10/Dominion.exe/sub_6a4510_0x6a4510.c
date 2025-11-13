// 函数: sub_6a4510
// 地址: 0x6a4510
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* edi = arg3
void* var_8 = arg2
int32_t* var_c = edi

if (*(arg2 + 8) != 0)
    for (int32_t i = 0; i != 0xffffffff; )
        int32_t ecx_2 = i * 0xf
        i += 1
        int32_t* esi_1 = *(arg2 + 4) + (ecx_2 << 2)
        char ecx_3 = (esi_1[0xa]).b
        
        if (i s>= *(arg2 + 8))
            i = 0xffffffff
        
        if ((ecx_3 & 8) == 0)
            void* edx = esi_1[3]
            void* eax_1 = *(edx + 0x10)
            char const* const var_3c
            int32_t var_38_7
            char const* const var_34_7
            void* eax_3
            char* ecx_19
            
            if (eax_1 == 6)
                eax_3 = *(esi_1[6] + 0xc)
                void* var_18_1 = eax_3
                
                if (eax_3 == 0)
                    var_34_7 = "DefinitionGetSize"
                    var_38_7 = 0x6d
                    var_3c = "C:\x\ax2017\Engine\Definition.cpp"
                    ecx_19 = "pDefMap->definitionSize != 0"
                label_6a4752:
                    sub_63b870(eax_3, &data_801800, ecx_19, var_3c, var_38_7, var_34_7)
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                int32_t eax_4 = esi_1[7]
                int32_t ebx_1 = 0
                uint32_t* edi_2 = *esi_1 + var_c
                int32_t* ecx_4 = arg4[1]
                
                if (ecx_4 != 0)
                    while (true)
                        int32_t* eax_6 = *ecx_4
                        int32_t* ecx_5 = ecx_4[1]
                        char* const _Str2 = &data_801800
                        char* _Str2_2 = *eax_6
                        
                        if (_Str2_2 != 0)
                            _Str2 = _Str2_2
                        
                        if (_stricmp(esi_1[1], _Str2) == 0)
                            char eax_8 = sub_69c590(esi_1[6])
                            void* edx_1 = esi_1[6]
                            
                            if (eax_8 == 0)
                                eax_3 = *(edx_1 + 0x10) - 1
                                
                                if (eax_3 u<= 0x10)
                                    var_34_7 = "DefParseReadFixedArray"
                                    var_38_7 = 0x29a
                                    ecx_19 = "!DefTypeIsBuiltIn(pField->pSubDefMap)"
                                    break
                                
                                sub_6a4770(eax_6, edx_1, edi_2, eax_6[3], 0)
                            else
                                sub_6a34e0(eax_6, edx_1, edi_2, esi_1, eax_6)
                            
                            edi_2 += var_18_1
                            ebx_1 += 1
                            
                            if (ebx_1 == eax_4)
                                goto label_6a4604
                        
                        ecx_4 = ecx_5
                        
                        if (ecx_4 == 0)
                            goto label_6a4604
                    
                    goto label_6a4748
                
            label_6a4604:
                edi = var_c
                arg2 = var_8
            else if ((ecx_3 & 0x40) == 0)
                arg2 = var_8
            else if (eax_1 == 0x13)
                sub_6a4230(eax_1, esi_1, *esi_1 + edi, arg4)
                arg2 = var_8
            else if (eax_1 != 0x14)
                eax_3 = eax_1 - 1
                
                if (eax_3 u<= 0x10)
                    var_34_7 = "DefParseReadBlockNoVersion"
                    var_38_7 = 0x453
                    ecx_19 = "!DefTypeIsBuiltIn(pField->pDefMap)"
                label_6a4748:
                    var_3c = "C:\x\ax2017\Engine\DefParseTree.cpp"
                    goto label_6a4752
                
                sub_6a4770(eax_3, edx, *esi_1 + edi, arg4, 0)
                arg2 = var_8
            else
                int32_t* var_34_5 = arg4
                sub_6a3ff0(eax_1, *esi_1 + edi, edi, esi_1)
                arg2 = var_8

int32_t* result = arg4
int32_t* i_1 = result[1]

while (i_1 != 0)
    result = i_1
    int32_t* i_2 = i_1[1]
    void* ebx_2 = *result
    
    if (*(arg2 + 8) != 0)
        for (int32_t j = 0; j != 0xffffffff; )
            int32_t ecx_11 = j * 0xf
            j += 1
            int32_t* edi_3 = *(arg2 + 4) + (ecx_11 << 2)
            result = 0xffffffff
            char ecx_12 = (edi_3[0xa]).b
            
            if (j s>= *(arg2 + 8))
                j = 0xffffffff
            
            if ((ecx_12 & 8) == 0)
                result = edi_3[3]
                
                if (result[4] != 6 && (ecx_12 & 0x40) == 0)
                    char* _Str2_3 = *ebx_2
                    char* const _Str2_1 = &data_801800
                    
                    if (_Str2_3 != 0)
                        _Str2_1 = _Str2_3
                    
                    result = _stricmp(edi_3[1], _Str2_1)
                    
                    if (result == 0)
                        result = sub_6a4320(result, edi_3, var_c, ebx_2)
                        break
                    
                    arg2 = var_8
    
    i_1 = i_2
    arg2 = var_8

return result
