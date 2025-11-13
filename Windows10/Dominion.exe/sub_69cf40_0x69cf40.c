// 函数: sub_69cf40
// 地址: 0x69cf40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebx = arg4
int32_t esi = arg2
int32_t* edi = arg3
int32_t var_c = esi
uint32_t result = sub_69c520(*(ebx + 0x18))

if (result.b != 0)
    result = *(*(ebx + 0x18) + 0xc)
    uint32_t result_1 = result
    int32_t var_28_1
    char const* const var_24_1
    char* ecx_1
    
    if (result == 0)
        var_24_1 = "DefinitionGetSize"
        var_28_1 = 0x6d
        ecx_1 = "pDefMap->definitionSize != 0"
    label_69d033:
        sub_63b870(result, &data_801800, ecx_1, "C:\x\ax2017\Engine\Definition.cpp", var_28_1, 
            var_24_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t var_8_1 = 0
    
    if (esi s> 0)
        int32_t* ecx_3 = arg6 - edi
        arg6 = ecx_3
        
        while (true)
            void* edx = *(ebx + 0x18)
            result = *(edx + 0x10)
            
            if (result != 8)
                result -= 1
                
                if (result u<= 0x10)
                    var_24_1 = "DefDeepCopyArray"
                    var_28_1 = 0x2b4
                    ecx_1 = "!DefTypeIsBuiltIn(pField->pSubDefMap)"
                    break
                
                uint32_t eax_4 = ecx_3 + edi
                result = sub_69d380(eax_4, edx, edi, arg5, eax_4)
            else
                char* ebx_1 = *(ecx_3 + edi)
                
                if (ebx_1 == 0)
                    var_24_1 = "DefDeepCopyString"
                    var_28_1 = 0x25b
                    ecx_1 = "pExistingString"
                    break
                
                char* eax_1 = ebx_1
                void* edx_1 = &eax_1[1]
                
                do
                    ecx_3.b = *eax_1
                    eax_1 = &eax_1[1]
                while (ecx_3.b != 0)
                
                int32_t eax_3 = sub_687730(eax_1 - edx_1 + 1)
                *edi = eax_3
                result = memcpy(eax_3, ebx_1, eax_1 - edx_1 + 1)
                ebx = arg4
                esi = var_c
            
            edi += result_1
            int32_t ecx_7 = var_8_1 + 1
            var_8_1 = ecx_7
            
            if (ecx_7 s>= esi)
                return result
            
            ecx_3 = arg6
        
        goto label_69d033

return result
