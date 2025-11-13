// 函数: sub_696dd0
// 地址: 0x696dd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0?$function@$$A6AXPAV?$message@W4agent_status@Concurrency@@@Concurrency@@@Z@std@@QAE@ABV01@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* i = *arg1

while (i != 0)
    int32_t* i_1 = i
    i = i[0xa]
    int32_t var_8_1 = 0
    
    if (data_cf65bc != 0)
        char* eax_3 = *i_1
        
        if (eax_3 != 0 && *eax_3 != 0)
            char* eax_4 = sub_63d4e0(i_1)
            int32_t temp0_1 = *(eax_4 + 4)
            *(eax_4 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)
                *i_1 = &data_801800
    
    int32_t var_8_2 = 0xffffffff
    result = sub_64c080(i_1, 0x30)

arg1[2] = 0
*arg1 = 0
arg1[1] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
