// 函数: sub_523660
// 地址: 0x523660
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
void* eax = sub_573400()
sub_590760(eax, *(eax + 0xc), *(eax + 4), 2, 1, 0, 0)
void* eax_1 = sub_573400()
int32_t ecx_2 = *(eax_1 + 0xc)

if (ecx_2 == 0xffffffff)
    sub_63b870(eax_1, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_2 = *(eax_1 + 4)
int32_t esi = 0
int32_t ecx_3 = ecx_2 * 0x5a30
*(ecx_3 + eax_2 + 0x17558) |= 8
void* eax_3 = sub_573400()
void* edi = eax_3

if (*edi == 2)
    uint32_t esi_2 = zx.d((*(edi + 0x10)).w)
    int32_t ebx_1 = *(sub_573400() + 4)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    eax_3 = esi_2 * 0x64
    esi = *(eax_3 + ebx_1 + 0x1a4c)

return sub_5911e0(eax_3, *(edi + 0xc), *(edi + 4), 2, 2, 1, *(edi + 0x28), *(edi + 0x2c), 1, 
    0xffffffff, 0, esi)
