// 函数: sub_4befc0
// 地址: 0x4befc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_Move@?$_Func_impl_no_alloc@V<lambda_1>@?1??wait_for_all@agent@Concurrency@@SAXIPAPAV34@PAW4agent_status@4@I@Z@XABI@std@@EAEPAV?$_Func_base@XABI@2@PAX@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* const var_14 = arg3
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(sub_64e7a0(arg4) + 0x18bc) = sub_4bec10
*(sub_64e7a0(arg4) + 0x18c0) = sub_4bef50
int32_t esi = data_8db768
uint32_t eax_5 = sub_64e7a0(arg4)
sub_665db0(eax_5, esi, eax_5, 0x3f800000, 0xffffffff, 0)
var_14 = &data_801800
int32_t var_8_1 = 0

if (sub_67c0d0(arg4, &var_14) == 0)
    sub_63d850(&var_14, &data_8db76c)

char* const esi_1 = var_14
char* const ecx_6 = &data_801800

if (esi_1 != 0)
    ecx_6 = esi_1

if (sub_4bee50(ecx_6) == 0)
    uint32_t eax_8 = sub_64e7a0(arg4)
    sub_665db0(eax_8, &data_8dbc84, eax_8, 0x3f800000, 0xffffffff, 0)

int32_t var_24 = 0xffffffff
char* result = sub_666380(&var_14, &data_8dbc90, arg4, &var_14)
int32_t var_8_2 = 1

if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
    result = sub_63d4e0(&var_14)
    int32_t temp0_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp0_1 == 1)
        result = sub_64c080(result, *(result + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
