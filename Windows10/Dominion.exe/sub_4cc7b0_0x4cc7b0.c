// 函数: sub_4cc7b0
// 地址: 0x4cc7b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_comp_ellint_3@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg2 + 0x10) != 0)
    uint32_t eax_3 = sub_64e7a0(arg1)
    sub_665db0(eax_3, &data_8dc4f4, eax_3, 0x3f800000, 0xffffffff, 0)
    uint32_t eax_4 = sub_4c89a0()
    int32_t edx = *(arg2 + 0x28)
    char* result_1
    sub_692b30(eax_4, arg2 + 0x30, &result_1, edx - *(arg2 + 0x20), 
        sbb.d(*(arg2 + 0x2c), *(arg2 + 0x24), edx u< *(arg2 + 0x20)), eax_4)
    int32_t var_8_1 = 0
    int32_t var_3c_1 = 0xffffffff
    result = sub_666380(&result_1, &data_8dc500, arg1, &result_1)
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_63d4e0(&result_1)
            int32_t temp2_1 = result[1]
            result[1] -= 1
            
            if (temp2_1 == 1)
                result = sub_64c080(result, &result[3][2])

fsbase->NtTib.ExceptionList = ExceptionList
return result
