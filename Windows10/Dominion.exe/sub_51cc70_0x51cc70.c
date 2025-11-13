// 函数: sub_51cc70
// 地址: 0x51cc70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$use_facet@V?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAABV?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@ABVlocale@0@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* const var_18 = arg2
char* const eax_3 = &data_801800
int32_t var_20 = 0
char* const var_14 = &data_801800
int32_t var_8_1 = 1
int32_t* edi = &arg2[4]
int32_t ebx = 0
int32_t var_3c
char const* const var_38_2
int32_t eax_15
char* ecx_6

while (true)
    if (*edi != 0)
        if (eax_3 != 0 && *eax_3 != 0)
            char* eax_4 = sub_63d4e0(&var_14)
            int32_t* esi_1 = *(eax_4 + 8)
            sub_63d5e0(eax_4, esi_1 + 3, &var_14, 1)
            *(esi_1 + var_14) = 0x202d20
        
        eax_15 = *edi
        
        if (*(eax_15 * 0x30 + 0x78dea0) != eax_15)
            var_38_2 = "FlavorThemeDefGet"
            var_3c = 0x2d49
            ecx_6 = "def.theme == theme"
            break
        
        sub_63d960(&var_14, *(eax_15 * 0x30 + 0x78dea4))
        ebx += 1
        edi = &edi[1]
        
        if (ebx s< 2)
            eax_3 = var_14
            continue
    
    char* const esi_2 = var_18
    int32_t eax_6 = *(esi_2 + 0x14)
    
    if (eax_6 == 0)
    label_51cf23:
        sub_63b870(eax_6, &data_801800, "style != TERRAINSTYLE_NONE", 
            "C:\x\ax2017\Jams\Dominion\code\DomMap.cpp", 0xf17, "TerrainStyleDefGet")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t ecx_7 = (&data_7c161c)[(eax_6 - 1) * 0x23]
    eax_6 = *(esi_2 + 0x10)
    
    if (eax_6 == 0)
        goto label_51cf23
    
    int32_t var_38_3 = ecx_7
    int32_t var_3c_1 = (&data_7c161c)[(eax_6 - 1) * 0x23]
    var_8_1.b = 2
    char* const ebx_1 = &data_801800
    char* eax_12 = *sub_63df30(&var_18, "{br}%s - %s{br}")
    char* ecx_8 = &data_801800
    
    if (eax_12 != 0)
        ecx_8 = eax_12
    
    sub_63d960(&var_14, ecx_8)
    var_8_1.b = 3
    
    if (data_cf65bc != 0)
        char* eax_13 = var_18
        
        if (eax_13 != 0 && *eax_13 != 0)
            char* eax_14 = sub_63d4e0(&var_18)
            int32_t temp0_1 = *(eax_14 + 4)
            *(eax_14 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
                var_18 = &data_801800
    
    var_8_1.b = 1
    eax_15 = *(esi_2 + 0xc)
    
    if (eax_15 u> 6)
        var_38_2 = "DumpMapStyle"
        var_3c = 0x2d68
        ecx_6 = "Halt"
        break
    
    char* edx_3
    
    switch (eax_15)
        case 0
            edx_3 = "bleak"
        case 1
            edx_3 = "land"
        case 2
            edx_3 = "lake"
        case 3
            edx_3 = "beach"
        case 4
            edx_3 = "shore"
        case 5
            edx_3 = "island"
        case 6
            edx_3 = "archipelago"
    
    sub_63d720(&var_18, edx_3)
    var_8_1.b = 5
    int32_t* eax_16 = arg1
    char* const esi_3 = var_14
    *eax_16 = esi_3
    
    if (esi_3 != 0 && *esi_3 != 0)
        char* eax_17 = sub_63d4e0(eax_16)
        *(eax_17 + 4) += 1
        eax_16 = arg1
    
    char* const edi_1 = var_18
    int32_t var_20_1 = 2
    
    if (edi_1 != 0)
        ebx_1 = edi_1
    
    sub_63d960(eax_16, ebx_1)
    int32_t var_8_2 = 4
    int32_t var_20_2 = 1
    var_8_2.b = 6
    
    if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
        char* eax_18 = sub_63d4e0(&var_18)
        int32_t temp1_1 = *(eax_18 + 4)
        *(eax_18 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
    
    int32_t var_8_3 = 7
    
    if (data_cf65bc != 0 && esi_3 != 0 && *esi_3 != 0)
        char* eax_19 = sub_63d4e0(&var_14)
        int32_t temp2_1 = *(eax_19 + 4)
        *(eax_19 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

sub_63b870(eax_15, &data_801800, ecx_6, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_3c, var_38_2)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
