// 函数: sub_688df0
// 地址: 0x688df0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0?$clone_impl@U?$error_info_injector@Vrounding_error@math@boost@@@exception_detail@boost@@@exception_detail@boost@@QAE@ABV012@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* edi = arg2
void* eax_3 = strchr(edi, 0x3a)
char* const esi = &data_801800
char* const var_14 = &data_801800
int32_t var_8_1 = 0

if (eax_3 != 0)
    sub_63d8d0(&var_14, edi)
    sub_63db30(&var_14, edi, eax_3 - edi)
    uint16_t eax_7 = atoi(eax_3 + 1)
    esi = var_14
    arg4 = eax_7
    edi = &data_801800
    
    if (esi != 0)
        edi = esi

uint32_t eax_8 = inet_addr(edi)

if (eax_8 != 0xffffffff)
    goto label_688ea9

char* result = gethostbyname(edi)
int32_t* ebx

if (result == 0 || *(result + 0xa) != 4 || *(result + 8) != 2)
    ebx.b = 0
else
    eax_8 = ***(result + 0xc)
label_688ea9:
    *arg3 = 1
    arg3[1].w = 2
    arg3[2] = eax_8
    *(arg3 + 6) = htons(arg4).w
    ebx.b = 1

int32_t var_8_2 = 1

if (data_cf65bc != 0 && esi != 0 && *esi != 0)
    result = sub_63d4e0(&var_14)
    int32_t temp0_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp0_1 == 1)
        sub_64c080(result, *(result + 0xc) + 0x10)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
