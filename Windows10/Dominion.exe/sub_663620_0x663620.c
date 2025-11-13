// 函数: sub_663620
// 地址: 0x663620
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_legendref@8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char** var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
char* result = data_cf65bc

if (result != 0)
    int32_t* ecx = arg1[5]
    
    if (ecx != 0)
        int32_t edx_1 = arg1[7] * 0x34
        arg1[6] = 0
        sub_64c080(ecx, edx_1)
        result = data_cf65bc
        arg1[7] = 0

int32_t var_8_2 = 1

if (result != 0)
    result = *arg1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(arg1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)
            *arg1 = &data_801800

fsbase->NtTib.ExceptionList = ExceptionList
return result
