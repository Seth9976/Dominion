// 函数: sub_4b02f0
// 地址: 0x4b02f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?accept_message@?$overwrite_buffer@W4agent_status@Concurrency@@@Concurrency@@MAEPAV?$message@W4agent_status@Concurrency@@@2@H@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg1
int32_t* result_1 = result
int32_t var_14 = 1
char* arg_4
char* eax_3 = arg_4

if (eax_3 != 0)
    char* var_2c_1 = eax_3
    sub_63df30(&arg_4, "%d")
    int32_t var_8_4 = 4
    char* ecx_2 = &data_801800
    char* eax_5 = arg_4
    
    if (eax_5 != 0)
        ecx_2 = eax_5
    
    sub_63dfa0(eax_5, arg2, result, 0x801c54, ecx_2)
    int32_t var_8_5 = 5
else
    sub_63dfa0(eax_3, arg2, arg1, 0x801c54, &data_801800)
    int32_t var_8_1 = 0
    int32_t var_14_1 = 1
    int32_t var_8_2 = 1
    sub_63d850(result, sub_63e810(&arg_4))
    int32_t var_8_3 = 2

if (data_cf65bc != 0)
    char* eax_6 = arg_4
    
    if (eax_6 != 0 && *eax_6 != 0)
        char* eax_7 = sub_63d4e0(&arg_4)
        int32_t temp0_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
