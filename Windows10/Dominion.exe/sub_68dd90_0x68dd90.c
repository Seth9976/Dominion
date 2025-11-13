// 函数: sub_68dd90
// 地址: 0x68dd90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76e389
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_20 = arg1
int32_t var_18 = 0
char* eax_3 = *arg2

if (eax_3 != 0 && *eax_3 != 0)
    eax_3 = sub_63d4e0(arg2)
    
    if (*(eax_3 + 8) s> 0)
        char* const var_14 = &data_801800
        int32_t var_8_1 = 1
        char eax_5 = sub_68cbb0(&var_14, "ail", arg2, &var_14)
        char eax_7
        
        if (eax_5 == 0)
            eax_7 = sub_68cbb0(&var_14, "al", arg2, &var_14)
        
        char* var_1c
        bool cond:2_1
        
        if (eax_5 != 0 || eax_7 != 0)
            sub_63d720(&var_1c, "aux")
            var_8_1.b = 3
            char* const esi_3 = var_14
            *arg1 = esi_3
            
            if (esi_3 != 0 && *esi_3 != 0)
                char* eax_29 = sub_63d4e0(arg1)
                *(eax_29 + 4) += 1
            
            char* edi_2 = var_1c
            char* eax_30 = &data_801800
            int32_t var_18_6 = 2
            
            if (edi_2 != 0)
                eax_30 = edi_2
            
            sub_63d960(arg1, eax_30)
            int32_t var_8_7 = 2
            int32_t var_18_7 = 1
            var_8_7.b = 4
            
            if (data_cf65bc != 0 && edi_2 != 0 && *edi_2 != 0)
                char* eax_31 = sub_63d4e0(&var_1c)
                int32_t temp0_1 = *(eax_31 + 4)
                *(eax_31 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)
            
            int32_t var_8_8 = 5
            
            if (data_cf65bc != 0 && esi_3 != 0)
                cond:2_1 = *esi_3 == 0
            label_68e0a1:
                
                if (not(cond:2_1))
                    char* eax_32 = sub_63d4e0(&var_14)
                    int32_t temp3_1 = *(eax_32 + 4)
                    *(eax_32 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_64c080(eax_32, *(eax_32 + 0xc) + 0x10)
        else
            char eax_9 = sub_68cbb0(&var_14, "eau", arg2, &var_14)
            char eax_11
            
            if (eax_9 == 0)
                eax_11 = sub_68cbb0(&var_14, "eu", arg2, &var_14)
            
            if (eax_9 != 0 || eax_11 != 0)
                sub_63d720(&var_1c, U"x")
                var_8_1.b = 7
                char* eax_25 = *arg2
                *arg1 = eax_25
                
                if (eax_25 != 0 && *eax_25 != 0)
                    char* eax_26 = sub_63d4e0(arg1)
                    *(eax_26 + 4) += 1
                
                char* esi_2 = var_1c
                char* eax_27 = &data_801800
                int32_t var_18_4 = 4
                
                if (esi_2 != 0)
                    eax_27 = esi_2
                
                sub_63d960(arg1, eax_27)
                int32_t var_8_5 = 6
                int32_t var_18_5 = 1
                var_8_5.b = 8
                
                if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
                    char* eax_28 = sub_63d4e0(&var_1c)
                    int32_t temp4_1 = *(eax_28 + 4)
                    *(eax_28 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_64c080(eax_28, *(eax_28 + 0xc) + 0x10)
                
                int32_t var_8_6 = 9
            else
                char* const edi_1 = *arg2
                int32_t eax_12
                
                if (edi_1 == 0)
                    edi_1 = &data_801800
                    eax_12 = 0
                else if (*edi_1 != 0)
                    eax_12 = *(sub_63d4e0(arg2) + 8)
                else
                    eax_12 = 0
                
                int32_t eax_14 = sx.d(edi_1[eax_12 - 1])
                
                if (eax_14 == 0x73 || eax_14 == 0x78 || eax_14 == 0x7a)
                    char* eax_23 = *arg2
                    *arg1 = eax_23
                    
                    if (eax_23 != 0 && *eax_23 != 0)
                        char* eax_24 = sub_63d4e0(arg1)
                        *(eax_24 + 4) += 1
                    
                    int32_t var_18_3 = 1
                    int32_t var_8_4 = 0xa
                else
                    sub_63d720(&var_1c, U"s")
                    var_8_1.b = 0xc
                    char* eax_18 = *arg2
                    *arg1 = eax_18
                    
                    if (eax_18 != 0 && *eax_18 != 0)
                        char* eax_19 = sub_63d4e0(arg1)
                        *(eax_19 + 4) += 1
                    
                    char* esi_1 = var_1c
                    char* const eax_20 = &data_801800
                    int32_t var_18_1 = 8
                    
                    if (esi_1 != 0)
                        eax_20 = esi_1
                    
                    sub_63d960(arg1, eax_20)
                    int32_t var_8_2 = 0xb
                    int32_t var_18_2 = 1
                    var_8_2.b = 0xd
                    
                    if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
                        char* eax_21 = sub_63d4e0(&var_1c)
                        int32_t temp6_1 = *(eax_21 + 4)
                        *(eax_21 + 4) -= 1
                        
                        if (temp6_1 == 1)
                            sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
                    
                    int32_t var_8_3 = 0xe
            
            if (data_cf65bc != 0)
                char* const eax_22 = var_14
                
                if (eax_22 != 0)
                    cond:2_1 = *eax_22 == 0
                    goto label_68e0a1
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1

sub_63b870(eax_3, &data_801800, "name.Length() > 0", "C:\x\ax2017\Engine\Localization.cpp", 0x46e, 
    "DefaultPlural_fr")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
