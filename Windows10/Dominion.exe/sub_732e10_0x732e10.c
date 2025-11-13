// 函数: sub_732e10
// 地址: 0x732e10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_772ac5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* const var_2c = &data_801800
char* const var_28 = &data_801800
int32_t var_14_1 = 0
sub_63d8d0(&var_2c, arg2)
int32_t var_40_1 = 1
sub_63de70(&var_28, "%d")
int32_t* ecx_1 = sub_64bfd0(0x10)
ecx_1[3] += 1

if (*ecx_1 == 0)
    sub_64be70(ecx_1)

int32_t* esi = *ecx_1
int32_t* var_24_1 = esi
*ecx_1 = *esi
char* const eax_5 = var_2c
*esi = zx.o(0)
*esi = eax_5

if (eax_5 != 0 && *eax_5 != 0)
    char* eax_6 = sub_63d4e0(esi)
    *(eax_6 + 4) += 1

var_14_1.b = 1
char* const eax_7 = var_28
esi[1] = eax_7

if (eax_7 != 0 && *eax_7 != 0)
    char* eax_8 = sub_63d4e0(&esi[1])
    *(eax_8 + 4) += 1

esi[2] = 0
esi[3] = arg1[1]
void* eax_10 = arg1[1]

if (eax_10 == 0)
    *arg1 = esi
else
    *(eax_10 + 8) = esi

arg1[2] += 1
arg1[1] = esi
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_4d6960(&var_2c)
fsbase->NtTib.ExceptionList = ExceptionList
return result
