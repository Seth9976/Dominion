// 函数: sub_5fcd10
// 地址: 0x5fcd10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76a6c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char** result = __chkstk(0x3334)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_18 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result_1 = result
result_1 = result
int32_t eax_3 = data_be4a3c

if (eax_3 == 0)
label_5fcd77:
    sub_4bbdb0()
    void var_3344
    void var_19a4
    memcpy(&var_19a4, sub_4e49d0(result, &var_3344), 0x1990)
    __vcasan::DumpThisThreadExceptionFilter(&result_1, &var_19a4)
    int32_t var_8_1 = 0
    char* result_2 = result_1
    *result = result_2
    
    if (result_2 != 0 && *result_2 != 0)
        char* eax_9 = sub_63d4e0(result)
        *(eax_9 + 4) += 1
        result_2 = result_1
    
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0 && result_2 != 0 && *result_2 != 0)
        char* eax_10 = sub_63d4e0(&result_1)
        int32_t temp3_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp3_1 == 1)
            sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
else
    if (eax_3 != 1)
        if (eax_3 == 2)
            goto label_5fcd77
        
        sub_63b870(eax_3 - 2, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            0x8cfa, "DomSaveSetString")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    sub_4dfb20(result, 0xb81824)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
