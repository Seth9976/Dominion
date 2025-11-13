// 函数: sub_519f50
// 地址: 0x519f50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$use_facet@V?$moneypunct@D$00@std@@@std@@YAABV?$moneypunct@D$00@0@ABVlocale@0@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_18 = arg2
char** var_20 = arg1
int32_t var_1c = 0
*arg1 = &data_801800
int32_t var_8_1 = 0
int32_t var_1c_1 = 1
int32_t eax_4 = sub_516f30(*(arg2 + 0x500c))
int32_t var_38 = *(eax_4 + 4)
int32_t var_8_2 = 1
char* const esi = &data_801800
char* const var_14
char* eax_6 = *sub_63df30(&var_14, "%s{br}")
char* ecx_1 = &data_801800

if (eax_6 != 0)
    ecx_1 = eax_6

sub_63d960(arg1, ecx_1)
int32_t var_8_3 = 2

if (data_cf65bc != 0)
    char* eax_7 = var_14
    
    if (eax_7 != 0 && *eax_7 != 0)
        char* eax_8 = sub_63d4e0(&var_14)
        int32_t temp2_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
            var_14 = &data_801800

var_8_3.b = 0
int32_t eax_9 = *(eax_4 + 8)
char* const* ecx_6

if (eax_9 == 0x12d)
    char* ebx_1 = var_18
    int32_t var_8_6 = 3
    char* ecx_8 = &data_801800
    char* eax_16 = *sub_519d00(&var_18, ebx_1 + 0x5010)
    
    if (eax_16 != 0)
        ecx_8 = eax_16
    
    char* var_38_3 = ecx_8
    var_8_6.b = 4
    char* ecx_9 = &data_801800
    char* eax_18 = *sub_63df30(&var_14, "%s{br}")
    
    if (eax_18 != 0)
        ecx_9 = eax_18
    
    sub_63d960(arg1, ecx_9)
    var_8_6.b = 5
    
    if (data_cf65bc != 0)
        char* const eax_19 = var_14
        
        if (eax_19 != 0 && *eax_19 != 0)
            char* eax_20 = sub_63d4e0(&var_14)
            int32_t temp3_1 = *(eax_20 + 4)
            *(eax_20 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
                var_14 = &data_801800
    
    int32_t var_8_7 = 6
    
    if (data_cf65bc != 0)
        char* eax_21 = var_18
        
        if (eax_21 != 0 && *eax_21 != 0)
            char* eax_22 = sub_63d4e0(&var_18)
            int32_t temp4_1 = *(eax_22 + 4)
            *(eax_22 + 4) -= 1
            
            if (temp4_1 == 1)
                sub_64c080(eax_22, *(eax_22 + 0xc) + 0x10)
    
    var_8_7.b = 0
    
    if (*(ebx_1 + 0x5018) != 0)
        int32_t var_8_8 = 7
        char* ecx_16 = &data_801800
        char* eax_24 = *sub_519d00(&var_18, ebx_1 + 0x5018)
        
        if (eax_24 != 0)
            ecx_16 = eax_24
        
        char* var_38_5 = ecx_16
        var_8_8.b = 8
        char* eax_26 = *sub_63df30(&var_14, "%s{br}")
        
        if (eax_26 != 0)
            esi = eax_26
        
        sub_63d960(arg1, esi)
        var_8_8.b = 9
        
        if (data_cf65bc != 0)
            char* const eax_27 = var_14
            
            if (eax_27 != 0 && *eax_27 != 0)
                char* eax_28 = sub_63d4e0(&var_14)
                int32_t temp6_1 = *(eax_28 + 4)
                *(eax_28 + 4) -= 1
                
                if (temp6_1 == 1)
                    sub_64c080(eax_28, *(eax_28 + 0xc) + 0x10)
                    var_14 = &data_801800
        
        int32_t var_8_9 = 0xa
        
        if (data_cf65bc != 0)
            char* eax_29 = var_18
            
            if (eax_29 != 0 && *eax_29 != 0)
                ecx_6 = &var_18
                goto label_51a1e7
else
    if (eax_9 != 0x140)
        sub_63b870(eax_9 - 0x140, &data_801800, "Halt", 
            "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x27b8, "DumpCampaignDesc")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t var_8_4 = 0xb
    char* eax_13 = *sub_63df30(&var_14, "Expansion Campaign{br}")
    
    if (eax_13 != 0)
        esi = eax_13
    
    sub_63d960(arg1, esi)
    int32_t var_8_5 = 0xc
    
    if (data_cf65bc != 0)
        char* const eax_14 = var_14
        
        if (eax_14 != 0 && *eax_14 != 0)
            ecx_6 = &var_14
        label_51a1e7:
            char* eax_30 = sub_63d4e0(ecx_6)
            int32_t temp5_1 = *(eax_30 + 4)
            *(eax_30 + 4) -= 1
            
            if (temp5_1 == 1)
                sub_64c080(eax_30, *(eax_30 + 0xc) + 0x10)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
