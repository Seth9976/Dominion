// 函数: sub_6a70c0
// 地址: 0x6a70c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76f83d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg3
char* var_40 = arg3

if (arg2 == 0)
    sub_63b870(&ExceptionList, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
        "XString::XString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

sub_63d720(&var_40, arg2)
void var_30
sub_69e000(&var_30, 3)
int32_t var_14_1 = 0
int32_t* eax_4 = sub_6a6e70(esi, &var_30)
int32_t** result

if (eax_4 != 0)
    var_40 = arg5
    sub_6a6fd0(eax_4, arg4, eax_4, var_40)
    result = sub_687730(0x10)
    *result = zx.o(0)
    result[3] = esi
    result[1] = eax_4
    *result = sub_6a4880(eax_4, esi)
    
    if (arg5 != 0)
        result[2] |= 0x800
else
    result = nullptr

int32_t var_14_2 = 1

if (data_cf65bc != 0)
    char* var_2c
    char* eax_7 = var_2c
    
    if (eax_7 != 0 && *eax_7 != 0)
        char* eax_8 = sub_63d4e0(&var_2c)
        int32_t temp0_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
