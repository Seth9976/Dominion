// 函数: sub_6a3c70
// 地址: 0x6a3c70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax_1 = *arg2 + arg3
int32_t* eax_3 = arg2[4] + arg3
int32_t* var_10 = eax_3
int32_t ebx = *eax_3
char const* const var_2c_1
int32_t var_28_1
char const* const var_24_1
char* ecx

if (ebx u> 0xf4240)
    var_24_1 = "DefParseReadVariableArray"
    var_28_1 = 0x25e
    ecx = "oldCount >= 0 && oldCount <=1000000"
    var_2c_1 = "C:\x\ax2017\Engine\DefParseTree.cpp"
else
    eax_3 = arg2[6]
    int32_t esi_1 = eax_3[3]
    
    if (esi_1 != 0)
        int32_t edx_1 = sub_687730(esi_1 * (ebx + 1))
        eax_3 = eax_1
        int32_t ecx_3 = *eax_3
        
        if (ebx s> 0)
            if (ecx_3 != 0)
                memcpy(edx_1, ecx_3, esi_1 * ebx)
                eax_3 = eax_1
                int32_t ecx_4 = *eax_3
                
                if (ecx_4 != 0)
                    _aligned_free(ecx_4)
                    eax_3 = eax_1
                
                goto label_6a3d14
            
            var_24_1 = "DefParseReadVariableArray"
            var_28_1 = 0x267
            ecx = "*ppSubDefinition"
        else if (ecx_3 == 0)
        label_6a3d14:
            *eax_3 = edx_1
            *var_10 = ebx + 1
            int32_t* esi_3 = esi_1 * ebx + edx_1
            uint32_t eax_8 = sub_69c590(arg2[6])
            void* edx_2 = arg2[6]
            
            if (eax_8.b != 0)
                return sub_6a34e0(eax_8, edx_2, esi_3, arg2, arg4)
            
            eax_3 = *(edx_2 + 0x10) - 1
            
            if (eax_3 u> 0x10)
                return sub_6a4770(arg4, edx_2, esi_3, *(arg4 + 0xc), 0)
            
            var_24_1 = "DefParseReadVariableArray"
            var_28_1 = 0x27b
            ecx = "!DefTypeIsBuiltIn(pField->pSubDefMap)"
        else
            var_24_1 = "DefParseReadVariableArray"
            var_28_1 = 0x26d
            ecx = "*ppSubDefinition == NULL"
        
        var_2c_1 = "C:\x\ax2017\Engine\DefParseTree.cpp"
    else
        var_24_1 = "DefinitionGetSize"
        var_28_1 = 0x6d
        var_2c_1 = "C:\x\ax2017\Engine\Definition.cpp"
        ecx = "pDefMap->definitionSize != 0"

sub_63b870(eax_3, &data_801800, ecx, var_2c_1, var_28_1, var_24_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
