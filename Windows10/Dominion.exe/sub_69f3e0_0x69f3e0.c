// 函数: sub_69f3e0
// 地址: 0x69f3e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (*(arg3 + 8) == 4)
    arg1 = sub_69f330(arg3)
    arg3 = arg1

if (*(arg3 + 8) != 2 && arg6 u> 0x100000)
    return memcpy(arg2, arg4 + arg6, arg5)

int32_t esi_1 = *(arg3 + 0x10)
int32_t var_18_1
char* ecx

if (esi_1 != 0)
    arg1 = arg5 + arg4
    
    if (arg1 s<= *(arg3 + 0x14))
        uint32_t var_14_3 = arg5
        uint32_t eax_4 = esi_1 + arg4 + arg6
        arg1 = sub_696d50(eax_4, arg2, arg3, eax_4)
        
        if (arg1.b != 0)
            return arg1
        
        char const* const var_14_4 = "AssetCatalogLoadHWBuffer"
        var_18_1 = 0xf9
        ecx = "result"
    else
        char const* const var_14_2 = "AssetCatalogLoadHWBuffer"
        var_18_1 = 0xf4
        ecx = "readOffset + readSize <= pAssetToUse->packFileSize"
else
    char const* const var_14_1 = "AssetCatalogLoadHWBuffer"
    var_18_1 = 0xf2
    ecx = "pAssetToUse->packFileOffset != 0"

sub_63b870(arg1, &data_801800, ecx, "C:\x\ax2017\Engine\AssetCatalog.cpp", var_18_1, 
    "AssetCatalogLoadHWBuffer")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
