// 函数: sub_63d5e0
// 地址: 0x63d5e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??2@YAPAXIABUnothrow_t@std@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* eax_3 = *arg3
void* eax_8

if (eax_3 == 0 || *eax_3 == 0)
    eax_8 = sub_63d540(arg3, arg2)
else
    char* eax_4 = sub_63d4e0(arg3)
    uint32_t count = *(eax_4 + 8)
    
    if (*(eax_4 + 0xc) s>= arg2 + 1 && *(eax_4 + 4) s<= 1)
        *(eax_4 + 8) = arg2
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_4
    
    char* esi_1 = *arg3
    char* var_14 = esi_1
    
    if (esi_1 != 0 && *esi_1 != 0)
        char* eax_5 = sub_63d4e0(&var_14)
        *(eax_5 + 4) += 1
    
    int32_t var_8_1 = 0
    
    if (data_cf65bc != 0)
        char* eax_6 = *arg3
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_63d4e0(arg3)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
                *arg3 = &data_801800
    
    eax_8 = sub_63d540(arg3, arg2)
    
    if (arg4 != 0)
        eax_8 = memcpy(*arg3, esi_1, count)
    
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
        eax_8 = sub_63d4e0(&var_14)
        int32_t temp1_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t* eax_9 = sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9

fsbase->NtTib.ExceptionList = ExceptionList
return eax_8
