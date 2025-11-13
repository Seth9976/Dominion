// 函数: sub_52bb80
// 地址: 0x52bb80
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
int32_t ecx_3 = ecx_2 * 0x5a30
*(ecx_3 + eax_2 + 0x17558) |= 8
void* eax_3 = sub_573400()

if (sub_576b30(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 0xd, 0, 0, 0) s<= 0)
    sub_56eb20(0x95)
    void* eax_5 = sub_573400()
    sub_561af0(eax_5, 0, *(*(eax_5 + 0xc) * 0x5a30 + *(eax_5 + 4) + 0x174f4), 0)

int32_t esi_4 = 0
void* eax_6 = sub_573400()
void* edi = eax_6

if (*edi == 2)
    uint32_t esi_3 = zx.d((*(edi + 0x10)).w)
    int32_t ebx_1 = *(sub_573400() + 4)
    
    if (esi_3 u>= 0x320)
        sub_591930()
    
    eax_6 = esi_3 * 0x64
    esi_4 = *(eax_6 + ebx_1 + 0x1a4c)

return sub_5911e0(eax_6, *(edi + 0xc), *(edi + 4), 0xd, nullptr, 1, *(edi + 0x28), *(edi + 0x2c), 
    0, 0xffffffff, 0, esi_4)
