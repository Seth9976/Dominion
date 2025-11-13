// 函数: sub_705030
// 地址: 0x705030
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char const* const var_14
int32_t var_10
char const* const var_c
uint32_t eax
char* ecx

if (arg2 != 0)
    eax = zx.d(arg2.w)
    void* esi_2
    
    if (eax u< *(arg1 + 0x4250))
        esi_2 = *(arg1 + 0x424c) + eax * 0x14c
    
    if (eax u>= *(arg1 + 0x4250) || *(esi_2 + 0x148) != arg2)
        var_c = "DataArray<struct OpenGLBufferData>::DataArrayGet"
        var_10 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
        var_14 = "C:\x\ax2017\Engine\DataArray.h"
    else
        if (*(esi_2 + 0x13c) == 0)
            int32_t result = *(esi_2 + 0xd8)
            
            if (result == 0)
                result = sub_687730(*(esi_2 + 8))
                *(esi_2 + 0xd8) = result
            
            return result
        
        var_c = "OpenGLInterface::LockVertexBuffer"
        var_10 = 0x13b8
        var_14 = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
        ecx = "!bufferData->mIsSharedBuffer"
else
    var_c = "DataArray<struct OpenGLBufferData>::DataArrayGet"
    var_10 = 0x6c
    ecx = "id != DATAID_NULL"
    var_14 = "C:\x\ax2017\Engine\DataArray.h"

sub_63b870(eax, &data_801800, ecx, var_14, var_10, var_c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
