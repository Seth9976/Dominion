// 函数: sub_7052d0
// 地址: 0x7052d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_10
uint32_t eax
char const* const ecx

if (arg2 != 0)
    eax = zx.d(arg2.w)
    
    if (eax u< *(arg1 + 0x4250))
        void* esi_2 = *(arg1 + 0x424c) + eax * 0x14c
        
        if (*(esi_2 + 0x148) == arg2)
            int32_t result = *(esi_2 + 0xd8)
            
            if (result == 0)
                result = sub_687730(*(esi_2 + 8))
                *(esi_2 + 0xd8) = result
            
            return result
    
    char const* const var_c_1 = "DataArray<struct OpenGLBufferData>::DataArrayGet"
    var_10 = 0x6d
    ecx = "DataArrayTryToGet(id) != NULL"
else
    char const* const var_c = "DataArray<struct OpenGLBufferData>::DataArrayGet"
    var_10 = 0x6c
    ecx = "id != DATAID_NULL"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Engine\DataArray.h", var_10, 
    "DataArray<struct OpenGLBufferData>::DataArrayGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
