// 函数: sub_69ec60
// 地址: 0x69ec60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_4 = arg1
int32_t* edx = *arg1

if (edx == 0)
    return 

char const* const var_18
int32_t var_14_1
char const* const var_10_1
char* ecx

if (arg1[7] != 0)
    var_10_1 = "AssetCatalogPurgeAsset"
    var_14_1 = 0x46
    var_18 = "C:\x\ax2017\Engine\AssetCatalog.cpp"
    ecx = "pAsset->lockCount == 0"
label_69ecfc:
    int32_t eax
    sub_63b870(eax, &data_801800, ecx, var_18, var_14_1, var_10_1)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t ecx_1 = arg1[1]

if (ecx_1 u> 0x25)
    var_10_1 = "AssetTypeGetInfo"
    var_14_1 = 0xc3
    var_18 = "C:\x\ax2017\Engine\AssetTypeRegistry.cpp"
    ecx = "assetType >= 0 && assetType < ASSET_TYPE_COUNT"
    goto label_69ecfc

int32_t eax_2 = *((ecx_1 << 5) + data_147b07c + 8)

if (eax_2 != 0)
    eax_2(arg1, *edx)

int32_t* esi_1 = *arg1

if ((esi_1[2].b & 1) == 0)
    sub_69cee0(*esi_1, esi_1[3])
    *esi_1 = 0

char** ecx_4 = esi_1[1]

if (ecx_4 != 0)
    sub_6a3220(ecx_4)
    esi_1[1] = 0

_aligned_free(esi_1)
*arg1 = 0
