// 函数: sub_519d00
// 地址: 0x519d00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char** var_8 = arg1
uint32_t ebx = *arg2
uint32_t eax = ebx

if (eax s<= 0x866)
    char const* const eax_9
    int32_t ecx_6
    char const* const ebx_1
    
    if (eax == 0x866)
    label_519e44:
        int32_t ecx_8 = arg2[1]
        
        if (ecx_8 != 0)
            ebx_1 = *(sub_516f30(ecx_8) + 4)
        else
            ebx_1 = "none"
        
        ecx_6 = *arg2
        
        if (ecx_6 != 0)
        label_519dd3:
            eax_9 = *(sub_516f30(ecx_6) + 4)
            goto label_519dd6
        
        eax_9 = "none"
    label_519dd6:
        char const* const var_20_1 = ebx_1
        char const* const var_24_1 = eax_9
        sub_63df30(arg1, "%s:%s")
        return arg1
    
    if (eax s> 0x3e8)
        if (eax == 0x5dc)
        label_519db9:
            void* eax_8 = sub_571b30(arg2[1], 0x17)
            ecx_6 = *arg2
            ebx_1 = *(eax_8 + 0x58)
            
            if (ecx_6 != 0)
                goto label_519dd3
            
            eax_9 = "none"
            goto label_519dd6
        
        if (eax != 0x834)
            goto label_519e8c
        
        void* eax_12 = sub_4e3950(arg2[1])
        ecx_6 = *arg2
        ebx_1 = *(eax_12 + 0x10)
        
        if (ecx_6 != 0)
            goto label_519dd3
        
        eax_9 = "none"
        goto label_519dd6
    
    if (eax == 0x3e8)
        goto label_519db9
    
    if (eax == 0)
        sub_63d720(arg1, "none")
        return arg1
    
    if (eax != 0x384)
        goto label_519e8c
    
    int32_t i = arg2[1]
    int32_t* eax_2 = *(data_1597ddc + (((i s>> 4 | i) & data_1597de0) << 2))
    char const* const edi_1
    
    if (eax_2 == 0)
    label_519d6b:
        edi_1 = "none"
    else
        while (i != *eax_2)
            eax_2 = eax_2[2]
            
            if (eax_2 == 0)
                goto label_519d6b_1
        
        if (eax_2 == 0xfffffffc)
        label_519d6b_1:
            edi_1 = "none"
        else
            edi_1 = *(eax_2[1] + 4)
    
    char const* const var_20 = edi_1
    int32_t var_24 = *(sub_516f30(ebx) + 4)
    sub_63df30(arg1, "%s:%s")
    return arg1

eax -= 0x898

if (eax u> 0x96)
label_519e8c:
    sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
        0x27a3, "DumpTheme")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

eax = zx.d(lookup_table_519eb0[eax])

switch (eax)
    case 0
        goto label_519e44
    case 1
        int32_t var_20_2 = *(sub_516f30(ebx) + 4)
        sub_63df30(arg1, "%s")
        return arg1
    case 2
        goto label_519e8c
