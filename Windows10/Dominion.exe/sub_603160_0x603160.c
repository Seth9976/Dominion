// 函数: sub_603160
// 地址: 0x603160
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76a933
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_148 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char var_115 = arg2.b
int32_t* var_124 = arg3
char** var_138 = arg3
int32_t var_134 = 0
int32_t var_114[0x40]
int32_t* eax_4 = sub_603100(&ExceptionList, arg2, &var_114, arg4, arg5)
int32_t* ebx = eax_4
char** result

if (ebx != 0)
    char* esi_1 = &data_801800
    char* const var_11c = &data_801800
    int32_t edi_1 = 0
    int32_t var_8_1 = 1
    
    if (ebx s> 0)
        do
            char edx
            
            if (edi_1 != 0 || var_115 != 0)
                edx = 0
            else
                edx = 1
            
            int32_t* var_120
            var_110
            sub_602f90(eax_4, edx, &var_120, var_114[edi_1 * 2], *(&var_110 + (edi_1 << 3)))
            var_8_1.b = 2
            
            if (edi_1 != 0)
                int32_t** var_14c_3 = &var_120
                char* const* eax_6 = &var_11c
                
                if (edi_1 != ebx - 1)
                    var_8_1.b = 5
                    eax_4 = sub_63d850(&var_11c, 
                        sub_4d4980(eax_6, "dom_prompt_cardtype_separator", &var_124, "[first]", 
                            &var_11c, "[rest]"))
                    var_8_1.b = 6
                    
                    if (data_cf65bc != 0)
                        eax_4 = var_124
                        
                        if (eax_4 != 0 && *eax_4 != 0)
                            eax_4 = sub_63d4e0(&var_124)
                            int32_t temp1_1 = eax_4[1]
                            eax_4[1] -= 1
                            
                            if (temp1_1 == 1)
                                eax_4 = sub_64c080(eax_4, eax_4[3] + 0x10)
                                var_124 = &data_801800
                else
                    var_8_1.b = 3
                    int32_t* var_128
                    eax_4 = sub_63d850(&var_11c, 
                        sub_4d4980(eax_6, "dom_prompt_cardtype_final_separator", &var_128, 
                            "[list]", &var_11c, "[last]"))
                    var_8_1.b = 4
                    
                    if (data_cf65bc != 0)
                        eax_4 = var_128
                        
                        if (eax_4 != 0 && *eax_4 != 0)
                            eax_4 = sub_63d4e0(&var_128)
                            int32_t temp2_1 = eax_4[1]
                            eax_4[1] -= 1
                            
                            if (temp2_1 == 1)
                                eax_4 = sub_64c080(eax_4, eax_4[3] + 0x10)
                                var_128 = &data_801800
            else
                eax_4 = sub_63d850(&var_11c, &var_120)
            
            var_8_1.b = 7
            
            if (data_cf65bc != 0)
                eax_4 = var_120
                
                if (eax_4 != 0 && *eax_4 != 0)
                    eax_4 = sub_63d4e0(&var_120)
                    int32_t temp3_1 = eax_4[1]
                    eax_4[1] -= 1
                    
                    if (temp3_1 == 1)
                        eax_4 = sub_64c080(eax_4, eax_4[3] + 0x10)
                        var_120 = &data_801800
            
            edi_1 += 1
            var_8_1.b = 1
        while (edi_1 s< ebx)
        
        esi_1 = var_11c
    
    *arg3 = esi_1
    
    if (esi_1 != 0 && *esi_1 != 0)
        char* eax_9 = sub_63d4e0(arg3)
        *(eax_9 + 4) += 1
    
    int32_t var_134_1 = 1
    int32_t var_8_2 = 8
    
    if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
        char* eax_10 = sub_63d4e0(&var_11c)
        int32_t temp0_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
    
    result = arg3
else
    sub_63d720(arg3, "invalid_cardtype")
    result = arg3

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
