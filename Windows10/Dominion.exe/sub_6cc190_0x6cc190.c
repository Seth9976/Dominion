// 函数: sub_6cc190
// 地址: 0x6cc190
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = data_cf65b8
int32_t ebx

if (*(eax + 0x1c) == 0 || data_ccf6e6 == 0)
    ebx.b = 0
else
    ebx.b = 1

int32_t esi = data_147d1d4

if (*((esi << 2) + &data_147d1bc) != 0 || ebx.b != 0)
    goto label_6cc255

int32_t eax_1 = sub_6a1230(eax, data_147d1e0, data_147d1dc, 1, 3, 0)
*((esi << 2) + &data_147d1bc) = eax_1
int32_t esi_1 = data_147d1d4
int32_t* ecx_2 = *((esi_1 << 2) + &data_147d1c0)
char const* const var_18
int32_t var_14
char const* const var_10_2
char* ecx_4

if (ecx_2 != 0)
    if (ecx_2[1] == 3)
        int32_t* eax_3 = sub_5af880(ecx_2)
        **eax_3 = data_147d1e4
        *(*eax_3 + 4) = data_147d1e8
        goto label_6cc255
    
    var_10_2 = "TextureGetDef"
    var_14 = 0x89
    var_18 = "C:\x\ax2017\Engine\Texture.h"
    ecx_4 = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
else
    *((esi_1 << 2) + &data_147d1c0) = sub_6a1230(eax_1, data_147d1e8, data_147d1e4, 1, 3, ecx_2)
label_6cc255:
    eax_1 = data_cf65b8
    
    if (*(eax_1 + 0x1c) == 0)
        goto label_6cc3da
    
    int32_t esi_2 = data_147d1d4
    
    if (*((esi_2 << 2) + &data_147d1b4) != 0)
        goto label_6cc3da
    
    eax_1 = sub_6a1230(eax_1, data_147d1e0, data_147d1dc, 1, 5, 0)
    *((esi_2 << 2) + &data_147d1b4) = eax_1
    int32_t esi_3 = data_147d1d4
    int32_t* ecx_8 = *((esi_3 << 2) + &data_147d1b8)
    
    if (ecx_8 != 0)
        if (ecx_8[1] == 3)
            void** eax_5 = sub_5af880(ecx_8)
            **eax_5 = data_147d1e4
            eax_1 = data_147d1e8
            *(*eax_5 + 4) = eax_1
            goto label_6cc304
        
        var_10_2 = "TextureGetDef"
        var_14 = 0x89
        var_18 = "C:\x\ax2017\Engine\Texture.h"
        ecx_4 = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
    else
        eax_1 = sub_6a1230(eax_1, data_147d1e8, data_147d1e4, 1, 5, ecx_8)
        *((esi_3 << 2) + &data_147d1b8) = eax_1
    label_6cc304:
        int32_t esi_4 = data_147d1d4
        int32_t* ecx_12 = *((esi_4 << 2) + &data_147d1cc)
        
        if (ecx_12 != 0)
            if (ecx_12[1] == 3)
                void** eax_6 = sub_5af880(ecx_12)
                **eax_6 = data_147d1dc
                eax_1 = data_147d1e0
                *(*eax_6 + 4) = eax_1
                goto label_6cc36f
            
            var_10_2 = "TextureGetDef"
            var_14 = 0x89
            var_18 = "C:\x\ax2017\Engine\Texture.h"
            ecx_4 = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
        else
            eax_1 = sub_6a1230(eax_1, data_147d1e0, data_147d1dc, 0x50, 6, ecx_12)
            *((esi_4 << 2) + &data_147d1cc) = eax_1
        label_6cc36f:
            int32_t esi_5 = data_147d1d4
            int32_t* ecx_16 = *((esi_5 << 2) + &data_147d1d0)
            
            if (ecx_16 != 0)
                if (ecx_16[1] == 3)
                    void** eax_7 = sub_5af880(ecx_16)
                    **eax_7 = data_147d1e4
                    eax_1 = data_147d1e8
                    *(*eax_7 + 4) = eax_1
                    goto label_6cc3da
                
                var_10_2 = "TextureGetDef"
                var_14 = 0x89
                var_18 = "C:\x\ax2017\Engine\Texture.h"
                ecx_4 = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
            else
                eax_1 = sub_6a1230(eax_1, data_147d1e8, data_147d1e4, 0x50, 6, ecx_16)
                *((esi_5 << 2) + &data_147d1d0) = eax_1
            label_6cc3da:
                
                if (data_147d1c4 != 0 || ebx.b != 0)
                    return eax_1
                
                int32_t ecx_20 = data_147d1dc
                int32_t edx_11
                
                if (ecx_20 == data_147d1e4)
                    edx_11 = data_147d1e0
                
                if (ecx_20 != data_147d1e4 || edx_11 != data_147d1e8)
                    var_10_2 = "VRBindEyeTextures"
                    var_14 = 0xce
                    var_18 = "C:\x\ax2017\Engine\VR.cpp"
                    ecx_4 = "gVR.hmdInfo.renderBufferSize[0] == gVR.hmdInfo.renderBufferSize[1]"
                else
                    eax_1 = sub_6a1230(eax_1, edx_11, ecx_20, 0x50, 4, 0)
                    int32_t* ecx_21 = data_147d1c8
                    data_147d1c4 = eax_1
                    
                    if (ecx_21 == 0)
                        eax_1 = sub_6a1230(eax_1, data_147d1e8, data_147d1e4, 0x50, 4, ecx_21)
                        data_147d1c8 = eax_1
                        return eax_1
                    
                    if (ecx_21[1] == 3)
                        int32_t* eax_8 = sub_5af880(ecx_21)
                        **eax_8 = data_147d1e4
                        int32_t eax_9 = data_147d1e8
                        *(*eax_8 + 4) = eax_9
                        return eax_9
                    
                    var_10_2 = "TextureGetDef"
                    var_14 = 0x89
                    var_18 = "C:\x\ax2017\Engine\Texture.h"
                    ecx_4 = "assetPtr->assetType == ASSET_TYPE_TEXTURE"

sub_63b870(eax_1, &data_801800, ecx_4, var_18, var_14, var_10_2)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
