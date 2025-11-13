// 函数: sub_598510
// 地址: 0x598510
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_comp_ellint_3@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_4 = sub_571b30(arg2, sub_5cf7e0())
int32_t esi_1 = *(eax_4 + 0x98)
int32_t edx_1 = *(eax_4 + 0x9c)
void* result

if (esi_1 != 0 || (edx_1 != 0x100000 && (esi_1 != 0 || edx_1 != 0x200000)))
    int32_t var_28_1 = *(eax_4 + 0x58)
    char* var_14
    sub_63df30(&var_14, "dom_card_title_%s")
    int32_t var_8_1 = 0
    char* ecx_2 = &data_801800
    char* eax_5 = var_14
    
    if (eax_5 != 0)
        ecx_2 = eax_5
    
    void* result_1 = sub_68c730(ecx_2, arg1, esi_1)
    
    if (result_1 == 0)
        sub_63b870(result_1, &data_801800, t", "C:\x\ax2017\Jams\Dominion\code\DomLog.cpp", 0x347, 
            "CardnameTranslation")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        char* eax_6 = var_14
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_63d4e0(&var_14)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
    
    result = result_1
else
    result = sub_68c730(*(eax_4 + 0x58), arg1, esi_1)
    
    if (result == 0)
        sub_63b870(result, &data_801800, t", "C:\x\ax2017\Jams\Dominion\code\DomLog.cpp", 0x341, 
            "CardnameTranslation")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

fsbase->NtTib.ExceptionList = ExceptionList
return result
