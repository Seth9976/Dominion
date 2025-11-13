// 函数: sub_69ea70
// 地址: 0x69ea70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?MainCppEH@@YGHPBGP6GHHQAPAG@ZH1@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* i = *arg1

while (i != 0)
    int32_t* i_1 = i
    i = i[8]
    int32_t var_8_1 = 0
    
    if (data_cf65bc != 0)
        char* eax_4 = i_1[6]
        
        if (eax_4 != 0 && *eax_4 != 0)
            char* eax_5 = sub_63d4e0(&i_1[6])
            int32_t temp0_1 = *(eax_5 + 4)
            *(eax_5 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)
                i_1[6] = &data_801800
    
    int32_t var_8_2 = 0xffffffff
    sub_64c080(i_1, 0x28)

arg1[2] = 0
*arg1 = 0
arg1[1] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
