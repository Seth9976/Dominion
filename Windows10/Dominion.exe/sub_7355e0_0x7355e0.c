// 函数: sub_7355e0
// 地址: 0x7355e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = *arg1
int32_t* result = *(*arg2 + 4)

if (ecx[1] == 3)
    if (result != 3)
        result.b = 1
        return result
    
    int32_t* eax_1 = sub_5af880(ecx)
    int32_t* ecx_1 = *arg2
    
    if (ecx_1[1] != 3)
        sub_63b870(eax_1, &data_801800, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
            "C:\x\ax2017\Engine\Texture.h", 0x89, "TextureGetDef")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t* eax_2 = sub_5af880(ecx_1)
    int32_t* ecx_2 = *eax_1
    result = *eax_2
    int32_t edx_2 = ecx_2[1] * *ecx_2
    int32_t ecx_4 = result[1] * *result
    
    if (edx_2 s> ecx_4)
        result.b = 1
        return result
    
    if (edx_2 s>= ecx_4)
        result.b = arg1 u< arg2
        return result
else if (result != 3)
    result.b = arg1 u< arg2
    return result

result.b = 0
return result
