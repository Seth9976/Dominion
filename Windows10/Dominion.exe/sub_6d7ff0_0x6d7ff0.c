// 函数: sub_6d7ff0
// 地址: 0x6d7ff0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_10 = arg1
int32_t var_8 = 0

if (*arg1 s<= 0)
    return 

int32_t eax = 0
int32_t var_c_1 = 0

while (true)
    int32_t ecx = 0
    int32_t* edi_2 = arg1[2] + eax
    uint32_t eax_1 = *arg2
    int32_t* esi_1
    
    if (eax_1 s> 0)
        esi_1 = arg2[2]
        
        while (*esi_1 != *edi_2)
            ecx += 1
            esi_1 = &esi_1[4]
            
            if (ecx s>= eax_1)
                goto label_6d8037
    
    if (eax_1 s> 0 && esi_1 != 0)
        goto label_6d804b
    
label_6d8037:
    char const* const var_28
    int32_t var_24
    char const* const var_20
    char* ecx_4
    
    if (eax_1 s>= 0x40)
        var_20 = "sMaterialCopyMap"
        var_24 = 0x226
        ecx_4 = "specialStackAttribMap.attributeCount < MAX_STACK_ATTRIBUTES"
        var_28 = "C:\x\ax2017\Engine\Material.cpp"
    else
        esi_1 = (eax_1 << 4) + arg2[2]
        eax_1 += 1
        *arg2 = eax_1
    label_6d804b:
        int32_t ecx_1 = *edi_2
        
        if (ecx_1 s< 0 || ecx_1 s>= data_8ce7cc)
            var_20 = "AttribTagGetField"
            var_24 = 0x8b
            var_28 = "C:\x\ax2017\Engine\AttribMap.cpp"
            ecx_4 = "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize"
        else
            eax_1 = *(data_8ce7c8 + (ecx_1 << 2))
            void* ecx_2 = *(eax_1 + 0xc)
            
            if (ecx_2 == 0)
                var_20 = "AttribTagGetDefMap"
                var_24 = 0x1fe
                var_28 = "C:\x\ax2017\Engine\AttribMap.cpp"
                ecx_4 = "pAttribField->pDefMap"
            else
                eax_1 = sub_69c520(ecx_2)
                
                if (eax_1.b != 0)
                    var_20 = "sMaterialCopyMap"
                    var_24 = 0x22c
                    ecx_4 = "!DefTypeIsDeepStructure(AttribTagGetDefMap(gMaterialAttribTable, "
                    "pTagSource->tag))"
                else
                    *esi_1 = *edi_2
                    int32_t edx_2 = var_8 + 1
                    int32_t eax_4 = edi_2[2]
                    esi_1[3] = edi_2[3]
                    arg1 = var_10
                    esi_1[2] = eax_4
                    eax = var_c_1 + 0x10
                    var_8 = edx_2
                    var_c_1 = eax
                    
                    if (edx_2 s>= *arg1)
                        break
                    
                    continue
                
                var_28 = "C:\x\ax2017\Engine\Material.cpp"
    
    sub_63b870(eax_1, &data_801800, ecx_4, var_28, var_24, var_20)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn
