// 函数: sub_6a1230
// 地址: 0x6a1230
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76f425
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_3 = arg5
char const* const var_3c
int32_t var_38
char const* const var_34_1
char* ecx

if (result_3 == 3 || result_3 == 4 || result_3 == 5 || result_3 == 6)
    int128_t* eax_3 = sub_69d520(data_17774ec)
    
    if (arg6 == 0)
        result_3 = sub_69f680(3, eax_3)
    else
        result_3 = sub_69f810(eax_3)
    
    int32_t result = result_3
    char* var_14
    int32_t result_4
    
    if (result == 0)
        sub_69fd50(result_3, "!Null\Null", &var_14, 3)
        int32_t result_2 = result
        char* eax_4 = var_14
        char* const ecx_4 = &data_801800
        
        if (eax_4 != 0)
            ecx_4 = eax_4
        
        result_3 = sub_69f030(ecx_4, result + 3)
        result_4 = result_3
        int32_t var_8_1 = 1
        
        if (data_cf65bc != result)
            char* ecx_5 = var_14
            
            if (ecx_5 != 0 && *ecx_5 != result.b)
                result_3 = sub_63d4e0(&var_14)
                int32_t temp0_1 = *(result_3 + 4)
                *(result_3 + 4) -= 1
                
                if (temp0_1 == 1)
                    result_3 = sub_64c080(result_3, *(result_3 + 0xc) + 0x10)
                    var_14 = &data_801800
        
        int32_t var_8_2 = 0xffffffff
        int32_t result_5 = result_4
        goto label_6a1348
    
    if (*(result + 4) == 3)
        int32_t result_1 = result
        result_4 = result
    label_6a1348:
        
        if (*result_4 == 0)
            sub_69f4a0(result_3, 0, result_4, 1)
        
        char** eax_5 = *result_4
        *(result_4 + 0x1c) += 1
        var_14 = *eax_5
        int32_t var_8_3 = 2
        int32_t* eax_7 = _aligned_malloc(0x50, 0x10)
        
        if (eax_7 == 0)
            sub_63b870(eax_7, &data_801800, "pBuffer", "C:\x\ax2017\Engine\xMemory.cpp", 0x57, 
                "XMalloc")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        sub_69ca80(eax_7, data_17774e8)
        *eax_7 = arg3
        eax_7[1] = arg2
        eax_7[6] = arg4
        eax_7[7] = arg5
        char* eax_12 = var_14
        eax_7[5] = 8
        eax_7[4] = 1
        eax_7[0xf] = 0
        bool cond:0 = *eax_12 != 0
        eax_7[0x12] = 0
        
        if (not(cond:0))
            *eax_12 = eax_7
            *(result_4 + 0x1c) -= 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        sub_63b870(eax_12, &data_801800, "pDefTexture->pTextureImportData == NULL", 
            "C:\x\ax2017\Engine\Texture.cpp", 0x3fc, "TextureCreateForRendering")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    var_34_1 = "DefAutoLock::DefAutoLock"
    var_38 = 0x19
    var_3c = "C:\x\ax2017\Engine\DefLoad.h"
    ecx = "assetPtr && assetPtr->assetType == assetType"
else
    var_34_1 = "TextureCreateForRendering"
    var_38 = 0x3df
    var_3c = "C:\x\ax2017\Engine\Texture.cpp"
    ecx = "textureType == TEXTURE_RENDER_TARGET || textureType == TEXTURE_DEPTH_STENCIL || "
    "textureType == TEXTURE_RENDER_TARGET_MSAA || textureType"

sub_63b870(result_3, &data_801800, ecx, var_3c, var_38, var_34_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
