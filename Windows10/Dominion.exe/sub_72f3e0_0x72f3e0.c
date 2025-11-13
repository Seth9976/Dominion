// 函数: sub_72f3e0
// 地址: 0x72f3e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_772716
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_24 = 0
int32_t* eax_4 = *(data_147b07c + 0x7c)
char* edx = *eax_4

if (edx == 0)
    sub_63b870(eax_4, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
        "XString::XString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* const var_18
sub_63d720(&var_18, edx)
int32_t var_8_1 = 0
char* const var_1c
sub_63d720(&var_1c, U".")
var_8_1.b = 2
char* eax_5 = *arg1
char* const var_14 = eax_5

if (eax_5 != 0 && *eax_5 != 0)
    char* eax_6 = sub_63d4e0(&var_14)
    *(eax_6 + 4) += 1

char* esi = var_1c
char* const edi = &data_801800
int32_t var_24_1 = 1
char* const eax_7 = &data_801800

if (esi != 0)
    eax_7 = esi

sub_63d960(&var_14, eax_7)
char* var_20
sub_63dde0(&var_14, &var_20, &var_18)
int32_t var_24_2 = 0
var_8_1.b = 5

if (data_cf65bc != 0)
    char* eax_8 = var_14
    
    if (eax_8 != 0 && *eax_8 != 0)
        char* eax_9 = sub_63d4e0(&var_14)
        int32_t temp0_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
            var_14 = &data_801800

var_8_1.b = 7

if (data_cf65bc != 0 && esi != 0 && *esi != 0)
    char* eax_10 = sub_63d4e0(&var_1c)
    int32_t temp1_1 = *(eax_10 + 4)
    *(eax_10 + 4) -= 1
    
    if (temp1_1 == 1)
        sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
        var_1c = &data_801800

var_8_1.b = 9

if (data_cf65bc != 0)
    char* eax_11 = var_18
    
    if (eax_11 != 0 && *eax_11 != 0)
        char* eax_12 = sub_63d4e0(&var_18)
        int32_t temp2_1 = *(eax_12 + 4)
        *(eax_12 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
            var_18 = &data_801800

var_8_1.b = 8
char* const ecx_11 = &data_801800
char* eax_13 = var_20

if (eax_13 != 0)
    ecx_11 = eax_13

int32_t result_1 = sub_69f030(ecx_11, 3)
int32_t result = result_1
char const* const var_40
int32_t var_3c_1
char const* const var_38_2
char* ecx_19

if (*(result + 8) == 0)
    if (*(result + 4) != 3)
        var_38_2 = "DefAutoLock::DefAutoLock"
        var_3c_1 = 0x19
        var_40 = "C:\x\ax2017\Engine\DefLoad.h"
        ecx_19 = "assetPtr && assetPtr->assetType == assetType"
    label_72f646:
        sub_63b870(result_1, &data_801800, ecx_19, var_40, var_3c_1, var_38_2)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (*result == 0)
        sub_69f4a0(result_1, 0, result, 1)
    
    goto label_72f579

label_72f579:

if (*(result + 8) != 4)
    void* eax_21 = *result
    
    if (eax_21 == 0 || (*(eax_21 + 8) & 1) != 0)
        result_1 = sub_69f4a0(sub_69ec60(result), 1, result, 1)
        
        if (result_1.b == 0)
            var_38_2 = "AssetCatalogReloadAsWritable"
            var_3c_1 = 0x149
            var_40 = "C:\x\ax2017\Engine\AssetCatalog.cpp"
            ecx_19 = "result"
            goto label_72f646
else
    char* eax_14 = *arg1
    char* const ecx_13 = &data_801800
    
    if (eax_14 != 0)
        ecx_13 = eax_14
    
    result = sub_6a1710(ecx_13)

if (*(result + 8) == 4)
    char* eax_16 = *arg1
    
    if (eax_16 != 0)
        edi = eax_16
    
    result = sub_6a1710(edi)

int32_t var_8_2 = 0xc

if (data_cf65bc != 0)
    char* eax_18 = var_20
    
    if (eax_18 != 0 && *eax_18 != 0)
        char* eax_19 = sub_63d4e0(&var_20)
        int32_t temp3_1 = *(eax_19 + 4)
        *(eax_19 + 4) -= 1
        
        if (temp3_1 == 1)
            sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
