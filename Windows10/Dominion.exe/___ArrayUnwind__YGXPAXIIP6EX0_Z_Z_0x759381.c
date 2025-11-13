// 函数: ?__ArrayUnwind@@YGXPAXIIP6EX0@Z@Z
// 地址: 0x759381
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_1 = 0x18
int32_t var_8 = 0x8c0448
enum _EXCEPTION_DISPOSITION (* var_10)(int32_t* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2, 
    struct _CONTEXT* arg3, int32_t arg4) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x8c0448 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_3c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_3c
void* const var_40 = &data_75938d
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = 0
int32_t var_8_1 = 0
int32_t edi = arg1

while (true)
    int32_t var_28_1 = esi
    
    if (esi == arg3)
        break
    
    edi -= arg2
    arg1 = edi
    result = arg4()
    esi += 1

int32_t var_8_2 = 0xfffffffe
fsbase->NtTib.ExceptionList = ExceptionList
return result
