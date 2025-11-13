// 函数: sub_6a3a50
// 地址: 0x6a3a50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = *(arg4 + 0xc)
void* ebx_1 = *arg2 + arg3
sub_6a39e0(ebx_1 + 0xc, "mFreeListHead", esi, ebx_1 + 0xc)
sub_6a39e0(ebx_1 + 0x10, "mUsedCount", esi, ebx_1 + 0x10)
sub_6a39e0(ebx_1 + 0x14, "mNextKey", esi, ebx_1 + 0x14)
int32_t result = *(arg2[6] + 0xc)
char const* const var_3c
int32_t var_38_1
char const* const var_34_3
char* ecx_3

if (result != 0)
    int32_t edi_1 = *(ebx_1 + 8)
    result += 4
    int32_t result_1 = result
    int32_t var_1c_1 = edi_1
    
    if (*(ebx_1 + 4) == 0)
        int32_t* i_1
        
        for (int32_t* i = *(esi + 4); i != 0; i = i_1)
            int32_t* esi_1 = *i
            i_1 = i[1]
            char* const _Str1 = &data_801800
            char* _Str1_2 = *esi_1
            
            if (_Str1_2 != 0)
                _Str1 = _Str1_2
            
            result = _stricmp(_Str1, "item")
            
            if (result == 0)
                int32_t var_38_6
                char const* const ecx_10
                
                if (*(ebx_1 + 4) s>= edi_1)
                    char const* const var_34_8 = "DefParseReadDataArray"
                    var_38_6 = 0x232
                    ecx_10 = "(int)actualCount < maxCount"
                label_6a3c19:
                    sub_63b870(result, &data_801800, ecx_10, "C:\x\ax2017\Engine\DefParseTree.cpp", 
                        var_38_6, "DefParseReadDataArray")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                arg4 = result
                sub_6a39e0(&arg4, "slot", esi_1[3], &arg4)
                int32_t var_c
                sub_6a39e0(&var_c, "id", esi_1[3], &var_c)
                int32_t ecx_6 = var_c
                result = arg4 * result_1 + *ebx_1
                int32_t result_2 = result
                *(result + result_1 - 4) = ecx_6
                void* esi_2 = esi_1[3]
                int32_t** esi_3
                
                if (esi_2 != 0)
                    esi_3 = *(esi_2 + 4)
                
                int32_t* edi_2
                
                if (esi_2 == 0 || esi_3 == 0)
                label_6a3b98:
                    edi_2 = nullptr
                else
                    while (true)
                        edi_2 = *esi_3
                        char* const _Str1_1 = &data_801800
                        esi_3 = esi_3[1]
                        char* _Str1_3 = *edi_2
                        
                        if (_Str1_3 != 0)
                            _Str1_1 = _Str1_3
                        
                        result = _stricmp(_Str1_1, "value")
                        
                        if (result == 0)
                            break
                        
                        if (esi_3 == 0)
                            goto label_6a3b98
                
                if (zx.d((ecx_6 s>> 0x10).w) == 0)
                    *(ebx_1 + 4) += 1
                    edi_1 = var_1c_1
                else
                    uint32_t eax_12 = sub_69c590(arg2[6])
                    void* edx_1 = arg2[6]
                    
                    if (eax_12.b == 0)
                        result = *(edx_1 + 0x10) - 1
                        
                        if (result u<= 0x10)
                            char const* const var_34_7 = "DefParseReadDataArray"
                            var_38_6 = 0x24b
                            ecx_10 = "!DefTypeIsBuiltIn(pField->pSubDefMap)"
                            goto label_6a3c19
                        
                        result = sub_6a4770(result, edx_1, result_2, edi_2[3], 0)
                        *(ebx_1 + 4) += 1
                        edi_1 = var_1c_1
                    else
                        result = sub_6a34e0(eax_12, edx_1, result_2, arg2, edi_2)
                        *(ebx_1 + 4) += 1
                        edi_1 = var_1c_1
        
        return result
    
    var_34_3 = "DefParseReadDataArray"
    var_38_1 = 0x226
    var_3c = "C:\x\ax2017\Engine\DefParseTree.cpp"
    ecx_3 = "array->mMaxUsedCount == 0"
else
    var_34_3 = "DefinitionGetSize"
    var_38_1 = 0x6d
    var_3c = "C:\x\ax2017\Engine\Definition.cpp"
    ecx_3 = "pDefMap->definitionSize != 0"

sub_63b870(result, &data_801800, ecx_3, var_3c, var_38_1, var_34_3)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
