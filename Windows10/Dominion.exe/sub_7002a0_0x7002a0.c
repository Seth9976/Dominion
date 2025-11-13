// 函数: sub_7002a0
// 地址: 0x7002a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_10
char const* const ecx

if (arg4 != 0)
    arg1 = zx.d(arg4.w)
    
    if (arg1 u< *(arg3 + 0x4250))
        int32_t ecx_1 = arg1 * 0x14c
        arg1 = *(arg3 + 0x424c)
        
        if (*(ecx_1 + arg1 + 0x148) == arg4)
            uint32_t texture = *(ecx_1 + arg1)
            void* eax = data_147ded4
            
            if (*(eax + 0x40a8) != texture)
                *(eax + 0x40a8) = texture
                
                if (*(eax + 0x40a4) != 0)
                    *(eax + 0x40a4) = 0
                    (*__glewActiveTexture)(0x84c0)
                
                glBindTexture(0xde1, texture)
            
            arg4 = 0xde1
            jump(*__glewGenerateMipmap)
    
    char const* const var_c_3 = "DataArray<struct OpenGLBufferData>::DataArrayGet"
    var_10 = 0x6d
    ecx = "DataArrayTryToGet(id) != NULL"
else
    char const* const var_c_1 = "DataArray<struct OpenGLBufferData>::DataArrayGet"
    var_10 = 0x6c
    ecx = "id != DATAID_NULL"

sub_63b870(arg1, &data_801800, ecx, "C:\x\ax2017\Engine\DataArray.h", var_10, 
    "DataArray<struct OpenGLBufferData>::DataArrayGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
