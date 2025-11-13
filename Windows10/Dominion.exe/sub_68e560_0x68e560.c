// 函数: sub_68e560
// 地址: 0x68e560
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76e54a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_20 = arg1
int32_t var_18 = 0
char* eax_3 = *arg2

if (eax_3 != 0 && *eax_3 != 0)
    eax_3 = sub_63d4e0(arg2)
    
    if (*(eax_3 + 8) s> 0)
        char* const var_14 = &data_801800
        int32_t var_8_1 = 1
        char* var_1c
        char* const esi_1
        
        if (sub_68cbb0(&var_14, "ca", arg2, &var_14) != 0)
            sub_63d720(&var_1c, "che")
            var_8_1.b = 3
            esi_1 = var_14
            *arg1 = esi_1
            
            if (esi_1 != 0 && *esi_1 != 0)
                char* eax_6 = sub_63d4e0(arg1)
                *(eax_6 + 4) += 1
            
            char* edi_1 = var_1c
            char* const eax_7 = &data_801800
            int32_t var_18_1 = 2
            
            if (edi_1 != 0)
                eax_7 = edi_1
            
            sub_63d960(arg1, eax_7)
            int32_t var_8_2 = 2
            int32_t var_18_2 = 1
            var_8_2.b = 4
            
            if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
                char* eax_8 = sub_63d4e0(&var_1c)
                int32_t temp0_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
            
            int32_t var_8_3 = 5
            goto label_68e66e
        
        if (sub_68cbb0(&var_14, "ga", arg2, &var_14) != 0)
            sub_63d720(&var_1c, "ghe")
            var_8_1.b = 7
            esi_1 = var_14
            *arg1 = esi_1
            
            if (esi_1 != 0 && *esi_1 != 0)
                char* eax_11 = sub_63d4e0(arg1)
                *(eax_11 + 4) += 1
            
            char* edi_2 = var_1c
            char* const eax_12 = &data_801800
            int32_t var_18_3 = 4
            
            if (edi_2 != 0)
                eax_12 = edi_2
            
            sub_63d960(arg1, eax_12)
            int32_t var_8_4 = 6
            int32_t var_18_4 = 1
            var_8_4.b = 8
            
            if (data_cf65bc != 0 && edi_2 != 0 && *edi_2 != 0)
                char* eax_13 = sub_63d4e0(&var_1c)
                int32_t temp1_1 = *(eax_13 + 4)
                *(eax_13 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
            
            int32_t var_8_5 = 9
            goto label_68e66e
        
        if (sub_68cbb0(&var_14, U"o", arg2, &var_14) != 0)
            sub_63d720(&var_1c, U"i")
            var_8_1.b = 0xb
            esi_1 = var_14
            *arg1 = esi_1
            
            if (esi_1 != 0 && *esi_1 != 0)
                char* eax_16 = sub_63d4e0(arg1)
                *(eax_16 + 4) += 1
            
            char* edi_3 = var_1c
            char* eax_17 = &data_801800
            int32_t var_18_5 = 8
            
            if (edi_3 != 0)
                eax_17 = edi_3
            
            sub_63d960(arg1, eax_17)
            int32_t var_8_6 = 0xa
            int32_t var_18_6 = 1
            var_8_6.b = 0xc
            
            if (data_cf65bc != 0 && edi_3 != 0 && *edi_3 != 0)
                char* eax_18 = sub_63d4e0(&var_1c)
                int32_t temp2_1 = *(eax_18 + 4)
                *(eax_18 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
            
            int32_t var_8_7 = 0xd
            goto label_68e66e
        
        bool cond:4_1
        
        if (sub_68cbb0(&var_14, U"a", arg2, &var_14) == 0)
            char* eax_24 = *arg2
            *arg1 = eax_24
            
            if (eax_24 != 0 && *eax_24 != 0)
                char* eax_25 = sub_63d4e0(arg1)
                *(eax_25 + 4) += 1
            
            int32_t var_18_9 = 1
            int32_t var_8_10 = 0x12
            
            if (data_cf65bc != 0)
                char* const eax_26 = var_14
                
                if (eax_26 != 0)
                    cond:4_1 = *eax_26 == 0
                label_68e8c4:
                    
                    if (not(cond:4_1))
                        char* eax_27 = sub_63d4e0(&var_14)
                        int32_t temp3_1 = *(eax_27 + 4)
                        *(eax_27 + 4) -= 1
                        
                        if (temp3_1 == 1)
                            sub_64c080(eax_27, *(eax_27 + 0xc) + 0x10)
        else
            sub_63d720(&var_1c, U"es")
            var_8_1.b = 0xf
            esi_1 = var_14
            *arg1 = esi_1
            
            if (esi_1 != 0 && *esi_1 != 0)
                char* eax_21 = sub_63d4e0(arg1)
                *(eax_21 + 4) += 1
            
            char* edi_4 = var_1c
            char* eax_22 = &data_801800
            int32_t var_18_7 = 0x10
            
            if (edi_4 != 0)
                eax_22 = edi_4
            
            sub_63d960(arg1, eax_22)
            int32_t var_8_8 = 0xe
            int32_t var_18_8 = 1
            var_8_8.b = 0x10
            
            if (data_cf65bc != 0 && edi_4 != 0 && *edi_4 != 0)
                char* eax_23 = sub_63d4e0(&var_1c)
                int32_t temp4_1 = *(eax_23 + 4)
                *(eax_23 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_64c080(eax_23, *(eax_23 + 0xc) + 0x10)
            
            int32_t var_8_9 = 0x11
        label_68e66e:
            
            if (data_cf65bc != 0 && esi_1 != 0)
                cond:4_1 = *esi_1 == 0
                goto label_68e8c4
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1

sub_63b870(eax_3, &data_801800, "name.Length() > 0", "C:\x\ax2017\Engine\Localization.cpp", 0x4ab, 
    "DefaultPlural_it")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
