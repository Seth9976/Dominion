// 函数: sub_50dfb0
// 地址: 0x50dfb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()

if (*eax != 4)
    sub_63b870(eax, &data_801800, "c.contextType == CONTEXT_SETUP", 
        "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0xc59, "StampGetPileSetup")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

uint32_t ebx = zx.d(sub_50cc00(*(eax + 0x10)))
void* eax_2 = sub_573400()
int32_t eax_3 = sub_571f30(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 0xe01, 0x3f1, 0)
int32_t ecx_2 = *(eax_2 + 4)

if (ebx u>= 0x320)
    sub_591930()

int32_t esi = ebx * 0x64
sub_584790(eax_3, eax_3, *(eax_2 + 4), *(esi + ecx_2 + 0x1a50))
int32_t eax_5 = *(sub_573400() + 4)

if (ebx u>= 0x320)
    sub_591930()

int32_t* ecx_4 = *(eax_2 + 4)
int32_t result = ecx_4[0x541]

if (result == 3 || result == 5 || result == 4 || result == 6 || ecx_4[0x540].b != 0)
    return result

int32_t edx_2 = *(eax_2 + 0xc)
int32_t eax_6 = edx_2

if (edx_2 == ecx_4[0x673])
    eax_6 = ecx_4[0x674]

return sub_59f9b0(eax_6, edx_2, ecx_4, eax_6, 0x50, 0, nullptr, 0, *(esi + eax_5 + 0x1a4c), 0, 0, 0)
