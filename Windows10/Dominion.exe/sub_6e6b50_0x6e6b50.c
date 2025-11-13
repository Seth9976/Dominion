// 函数: sub_6e6b50
// 地址: 0x6e6b50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi_2 = (arg2 << 4) + arg3
uint32_t eax = esi_2[3]
int32_t var_28
char const* const var_24
char* ecx_1

if (eax == 1)
    if (arg4 s>= 0)
        eax = esi_2[2] u>> 3
        
        if (arg4 s< eax)
            int32_t edx = *esi_2
            *(edx + (arg4 << 3) + 4)
            return *(edx + (arg4 << 3))
    
    var_24 = "FlanimGetUncompressedParamVec2"
    var_28 = 0x32b
    ecx_1 = "frameIndex >= 0 && frameIndex < numFrames"
else if (eax != 3)
    var_24 = "FlanimGetUncompressedParamVec2"
    var_28 = 0x335
    ecx_1 = "Halt"
else
    int32_t ebx_1 = *esi_2
    int32_t edx_2
    edx_2:eax = muls.dp.d(0x66666667, esi_2[2])
    int32_t edx_3 = edx_2 s>> 2
    int32_t edi_3 = (edx_3 u>> 0x1f) + edx_3
    
    if (edi_3 s> 0)
        int32_t ecx_2 = 1
        
        if (edi_3 != 1)
            while (zx.d(*(ebx_1 + (edi_3 << 3) + (ecx_2 << 1))) s<= arg4)
                ecx_2 += 1
                
                if (ecx_2 == edi_3)
                    break
        
        int32_t var_c = *(ebx_1 + (ecx_2 << 3) - 4)
        return *(ebx_1 + (ecx_2 << 3) - 8)
    
    var_24 = "FlanimGetUncompressedConstantVec2"
    var_28 = 0x319
    ecx_1 = "numValues > 0"

sub_63b870(eax, &data_801800, ecx_1, "C:\x\ax2017\Engine\Flanim.cpp", var_28, var_24)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
