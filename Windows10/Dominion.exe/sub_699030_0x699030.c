// 函数: sub_699030
// 地址: 0x699030
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx = *(arg1 + 0x1900)
int32_t eax

if (edx s<= 0)
    sub_63b870(eax, &data_801800, "stack.numEntries > 0", "C:\x\ax2017\Engine\UIDef.cpp", 0x6a3, 
        "PopOne")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t edx_1 = edx - 1

if (edx - 1 s< 0)
    return 

void* ecx_2 = edx_1 * 0x64 + 0x60 + arg1
int32_t temp1_1

do
    eax = *ecx_2
    
    if (eax s>= 0)
        if (eax != 1)
            *ecx_2 = eax - 1
        else
            *(arg1 + 0x1900) -= 1
    
    ecx_2 -= 0x64
    temp1_1 = edx_1
    edx_1 -= 1
while (temp1_1 - 1 s>= 0)
