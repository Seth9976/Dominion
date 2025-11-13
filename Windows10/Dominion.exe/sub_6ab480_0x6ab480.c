// 函数: sub_6ab480
// 地址: 0x6ab480
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = arg3
void* var_10 = esi
void* result = *(esi + 8)
int32_t var_30
char const* const ecx

if (result == *(arg2 + 8))
    result = *(esi + 4)
    
    if (result == *(arg2 + 4))
        int32_t eax = sub_6a9450(*(esi + 0x10))
        result = sub_6a9450(*(arg2 + 0x10))
        int32_t edi_1 = 0
        void* result_1 = result
        
        if (*(esi + 8) s<= 0)
            return result
        
        int32_t ecx_3 = *(esi + 4)
        
        while (true)
            if (ecx_3 s> 0)
                result = arg4
                int32_t ebx_1 = 0
                int32_t var_c_1 = 0
                
                if (result u> 3)
                    break
                
                do
                    int32_t ecx_4
                    int32_t edx
                    
                    switch (result)
                        case nullptr
                            edx = ebx_1
                            ecx_4 = edi_1
                        case 1
                            edx = edi_1
                            ecx_4 = ecx_3 - ebx_1 - 1
                        case 2
                            edx = ecx_3 - ebx_1 - 1
                            ecx_4 = *(esi + 8) - edi_1 - 1
                        case 3
                            ecx_4 = ebx_1
                            edx = *(esi + 8) - edi_1 - 1
                    
                    result = arg2
                    
                    if (edx s>= *(result + 4))
                        char const* const var_2c_5 = "ImageBufferRotateCopy"
                        var_30 = 0x48b
                        ecx = "destX < destImage->width"
                        goto label_6ab5e4
                    
                    if (ecx_4 s>= *(result + 8))
                        char const* const var_2c_4 = "ImageBufferRotateCopy"
                        var_30 = 0x48c
                        ecx = "destY < destImage->height"
                        goto label_6ab5e4
                    
                    uint8_t* esi_5 = *(arg2 + 0xc) * ecx_4 + edx * result_1 + *arg2
                    uint32_t eax_5 =
                        sub_6a97a0(*(esi + 0xc) * edi_1 + *esi + var_c_1, *(var_10 + 0x10))
                    sub_6a9bc0(arg2, *(arg2 + 0x10), esi_5, eax_5)
                    esi = var_10
                    ebx_1 += 1
                    var_c_1 += eax
                    result = arg4
                    ecx_3 = *(esi + 4)
                while (ebx_1 s< ecx_3)
            
            edi_1 += 1
            
            if (edi_1 s>= *(esi + 8))
                return result
        
        char const* const var_2c_6 = "ImageBufferRotateCopy"
        var_30 = 0x488
        ecx = "Halt"
    else
        char const* const var_2c_2 = "ImageBufferRotateCopy"
        var_30 = 0x469
        ecx = "sourceImage->width == destImage->width"
else
    char const* const var_2c_1 = "ImageBufferRotateCopy"
    var_30 = 0x468
    ecx = "sourceImage->height == destImage->height"

label_6ab5e4:
sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Engine\TextureImport.cpp", var_30, 
    "ImageBufferRotateCopy")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
