// 函数: sub_68bb10
// 地址: 0x68bb10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76df3e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg2
int32_t var_1c = 1
sub_63d720(arg3, &data_801800)
char* edi = arg4
int32_t var_8_1 = 0
int32_t var_1c_1 = 1
char i

do
    i = *edi
    edi = &edi[1]
while (i != 0)

char* ecx_1 = arg5

do
    i = *ecx_1
    ecx_1 = &ecx_1[1]
while (i != 0)

void* i_2 = strstr(esi, arg4)
char const* const var_40
int32_t var_3c_4
char const* const var_38_5
char* const var_14
char* ecx_8

for (void* i_1 = i_2; i_1 != 0; i_1 = i_2)
    i_2 = strstr(esi + edi - &edi[1], arg5)
    
    if (i_2 == 0)
        var_38_5 = "RemoveMarkup"
        var_3c_4 = 0x95
        var_40 = "C:\x\ax2017\Engine\Localization.cpp"
        ecx_8 = "Halt"
        goto label_68bd09
    
    if (esi == 0)
        var_38_5 = "XString::XString"
        var_3c_4 = 0x9a
        goto label_68bcfa
    
    var_14 = &data_801800
    sub_63db30(&var_14, esi, i_1 - esi)
    int32_t var_8_2 = 4
    char* const eax_4 = &data_801800
    char* const esi_1 = var_14
    
    if (esi_1 != 0)
        eax_4 = esi_1
    
    sub_63d960(arg3, eax_4)
    int32_t var_8_3 = 5
    
    if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
        char* eax_5 = sub_63d4e0(&var_14)
        int32_t temp1_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)
            var_14 = &data_801800
    
    esi = i_2 + ecx_1 - &ecx_1[1]
    var_8_3.b = 0
    
    if (*esi == 0)
        goto label_68bce1
    
    i_2 = strstr(esi, arg4)

if (esi == 0)
    var_38_5 = "XString::XString"
    var_3c_4 = 0x94
label_68bcfa:
    var_40 = "C:\x\ax2017\Engine\xString.cpp"
    ecx_8 = &data_871e0c
label_68bd09:
    sub_63b870(i_2, &data_801800, ecx_8, var_40, var_3c_4, var_38_5)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

sub_63d720(&var_14, esi)
int32_t var_8_4 = 1
char* const eax_6 = &data_801800
char* const esi_3 = var_14

if (esi_3 != 0)
    eax_6 = esi_3

sub_63d960(arg3, eax_6)
int32_t var_8_5 = 2

if (data_cf65bc != 0 && esi_3 != 0 && *esi_3 != 0)
    char* eax_7 = sub_63d4e0(&var_14)
    int32_t temp0_1 = *(eax_7 + 4)
    *(eax_7 + 4) -= 1
    
    if (temp0_1 == 1)
        sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)

label_68bce1:
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
