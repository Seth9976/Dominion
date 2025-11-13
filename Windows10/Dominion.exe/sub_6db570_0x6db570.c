// 函数: sub_6db570
// 地址: 0x6db570
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$__acrt_lowio_lock_fh_and_call@V<lambda_1d74b0778ed2581c9b4779447ec1f929>@@@@YAHH$$QAV<lambda_1d74b0778ed2581c9b4779447ec1f929>@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* i = *arg1

while (i != 0)
    int32_t* i_1 = i
    i = i[4]
    int32_t var_8_1 = 0
    
    if (data_cf65bc != 0)
        char* eax_4 = i_1[1]
        
        if (eax_4 != 0 && *eax_4 != 0)
            char* eax_5 = sub_63d4e0(&i_1[1])
            int32_t temp0_1 = *(eax_5 + 4)
            *(eax_5 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)
                i_1[1] = &data_801800
    
    int32_t var_8_2 = 0xffffffff
    sub_64c080(i_1, 0x18)

arg1[2] = 0
*arg1 = 0
arg1[1] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
