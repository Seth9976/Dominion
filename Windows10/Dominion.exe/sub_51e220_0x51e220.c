// 函数: sub_51e220
// 地址: 0x51e220
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?MainCppEH@@YGHPBGP6GHHQAPAG@ZH1@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*arg1 != 0)
    int32_t eax_3 = 0
    int32_t var_14_1 = 0
    int32_t edx_3
    
    do
        int32_t* ecx_2 = eax_3 << 2
        int32_t* i = *(ecx_2 + *arg1)
        
        while (i != 0)
            int32_t* i_1 = i
            i = i[4]
            int32_t var_8_1 = 0
            
            if (data_cf65bc != 0)
                int32_t* ecx = i_1[1]
                
                if (ecx != 0)
                    int32_t edx_2 = i_1[3] << 2
                    i_1[2] = 0
                    sub_64c080(ecx, edx_2)
            
            int32_t var_8_2 = 0xffffffff
            sub_64c080(i_1, 0x14)
        
        *(ecx_2 + *arg1) = 0
        edx_3 = arg1[1]
        eax_3 = var_14_1 + 1
        var_14_1 = eax_3
    while (eax_3 u<= edx_3)
    
    int32_t* ecx_3 = *arg1
    arg1[2] = 0
    result = sub_64c080(ecx_3, (edx_3 << 2) + 4)
    *arg1 = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
