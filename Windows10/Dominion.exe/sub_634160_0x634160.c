// 函数: sub_634160
// 地址: 0x634160
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?_RegisterConcRTEventTracing@details@Concurrency@@YAXXZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c = 0xffffffff
sub_666380(&ExceptionList, &data_bf1630, arg3, arg2)
sub_5d8950(arg3, arg4)
int32_t var_34 = *(arg2 + 4)
char* var_18
sub_63df30(&var_18, "%d")
int32_t var_8_1 = 0
int32_t var_2c_1 = 0xffffffff
sub_666380(&var_18, &data_bf163c, arg3, &var_18)
int32_t var_8_2 = 1

if (data_cf65bc != 0)
    char* eax_5 = var_18
    
    if (eax_5 != 0 && *eax_5 != 0)
        char* eax_6 = sub_63d4e0(&var_18)
        int32_t temp0_1 = *(eax_6 + 4)
        *(eax_6 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)

int32_t var_8_3 = 0xffffffff
int32_t var_2c_2 = *(arg2 + 8)
void* result_1
sub_63df30(&result_1, "%d")
int32_t var_8_4 = 2
int32_t var_2c_3 = 0xffffffff
void* result = sub_666380(&result_1, &data_bf1648, arg3, &result_1)
int32_t var_8_5 = 3

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp1_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp1_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)
            result_1 = &data_801800

int32_t var_8_6 = 0xffffffff

if (*(arg2 + 0xd) != 0)
    uint32_t eax_8 = sub_64e7a0(arg3)
    result = sub_665db0(eax_8, &data_bf1660, eax_8, 0x3f800000, 0xffffffff, 0)

if (*(arg2 + 0xc) != 0)
    uint32_t eax_9 = sub_64e7a0(arg3)
    result = sub_665db0(eax_9, &data_bf1654, eax_9, 0x3f800000, 0xffffffff, 0)

fsbase->NtTib.ExceptionList = ExceptionList
return result
