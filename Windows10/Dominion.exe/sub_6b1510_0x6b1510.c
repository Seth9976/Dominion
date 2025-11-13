// 函数: sub_6b1510
// 地址: 0x6b1510
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = arg2[3]

if (*(eax + 0x10) != 0xf)
    sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp", 0x82c, 
        "Dx11GraphicsSetGenericRenderState")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t esi = arg2[4]
char const* const var_2c_1
int32_t var_28_1
char const* const var_24
char* ecx

if (esi != 0)
label_6b1559:
    
    if (*(esi + 4) == 3)
        eax = *(*sub_5af880(esi) + 0x1c)
        
        if (eax == 5 || eax == 6)
            var_24 = "Dx11GraphicsSetGenericRenderState"
            var_28_1 = 0x811
            ecx = "!Dx11TextureIsView(assetTexture)"
            var_2c_1 = "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp"
        else
            eax = sub_6a0f60(esi)
            int32_t ecx_3 = eax
            
            if (ecx_3 != 0)
                void* edx_1 = data_147b078
                uint32_t eax_3 = zx.d(ecx_3.w)
                int32_t edi_1 = *(edx_1 + 0x3c)
                
                if (eax_3 u< edi_1)
                    eax = eax_3 * 0x24c + *(edx_1 + 0x38)
                    
                    if (*(eax + 0x248) != ecx_3)
                        eax = 0
                else
                    eax = 0
                
                int32_t var_8_1 = eax
                
                if (*eax == 2)
                    eax = *(arg3 + 0xe40)
                    int32_t* edi_2
                    
                    if (eax != 0)
                        uint32_t ecx_4 = zx.d(eax.w)
                        
                        if (ecx_4 u< edi_1)
                            edi_2 = ecx_4 * 0x24c + *(edx_1 + 0x38)
                            
                            if (edi_2[0x92] != eax)
                                edi_2 = nullptr
                        else
                            edi_2 = nullptr
                    else
                        edi_2 = nullptr
                    
                    if (*edi_2 == 5)
                        eax = *arg2
                        int32_t var_c_1 = eax
                        
                        if (*(esi + 4) == 3)
                            eax = *(*sub_5af880(esi) + 0x1c)
                            
                            if (eax == 0 || eax == 3)
                                eax = var_c_1 - 0x53
                                
                                if (eax u<= 7)
                                label_6b16ce:
                                    int32_t var_10 = edi_2[eax + 0xd]
                                    
                                    if (arg4 == 3)
                                        int32_t* ecx_6 = *(data_147b078 + 8)
                                        (*(*ecx_6 + 0x68))(ecx_6, arg2[1], 1, &var_10)
                                        int32_t* ecx_7 = *(data_147b078 + 8)
                                        return (*(*ecx_7 + 0x64))(ecx_7, arg2[1], 1, var_8_1 + 0x20)
                                    
                                    if (arg4 != 4)
                                        return arg4
                                    
                                    int32_t* ecx_8 = *(data_147b078 + 8)
                                    (*(*ecx_8 + 0x28))(ecx_8, arg2[1], 1, &var_10)
                                    int32_t* ecx_9 = *(data_147b078 + 8)
                                    return (*(*ecx_9 + 0x20))(ecx_9, arg2[1], 1, var_8_1 + 0x20)
                                
                                var_24 = "Dx11GetSamplerIndex"
                                var_28_1 = 0x7e2
                                ecx = "samplerIndex >= 0 && samplerIndex <= NUM_SAMPLER_STATES - 1"
                            else if (eax != 1)
                                var_24 = "Dx11GetSamplerIndex"
                                var_28_1 = 0x7fc
                                ecx = "Halt"
                            else
                                eax = var_c_1 - 0x53
                                
                                if (eax u<= 7)
                                    goto label_6b16ce
                                
                                var_24 = "Dx11GetSamplerIndex"
                                var_28_1 = 0x7f6
                                ecx = "samplerIndex >= 0 && samplerIndex <= NUM_SAMPLER_STATES - 1"
                            
                            var_2c_1 = "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp"
                        else
                            var_24 = "TextureGetDef"
                            var_28_1 = 0x89
                            var_2c_1 = "C:\x\ax2017\Engine\Texture.h"
                            ecx = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
                    else
                        var_24 = "Dx11GraphicsSetGenericRenderState"
                        var_28_1 = 0x819
                        ecx = "bufferDataMaterial->mBufferType == DX11BUFFER_MATERIAL"
                        var_2c_1 = "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp"
                else
                    var_24 = "Dx11GraphicsSetGenericRenderState"
                    var_28_1 = 0x816
                    ecx = "bufferDataTexture->mBufferType == DX11BUFFER_TEXTURE"
                    var_2c_1 = "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp"
            else
                var_24 = "Dx11GraphicsSetGenericRenderState"
                var_28_1 = 0x814
                ecx = "textureHandle"
                var_2c_1 = "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp"
    else
        var_24 = "TextureGetDef"
        var_28_1 = 0x89
        var_2c_1 = "C:\x\ax2017\Engine\Texture.h"
        ecx = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
else
    eax = sub_69f030("!DX11\MissingTexture.texture", esi + 3)
    esi = eax
    
    if (esi != 0)
        goto label_6b1559
    
    var_24 = "Dx11GraphicsSetGenericRenderState"
    var_28_1 = 0x80e
    ecx = "assetTexture"
    var_2c_1 = "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp"

sub_63b870(eax, &data_801800, ecx, var_2c_1, var_28_1, var_24)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
