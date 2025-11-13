// 函数: sub_6a02a0
// 地址: 0x6a02a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76f325
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg2
int32_t eax_3 = arg1
int32_t var_1c = eax_3
char* const ebx = &data_801800
int32_t var_14
int32_t esi
int32_t edi

if (eax_3 != 0)
    if (*(eax_3 + 4) != 3)
        sub_63b870(eax_3, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
            "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    esi = eax_3
    edi = eax_3
else
    sub_69fd50(eax_3, "!Null\Null", &var_14, 3)
    int32_t var_8_1 = 0
    char* const ecx_1 = &data_801800
    int32_t eax_4 = var_14
    
    if (eax_4 != 0)
        ecx_1 = eax_4
    
    eax_3, arg2 = sub_69f030(ecx_1, 3)
    esi = eax_3
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        eax_3 = var_14
        
        if (eax_3 != 0 && *eax_3 != 0)
            eax_3 = sub_63d4e0(&var_14)
            int32_t temp0_1 = *(eax_3 + 4)
            *(eax_3 + 4) -= 1
            
            if (temp0_1 == 1)
                eax_3, arg2 = sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)
                var_14 = &data_801800
    
    int32_t var_8_3 = 0xffffffff
    edi = esi

int32_t var_2c = esi

if (*edi == 0)
    arg2.b = 0
    sub_69f4a0(eax_3, arg2.b, edi, 1)

int32_t* eax_5 = *edi
*(edi + 0x1c) += 1
int32_t** eax_6 = *eax_5
int32_t** var_28 = eax_6
int32_t var_8_4 = 2
int32_t* edx_2 = *eax_6
int32_t var_44_1
char const* const ecx_5

if (edx_2[0xa] != 0)
    char const* const var_40 = "TextureGetImageData"
    var_44_1 = 0xc9
    ecx_5 = "pDefTexture->pTextureImportData->atlasTexture == NULL"
else if (edx_2[0xf] == 1)
    var_14 = edx_2[0x12]
    var_18[1] = *edx_2
    var_18[2] = edx_2[1]
    var_18[4] = 1
    int32_t eax_11 = sub_6a9450(1) * *edx_2
    int32_t var_40_2 = var_18[4]
    int32_t edx_3 = var_18[2]
    int32_t ecx_7 = var_18[1]
    var_18[3] = eax_11
    uint32_t eax_12 = sub_6a9660(eax_11, edx_3, ecx_7, var_40_2)
    int32_t result = var_28[4]
    
    if (result != 0)
        *var_18 = result
    label_6a04c4:
        
        if (esi != 0)
            *(esi + 0x1c) -= 1
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    eax_6 = sub_687730(eax_12)
    *var_18 = eax_6
    int32_t edi_3 = var_14
    uint32_t edx_4 = *edi_3
    
    if (edx_2[5] != 8)
        int32_t eax_15 = sub_687730(edx_4)
        char* var_24_2 = eax_15
        sub_69f3e0(eax_15, eax_15, var_1c, 0, *edi_3, *(edi_3 + 8))
        
        if (sub_6ab1b0(edx_2, var_18, edx_2[5], var_24_2, *var_14, 1) == 0)
            char* eax_19 = *(var_1c + 0x20)
            
            if (eax_19 != 0)
                ebx = eax_19
            
            char* const var_40_5 = ebx
            sub_63b5f0("Failed to read texture %s")
        
        if (var_24_2 != 0)
            _aligned_free(var_24_2)
        
        result = *var_18
        var_28[4] = result
        goto label_6a04c4
    
    if (eax_12 == edx_4)
        sub_69f3e0(eax_6, eax_6, var_1c, 0, edx_4, *(edi_3 + 8))
        result = *var_18
        var_28[4] = result
        goto label_6a04c4
    
    char const* const var_40_7 = "TextureGetImageData"
    var_44_1 = 0xda
    ecx_5 = "imageSize == pImage->imageSize"
else
    char const* const var_40_1 = "TextureGetImageData"
    var_44_1 = 0xcb
    ecx_5 = "pTextureData->imageCount == 1"

sub_63b870(eax_6, &data_801800, ecx_5, "C:\x\ax2017\Engine\Texture.cpp", var_44_1, 
    "TextureGetImageData")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
