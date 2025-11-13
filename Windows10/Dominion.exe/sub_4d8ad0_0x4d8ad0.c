// 函数: sub_4d8ad0
// 地址: 0x4d8ad0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_763a80
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
void* ecx = __chkstk(0x46c40)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_4a28
memset(&var_4a28, 0, 0x2200)
void var_cc28
memset(&var_cc28, 0, 0x5000)
void var_14c28
memset(&var_14c28, 0, 0x8000)
void var_1ec28
memset(&var_1ec28, 0, 0xa000)
void var_1028
memset(&var_1028, 0, 0x800)
void var_2828
memset(&var_2828, 0, 0x1800)
void var_828
memset(&var_828, 0, 0x800)
void var_46c28
memset(&var_46c28, 0, 0x18000)
void var_2ec28
memset(&var_2ec28, 0, 0x10000)
int32_t eax_3 = sub_687730(0x11d280)
memset(eax_3, 0, 0x11d280)
void var_7c28
void* var_30_10 = &var_7c28
void* var_34_10 = &var_46c28
void var_46c60
int32_t* eax_5 = sub_4d74b0(&var_46c60, &var_4a28, ecx, &var_46c60, &var_cc28, &var_14c28, 
    &var_2828, &var_1ec28, &var_1028, eax_3, &var_828, &var_2ec28)
int128_t var_46c48 = *eax_5
int64_t var_46c38 = *(eax_5 + 0x10)
int32_t var_30_11 = sub_63c090()
char* result_1
sub_63df30(&result_1, "%sprofiles.xml")
int32_t var_14_1 = 0
int32_t* esi_1 = data_1597d90
int32_t* eax_7 = sub_6a2fa0()
char** eax_8 = sub_6a6290(esi_1, nullptr)
char* result_3 = result_1
char* const result_5 = &data_801800
char* result_4 = &data_801800

if (result_3 != 0)
    result_4 = result_3

if (sub_6a6650(eax_8, data_1597d90, eax_7, result_4) == 0)
    char* result_2 = result_1
    
    if (result_2 != 0)
        result_5 = result_2
    
    char* const result_6 = result_5
    sub_63b7f0("Failed to write file: '%s'")

char* result = sub_6a3220(eax_7)

if (eax_3 != 0)
    result = _aligned_free(eax_3)

int32_t var_14_2 = 1

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
