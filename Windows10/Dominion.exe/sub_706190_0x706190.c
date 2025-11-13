// 函数: sub_706190
// 地址: 0x706190
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** esi = arg1
struct _EXCEPTION_REGISTRATION_RECORD** eax = sub_6a0f60(esi)
struct _EXCEPTION_REGISTRATION_RECORD** eax_1 = sub_6a0f60(arg2)
void* ebx = data_147ded4
struct _EXCEPTION_REGISTRATION_RECORD** ecx_2 = eax_1
char const* const var_24
int32_t var_20
char const* const var_1c
char* ecx_3

if (eax != 0)
    int32_t edx_1 = *(ebx + 0x4250)
    eax_1 = zx.d(eax.w)
    
    if (eax_1 u>= edx_1)
    label_706351:
        var_1c = "DataArray<struct OpenGLBufferData>::DataArrayGet"
        ecx_3 = "DataArrayTryToGet(id) != NULL"
        var_20 = 0x6d
        var_24 = "C:\x\ax2017\Engine\DataArray.h"
    else
        struct _EXCEPTION_REGISTRATION_RECORD** ebx_1 = *(ebx + 0x424c)
        eax_1 *= 0x14c
        void* ebx_2 = ebx_1 + eax_1
        
        if (*(ebx_2 + 0x148) != eax)
            goto label_706351
        
        if (ecx_2 != 0)
            eax_1 = zx.d(ecx_2.w)
            
            if (eax_1 u>= edx_1)
                goto label_706351
            
            eax_1 = eax_1 * 0x14c + ebx_1
            arg1 = eax_1
            
            if (eax_1[0x52] != ecx_2)
                goto label_706351
            
            if (*(ebx_2 + 0xe0) == 0)
                var_1c = "OpenGLInterface::ResolveMSAA"
                var_20 = 0x15fa
                var_24 = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
                ecx_3 = "bufferSource->mFrameBuffer"
            else if (eax_1[0x38] != 0)
                int32_t params
                eax_1 = glGetIntegerv(0x8ca6, &params)
                
                if (esi[1] == 3)
                    struct _EXCEPTION_REGISTRATION_RECORD**** eax_3 = sub_5af880(esi)
                    eax_1 = arg2
                    
                    if (eax_1[1] == 3)
                        int32_t* eax_4 = sub_5af880(eax_1)
                        struct _EXCEPTION_REGISTRATION_RECORD*** ecx_6 = *eax_3
                        int32_t* eax_5 = *eax_4
                        struct _EXCEPTION_REGISTRATION_RECORD** edx_2 = *ecx_6
                        int32_t ebx_3 = ecx_6[1]
                        int32_t edi_1 = *eax_5
                        int32_t esi_2 = eax_5[1]
                        (*__glewBindFramebuffer)(0x8ca8, *(ebx_2 + 0xe0))
                        (*__glewBindFramebuffer)(0x8ca9, arg1[0x38])
                        (*__glewBlitFramebuffer)(0, 0, edx_2, ebx_3, 0, 0, edi_1, esi_2, 0x4000, 
                            0x2600)
                        return (*__glewBindFramebuffer)(0x8d40, params)
                    
                    var_1c = "TextureGetDef"
                    var_20 = 0x89
                    var_24 = "C:\x\ax2017\Engine\Texture.h"
                    ecx_3 = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
                else
                    var_1c = "TextureGetDef"
                    var_20 = 0x89
                    var_24 = "C:\x\ax2017\Engine\Texture.h"
                    ecx_3 = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
            else
                var_1c = "OpenGLInterface::ResolveMSAA"
                var_20 = 0x15fb
                var_24 = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
                ecx_3 = "bufferDest->mFrameBuffer"
        else
            var_1c = "DataArray<struct OpenGLBufferData>::DataArrayGet"
            var_20 = 0x6c
            ecx_3 = "id != DATAID_NULL"
            var_24 = "C:\x\ax2017\Engine\DataArray.h"
else
    var_1c = "DataArray<struct OpenGLBufferData>::DataArrayGet"
    var_20 = 0x6c
    ecx_3 = "id != DATAID_NULL"
    var_24 = "C:\x\ax2017\Engine\DataArray.h"

sub_63b870(eax_1, &data_801800, ecx_3, var_24, var_20, var_1c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
