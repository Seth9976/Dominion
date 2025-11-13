// 函数: sub_4e9e80
// 地址: 0x4e9e80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@QBDI@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*arg1 != 0)
    int32_t eax_3 = 0
    int32_t var_14_1 = 0
    int32_t edx_3
    
    do
        int32_t* eax_4 = eax_3 << 2
        int32_t* i = *(eax_4 + *arg1)
        
        while (i != 0)
            int32_t* i_1 = i
            i = i[2]
            int32_t var_8_1 = 0
            
            if (data_cf65bc != 0)
                char* eax_5 = *i_1
                
                if (eax_5 != 0 && *eax_5 != 0)
                    char* eax_6 = sub_63d4e0(i_1)
                    int32_t temp0_1 = *(eax_6 + 4)
                    *(eax_6 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)
                        *i_1 = &data_801800
            
            int32_t var_8_2 = 0xffffffff
            sub_64c080(i_1, 0xc)
        
        *(eax_4 + *arg1) = 0
        edx_3 = arg1[1]
        eax_3 = var_14_1 + 1
        var_14_1 = eax_3
    while (eax_3 u<= edx_3)
    
    int32_t* ecx_4 = *arg1
    arg1[2] = 0
    result = sub_64c080(ecx_4, (edx_3 << 2) + 4)
    *arg1 = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
