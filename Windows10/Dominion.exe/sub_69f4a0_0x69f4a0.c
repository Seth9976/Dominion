// 函数: sub_69f4a0
// 地址: 0x69f4a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_c = arg3
int32_t* esi = arg3

if (*esi != 0)
    sub_63b870(arg1, &data_801800, "pAsset->pAssetData == NULL", 
        "C:\x\ax2017\Engine\AssetCatalog.cpp", 0x102, "AssetCatalogLoadAsset")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

sub_6c5b80(arg3, arg2)

if (*esi == 0)
    if (arg4 == 0)
        char* eax
        eax.b = 0
        return eax
    
    sub_69f530(esi)
    int32_t eax_3
    eax_3.b = 1
    return eax_3

char* eax_1 = esi[8]
char* const ecx = &data_801800

if (eax_1 != 0)
    ecx = eax_1

strstr(ecx, "campai")
int32_t eax_2
eax_2.b = 1
return eax_2
