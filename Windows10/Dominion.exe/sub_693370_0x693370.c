// 函数: sub_693370
// 地址: 0x693370
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?MainCppEH@@YGHPBGP6GHHQAPAG@ZH1@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg1
int32_t i = 0
int32_t result

do
    int32_t* j = *(*arg1 + (i << 2))
    
    if (j != 0)
        do
            int32_t* j_1 = j
            j = j[8]
            sub_4e3ea0(&j_1[1])
            int32_t var_8_1 = 0
            
            if (data_cf65bc != 0)
                char* eax_4 = *j_1
                
                if (eax_4 != 0 && *eax_4 != 0)
                    char* eax_5 = sub_63d4e0(j_1)
                    int32_t temp0_1 = *(eax_5 + 4)
                    *(eax_5 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)
                        *j_1 = &data_801800
            
            int32_t var_8_2 = 0xffffffff
            sub_64c080(j_1, 0x24)
        while (j != 0)
        
        arg1 = var_14
    
    result = *arg1
    *(result + (i << 2)) = 0
    i += 1
while (i u<= arg1[1])

arg1[2] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
