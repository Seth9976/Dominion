// 函数: sub_706780
// 地址: 0x706780
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = arg1
struct _EXCEPTION_REGISTRATION_RECORD** pixels_2 = sub_6a0f60(arg1)
void* ebx = data_147ded4
struct _EXCEPTION_REGISTRATION_RECORD** pixels_4 = pixels_2
char const* const var_3c
int32_t var_38
char const* const var_34_1
char* ecx

if (pixels_4 != 0)
    pixels_2 = zx.d(pixels_4.w)
    
    if (pixels_2 u>= *(ebx + 0x4250))
    label_706954:
        var_34_1 = "DataArray<struct OpenGLBufferData>::DataArrayGet"
        var_38 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
        var_3c = "C:\x\ax2017\Engine\DataArray.h"
    else
        int32_t* ecx_1 = pixels_2 * 0x14c
        pixels_2 = *(ebx + 0x424c)
        
        if (*(ecx_1 + pixels_2 + 0x148) != pixels_4)
            goto label_706954
        
        uint32_t texture = *(ecx_1 + pixels_2)
        
        if (esi[1] == 3)
            int32_t var_c_1 = 1
            int32_t* eax_1 = *sub_5af880(esi)
            struct _EXCEPTION_REGISTRATION_RECORD** pixels_5 = *eax_1
            struct _EXCEPTION_REGISTRATION_RECORD** pixels_3 = eax_1[1]
            struct _EXCEPTION_REGISTRATION_RECORD** pixels_6 = pixels_5
            struct _EXCEPTION_REGISTRATION_RECORD** pixels_7 = pixels_3
            int32_t eax_4
            
            if (sub_6a9450(1) * pixels_5 s>= 4)
                eax_4 = sub_6a9450(1) * pixels_5
            else
                eax_4 = 4
            
            int32_t var_10_1 = eax_4
            int32_t eax_6 = sub_6a9600(pixels_3, 1)
            pixels_2 = sub_687730(sub_6a9570(pixels_5, 1) * eax_6)
            bool cond:1_1 = *arg2 != 0
            struct _EXCEPTION_REGISTRATION_RECORD** pixels = pixels_2
            struct _EXCEPTION_REGISTRATION_RECORD** pixels_1 = pixels
            
            if (cond:1_1)
                pixels_2 = pixels_5
                
                if (arg2[1] == pixels_2)
                    pixels_2 = pixels_3
                    
                    if (arg2[2] == pixels_2)
                        void* eax_9 = data_147ded4
                        
                        if (*(eax_9 + 0x40a8) != texture)
                            *(eax_9 + 0x40a8) = texture
                            
                            if (*(eax_9 + 0x40a4) != 0)
                                *(eax_9 + 0x40a4) = 0
                                (*__glewActiveTexture)(0x84c0)
                            
                            glBindTexture(0xde1, texture)
                        
                        glGetTexImage(0xde1, 0, 0x80e1, 0x1401, pixels)
                        int32_t* result = sub_6a9de0(&pixels_1, arg2)
                        
                        if (pixels == 0)
                            return result
                        
                        return _aligned_free(pixels)
                    
                    var_34_1 = "OpenGL_GetTextureBits"
                    var_38 = 0x178a
                    var_3c = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
                    ecx = "destSpec->height == sourceSpec.height"
                else
                    var_34_1 = "OpenGL_GetTextureBits"
                    var_38 = 0x1789
                    var_3c = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
                    ecx = "destSpec->width == sourceSpec.width"
            else
                var_34_1 = "OpenGL_GetTextureBits"
                var_38 = 0x1788
                var_3c = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
                ecx = "destSpec->pImage"
        else
            var_34_1 = "TextureGetDef"
            var_38 = 0x89
            var_3c = "C:\x\ax2017\Engine\Texture.h"
            ecx = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
else
    var_34_1 = "DataArray<struct OpenGLBufferData>::DataArrayGet"
    var_38 = 0x6c
    ecx = "id != DATAID_NULL"
    var_3c = "C:\x\ax2017\Engine\DataArray.h"

sub_63b870(pixels_2, &data_801800, ecx, var_3c, var_38, var_34_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
