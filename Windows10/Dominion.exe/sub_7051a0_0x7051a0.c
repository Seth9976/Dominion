// 函数: sub_7051a0
// 地址: 0x7051a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char const* const var_18
int32_t var_14
char const* const var_10_1
uint32_t eax
char* ecx

if (arg2 != 0)
    eax = zx.d(arg2.w)
    int32_t* esi_2
    
    if (eax u< *(arg1 + 0x4250))
        esi_2 = *(arg1 + 0x424c) + eax * 0x14c
    
    if (eax u>= *(arg1 + 0x4250) || esi_2[0x52] != arg2)
        var_10_1 = "DataArray<struct OpenGLBufferData>::DataArrayGet"
        var_14 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
        var_18 = "C:\x\ax2017\Engine\DataArray.h"
    else if (arg3 s< 0 || arg3 s> esi_2[2])
        var_10_1 = "OpenGLInterface::UnlockVertexBuffer"
        var_14 = 0x1415
        var_18 = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
        ecx = "bytesUsed >= 0 && bytesUsed <= bufferData->mBufferSize"
    else
        void* ecx_2 = data_147ded4
        int32_t eax_1 = *esi_2
        
        if (*(ecx_2 + 0x409c) != eax_1)
            *(ecx_2 + 0x409c) = eax_1
            (*__glewBindBuffer)(0x8892, eax_1)
            void* eax_3 = data_147b06c
            *(eax_3 + 0x10) += 1
        
        eax = esi_2[0x36]
        
        if (eax != 0)
            int32_t result = (*__glewBufferSubData)(0x8892, 0, arg3, eax)
            
            if (esi_2[3].b == 0)
                result = esi_2[0x36]
                
                if (result != 0)
                    result = _aligned_free(result)
                
                esi_2[0x36] = 0
            
            return result
        
        var_10_1 = "OpenGLInterface::UnlockVertexBuffer"
        var_14 = 0x142b
        var_18 = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
        ecx = "bufferData->mBufferPtr"
else
    var_10_1 = "DataArray<struct OpenGLBufferData>::DataArrayGet"
    var_14 = 0x6c
    ecx = "id != DATAID_NULL"
    var_18 = "C:\x\ax2017\Engine\DataArray.h"

sub_63b870(eax, &data_801800, ecx, var_18, var_14, var_10_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
