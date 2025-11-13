// 函数: sub_736030
// 地址: 0x736030
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = arg1
int32_t* var_58 = eax
char const* const var_6c
int32_t var_68
char const* const var_64
char* ecx

if (eax[1] == 3)
    int32_t* edi_1 = *sub_5af880(arg1)
    int32_t eax_2 = arg2[0x10]
    
    if (*edi_1 s> eax_2 || edi_1[1] s> eax_2)
        char* const ecx_11 = &data_801800
        char* eax_28 = var_58[8]
        
        if (eax_28 != 0)
            ecx_11 = eax_28
        
        char* const var_64_7 = ecx_11
        sub_63b5f0("AtlasMaker: Texture too large for atlas %s")
        return 3
    
    int32_t var_50
    
    if (sub_73a8d0(eax_2, edi_1, &var_50, arg2) == 0)
        char* const ecx_2 = &data_801800
        char* eax_5 = var_58[8]
        
        if (eax_5 != 0)
            ecx_2 = eax_5
        
        char* const var_64_2 = ecx_2
        sub_63b5f0("AtlasMaker: Image load failed %s")
        return 3
    
    eax = sub_735eb0(&var_50, arg2)
    int32_t var_48
    
    if (eax == 1)
        if (var_48 != 0)
            _aligned_free(var_48)
        
        return 1
    
    if (eax == 2)
        int32_t ecx_4 = var_50
        int32_t edx_2 = arg2[0xc]
        int32_t var_20_1 = ecx_4
        int32_t var_4c
        int32_t var_1c_1 = var_4c
        int32_t var_14_1 = edx_2
        int32_t var_18_1 = sub_6a9570(ecx_4, edx_2)
        int32_t var_24 = var_48
        int32_t var_44
        sub_735af0(var_48, &var_44, &var_24, arg2)
        int32_t* edx_4 = sub_64bfd0(0x1c)
        edx_4[3] += 1
        
        if (*edx_4 == 0)
            sub_64be70(edx_4)
        
        int32_t* ecx_7 = *edx_4
        *edx_4 = *ecx_7
        ecx_7[6] = 0
        *ecx_7 = var_50.o
        int32_t var_40
        ecx_7[4] = var_40
        ecx_7[5] = 0
        ecx_7[6] = arg2[7]
        void* eax_16 = arg2[7]
        
        if (eax_16 == 0)
            arg2[8] += 1
            arg2[6] = ecx_7
            arg2[7] = ecx_7
        else
            *(eax_16 + 0x14) = ecx_7
            arg2[8] += 1
            arg2[7] = ecx_7
        
    label_7361d2:
        edi_1[0xa] = arg2[0x11]
        edi_1[0xc] = arg2[0x12]
        edi_1[0xd] = var_44
        *edi_1 = var_50
        edi_1[0xe] = var_40
        edi_1[1] = var_4c
        edi_1[2] = arg2[0x13]
        sub_735fb0(var_58)
        return 2
    
    if (eax == 0)
        char* const ecx_8 = &data_801800
        char* eax_18 = var_58[8]
        
        if (eax_18 != 0)
            ecx_8 = eax_18
        
        char* const var_64_5 = ecx_8
        sub_63b5f0("Atlas Maker: Duplicate image only included once: %s")
        
        if (var_48 != 0)
            _aligned_free(var_48)
        
        goto label_7361d2
    
    var_64 = "AtlasMakerPlaceAssetTexture"
    var_68 = 0x288
    var_6c = "C:\x\ax2017\Engine\Editor\AtlasMaker.cpp"
    ecx = "Halt"
else
    var_64 = "TextureGetDef"
    var_68 = 0x89
    var_6c = "C:\x\ax2017\Engine\Texture.h"
    ecx = "assetPtr->assetType == ASSET_TYPE_TEXTURE"

sub_63b870(eax, &data_801800, ecx, var_6c, var_68, var_64)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
