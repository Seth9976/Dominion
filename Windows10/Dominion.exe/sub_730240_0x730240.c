// 函数: sub_730240
// 地址: 0x730240
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7727dd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_40 = arg3[1]
char var_2c[0x18]
void* eax_4 = sub_72fb90(arg3, &var_2c, arg4, *arg3)

if (arg2 == 0)
    sub_63b870(eax_4, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
        "XString::XString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* var_30
sub_63d720(&var_30, arg2)
int32_t var_8_1 = 0
char* eax_5 = var_30
int32_t* eax_7
char* ecx_4
char* esi_1

if (eax_5 == 0 || *eax_5 == 0)
    int32_t** eax_8 = sub_64bfd0(0x15)
    eax_8[3] += 1
    
    if (*eax_8 == 0)
        sub_64be70(eax_8)
    
    int32_t* esi_2 = *eax_8
    ecx_4 = "_env"
    *eax_8 = *esi_2
    *esi_2 = 0xfafafafa
    esi_2[1] = 1
    esi_2[2] = 4
    esi_2[3] = 5
    esi_1 = &esi_2[4]
    var_30 = esi_1
    
    do
        eax_7.b = *ecx_4
        ecx_4 = &ecx_4[1]
        ecx_4[esi_1 + 0xff771c0b] = eax_7.b
    while (eax_7.b != 0)
else
    char* eax_6 = sub_63d4e0(&var_30)
    int32_t edi = *(eax_6 + 8)
    ecx_4 = sub_63d5e0(eax_6, edi + 4, &var_30, 1)
    esi_1 = var_30
    __builtin_strncpy(&esi_1[edi], "_env", 5)
    eax_7.b = 0

int32_t var_40_1 = 1
int32_t result = sub_72f690(eax_7, &var_2c, ecx_4)
sub_69fc10(result)
sub_69ec60(result)
int32_t var_8_2 = 1

if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
    char* eax_9 = sub_63d4e0(&var_30)
    int32_t temp0_1 = *(eax_9 + 4)
    *(eax_9 + 4) -= 1
    
    if (temp0_1 == 1)
        sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
