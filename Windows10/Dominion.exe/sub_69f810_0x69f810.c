// 函数: sub_69f810
// 地址: 0x69f810
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* ecx
char* var_8 = ecx
int32_t edx
int32_t result_1 = sub_69f030(ecx, edx)
int32_t result = result_1

if (*(result + 8) == 4)
    result_1 = sub_69ec60(result)

if (*result != 0)
    sub_63b870(result_1, &data_801800, "pAsset->pAssetData == NULL", 
        "C:\x\ax2017\Engine\AssetCatalog.cpp", 0x170, "AssetCatalogNewAsset")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

*result = arg1
*(result + 8) = 3
char* eax_1 = *(result + 0xc)

if (eax_1 != 0 && eax_1 != &data_801800)
    if (data_cf65bc != 0 && *eax_1 != 0)
        char* eax_2 = sub_63d4e0(result + 0xc)
        int32_t temp0_1 = *(eax_2 + 4)
        *(eax_2 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_2, *(eax_2 + 0xc) + 0x10)
    
    *(result + 0xc) = &data_801800

return result
