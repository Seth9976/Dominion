// 函数: ___std_tzdb_get_time_zones@0
// 地址: 0x6fff30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_772525
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t arg_8
int32_t* edi = arg_8
int32_t eax_4 = edi[2] - *edi
char const* const var_4c
int32_t var_48
char const* const var_44
char* ecx_1

if (eax_4 == arg2[1])
    eax_4 = edi[3] - edi[1]
    
    if (eax_4 == arg2[2])
        eax_4 = arg1
        int32_t esi
        
        if (eax_4 == 0)
            sub_69fd50(eax_4, "!Null\Null", &arg_8, 3)
            int32_t var_8_1 = 0
            char* const ecx_3 = &data_801800
            int32_t eax_6 = arg_8
            
            if (eax_6 != 0)
                ecx_3 = eax_6
            
            esi = sub_69f030(ecx_3, 3)
            int32_t var_8_2 = 1
            
            if (data_cf65bc != 0)
                int32_t eax_8 = arg_8
                
                if (eax_8 != 0 && *eax_8 != 0)
                    char* eax_9 = sub_63d4e0(&arg_8)
                    int32_t temp2_1 = *(eax_9 + 4)
                    *(eax_9 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
                        arg_8 = &data_801800
            
            int32_t var_8_3 = 0xffffffff
            eax_4 = esi
            arg_8 = esi
            goto label_70003b
        
        if (*(eax_4 + 4) == 3)
            esi = eax_4
            arg_8 = eax_4
        label_70003b:
            int32_t var_14 = esi
            
            if (*eax_4 == 0)
                sub_69f4a0(eax_4, 0, eax_4, 1)
                eax_4 = arg_8
            
            *(eax_4 + 0x1c) += 1
            int32_t var_8_4 = 2
            int32_t ecx_7 = ***eax_4
            arg_8 = ecx_7
            float xmm0 = *(ecx_7 + 8)
            xmm0 - 1f
            int32_t* eax_11
            eax_11:1.b = (xmm0 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 1f) ? 1 : 0) << 2
                | (xmm0 < 1f ? 1 : 0)
            bool p_1 = unimplemented  {test ah, 0x44}
            char const* const var_4c_1
            int32_t var_48_1
            char const* const var_44_1
            char* ecx_8
            
            if (not(p_1))
                int32_t* eax_12 = *ecx_7
                int32_t* ecx_9 = *(ecx_7 + 4)
                int32_t var_24 = 0
                int32_t* var_20_1 = nullptr
                var_24.o = var_24.o
                void var_34
                int128_t xmm0_2 = *sub_6c3e30(&var_34, edi, &var_24, &var_34)
                eax_11 = xmm0_2
                var_24.o = xmm0_2
                
                if (eax_11 != *edi)
                label_70026c:
                    var_44_1 = "OpenGLInterface::UpdateTextureBuffer"
                    var_48_1 = 0x60d
                    ecx_8 = "RectIntersect(RectISet(V2I0, textureSize), region) == region"
                    var_4c_1 = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
                else
                    eax_11 = eax_12
                    
                    if (eax_11 != edi[2])
                        goto label_70026c
                    
                    eax_11 = var_20_1
                    
                    if (eax_11 != edi[1])
                        goto label_70026c
                    
                    eax_11 = ecx_9
                    
                    if (eax_11 != edi[3])
                        goto label_70026c
                    
                    eax_11 = arg2
                    int32_t edx_4 = eax_11[4]
                    
                    if (*(arg_8 + 0x18) == edx_4)
                        eax_11 = sub_6a9570(eax_11[1], edx_4)
                        
                        if (arg2[3] == eax_11)
                            eax_11 = sub_6a0f60(arg1)
                            void* edx_5 = data_147ded4
                            
                            if (eax_11 != 0)
                                uint32_t ecx_15 = zx.d(eax_11.w)
                                
                                if (ecx_15 u< *(edx_5 + 0x4250))
                                    int32_t edx_6 = *(edx_5 + 0x424c)
                                    int32_t* ecx_16 = ecx_15 * 0x14c
                                    
                                    if (*(ecx_16 + edx_6 + 0x148) == eax_11)
                                        int32_t texture_1 = *(ecx_16 + edx_6)
                                        void* eax_16 = sub_6ff830(*(arg_8 + 0x18))
                                        void* ecx_18 = data_147ded4
                                        arg_8 = eax_16
                                        int32_t texture = texture_1
                                        
                                        if (*(ecx_18 + 0x40a8) != texture)
                                            *(ecx_18 + 0x40a8) = texture
                                            
                                            if (*(ecx_18 + 0x40a4) != 0)
                                                *(ecx_18 + 0x40a4) = 0
                                                (*__glewActiveTexture)(0x84c0)
                                                texture = texture_1
                                            
                                            glBindTexture(0xde1, texture)
                                        
                                        int32_t yoffset = edi[1]
                                        int32_t xoffset = *edi
                                        int32_t eax_19 = arg_8
                                        int32_t result = glTexSubImage2D(0xde1, 0, xoffset, 
                                            yoffset, edi[2] - xoffset, edi[3] - yoffset, 
                                            *(eax_19 + 8), *(eax_19 + 0xc), *arg2)
                                        
                                        if (esi != 0)
                                            *(esi + 0x1c) -= 1
                                        
                                        fsbase->NtTib.ExceptionList = ExceptionList
                                        return result
                                
                                var_44_1 = "DataArray<struct OpenGLBufferData>::DataArrayGet"
                                var_48_1 = 0x6d
                                var_4c_1 = "C:\x\ax2017\Engine\DataArray.h"
                                ecx_8 = "DataArrayTryToGet(id) != NULL"
                            else
                                var_44_1 = "DataArray<struct OpenGLBufferData>::DataArrayGet"
                                var_48_1 = 0x6c
                                var_4c_1 = "C:\x\ax2017\Engine\DataArray.h"
                                ecx_8 = "id != DATAID_NULL"
                        else
                            var_44_1 = "OpenGLInterface::UpdateTextureBuffer"
                            var_48_1 = 0x610
                            ecx_8 = "data.pitch == TextureFormatPitch(data.width, data.format)"
                            var_4c_1 = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
                    else
                        var_44_1 = "OpenGLInterface::UpdateTextureBuffer"
                        var_48_1 = 0x60e
                        ecx_8 = "pTextureData->texFormat == data.format"
                        var_4c_1 = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
            else
                var_44_1 = "OpenGLInterface::UpdateTextureBuffer"
                var_48_1 = 0x60a
                ecx_8 = "pTextureData->atlasScaling == 1"
                var_4c_1 = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
            
            sub_63b870(eax_11, &data_801800, ecx_8, var_4c_1, var_48_1, var_44_1)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        var_44 = "DefAutoLock::DefAutoLock"
        var_48 = 0x19
        var_4c = "C:\x\ax2017\Engine\DefLoad.h"
        ecx_1 = "assetPtr && assetPtr->assetType == assetType"
    else
        var_44 = "OpenGLInterface::UpdateTextureBuffer"
        var_48 = 0x603
        var_4c = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
        ecx_1 = "RectIHeight(region) == data.height"
else
    var_44 = "OpenGLInterface::UpdateTextureBuffer"
    var_48 = 0x602
    var_4c = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
    ecx_1 = "RectIWidth(region) == data.width"

sub_63b870(eax_4, &data_801800, ecx_1, var_4c, var_48, var_44)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
