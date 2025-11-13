// 函数: sub_69fc10
// 地址: 0x69fc10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

enum MESSAGEBOX_RESULT result

if (data_8c4157 != 0)
    int32_t* ecx = *arg1
    char const* const var_28
    int32_t var_24_1
    char const* const var_20
    char* ecx_1
    
    if (ecx == 0)
        var_20 = "AssetCatalogSave"
        var_24_1 = 0x1ae
        var_28 = "C:\x\ax2017\Engine\AssetCatalog.cpp"
        ecx_1 = "pAsset->pAssetData"
    label_69fcbe:
        sub_63b870(result, &data_801800, ecx_1, var_28, var_24_1, var_20)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (ecx[1] == 0)
        int32_t esi_1 = arg1[1]
        
        if (esi_1 u> 0x25)
            var_20 = "AssetTypeGetInfo"
            var_24_1 = 0xc3
            var_28 = "C:\x\ax2017\Engine\AssetTypeRegistry.cpp"
            ecx_1 = "assetType >= 0 && assetType < ASSET_TYPE_COUNT"
            goto label_69fcbe
        
        *ecx
        int32_t* esi_3 = *((esi_1 << 5) + data_147b07c + 0x1c)
        int32_t* eax_1 = sub_6a2fa0()
        sub_6a6290(esi_3, nullptr)
        ecx[1] = eax_1
    
    if (sub_6c5fc0(arg1).b != 0)
        arg1[2] = 1
        result.b = 1
        return result

result.b = 0
return result
