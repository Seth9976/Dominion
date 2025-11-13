// 函数: ??_M@YGXPAXIIP6EX0@Z@Z
// 地址: 0x7592fc
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x8c0428
enum _EXCEPTION_DISPOSITION (* var_10)(int32_t* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2, 
    struct _CONTEXT* arg3, int32_t arg4) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x8c0428 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34 = &data_759308
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
char var_1d = 0
int32_t edi = arg3
int32_t esi_1 = arg1 + arg2 * edi
arg1 = esi_1
int32_t var_8_1 = 0
int32_t eax_2

while (true)
    eax_2 = edi
    edi -= 1
    arg3 = edi
    
    if (eax_2 == 0)
        break
    
    esi_1 -= arg2
    arg1 = esi_1
    arg4()

eax_2.b = 1
char var_1d_1 = 1
int32_t var_8_2 = 0xfffffffe
int32_t result = $LN10(eax_2.b, &__saved_ebp, esi_1, edi)
fsbase->NtTib.ExceptionList = ExceptionList
return result
