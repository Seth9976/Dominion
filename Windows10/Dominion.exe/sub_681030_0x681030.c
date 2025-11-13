// 函数: sub_681030
// 地址: 0x681030
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0?$function@$$A6AXPAV?$message@I@Concurrency@@@Z@std@@QAE@ABV01@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_14 = arg3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg3
int32_t __saved_ebp
char* arg_8

if (arg_8(arg2, ebx, __security_cookie ^ &__saved_ebp) != 0)
    char* esi_1 = *arg2
    var_14 = esi_1
    
    if (esi_1 != 0 && *esi_1 != 0)
        char* eax_4 = sub_63d4e0(&var_14)
        *(eax_4 + 4) += 1
    
    int32_t var_8_1 = 0
    sub_63d850(arg2, ebx)
    sub_63d850(ebx, &var_14)
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
        char* eax_5 = sub_63d4e0(&var_14)
        int32_t temp0_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)
    
    int32_t var_8_3 = 0xffffffff

int32_t* result = arg_8(arg4, arg2)

if (result.b != 0)
    char* esi_3 = *arg4
    var_14 = esi_3
    
    if (esi_3 != 0 && *esi_3 != 0)
        char* eax_6 = sub_63d4e0(&var_14)
        *(eax_6 + 4) += 1
    
    int32_t var_8_4 = 2
    sub_63d850(arg4, arg2)
    sub_63d850(arg2, &var_14)
    int32_t var_8_5 = 3
    
    if (data_cf65bc != 0 && esi_3 != 0 && *esi_3 != 0)
        char* eax_7 = sub_63d4e0(&var_14)
        int32_t temp1_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
    
    int32_t var_8_6 = 0xffffffff
    result = arg_8(arg2, ebx)
    
    if (result.b != 0)
        char* esi_4 = *arg2
        arg_8 = esi_4
        
        if (esi_4 != 0 && *esi_4 != 0)
            char* eax_8 = sub_63d4e0(&arg_8)
            *(eax_8 + 4) += 1
        
        int32_t var_8_7 = 4
        sub_63d850(arg2, ebx)
        result = sub_63d850(ebx, &arg_8)
        int32_t var_8_8 = 5
        
        if (data_cf65bc != 0 && esi_4 != 0 && *esi_4 != 0)
            result = sub_63d4e0(&arg_8)
            int32_t temp2_1 = result[1]
            result[1] -= 1
            
            if (temp2_1 == 1)
                result = sub_64c080(result, result[3] + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
