// 函数: sub_69ccd0
// 地址: 0x69ccd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax = sub_69c520(arg2[3])

if (eax.b != 0)
    void* edx = arg2[3]
    int32_t ecx_1 = *(edx + 0x10)
    eax = ecx_1 - 5
    int32_t var_18
    char const* const var_14_1
    char* ecx_2
    
    if (eax u> 0xc)
    label_69cdf5:
        
        if (ecx_1 s> 0 && ecx_1 s< 0x12)
            var_14_1 = "DefinitionDeleteField"
            var_18 = 0x21f
            ecx_2 = "!DefTypeIsBuiltIn(pField->pDefMap)"
            goto label_69ce3d
        
        uint32_t eax_8 = arg4
        
        if (eax_8 == 0 && (ecx_1 == 0x13 || ecx_1 == 0x14))
            eax_8 = arg2[7]
        
        return sub_69ce80(eax_8, edx, *arg2 + arg3, eax_8)
    
    eax = zx.d(lookup_table_69ce70[eax])
    
    switch (eax)
        case 0
            uint32_t* esi_1 = arg2[4]
            uint32_t eax_1 = sub_69cc40(eax, arg2, arg3, arg4, *(esi_1 + arg3))
            *(esi_1 + arg3) = 0
            return eax_1
        case 1
            return sub_69cbc0(eax, arg2[7], *arg2 + arg3, arg2, arg4)
        case 2
            uint32_t* esi_2 = *arg2
            eax = *(esi_2 + arg3)
            
            if (eax == 0)
                var_14_1 = "DefinitionDeleteString"
                var_18 = 0x17c
                ecx_2 = "*pString"
                goto label_69ce3d
            
            if (eax != arg2[9])
                int32_t eax_3 = _aligned_free(eax)
                *(esi_2 + arg3) = 0
                return eax_3
        case 3
            eax = arg2[4]
            int32_t edx_3 = *(arg3 + eax)
            
            if (edx_3 != 0xffffffff)
                int32_t* eax_6 = *arg2 + arg3
                return sub_6dcb90(eax_6, edx_3, arg4, eax_6)
        case 4
            int32_t* ebx_1 = arg3 + *arg2
            uint32_t* esi_3 = *ebx_1
            
            if (esi_3 != 0 && ((arg2[0xa] & 0x100) == 0 || esi_3 u> 0x100000))
                sub_69cbc0(eax, 1, esi_3, arg2, arg4)
                int32_t eax_4 = _aligned_free(esi_3)
                *ebx_1 = 0
                return eax_4
        case 5
            var_14_1 = "DefinitionDeleteField"
            var_18 = 0x1f4
            ecx_2 = "Halt"
        label_69ce3d:
            sub_63b870(eax, &data_801800, ecx_2, "C:\x\ax2017\Engine\Definition.cpp", var_18, 
                var_14_1)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        case 6
            goto label_69cdf5

return eax
