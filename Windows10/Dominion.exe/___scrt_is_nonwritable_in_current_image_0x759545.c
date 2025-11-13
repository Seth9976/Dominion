// 函数: ___scrt_is_nonwritable_in_current_image
// 地址: 0x759545
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x8c0468
enum _EXCEPTION_DISPOSITION (* var_10)(int32_t* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2, 
    struct _CONTEXT* arg3, int32_t arg4) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_4 = 0x8c0468 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30_1 = &data_759551
int32_t var_8_5 = 0xfffffffe
int32_t var_c = var_8_4
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void* result = sub_759411(&__dos_header, arg1 - &__dos_header)

if (result == 0 || *(result + 0x24) s< 0)
    int32_t var_8_3 = 0xfffffffe
    result.b = 0
else
    int32_t var_8_2 = 0xfffffffe
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
