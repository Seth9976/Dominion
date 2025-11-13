// 函数: sub_706380
// 地址: 0x706380
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi
int32_t var_2c = esi
int32_t edi
int32_t var_30 = edi
arg1[0x109b].b = 1
int32_t* edx = *sub_5af880(arg2)
int32_t eax_1 = *edx
float xmm2_1 = edx[3] f* edx[2]
double xmm0_2[0x2] = _mm_cvtepi32_pd(zx.q(eax_1)) f+ *((eax_1 u>> 0x1f << 3) + &data_893660)
int32_t eax_3 = edx[1]
float xmm1_1 = _mm_cvtpd_ps(xmm0_2) * xmm2_1
double xmm0_5[0x2] = _mm_cvtepi32_pd(zx.q(eax_3)) f+ *((eax_3 u>> 0x1f << 3) + &data_893660)
arg1[8] = xmm1_1
float xmm0_7 = _mm_cvtpd_ps(xmm0_5) * xmm2_1
arg1[9] = xmm0_7
int32_t var_1c = 0
int32_t var_18 = int.d(sub_4d5cb0(xmm1_1 + 0.5f))
int32_t var_14 = int.d(sub_4d5cb0(xmm0_7 + 0.5f))
int128_t xmm0_13 = 0.o
(*(*arg1 + 0x5c))(xmm0_13)
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_6a0f60(arg2)
void* ecx_3 = data_147ded4
struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
char const* const var_4c
int32_t var_48
char const* const var_44_1
char* ecx_4

if (result_1 != 0)
    result = zx.d(result_1.w)
    
    if (result u>= *(ecx_3 + 0x4250))
    label_7065fa:
        var_44_1 = "DataArray<struct OpenGLBufferData>::DataArrayGet"
        ecx_4 = "DataArrayTryToGet(id) != NULL"
        var_48 = 0x6d
        var_4c = "C:\x\ax2017\Engine\DataArray.h"
    else
        int32_t ecx_5 = *(ecx_3 + 0x424c)
        result *= 0x14c
        
        if (*(result + ecx_5 + 0x148) != result_1)
            goto label_7065fa
        
        if (*(result + ecx_5 + 0x10) == 0)
            result = *(result + ecx_5 + 0xe0)
            
            if (result != 0)
                (*__glewBindFramebuffer)(0x8d40, result)
                char eax_7
                
                if (arg3 == 0)
                    eax_7 = 0
                label_7065c6:
                    *(xmm0_13:8.d + 0x426d) = eax_7
                    result = (*__glewCheckFramebufferStatus)(0x8d40)
                    
                    if (result == 0x8cd5)
                        return result
                    
                    var_44_1 = "OpenGLInterface::RenderTargetSetTextures"
                    var_48 = 0x1654
                    var_4c = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
                    ecx_4 = "status == GL_FRAMEBUFFER_COMPLETE"
                else
                    result = sub_6a0f60(arg3)
                    void* edi_1 = data_147ded4
                    
                    if (result != 0)
                        uint32_t ecx_7 = zx.d(result.w)
                        
                        if (ecx_7 u>= *(edi_1 + 0x4250))
                            goto label_7065fa
                        
                        int32_t edi_2 = *(edi_1 + 0x424c)
                        int32_t esi_3 = ecx_7 * 0x14c
                        
                        if (*(esi_3 + edi_2 + 0x148) != result)
                            goto label_7065fa
                        
                        if (*(esi_3 + edi_2 + 0x10) == 0)
                            result = *(esi_3 + edi_2 + 0xe4)
                            
                            if (result != 0)
                                (*__glewBindRenderbuffer)(0x8d41, result)
                                (*__glewFramebufferRenderbuffer)(0x8d40, 0x8d00, 0x8d41, 
                                    *(esi_3 + edi_2 + 0xe4))
                                eax_7 = 1
                                goto label_7065c6
                            
                            var_44_1 = "OpenGLInterface::RenderTargetSetTextures"
                            var_48 = 0x163d
                            var_4c = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
                            ecx_4 = "bufferData->mRenderBuffer != 0"
                        else
                            var_44_1 = "OpenGLInterface::RenderTargetSetTextures"
                            var_48 = 0x163c
                            var_4c = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
                            ecx_4 = "bufferData->mIsLoading == 0"
                    else
                        var_44_1 = "DataArray<struct OpenGLBufferData>::DataArrayGet"
                        var_48 = 0x6c
                        ecx_4 = "id != DATAID_NULL"
                        var_4c = "C:\x\ax2017\Engine\DataArray.h"
            else
                var_44_1 = "OpenGLInterface::RenderTargetSetTextures"
                var_48 = 0x1633
                var_4c = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
                ecx_4 = "bufferData->mFrameBuffer != 0"
        else
            var_44_1 = "OpenGLInterface::RenderTargetSetTextures"
            var_48 = 0x1632
            var_4c = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
            ecx_4 = "bufferData->mIsLoading == 0"
else
    var_44_1 = "DataArray<struct OpenGLBufferData>::DataArrayGet"
    var_48 = 0x6c
    ecx_4 = "id != DATAID_NULL"
    var_4c = "C:\x\ax2017\Engine\DataArray.h"

sub_63b870(result, &data_801800, ecx_4, var_4c, var_48, var_44_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
