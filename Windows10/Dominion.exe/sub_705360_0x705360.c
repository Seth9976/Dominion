// 函数: sub_705360
// 地址: 0x705360
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_10
uint32_t eax
char const* const ecx

if (arg2 != 0)
    eax = zx.d(arg2.w)
    
    if (eax u< *(arg1 + 0x4250))
        int32_t ecx_1 = eax * 0x14c
        eax = *(arg1 + 0x424c)
        
        if (*(ecx_1 + eax + 0x148) == arg2)
            int32_t esi_1 = *(ecx_1 + eax)
            void* eax_1 = data_147ded4
            
            if (*(eax_1 + 0x4098) != 0)
                *(eax_1 + 0x4098) = 0
                (*__glewBindVertexArray)(0)
                void* eax_3 = data_147b06c
                *(eax_3 + 0x14) += 1
            
            return (*__glewBindBuffer)(0x8893, esi_1)
    
    char const* const var_c_2 = "DataArray<struct OpenGLBufferData>::DataArrayGet"
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
