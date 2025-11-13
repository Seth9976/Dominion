// 函数: sub_63e630
// 地址: 0x63e630
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$copy_wide_to_narrow_find_data@U_wfinddata64_t@@U__finddata64_t@@@@YA_NABU_wfinddata64_t@@AAU__finddata64_t@@I@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** result = arg1
char** result_1 = result
int32_t var_1c = 0
char* const esi = &data_801800
char* const eax_4 = *arg2

if (eax_4 != 0)
    esi = eax_4

char* const edi = nullptr
arg1.b = *esi

if (arg1.b == 0)
label_63e7a8:
    char* eax_12 = *arg2
    *result = eax_12
    
    if (eax_12 != 0 && *eax_12 != 0)
        char* eax_13 = sub_63d4e0(result)
        *(eax_13 + 4) += 1
else
    char* const var_14
    
    while (true)
        int32_t var_3c_2
        char const* const var_38_3
        
        if (arg1.b u< 0x80)
        label_63e6a5:
            var_14 = esi
            
            if (strchr(" \t\r\n", sub_5a0d00(&var_14)) == 0)
                edi = nullptr
            else
                eax_4 = esi
                
                if (edi != 0)
                    eax_4 = edi
                
                edi = eax_4
            
            char ecx_1 = *esi
            var_14 = esi
            
            if (ecx_1 u< 0x80)
            label_63e6f6:
                eax_4, arg1 = sub_5a0d00(&var_14)
                esi = var_14
                arg1.b = *esi
                
                if (arg1.b == 0)
                    break
                
                continue
            else
                eax_4.b = ecx_1
                eax_4.b &= 0xe0
                
                if (eax_4.b == 0xc0)
                    goto label_63e6f6
                
                eax_4.b = ecx_1
                eax_4.b &= 0xf0
                
                if (eax_4.b == 0xe0 || (ecx_1 & 0xf8) == 0xf0)
                    goto label_63e6f6
                
                var_38_3 = "Xutf8_next"
                var_3c_2 = 0x222
        else
            eax_4.b = arg1.b
            eax_4.b &= 0xe0
            
            if (eax_4.b == 0xc0)
                goto label_63e6a5
            
            eax_4.b = arg1.b
            eax_4.b &= 0xf0
            
            if (eax_4.b == 0xe0)
                goto label_63e6a5
            
            arg1.b &= 0xf8
            
            if (arg1.b == 0xf0)
                goto label_63e6a5
            
            var_38_3 = "Xutf8_peek_next"
            var_3c_2 = 0x21c
        
        sub_63b870(eax_4, &data_801800, "!Xutf8_is_invalid_lead_char(str)", 
            "C:\x\ax2017\Engine\Xutf8.cpp", var_3c_2, var_38_3)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (edi == 0)
        goto label_63e7a8
    
    char* eax_7 = *arg2
    char* ecx_3
    
    if (eax_7 != 0)
        ecx_3 = eax_7
    else
        eax_7 = &data_801800
        ecx_3 = &data_801800
    
    var_14 = &data_801800
    sub_63db30(&var_14, ecx_3, edi - eax_7)
    int32_t var_8_1 = 1
    char* const esi_1 = var_14
    *result = esi_1
    
    if (esi_1 != 0 && *esi_1 != 0)
        char* eax_8 = sub_63d4e0(result)
        *(eax_8 + 4) += 1
    
    int32_t var_1c_1 = 1
    int32_t var_8_2 = 2
    
    if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
        char* eax_9 = sub_63d4e0(&var_14)
        int32_t temp0_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result

fsbase->NtTib.ExceptionList = ExceptionList
return result
