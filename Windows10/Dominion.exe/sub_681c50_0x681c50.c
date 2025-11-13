// 函数: sub_681c50
// 地址: 0x681c50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void var_36c
uint32_t result = __security_cookie ^ &var_36c
uint32_t result_1 = result
void* ecx = data_147abe4
int32_t edx = *(ecx + 0x18)

if (edx != 0)
    char const* const var_384_1
    int32_t var_380_1
    char const* const var_37c_1
    char* ecx_1
    
    if (*(ecx + 0x3c) == 0)
        var_37c_1 = "SpriteDrawBuffers"
        var_380_1 = 0xd9
        var_384_1 = "C:\x\ax2017\Engine\Sprite.cpp"
        ecx_1 = "gpSpriteAppData->pLockedVerts"
    label_681e30:
        sub_63b870(result, &data_801800, ecx_1, var_384_1, var_380_1, var_37c_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t ebx_1 = *(ecx + (*(ecx + 0x10) << 2))
    result = (*(*data_147b070 + 0x6c))(ebx_1, edx << 7)
    void* esi_1 = data_147abe4
    bool cond:0_1 = *(esi_1 + 0x18) s<= 0x400
    *(esi_1 + 0x3c) = 0
    
    if (not(cond:0_1))
        var_37c_1 = "SpriteDrawBuffers"
        var_380_1 = 0xe2
        var_384_1 = "C:\x\ax2017\Engine\Sprite.cpp"
        ecx_1 = "gpSpriteAppData->numBufferSprites <= MAX_SPRITE_PER_DRAW"
        goto label_681e30
    
    void var_368
    result = memset(&var_368, 0, 0x358)
    struct _EXCEPTION_REGISTRATION_RECORD** edx_2 = *(esi_1 + 0x50)
    void* ecx_5
    
    if (edx_2 != 0)
        int32_t* ecx_3 = *(esi_1 + 0x40)
        
        if (ecx_3 == 0)
        label_681d13:
            void* eax_4 = sub_681b40(edx_2)
            esi_1 = data_147abe4
            ecx_5 = eax_4
        else
            while (true)
                int32_t* eax_3 = *ecx_3
                ecx_3 = ecx_3[1]
                
                if (*eax_3 == edx_2)
                    ecx_5 = &eax_3[1]
                    break
                
                if (ecx_3 == 0)
                    goto label_681d13
        
        goto label_681d6f
    
    if (*(esi_1 + 0x1c) == 0)
        var_37c_1 = "SpriteGetDefaultMaterialInCache"
        var_380_1 = 0x6b
        var_384_1 = "C:\x\ax2017\Engine\Sprite.cpp"
        ecx_1 = "gpSpriteAppData->materialBound"
        goto label_681e30
    
    if (*(esi_1 + 0x48) s<= 0)
        var_37c_1 = "SpriteGetDefaultMaterialInCache"
        var_380_1 = 0x6c
        var_384_1 = "C:\x\ax2017\Engine\Sprite.cpp"
        ecx_1 = "gpSpriteAppData->materialStateCache.GetSize() > 0"
        goto label_681e30
    
    void** ecx_6 = *(esi_1 + 0x40)
    
    if (ecx_6 == 0)
        var_37c_1 = "XList<struct MaterialStateCacheItem *>::GetHead"
        var_380_1 = 0x53
        var_384_1 = "C:\x\ax2017\Engine\xList.h"
        ecx_1 = "mpHead != NULL"
        goto label_681e30
    
    ecx_5 = *ecx_6 + 4
label_681d6f:
    void* var_18_1 = ecx_5
    int32_t eax_5 = *(esi_1 + 0x4c)
    
    if (eax_5 != 0)
        sub_6d8960(eax_5, 0x53, ecx_5, eax_5)
    
    void var_2e8
    (*(*data_147b070 + 0x80))(&var_2e8)
    (*(*data_147b070 + 0x44))(&var_368)
    void* esi_2 = data_147abe4
    int32_t edx_3 = *(esi_2 + 0x18)
    (*(*data_147b070 + 0x40))(4, ebx_1, *(esi_2 + 0x14), 1, edx_3 * 2, edx_3 << 2, 0, 0)
    void* ecx_11 = data_147abe4
    int32_t eax_11 = *(ecx_11 + 0x10) + 1
    *(ecx_11 + 0x18) = 0
    int32_t eax_12 = eax_11 & 0x80000003
    
    if (eax_12 s< 0)
        eax_12 = ((eax_12 - 1) | 0xfffffffc) + 1
    
    *(ecx_11 + 0x10) = eax_12
    result = data_147b06c
    *(result + 0x2c) += 1

CookieCheckFunction(result)
return result
