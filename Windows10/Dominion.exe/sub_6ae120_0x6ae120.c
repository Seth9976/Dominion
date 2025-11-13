// 函数: sub_6ae120
// 地址: 0x6ae120
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint32_t result = __security_cookie ^ &__saved_ebp
uint32_t result_1 = result
int32_t* esi = arg3

if (data_147b070 != 0)
    bool cond:1_1 = esi[1] != 3
    int128_t var_1c = *arg2
    
    if (cond:1_1)
        sub_63b870(result, &data_801800, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
            "C:\x\ax2017\Engine\Texture.h", 0x89, "TextureGetDef")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void* ecx = *sub_5af880(arg3)
    int32_t* eax_2 = *(ecx + 0x28)
    
    if (eax_2 != 0)
        esi = eax_2
        int32_t eax_3 = *(ecx + 0x34)
        int32_t ecx_1 = *(ecx + 0x38)
        var_1c.d += eax_3
        var_1c:4.d += ecx_1
        var_1c:8.d += eax_3
        var_1c:0xc.d += ecx_1
    
    result = (*(*data_147b070 + 0x20))(esi, &var_1c, arg4)

CookieCheckFunction(result)
return result
