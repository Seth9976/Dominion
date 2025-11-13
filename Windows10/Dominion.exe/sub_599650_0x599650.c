// 函数: sub_599650
// 地址: 0x599650
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_comp_ellint_3@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = sub_68c730((&data_7c0174)[arg2 * 8], arg1, arg2 << 5)

if (result == 0)
    if (data_1a8a040 s> *(*fsbase->ThreadLocalStoragePointer + 8))
        sub_75970e(&data_1a8a040)
        
        if (data_1a8a040 == 0xffffffff)
            data_1a8a044 = &data_801800
            data_1a8a048 = &data_801800
            data_1a8a04c = &data_801800
            _atexit(sub_773b30)
            __Init_thread_footer(&data_1a8a040)
    
    int32_t var_28_1 = (&data_7c0174)[arg2 * 8]
    data_1a8a054 = 0
    int32_t var_8_1 = 0
    char* var_14
    sub_63d850(&data_1a8a044, sub_63df30(&var_14, "*%s*"))
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        char* eax_6 = var_14
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_63d4e0(&var_14)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
    
    result = &data_1a8a044

fsbase->NtTib.ExceptionList = ExceptionList
return result
