// 函数: sub_5df190
// 地址: 0x5df190
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$set_variable_in_other_environment@D@@YA_NQBD0@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

switch (*(arg1 + 0x8c) - 0xd04)
    case 0, 1, 3, 7, 0xa, 0xf, 0x16
        int32_t var_38 = *(arg1 + 0x58)
        char* var_14
        sub_63df30(&var_14, "dom_card_heirloom_%s")
        int32_t var_8_1 = 0
        uint32_t eax_5 = sub_4c89a0()
        char* edx = var_14
        char* const ebx = &data_801800
        char* ecx = &data_801800
        
        if (edx != 0)
            ecx = edx
        
        void* eax_6 = sub_68c730(ecx, eax_5, arg1)
        
        if (eax_6 == 0)
            char* eax_7 = var_14
            
            if (eax_7 != 0)
                ebx = eax_7
            
            eax_6 = sub_68c730(ebx, 1, arg1)
        
        char* const var_1c = &data_801800
        var_8_1.b = 1
        char* eax_9
        
        if (eax_6 != 0)
            sub_63d850(arg2, eax_6)
        else
            int32_t var_38_1 = *(arg1 + 0x58)
            var_8_1.b = 2
            char* var_18
            sub_63d850(arg2, sub_63df30(&var_18, "**missing:%s**"))
            var_8_1.b = 3
            
            if (data_cf65bc != 0)
                eax_9 = var_18
                
                if (eax_9 != 0 && *eax_9 != 0)
                    eax_9 = sub_63d4e0(&var_18)
                    int32_t temp0_1 = *(eax_9 + 4)
                    *(eax_9 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
        
        int32_t var_8_2 = 5
        
        if (data_cf65bc != 0)
            eax_9 = var_14
            
            if (eax_9 != 0 && *eax_9 != 0)
                eax_9 = sub_63d4e0(&var_14)
                int32_t temp1_1 = *(eax_9 + 4)
                *(eax_9 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
        
        eax_9.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_9

uint32_t eax_4
eax_4.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_4
