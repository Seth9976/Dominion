// 函数: sub_6a2dc0
// 地址: 0x6a2dc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = data_147ac60
int32_t ecx = 0
int32_t var_8 = 0

if (ebx s<= 0)
    return 

int32_t esi_1 = data_147b080
void* eax = &data_147ac68
void* var_c_1 = &data_147ac68

do
    int32_t* eax_1 = *eax
    int32_t* var_10_1 = eax_1
    char const* const var_28
    int32_t var_24
    char const* const var_20
    void* eax_3
    char* ecx_5
    char* const edx_3
    
    if (eax_1[1] != 0 && eax_1[2] != 0)
        for (int32_t i = 0; i != 0xffffffff; )
            int32_t esi_2 = eax_1[1]
            int32_t edi_3 = i * 0xf
            i += 1
            
            if (i s>= eax_1[2])
                i = 0xffffffff
            
            int32_t eax_2 = sub_6a2d40(*(esi_2 + (edi_3 << 2) + 8))
            char* ecx_2 = *(esi_2 + (edi_3 << 2) + 0x14)
            *(esi_2 + (edi_3 << 2) + 0xc) = eax_2
            eax_3 = sub_6a2d40(ecx_2)
            bool cond:0_1 = (*(esi_2 + (edi_3 << 2) + 0x28) & 0x100) == 0
            *(esi_2 + (edi_3 << 2) + 0x18) = eax_3
            
            if (not(cond:0_1) && i != 0xffffffff)
                var_20 = "DefTypeInitializeFields"
                var_24 = 0x5a
                var_28 = "C:\x\ax2017\Engine\DefTypeRegistry.cpp"
                edx_3 = "The hw buffer must be the last field in the definition\n"
                ecx_5 = "HaltMsg"
                goto label_6a2f7f
            
            int32_t eax_4 = *(*(esi_2 + (edi_3 << 2) + 0xc) + 0xc)
            
            if (eax_4 != 0 && eax_4 != *(esi_2 + (edi_3 << 2) + 0x34))
                int32_t var_20_1 = *(esi_2 + (edi_3 << 2) + 4)
                int32_t var_24_1 = *var_10_1
                eax_3 = sub_63b5f0("In definition %s field %s has the wrong type")
                edx_3 = "The field type in a definition is wrong\n"
                ecx_5 = "HaltMsg"
                var_20 = "DefTypeInitializeFields"
                var_24 = 0x63
                var_28 = "C:\x\ax2017\Engine\DefTypeRegistry.cpp"
                goto label_6a2f7f
            
            int32_t eax_5 = *(esi_2 + (edi_3 << 2) + 0x38)
            
            if (eax_5 != 0 && *(eax_3 + 0xc) != eax_5)
                int32_t var_20_2 = *(esi_2 + (edi_3 << 2) + 4)
                int32_t var_24_2 = *var_10_1
                eax_3 = sub_63b5f0("In definition %s ptr field %s has the wrong type")
                edx_3 = "The field type in a definition is wrong\n"
                ecx_5 = "HaltMsg"
                var_20 = "DefTypeInitializeFields"
                var_24 = 0x6d
                var_28 = "C:\x\ax2017\Engine\DefTypeRegistry.cpp"
                goto label_6a2f7f
            
            eax_1 = var_10_1
        
        ebx = data_147ac60
        esi_1 = data_147b080
        ecx = var_8
    
    void* eax_6 = var_c_1
    void* edi_4 = *eax_6
    int32_t edx_2 = *(edi_4 + 0x1c)
    
    if (edx_2 != 0)
        int32_t ecx_4 = 0
        eax_3 = &data_147b088
        
        while (true)
            if (ecx_4 s>= esi_1)
                var_20 = "AssetRegistrySetDefMap"
                var_24 = 0x9f
                ecx_5 = "Halt"
                goto label_6a2f75
            
            if (*eax_3 == edx_2)
                break
            
            ecx_4 += 1
            eax_3 += 0x1c
        
        if (*(eax_3 + 0x18) != 0)
            var_20 = "AssetRegistrySetDefMap"
            var_24 = 0x99
            ecx_5 = "pAssetTableItem->pDefMap == NULL"
        label_6a2f75:
            edx_3 = &data_801800
            var_28 = "C:\x\ax2017\Engine\AssetTypeRegistry.cpp"
        label_6a2f7f:
            sub_63b870(eax_3, edx_3, ecx_5, var_28, var_24, var_20)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        ecx = var_8
        *(eax_3 + 0x18) = edi_4
        eax_6 = var_c_1
    
    ecx += 1
    eax = eax_6 + 4
    var_8 = ecx
    var_c_1 = eax
while (ecx s< ebx)
