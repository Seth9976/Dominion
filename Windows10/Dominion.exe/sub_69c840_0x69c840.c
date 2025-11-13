// 函数: sub_69c840
// 地址: 0x69c840
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* edi_1 = *arg4 + arg3
int32_t* eax_2 = arg2 + 0x10

if (sub_69c590(arg2) == 0)
    int32_t ecx_1 = *eax_2
    
    if (ecx_1 - 1 u<= 0x10)
        int32_t eax_8 = ecx_1 - 5
        int32_t var_20_1
        char const* const var_1c_2
        char* ecx_4
        
        switch (eax_8)
            case 0, 4, 0xc
                int32_t eax_9 = arg4[4]
                *(arg3 + eax_9) = 0
                *edi_1 = 0
                return eax_9
            case 1
                void* edi_3 = *arg4 + arg3
                eax_8 = *(arg4[6] + 0xc)
                
                if (eax_8 == 0)
                    var_1c_2 = "DefinitionGetSize"
                    var_20_1 = 0x6d
                    ecx_4 = "pDefMap->definitionSize != 0"
                    goto label_69c9a6
                
                int32_t i = 0
                
                if (arg4[7] s<= 0)
                    return eax_8
                
                int32_t eax_12
                
                do
                    eax_12 = sub_69ca00(edi_3, arg4)
                    edi_3 += eax_8
                    i += 1
                while (i s< arg4[7])
                
                return eax_12
            case 3
                int32_t eax_13 = arg4[9]
                *edi_1 = eax_13
                return eax_13
            case 6
                int32_t* ecx_3 = arg4[9]
                
                if (ecx_3 == 0)
                    *edi_1 = 0
                    return 0
                
                int32_t* eax_10 = sub_69d4c0(ecx_3, arg4[6])
                *edi_1 = eax_10
                return eax_10
            case 7
                *edi_1 = arg4[9]
                eax_8 = *arg4
                int32_t* esi_1 = arg4[4]
                char* ecx_6 = *(arg3 + eax_8)
                
                if (ecx_6 != 0)
                    int32_t eax_15 = sub_69c4d0(ecx_6, 0)
                    *(esi_1 + arg3) = eax_15
                    return eax_15
                
                var_1c_2 = "DefinitionSetHashFromName"
                var_20_1 = 0xc2
                ecx_4 = "name"
                goto label_69c9a6
            default
                var_1c_2 = "DefinitionFillSubFieldWithDefaults"
                var_20_1 = 0x14c
                ecx_4 = "Halt"
            label_69c9a6:
                sub_63b870(eax_8, &data_801800, ecx_4, "C:\x\ax2017\Engine\Definition.cpp", 
                    var_20_1, var_1c_2)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
    else
        eax_2 = arg2 + 0x10

int32_t eax_5 = *eax_2 - 1

if (eax_5 u> 0x10)
    int32_t ecx_2 = arg4[9]
    
    if (ecx_2 != 0)
        return memcpy(edi_1, ecx_2, *(arg4[3] + 0xc))

return sub_69c750(eax_5, arg2, edi_1, arg4)
