// 函数: sub_51d8b0
// 地址: 0x51d8b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax_1 = *arg1
int32_t var_c
char const* const var_8
char* ecx_2

if (eax_1 s<= 0x866)
    if (eax_1 == 0x866)
        return sub_51d670(arg1[1], arg2) __tailcall
    
    if (eax_1 s<= 0x3e8)
        if (eax_1 == 0x3e8)
            void* eax_3 = sub_571b30(arg1[1], 0x18)
            int32_t ecx_4 = *(eax_3 + 0x10)
            eax_1 = *(eax_3 + 0x14)
            *arg2 = ecx_4
            arg2[1] = eax_1
            
            if (eax_1 != 0)
                return 2
            
            if (ecx_4 != 0)
                return 1
            
            var_8 = "GetFlavorThemes"
            var_c = 0x2f4c
            ecx_2 = "flavorThemes[0] != FLAVORTHEME_NONE"
            goto label_51da61
        
        if (eax_1 == 0)
            return 0
        
        if (eax_1 != 0x384)
            goto label_51da48
        
        void* eax = sub_516fa0(arg1[1])
        int32_t ecx_1 = *(eax + 8)
        eax_1 = *(eax + 0xc)
        *arg2 = ecx_1
        arg2[1] = eax_1
        
        if (eax_1 != 0)
            return 2
        
        if (ecx_1 != 0)
            return 1
        
        var_8 = "GetFlavorThemes"
        var_c = 0x2f5c
        ecx_2 = "flavorThemes[0] != FLAVORTHEME_NONE"
        goto label_51da61
    
    if (eax_1 == 0x5dc)
        void* eax_6 = sub_571b30(arg1[1], 0x18)
        int32_t ecx_9 = *(eax_6 + 0x10)
        eax_1 = *(eax_6 + 0x14)
        *arg2 = ecx_9
        arg2[1] = eax_1
        
        if (eax_1 != 0)
            return 2
        
        if (ecx_9 != 0)
            return 1
        
        var_8 = "GetFlavorThemes"
        var_c = 0x2f54
        ecx_2 = "flavorThemes[0] != FLAVORTHEME_NONE"
        goto label_51da61
    
    if (eax_1 != 0x834)
        goto label_51da48
    
    int32_t edx = arg1[1]
    
    if (edx s< 3)
        var_8 = "ExpansionCampaignDefGet"
        var_c = 0x669
        ecx_2 = "exp >= DOM_EXP_INTRIGUE"
        goto label_51da61
    
    eax_1 = edx - 3
    
    if (*(eax_1 * 0x9c + 0x790198) != edx)
        var_8 = "ExpansionCampaignDefGet"
        var_c = 0x672
        ecx_2 = "retval.exp == exp"
        goto label_51da61
    
    int32_t ecx_7 = *(eax_1 * 0x9c + 0x790220)
    *arg2 = *(eax_1 * 0x9c + 0x79021c)
    arg2[1] = ecx_7
    
    if (ecx_7 != 0)
        return 2
    
    return 1

eax_1 -= 0x898

if (eax_1 u> 0x96)
label_51da48:
    var_8 = "GetFlavorThemes"
    var_c = 0x2f78
    ecx_2 = "Halt"
label_51da61:
    sub_63b870(eax_1, &data_801800, ecx_2, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
        var_c, var_8)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

eax_1 = zx.d(lookup_table_51da8c[eax_1])

switch (eax_1)
    case 0
        return sub_51d670(arg1[1], arg2) __tailcall
    case 1
        *arg2 = 7
        return 1
    case 2
        *arg2 = 0x11
        return 1
    case 3
        *arg2 = 0x18
        return 1
    case 4
        goto label_51da48
