// 函数: sub_539510
// 地址: 0x539510
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg2 == 0)
    int32_t result
    result.b = 0
    return result

if (arg2 != 1)
    sub_63b870(arg2, &data_801800, "numCards == 1", 
        "C:\x\ax2017\Jams\Dominion\code\DomCards_Intrigue.cpp", 0x2b7, 
        "Ironworks_Achievement_OnGain")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int16_t esi = (*arg1).w
void* eax = sub_573400()
uint32_t esi_1 = zx.d(esi)
void* ebx = *(eax + 4)

if (esi_1 u>= 0x320)
    eax = sub_591930()

uint32_t ebx_1 = zx.d(sub_5754f0(eax, *(esi_1 * 0x64 + ebx + 0x1a4c), ebx, 4, 0))
uint32_t esi_3 = zx.d((*arg1).w)
void* ecx_1 = *(sub_573400() + 4)

if (esi_3 u>= 0x320)
    sub_591930()

int32_t eax_3 = esi_3 * 0x64
uint32_t ebx_2 = ebx_1 + 1

if (sub_5754f0(eax_3, *(eax_3 + ecx_1 + 0x1a4c), ecx_1, 2, 0) == 0)
    ebx_2 = ebx_1

uint32_t esi_5 = zx.d((*arg1).w)
void* edi_1 = *(sub_573400() + 4)

if (esi_5 u>= 0x320)
    sub_591930()

int32_t eax_6 = esi_5 * 0x64
uint32_t ecx_3 = ebx_2 + 1

if (sub_5754f0(eax_6, *(eax_6 + edi_1 + 0x1a4c), edi_1, 8, 0) == 0)
    ecx_3 = ebx_2

return ecx_3 u>= 2
