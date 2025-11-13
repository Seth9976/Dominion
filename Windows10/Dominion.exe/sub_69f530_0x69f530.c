// 函数: sub_69f530
// 地址: 0x69f530
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char const* const var_28
int32_t var_24_1
char const* const var_20
int32_t* eax
char* ecx
char* const edx

if (*arg1 == 0)
    char* eax_1 = arg1[8]
    char* const ebx_1 = &data_801800
    char* const ecx_1 = &data_801800
    
    if (eax_1 != 0)
        ecx_1 = eax_1
    
    char* const var_20_1 = ecx_1
    sub_63b5f0("Can't load asset: '%s'")
    int32_t eax_2 = sub_69f330(arg1)
    int32_t esi_1 = eax_2
    
    if (*esi_1 != 0)
        eax_2 = sub_69ec60(esi_1)
    
    sub_69f4a0(eax_2, 0, esi_1, 0)
    
    if (*esi_1 == 0)
        sub_6a2860(esi_1)
    
    eax = *esi_1
    
    if (eax != 0)
        int32_t esi_2 = arg1[1]
        
        if (esi_2 u<= 0x25)
            void* esi_4 = *((esi_2 << 5) + data_147b07c + 0x1c)
            int128_t* eax_4 = sub_687730(0x10)
            int32_t** var_c_1 = eax_4
            *eax_4 = zx.o(0)
            eax = sub_69d4c0(*eax, esi_4)
            *var_c_1 = eax
            var_c_1[3] = esi_4
            int32_t ecx_8 = arg1[1]
            *arg1 = var_c_1
            arg1[2] = 4
            
            if (ecx_8 u<= 0x25)
                int32_t result = data_147b07c
                int32_t ecx_10 = *((ecx_8 << 5) + result + 4)
                
                if (ecx_10 == 0)
                    return result
                
                char* eax_5 = arg1[8]
                
                if (eax_5 != 0)
                    ebx_1 = eax_5
                
                return ecx_10(ebx_1, *var_c_1)
        
        var_20 = "AssetTypeGetInfo"
        var_24_1 = 0xc3
        ecx = "assetType >= 0 && assetType < ASSET_TYPE_COUNT"
        edx = &data_801800
        var_28 = "C:\x\ax2017\Engine\AssetTypeRegistry.cpp"
    else
        var_20 = "AssetCatalogLoadFailureAsset"
        var_24_1 = 0x134
        var_28 = "C:\x\ax2017\Engine\AssetCatalog.cpp"
        edx = "Failed to load failure asset\n"
        ecx = "pFailureAsset->pAssetData"
else
    var_20 = "AssetCatalogLoadFailureAsset"
    var_24_1 = 0x121
    var_28 = "C:\x\ax2017\Engine\AssetCatalog.cpp"
    edx = &data_801800
    ecx = "pAsset->pAssetData == NULL"

sub_63b870(eax, edx, ecx, var_28, var_24_1, var_20)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
