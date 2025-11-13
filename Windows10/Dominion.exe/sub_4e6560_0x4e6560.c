// 函数: sub_4e6560
// 地址: 0x4e6560
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_764650
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* ecx = __chkstk(0x199c)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_18 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_19a4
memset(&var_19a4, 0, 0x1990)
char* eax_3 = *ecx

if (eax_3 == 0)
    sub_63b870(eax_3, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x9a, 
        "XString::XString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

uint32_t var_1c_1 = ecx[1]
char* const var_19a8 = &data_801800
char eax_4 = sub_63db30(&var_19a8, eax_3, var_1c_1)
int32_t var_8_1 = 0
char* const esi_1 = var_19a8
char* edx = &data_801800

if (esi_1 != 0)
    edx = esi_1

sub_4ddd90(eax_4, edx, &var_19a4, 0x18)
int32_t var_8_2 = 1

if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
    char* eax_5 = sub_63d4e0(&var_19a8)
    int32_t temp0_1 = *(eax_5 + 4)
    *(eax_5 + 4) -= 1
    
    if (temp0_1 == 1)
        sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
uint32_t result
CookieCheckFunction(result)
return result
