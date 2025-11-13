// 函数: sub_539b90
// 地址: 0x539b90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx

if (arg2 != 1)
    int32_t eax
    sub_63b870(eax, &data_801800, "numCards == 1", 
        "C:\x\ax2017\Jams\Dominion\code\DomCards_Intrigue.cpp", 0x355, "Replace_Achievement_OnGain")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

uint32_t esi_1 = zx.d((*arg1).w)
void* ebx = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t eax_2 = esi_1 * 0x64

if (sub_5754f0(eax_2, *(eax_2 + ebx + 0x1a4c), ebx, 8, 0) == 0)
    return 0

uint32_t esi_3 = zx.d((*arg1).w)
void* ebx_1 = *(sub_573400() + 4)

if (esi_3 u>= 0x320)
    sub_591930()

int32_t eax_5 = esi_3 * 0x64

if (sub_5754f0(eax_5, *(eax_5 + ebx_1 + 0x1a4c), ebx_1, 4, 0) != 0)
    return 1

uint32_t esi_5 = zx.d((*arg1).w)
void* edi_1 = *(sub_573400() + 4)

if (esi_5 u>= 0x320)
    sub_591930()

int32_t eax_8 = esi_5 * 0x64
return sub_5754f0(eax_8, *(eax_8 + edi_1 + 0x1a4c), edi_1, 2, 0) != 0
