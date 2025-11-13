// 函数: ?CheckFCreateWriter@Mod1@@AAE_N_NPAPAVIDebugSSectionWriter@@K0@Z
// 地址: 0x63bc40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xfffffffe
int32_t var_c = 0x8b85a8
enum _EXCEPTION_DISPOSITION (* var_10)(int32_t* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2, 
    struct _CONTEXT* arg3, int32_t arg4) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_c_1 = var_c ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_38 = __security_cookie_1 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c = &var_38
uint32_t var_24 = arg2
char* var_28 = arg3
int32_t var_20 = 0
int32_t var_8_1 = 0
int32_t var_50 = data_19e399c
int32_t result = __stdio_common_vsprintf(data_19e3998 | 1, arg3, arg2, arg4, nullptr, arg5)

if (result s< 0)
    result = 0xffffffff

int32_t result_1 = result
int32_t var_8_2 = 0xfffffffe

if (result == 0xffffffff)
    arg3[arg2 - 1] = 0
    result = arg2 - 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
