// 函数: sub_688ff0
// 地址: 0x688ff0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax_4 = data_147abf4

if (eax_4 == 0)
    sub_63b870(eax_4, &data_801800, "gNetwork", "C:\x\ax2017\Engine\Network.cpp", 0x124, 
        "NetMessageAlloc")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (*(eax_4 + 0x58) == 0)
    int32_t eax_1 = sub_687730(0xed68)
    memset(eax_1, 0, 0xed68)
    return eax_1

int32_t* edi = *(eax_4 + 0x54)
void* ecx = edi[2]
*(eax_4 + 0x54) = ecx

if (ecx == 0)
    *(eax_4 + 0x50) = 0
else
    *(ecx + 4) = 0

int32_t esi = *edi
*(eax_4 + 0x58) -= 1
sub_64c080(edi, 0xc)
return esi
