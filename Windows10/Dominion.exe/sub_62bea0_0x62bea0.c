// 函数: sub_62bea0
// 地址: 0x62bea0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$copy_wide_to_narrow_find_data@U_wfinddata32i64_t@@U_finddata32i64_t@@@@YA_NABU_wfinddata32i64_t@@AAU_finddata32i64_t@@I@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
uint32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = arg1
char* const var_18 = &data_801800
int32_t var_8_1 = 0
sub_63c340(&var_18)
char* const eax_3 = var_18
char* edx = &data_801800

if (eax_3 != 0)
    edx = eax_3

var_8_1.b = 1
char* var_1c
sub_63d850(&var_18, sub_63dfa0(eax_3, edx, &var_1c, 0x86d230, U"'"))
var_8_1.b = 2

if (data_cf65bc != 0)
    char* eax_5 = var_1c
    
    if (eax_5 != 0 && *eax_5 != 0)
        char* eax_6 = sub_63d4e0(&var_1c)
        int32_t temp0_1 = *(eax_6 + 4)
        *(eax_6 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)

char* const esi = var_18
char* result

if (arg2 != 0)
    char* const ecx_5 = &data_801800
    
    if (esi != 0)
        ecx_5 = esi
    
    result = sub_69dd70(ecx_5, &data_807234)

char* const ebx

if (arg2 == 0 || result != 0)
    var_1c = &data_801800
    var_8_1.b = 3
    char* const eax_7 = &data_801800
    
    if (esi != 0)
        eax_7 = esi
    
    sub_63d960(&var_1c, eax_7)
    char* edi = var_1c
    sub_4ddbb0(eax_2, arg4, arg3)
    var_8_1.b = 4
    
    if (data_cf65bc != 0 && edi != 0 && *edi != 0)
        result = sub_63d4e0(&var_1c)
        int32_t temp1_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(result, *(result + 0xc) + 0x10)
    
    ebx.b = 1
else
    ebx.b = 0

int32_t var_8_2 = 5

if (data_cf65bc != 0 && esi != 0 && *esi != 0)
    result = sub_63d4e0(&var_18)
    int32_t temp2_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(result, *(result + 0xc) + 0x10)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
