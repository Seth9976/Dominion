// 函数: sub_6e1820
// 地址: 0x6e1820
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_comp_ellint_3@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* const var_14 = arg3
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = sub_6e17c0(arg3)
*result = 4

if (arg2 == 0)
    sub_63b870(result, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x9a, 
        "XString::XString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

var_14 = &data_801800
sub_63db30(&var_14, arg2, arg4)
int32_t var_8_1 = 0
char* const edi = &data_801800
char* const esi_1 = var_14
char* const ecx_1 = &data_801800

if (esi_1 != 0)
    ecx_1 = esi_1

int32_t eax_3 = sub_6b7ef0(ecx_1)

if (esi_1 != 0)
    edi = esi_1

*(result + 4) = sub_69f030(edi, eax_3)
int32_t var_8_2 = 1

if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
    char* eax_5 = sub_63d4e0(&var_14)
    int32_t temp0_1 = *(eax_5 + 4)
    *(eax_5 + 4) -= 1
    
    if (temp0_1 == 1)
        sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
