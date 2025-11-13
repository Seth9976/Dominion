// 函数: sub_5af880
// 地址: 0x5af880
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_c = arg1

if (*arg1 == 0)
    char* const edi_1 = &data_801800
    uint32_t eax
    
    if (arg1[1] == 0x15)
        char* eax_1 = arg1[8]
        char* const ecx = &data_801800
        
        if (eax_1 != 0)
            ecx = eax_1
        
        char* const var_1c_1 = ecx
        eax = sub_63b5f0("Unpreloaded sound %s")
    
    if (*arg1 != 0)
        sub_63b870(eax, &data_801800, "pAsset->pAssetData == NULL", 
            "C:\x\ax2017\Engine\AssetCatalog.cpp", 0x102, "AssetCatalogLoadAsset")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    sub_6c5b80(arg1, 0)
    
    if (*arg1 != 0)
        char* eax_2 = arg1[8]
        
        if (eax_2 != 0)
            edi_1 = eax_2
        
        strstr(edi_1, "campai")
        return **arg1
    
    sub_69f530(arg1)

return **arg1
