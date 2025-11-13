// 函数: sub_69f680
// 地址: 0x69f680
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76f225
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = data_147ac2c
*(eax_3 + 0x1c) += 1
int32_t var_30 = *(eax_3 + 0x1c)
char* var_18
sub_63df30(&var_18, "!Mem\%d")
int32_t var_8_1 = 0
char* eax_4 = var_18
char* edx = &data_801800

if (eax_4 != 0)
    edx = eax_4

char* const var_14
sub_69fd50(eax_4, edx, &var_14, arg1)
var_8_1.b = 1
char* const ecx_1 = &data_801800
char* eax_5 = var_14

if (eax_5 != 0)
    ecx_1 = eax_5

int32_t result = sub_69f030(ecx_1, arg1)

if (*result != 0)
    sub_63b870(result, &data_801800, "pAsset->pAssetData == NULL", 
        "C:\x\ax2017\Engine\AssetCatalog.cpp", 0x15d, "AssetCatalogNewMemoryAsset")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

*result = arg2
*(result + 8) = 3
char* eax_6 = *(result + 0xc)

if (eax_6 != 0 && eax_6 != &data_801800)
    if (data_cf65bc != 0 && *eax_6 != 0)
        char* eax_7 = sub_63d4e0(result + 0xc)
        int32_t temp1_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
    
    *(result + 0xc) = &data_801800

var_8_1.b = 2

if (data_cf65bc != 0)
    char* eax_8 = var_14
    
    if (eax_8 != 0 && *eax_8 != 0)
        char* eax_9 = sub_63d4e0(&var_14)
        int32_t temp0_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
            var_14 = &data_801800

int32_t var_8_2 = 3

if (data_cf65bc != 0)
    char* eax_10 = var_18
    
    if (eax_10 != 0 && *eax_10 != 0)
        char* eax_11 = sub_63d4e0(&var_18)
        int32_t temp2_1 = *(eax_11 + 4)
        *(eax_11 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
