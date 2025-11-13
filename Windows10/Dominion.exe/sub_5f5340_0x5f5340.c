// 函数: sub_5f5340
// 地址: 0x5f5340
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76a370
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = arg1
int32_t esi = 0
char* arg_4
char* var_20 = arg_4
int32_t var_1c = 1
char* eax_7
int32_t result

while (true)
    void* eax_4
    int32_t ecx
    eax_4, ecx = sub_571b30(arg1, 0x18)
    int32_t var_34_1 = 0
    sub_4e3fa0(eax_4, eax_4, &arg_4, (&var_20)[esi], ecx)
    char* eax_5 = arg_4
    char* ecx_2 = &data_801800
    
    if (eax_5 != 0)
        ecx_2 = eax_5
    
    char* eax_6 = sub_69dd70(ecx_2, arg2)
    
    if (eax_6 != 0)
        eax_7 = arg_4
        char* ecx_3 = &data_801800
        
        if (eax_7 != 0)
            ecx_3 = eax_7
        
        result = eax_6 - ecx_3
        
        if (esi == 0)
            break
        
        if (esi == 1)
            result <<= 0x10
            break
        
        int32_t var_8_2 = 2
        
        if (data_cf65bc != 0)
            goto label_5f53f0
    else
        char* var_8_1 = eax_6
        
        if (data_cf65bc != eax_6)
            eax_7 = arg_4
        label_5f53f0:
            
            if (eax_7 != 0 && *eax_7 != 0)
                char* eax_8 = sub_63d4e0(&arg_4)
                int32_t temp0_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
                    arg_4 = &data_801800
    
    arg1 = var_14
    esi += 1
    int32_t var_8_3 = 0xffffffff
    
    if (esi s>= 1)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0xffffffff

int32_t var_8_4 = 1

if (data_cf65bc != 0 && eax_7 != 0 && *eax_7 != 0)
    char* eax_10 = sub_63d4e0(&arg_4)
    int32_t temp1_1 = *(eax_10 + 4)
    *(eax_10 + 4) -= 1
    
    if (temp1_1 == 1)
        sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
