// 函数: sub_705d70
// 地址: 0x705d70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76f225
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t eax_3 = sub_63b5f0("Compiling opengl memory shader")

if (arg1 == 0)
    sub_63b870(eax_3, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
        "XString::XString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* var_18
sub_63d720(&var_18, arg1)
int32_t var_8_1 = 0
char* var_14
sub_63d720(&var_14, arg1)
var_8_1.b = 1
char* esi_1 = var_18
int32_t ecx_3

if (esi_1 == 0 || *esi_1 == 0)
    ecx_3 = 0
else
    ecx_3 = *(sub_63d4e0(&var_18) + 8)

*(arg2 + 0x30) = ecx_3 + 1
int32_t eax_5 = sub_687730(ecx_3 + 1)
*(arg2 + 0x38) = eax_5
char* ecx_5 = &data_801800

if (esi_1 != 0)
    ecx_5 = esi_1

memcpy(eax_5, ecx_5, *(arg2 + 0x30))
char* edi = var_14
int32_t ecx_7

if (edi == 0 || *edi == 0)
    ecx_7 = 0
else
    ecx_7 = *(sub_63d4e0(&var_14) + 8)

*(arg2 + 0x40) = ecx_7 + 1
int32_t eax_7 = sub_687730(ecx_7 + 1)
*(arg2 + 0x48) = eax_7
char* ecx_9 = &data_801800

if (edi != 0)
    ecx_9 = edi

memcpy(eax_7, ecx_9, *(arg2 + 0x40))
var_8_1.b = 2
char* result

if (data_cf65bc != 0 && edi != 0 && *edi != 0)
    result = sub_63d4e0(&var_14)
    int32_t temp0_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp0_1 == 1)
        sub_64c080(result, *(result + 0xc) + 0x10)

int32_t var_8_2 = 3

if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
    result = sub_63d4e0(&var_18)
    int32_t temp1_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp1_1 == 1)
        sub_64c080(result, *(result + 0xc) + 0x10)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
