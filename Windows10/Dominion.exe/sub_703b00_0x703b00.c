// 函数: sub_703b00
// 地址: 0x703b00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
struct _EXCEPTION_REGISTRATION_RECORD** eax = arg1
int32_t* ebx = eax[0xd4]
struct _EXCEPTION_REGISTRATION_RECORD** ecx_1 = *ebx
char const* const var_1c_1
int32_t var_18_1
char const* const __saved_edi_1
char* ecx_2

if (ecx_1 == ebx[0xfc])
    int32_t eax_1 = sub_6d8ed0(ecx_1, 0)
    
    if (eax_1 == 0)
        eax_1.b = 0
        return eax_1
    
    eax = data_147ded4
    
    if (eax[0x1016] == eax_1)
        goto label_703baf
    
    uint32_t ecx_3 = zx.d(eax_1.w)
    eax[0x1016] = eax_1
    int32_t* esi_2
    
    if (ecx_3 u< eax[0x1094])
        esi_2 = ecx_3 * 0x14c + eax[0x1093]
    
    if (ecx_3 u< eax[0x1094] && esi_2[0x52] == eax_1)
        (*__glewUseProgram)(*esi_2)
        eax = memset(data_147ded4 + 0x28, 0xfe, esi_2[0x40] << 4)
    label_703baf:
        int32_t i_1 = ebx[0xfd]
        
        if (i_1 s> 0)
            void* esi_3 = &ebx[0x100]
            int32_t i
            
            do
                eax = sub_7019a0(eax, *esi_3, *(esi_3 - 4), *(esi_3 + 8), *(esi_3 - 8), arg1)
                
                if (eax.b == 0)
                    eax = sub_7024f0(esi_3 - 8, arg1)
                
                esi_3 += 0x14
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        sub_703330(&ebx[0x1fb], ebx[0x1f8])
        int32_t eax_7
        eax_7.b = 1
        return eax_7
    
    __saved_edi_1 = "DataArray<struct OpenGLBufferData>::DataArrayGet"
    var_18_1 = 0x6d
    var_1c_1 = "C:\x\ax2017\Engine\DataArray.h"
    ecx_2 = "DataArrayTryToGet(id) != NULL"
else
    __saved_edi_1 = "OpenGLInterface::GraphicsMaterialSetup"
    var_18_1 = 0x1058
    var_1c_1 = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
    ecx_2 = "pVertexShader->assetShader == pPixelShader->assetShader"

sub_63b870(eax, &data_801800, ecx_2, var_1c_1, var_18_1, __saved_edi_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
