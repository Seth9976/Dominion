// 函数: sub_700850
// 地址: 0x700850
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t edx = arg2
int32_t var_14
uint32_t eax
char const* const ecx

if (edx != 0)
    eax = zx.d(edx.w)
    
    if (eax u< *(arg1 + 0x4250))
        int32_t* edi_2 = eax * 0x14c + *(arg1 + 0x424c)
        
        if (edi_2[0x52] == edx)
            if (*(arg1 + 0x5038) == 0)
                bool cond:0_1 = edi_2[0x39] == 0
                arg2 = *edi_2
                
                if (not(cond:0_1))
                    (*__glewDeleteRenderbuffers)(1, &edi_2[0x39])
                
                if (edi_2[0x38] != 0)
                    (*__glewDeleteFramebuffers)(1, &edi_2[0x38])
                
                if (arg2 != 0)
                    glDeleteTextures(1, &arg2)
                
                void* ecx_1 = data_147ded4
                
                if (*(ecx_1 + 0x40a8) == arg2)
                    *(ecx_1 + 0x40a8) = 0xffffffff
                
                if (*(ecx_1 + 0x4168) == arg2)
                    *(ecx_1 + 0x4168) = 0xffffffff
                
                if (*(ecx_1 + 0x40ac) == arg2)
                    *(ecx_1 + 0x40ac) = 0xffffffff
                
                if (*(ecx_1 + 0x416c) == arg2)
                    *(ecx_1 + 0x416c) = 0xffffffff
                
                if (*(ecx_1 + 0x40b0) == arg2)
                    *(ecx_1 + 0x40b0) = 0xffffffff
                
                if (*(ecx_1 + 0x4170) == arg2)
                    *(ecx_1 + 0x4170) = 0xffffffff
                
                if (*(ecx_1 + 0x40b4) == arg2)
                    *(ecx_1 + 0x40b4) = 0xffffffff
                
                if (*(ecx_1 + 0x4174) == arg2)
                    *(ecx_1 + 0x4174) = 0xffffffff
                
                if (*(ecx_1 + 0x40b8) == arg2)
                    *(ecx_1 + 0x40b8) = 0xffffffff
                
                if (*(ecx_1 + 0x4178) == arg2)
                    *(ecx_1 + 0x4178) = 0xffffffff
                
                if (*(ecx_1 + 0x40bc) == arg2)
                    *(ecx_1 + 0x40bc) = 0xffffffff
                
                if (*(ecx_1 + 0x417c) == arg2)
                    *(ecx_1 + 0x417c) = 0xffffffff
                
                if (*(ecx_1 + 0x40c0) == arg2)
                    *(ecx_1 + 0x40c0) = 0xffffffff
                
                if (*(ecx_1 + 0x4180) == arg2)
                    *(ecx_1 + 0x4180) = 0xffffffff
                
                if (*(ecx_1 + 0x40c4) == arg2)
                    *(ecx_1 + 0x40c4) = 0xffffffff
                
                if (*(ecx_1 + 0x4184) == arg2)
                    *(ecx_1 + 0x4184) = 0xffffffff
            
            uint32_t result = zx.d(edi_2[0x52].w)
            int32_t ecx_2 = *(arg1 + 0x4258)
            *(arg1 + 0x4258) = result
            edi_2[0x52] = ecx_2
            *(arg1 + 0x425c) -= 1
            return result
    
    char const* const var_10_5 = "DataArray<struct OpenGLBufferData>::DataArrayGet"
    var_14 = 0x6d
    ecx = "DataArrayTryToGet(id) != NULL"
else
    char const* const var_10_1 = "DataArray<struct OpenGLBufferData>::DataArrayGet"
    var_14 = 0x6c
    ecx = "id != DATAID_NULL"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Engine\DataArray.h", var_14, 
    "DataArray<struct OpenGLBufferData>::DataArrayGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
