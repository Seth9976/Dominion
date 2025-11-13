// 函数: sub_736270
// 地址: 0x736270
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg3[1] == 3)
    int32_t* esi_1 = *sub_5af880(arg3)
    arg2[1] = *esi_1
    arg2[2] = esi_1[1]
    arg2[4] = arg4
    int32_t eax_3 = sub_6a9450(arg4)
    int32_t var_14_1 = arg2[4]
    int32_t edx = arg2[2]
    arg2[3] = *esi_1 * eax_3
    *arg2 = sub_687730(sub_6a9660(eax_3, edx, arg2[1], var_14_1))
    bool result = sub_735a50(esi_1, arg2)
    
    if (result != 0)
        return result
    
    char* var_14_2 = sub_63d7e0(&arg3[8])
    sub_63b870(sub_63b5f0("Failed to read texture %s"), &data_801800, "Halt", 
        "C:\x\ax2017\Engine\Editor\AtlasMaker.cpp", 0x2b1, "AtlasLoadFontTexture")
else
    sub_63b870(arg1, &data_801800, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
        "C:\x\ax2017\Engine\Texture.h", 0x89, "TextureGetDef")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
