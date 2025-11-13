// 函数: sub_6a1680
// 地址: 0x6a1680
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg1 u> 0x25)
    int32_t eax
    sub_63b870(eax, &data_801800, "assetType >= 0 && assetType < ASSET_TYPE_COUNT", 
        "C:\x\ax2017\Engine\AssetTypeRegistry.cpp", 0xc3, "AssetTypeGetInfo")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char** ebx = *((arg1 << 5) + data_147b07c + 0x1c)
int32_t* eax_2 = sub_6a2fa0()
eax_2[4] = ebx
sub_63d8d0(eax_2, *ebx)
int32_t** result = sub_687730(0x10)
*result = zx.o(0)
result[3] = ebx
result[1] = eax_2
*result = sub_6a4880(eax_2, ebx)
return result
