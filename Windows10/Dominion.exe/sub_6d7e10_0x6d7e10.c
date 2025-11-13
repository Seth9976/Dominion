// 函数: sub_6d7e10
// 地址: 0x6d7e10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_770cd5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg2
int32_t result_2 = arg3
struct _EXCEPTION_REGISTRATION_RECORD** result_5 = result_2
*arg2 = result_2
int32_t result_10
int32_t result_1
int32_t result_7
int32_t result_8

if (result_2 != 0)
    if (*(result_2 + 4) != 4)
        sub_63b870(result_2, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
            "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    result_7 = result_2
    result_8 = result_2
    result_10 = result_7
else
    sub_69fd50(result_2, "!Null\Null", &result_1, 4)
    int32_t var_8_1 = 0
    char* const result_6 = &data_801800
    int32_t result_3 = result_1
    
    if (result_3 != 0)
        result_6 = result_3
    
    result_2, arg2 = sub_69f030(result_6, 4)
    result_7 = result_2
    result_10 = result_7
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        result_2 = result_1
        
        if (result_2 != 0 && *result_2 != 0)
            result_2 = sub_63d4e0(&result_1)
            int32_t temp0_1 = *(result_2 + 4)
            *(result_2 + 4) -= 1
            
            if (temp0_1 == 1)
                result_2, arg2 = sub_64c080(result_2, *(result_2 + 0xc) + 0x10)
                result_1 = &data_801800
    
    int32_t var_8_3 = 0xffffffff
    result_8 = result_7

int32_t result_9 = result_7

if (*result_8 == 0)
    arg2.b = 0
    sub_69f4a0(result_2, arg2.b, result_8, 1)

int32_t* eax_3 = *result_8
*(result_8 + 0x1c) += 1
int32_t ebx = *eax_3
int32_t var_8_4 = 2
sub_6d8ed0(result_5, arg5)
int32_t result = arg5 * 5
int32_t i = 0
int32_t* ecx_6 = ebx + ((result + 3) << 3)
int32_t* var_1c = ecx_6

if (*(ebx + (result << 3) + 0x18) s> 0)
    int32_t ebx_1 = 0
    
    do
        result_1 = ecx_6[2] + ebx_1
        int32_t ecx_7 = var_18[1]
        int32_t* eax_7 = &var_18[ecx_7 * 5 + 2]
        int32_t result_4 = result_1
        var_18[1] = ecx_7 + 1
        *eax_7 = *(result_4 + 8)
        eax_7[1] = *result_4
        int32_t eax_11 = *(result_4 + 4)
        eax_7[2] = eax_11
        sub_6d7af0(eax_11, arg4, *(result_1 + 8), eax_7)
        result = eax_7[3]
        
        if (*(result + 0x10) == 0x21)
            result = result_1
            
            if (*(result + 4) == 3)
                result = data_1777550
                eax_7[3] = result
        
        i += 1
        ebx_1 += 0xc
    while (i s< *ecx_6)
    
    result_7 = result_10

if (result_7 != 0)
    *(result_7 + 0x1c) -= 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
