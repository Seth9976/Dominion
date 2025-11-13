// 函数: sub_6a0de0
// 地址: 0x6a0de0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_4 = arg1
char const* const var_18
int32_t var_14
char const* const var_10_1
void* eax
char* ecx

if (arg1[1] == 3)
    eax = sub_5af880(arg1)
    int32_t* esi_1 = *(eax + 0x18)
    
    if (esi_1 != 0)
        int32_t eax_1 = esi_1[3]
        
        if (eax_1 != 0)
            _aligned_free(eax_1)
        
        int32_t eax_2 = esi_1[2]
        
        if (eax_2 != 0)
            _aligned_free(eax_2)
        
        int32_t* result = sub_64c080(esi_1, 0x24)
        *(eax + 0x18) = 0
        return result
    
    var_10_1 = "TextureAsyncronousFree"
    var_14 = 0x28a
    var_18 = "C:\x\ax2017\Engine\Texture.cpp"
    ecx = "loader"
else
    var_10_1 = "TextureGetDef"
    var_14 = 0x89
    var_18 = "C:\x\ax2017\Engine\Texture.h"
    ecx = "assetPtr->assetType == ASSET_TYPE_TEXTURE"

sub_63b870(eax, &data_801800, ecx, var_18, var_14, var_10_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
