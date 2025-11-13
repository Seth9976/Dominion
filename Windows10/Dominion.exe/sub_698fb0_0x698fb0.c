// 函数: sub_698fb0
// 地址: 0x698fb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = *(arg3 + 0x1900)

if (eax s<= 0)
    sub_63b870(eax, &data_801800, "stack.numEntries > 0", "C:\x\ax2017\Engine\UIDef.cpp", 0x69d, 
        "Peek")
    
    if (sub_63bc30() == 0)
        noreturn sub_63bb00() __tailcall
    
    breakpoint

void* ecx = arg3 + eax * 0x64
*arg4 = *(ecx - 0x64)
arg4[1] = *(ecx - 0x54)
arg4[2] = *(ecx - 0x44)
arg4[3] = *(ecx - 0x34)
arg4[4] = *(ecx - 0x24)
arg4[5] = *(ecx - 0x14)
return arg4
