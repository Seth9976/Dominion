// 函数: sub_695390
// 地址: 0x695390
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebx = arg4
int32_t* eax_1 = ebx[4] + arg2
void* eax_2 = sub_6dd320(arg5, *eax_1)
void* eax_6

if (*(eax_2 + 0x10) != 0xf)
    char const* const var_24
    int32_t var_20
    char const* const var_1c
    char* ecx_7
    
    if (sub_69c520(eax_2) == 0)
        eax_6 = *eax_1
        char const* const edx_2
        
        if (eax_6 s< 0 || eax_6 s>= *(arg5 + 0x10))
            var_1c = "AttribTagGetField"
            var_20 = 0x8b
            var_24 = "C:\x\ax2017\Engine\AttribMap.cpp"
            ecx_7 = "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize"
        label_695556:
            edx_2 = &data_801800
        else
            eax_6 = *(eax_2 + 0x10)
            
            if (eax_6 == 1 || eax_6 == 4 || eax_6 == 0x10 || eax_6 == 2 || eax_6 == 0xe
                    || eax_6 == 0xa || eax_6 == 3)
                eax_6.b = 1
                return eax_6
            
            var_1c = "DefBinShallowDefTypeFixup"
            var_20 = 0x147
            var_24 = "C:\x\ax2017\Engine\DefBin.cpp"
            edx_2 = "Unable to fixup data type"
            ecx_7 = "HaltMsg"
        
        sub_63b870(eax_6, edx_2, ecx_7, var_24, var_20, var_1c)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    eax_6 = *(eax_2 + 0x10)
    
    if (eax_6 != 8)
        if (eax_6 s> 0 && eax_6 s< 0x12)
            var_1c = "DefBinReadFixupTagValue"
            var_20 = 0x3a6
            var_24 = "C:\x\ax2017\Engine\DefBin.cpp"
            ecx_7 = "!DefTypeIsBuiltIn(pDefMap)"
            goto label_695556
        
        void** ecx_11 = *ebx
        eax_6 = *(eax_2 + 0xc)
        void* edx_4 = *(ecx_11 + arg2)
        
        if (eax_6 == 0)
            var_1c = "DefinitionGetSize"
            var_20 = 0x6d
            var_24 = "C:\x\ax2017\Engine\Definition.cpp"
            ecx_7 = "pDefMap->definitionSize != 0"
            goto label_695556
        
        if (eax_6 + edx_4 s<= arg6)
            void* edx_5 = edx_4 + arg3
            
            if (edx_5 s> arg2)
                *(ecx_11 + arg2) = edx_5
                return sub_695870(arg3, edx_5, arg3, eax_2, nullptr, arg6) != 0
    else
        eax_6 = *ebx + arg2
        void* edx_3 = *eax_6
        
        if (edx_3 != 0)
            void* ecx_9 = arg3 + edx_3
            *eax_6 = ecx_9
            void* esi_3 = ecx_9 + 1
            
            do
                eax_6.b = *ecx_9
                ecx_9 += 1
            while (eax_6.b != 0)
            
            if (edx_3 + 1 + ecx_9 - esi_3 s<= arg6)
                eax_6.b = 1
                return eax_6
else
    int32_t* edi_1 = arg2 + *ebx
    int32_t edx_1 = ebx[8]
    void* ebx_1 = *edi_1
    
    if (ebx_1 == 0)
    label_6953c8:
        *edi_1 = 0
        int32_t eax_3
        eax_3.b = 1
        return 1
    
    char* esi_2 = arg3 + ebx_1
    char* ecx_1 = esi_2
    *edi_1 = esi_2
    void** eax_4
    
    do
        eax_4.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_4.b != 0)
    
    if (ebx_1 + 1 + ecx_1 - &ecx_1[1] s<= arg6)
        if (edx_1 != 0)
        label_695416:
            *edi_1 = sub_69f030(esi_2, edx_1)
            int32_t eax_8
            eax_8.b = 1
            return eax_8
        
        if (*esi_2 == edx_1.b)
            goto label_6953c8
        
        if (edx_1 == 0)
            edx_1 = sub_6b7ef0(esi_2)
        
        goto label_695416

eax_6.b = 0
return eax_6
