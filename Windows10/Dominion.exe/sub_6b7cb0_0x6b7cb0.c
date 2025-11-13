// 函数: sub_6b7cb0
// 地址: 0x6b7cb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = data_147b080

if (eax s>= 0x100)
    sub_63b870(eax, &data_801800, "gAssetInfoTableItemCount < MAX_ASSET_TYPES", 
        "C:\x\ax2017\Engine\AssetTypeRegistry.cpp", 0x49, "AssetRegisterBeforeMain")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t ecx_1 = eax * 7
data_147b080 = eax + 1
*((ecx_1 << 2) + &data_147b088) = arg2
*((ecx_1 << 2) + &data_147b08c) = arg3
*((ecx_1 << 2) + &data_147b090) = arg4
*((ecx_1 << 2) + &data_147b094) = arg5
*((ecx_1 << 2) + &data_147b098) = arg6
return arg1
