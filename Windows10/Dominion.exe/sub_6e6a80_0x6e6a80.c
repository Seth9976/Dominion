// 函数: sub_6e6a80
// 地址: 0x6e6a80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi_2 = (arg2 << 4) + arg3
int32_t eax = esi_2[3]
int32_t var_18
char const* const var_14
char* ecx_2

if (eax == 2)
    if (arg4 s>= 0 && arg4 s< esi_2[2] u>> 2)
        return *(*esi_2 + (arg4 << 2))
    
    var_14 = "FlanimGetUncompressedParamInt"
    var_18 = 0x304
    ecx_2 = "frameIndex >= 0 && frameIndex < numFrames"
else if (eax != 4)
    var_14 = "FlanimGetUncompressedParamInt"
    var_18 = 0x30e
    ecx_2 = "Halt"
else
    int32_t ebx_1 = *esi_2
    int32_t edx_1
    edx_1:eax = muls.dp.d(0x2aaaaaab, esi_2[2])
    int32_t edi_3 = (edx_1 u>> 0x1f) + edx_1
    
    if (edi_3 s> 0)
        int32_t ecx_3 = 1
        
        if (edi_3 != 1)
            while (zx.d(*(ebx_1 + (edi_3 << 2) + (ecx_3 << 1))) s<= arg4)
                ecx_3 += 1
                
                if (ecx_3 == edi_3)
                    break
        
        return *(ebx_1 + (ecx_3 << 2) - 4)
    
    var_14 = "FlanimGetUncompressedConstantInt"
    var_18 = 0x2f2
    ecx_2 = "numValues > 0"

sub_63b870(eax, &data_801800, ecx_2, "C:\x\ax2017\Engine\Flanim.cpp", var_18, var_14)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
