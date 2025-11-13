// 函数: sub_7024f0
// 地址: 0x7024f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t Next = arg1[3][2].Next
struct _EXCEPTION_REGISTRATION_RECORD** eax_1 = Next - 1
char const* const var_30_1
int32_t var_2c
char const* const var_28_1
char* ecx

if (Next == 1)
    int32_t edi_6 = arg1[1]
    void* edx_4 = &arg1[4]
    void* var_14_1 = edx_4
    
    if (edi_6 s< 0x400)
        int32_t ebx_2 = edi_6 << 4
        int32_t* ecx_10 = data_147ded4 + 0x28 + ebx_2
        int32_t esi_3 = 0xc
        
        while (true)
            int32_t eax_14 = *ecx_10
            
            if (eax_14 != *edx_4)
                (*__glewUniform4iv)(edi_6, 1, var_14_1)
                eax_1 = data_147ded4
                *(ebx_2 + eax_1 + 0x28) = *var_14_1
                break
            
            ecx_10 = &ecx_10[1]
            edx_4 += 4
            int32_t temp3_1 = esi_3
            esi_3 -= 4
            
            if (temp3_1 u< 4)
                return eax_14
        
        return eax_1
    
    var_28_1 = "GLDupCheck_glUniform4iv"
    var_2c = 0x37e
    ecx = "registerIndex < MAX_UNIFORMS"
    var_30_1 = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
else
    void* eax_2 = eax_1 - 3
    
    if (eax_1 == 3)
        return sub_6fed70(&arg1[4], 1, arg1[1], &arg1[4])
    
    eax_1 = eax_2 - 0xb
    
    if (eax_2 == 0xb)
        eax_1 = arg1[4]
        int32_t* var_8_1 = eax_1
        
        if (eax_1 == 0)
            return eax_1
        
        eax_1 = sub_6a0f60(eax_1)
        void* esi_1 = data_147ded4
        struct _EXCEPTION_REGISTRATION_RECORD** edx = eax_1
        
        if (edx != 0)
            eax_1 = zx.d(edx.w)
            int32_t* edi_2
            
            if (eax_1 u< *(esi_1 + 0x4250))
                edi_2 = eax_1 * 0x14c + *(esi_1 + 0x424c)
            
            if (eax_1 u>= *(esi_1 + 0x4250) || edi_2[0x52] != edx)
                var_28_1 = "DataArray<struct OpenGLBufferData>::DataArrayGet"
                var_2c = 0x6d
                var_30_1 = "C:\x\ax2017\Engine\DataArray.h"
                ecx = "DataArrayTryToGet(id) != NULL"
            else
                if (edi_2[4] != 0)
                    return eax_1
                
                int32_t esi_2 = arg1[2]
                
                if (var_8_1[1] == 3)
                    eax_1 = *sub_5af880(var_8_1)
                    
                    if (eax_1[7] != 1)
                        uint32_t texture = *edi_2
                        
                        if (*(edi_2 + 0x13f) == 0)
                            sub_6fec70(texture, esi_2)
                            goto label_70264b
                        
                        if (esi_2 u<= 3)
                            void* eax_4 = data_147ded4
                            
                            if (*(eax_4 + (esi_2 << 2) + 0x4188) != texture)
                                *(eax_4 + (esi_2 << 2) + 0x4188) = texture
                                
                                if (*(eax_4 + 0x40a4) != esi_2)
                                    *(eax_4 + 0x40a4) = esi_2
                                    (*__glewActiveTexture)(esi_2 + 0x84c0)
                                
                                glBindTexture(0x8d65, texture)
                            
                            goto label_70264b
                        
                        var_28_1 = "GLDupCheck_glBindTextureExternal"
                        var_2c = 0x30c
                        ecx = "textureIndex >= 0 && textureIndex < 4"
                        var_30_1 = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
                    else
                        sub_6fecf0(*edi_2, esi_2)
                    label_70264b:
                        int32_t i = 0
                        void* eax_8 = *(arg2 + 0x350)
                        void* var_c_1 = eax_8
                        
                        if (*(eax_8 + 0x7e0) s> 0)
                            int32_t* edi_3 = eax_8 + 0x7ec
                            
                            do
                                sub_702240(eax_8, edi_3, esi_2, edi_2)
                                eax_8 = var_c_1
                                i += 1
                                edi_3 = &edi_3[5]
                            while (i s< *(eax_8 + 0x7e0))
                        
                        eax_1 = arg1
                        int32_t ecx_6 = eax_1[1]
                        
                        if (ecx_6 s< 0x400)
                            int32_t edi_5 = ecx_6 * 2
                            eax_1 = *(data_147ded4 + (edi_5 << 3) + 0x28)
                            
                            if (eax_1 == esi_2)
                                return eax_1
                            
                            (*__glewUniform1i)(ecx_6, esi_2)
                            int32_t eax_11 = data_147ded4
                            *(eax_11 + (edi_5 << 3) + 0x28) = esi_2
                            return eax_11
                        
                        var_28_1 = "GLDupCheck_glUniform1i"
                        var_2c = 0x3d5
                        ecx = "registerIndex < MAX_UNIFORMS"
                        var_30_1 = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
                else
                    var_28_1 = "TextureGetDef"
                    var_2c = 0x89
                    var_30_1 = "C:\x\ax2017\Engine\Texture.h"
                    ecx = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
        else
            var_28_1 = "DataArray<struct OpenGLBufferData>::DataArrayGet"
            var_2c = 0x6c
            var_30_1 = "C:\x\ax2017\Engine\DataArray.h"
            ecx = "id != DATAID_NULL"
    else
        var_28_1 = "GLGraphicsSetGenericRenderState"
        var_2c = 0xd4c
        ecx = "Halt"
        var_30_1 = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"

sub_63b870(eax_1, &data_801800, ecx, var_30_1, var_2c, var_28_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
