// 函数: sub_69faf0
// 地址: 0x69faf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76f29d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
char* const result_3 = &data_801800
char* result_1
char* result_2 = result_1

if (result_2 != 0)
    result_3 = result_2

int32_t eax_3 = sub_69f030(result_3, arg1)
int32_t esi = eax_3

if (*(esi + 8) == 4)
    eax_3 = sub_69ec60(esi)

if (*esi != 0)
    sub_63b870(eax_3, &data_801800, "pAsset->pAssetData == NULL", 
        "C:\x\ax2017\Engine\AssetCatalog.cpp", 0x19f, "AssetCatalogNewSourceAsset")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

*esi = arg2
*(esi + 8) = 1
char* result = *(esi + 0xc)

if (result != 0 && result != &data_801800)
    if (data_cf65bc != 0 && *result != 0)
        result = sub_63d4e0(esi + 0xc)
        int32_t temp1_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp1_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)
    
    *(esi + 0xc) = &data_801800

int32_t var_8_2 = 1

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
