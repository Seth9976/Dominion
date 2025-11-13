// 函数: sub_6b33b0
// 地址: 0x6b33b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_4 = arg1
char const* const var_18
int32_t var_14
char const* const var_10_1
char* result
char* ecx

if (arg1[1] == 0x12)
    result = sub_5af880(arg1)
    
    if (*(result + 0x1c) == 0)
        return result
    
    void* edi_1 = *(result + 0x20)
    
    if (*(edi_1 + 0x10) == 0)
        return result
    
    int32_t* ecx_1 = *(edi_1 + 8)
    
    if (ecx_1[1] == 3)
        void* ecx_2 = *sub_5af880(ecx_1)
        result = *(edi_1 + 0x10)
        
        if (result == *(ecx_2 + 0x30))
            return result
        
        char* eax_1 = arg1[8]
        char* const ecx_3 = &data_801800
        
        if (eax_1 != 0)
            ecx_3 = eax_1
        
        char* const var_10_2 = ecx_3
        sub_63b5f0("didn't find asset in atlas forcing a reimport %s")
        return sub_69f4a0(sub_69ec60(arg1), 1, arg1, 0)
    
    var_10_1 = "TextureGetDef"
    var_14 = 0x89
    var_18 = "C:\x\ax2017\Engine\Texture.h"
    ecx = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
else
    var_10_1 = "FontGetDef"
    var_14 = 0x2e6
    var_18 = "C:\x\ax2017\Engine\AssetUtils.cpp"
    ecx = "assetPtr->assetType == ASSET_TYPE_FONT"

sub_63b870(result, &data_801800, ecx, var_18, var_14, var_10_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
