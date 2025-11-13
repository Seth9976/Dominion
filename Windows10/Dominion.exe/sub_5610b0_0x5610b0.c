// 函数: sub_5610b0
// 地址: 0x5610b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
sub_590760(eax, *(eax + 0xc), *(eax + 4), 1, 1, 0, 0)
void* eax_1 = sub_573400()
int32_t ecx_1 = *(eax_1 + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax_1, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_2 = *(eax_1 + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
*(ecx_2 + eax_2 + 0x17558) |= 2
sub_561af0(eax_2, 0, 1, 0)
int32_t esi = 0
void* eax_3 = sub_573400()
void* edi = eax_3

if (*edi == 2)
    uint32_t esi_2 = zx.d((*(edi + 0x10)).w)
    int32_t ebx_1 = *(sub_573400() + 4)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    eax_3 = esi_2 * 0x64
    esi = *(eax_3 + ebx_1 + 0x1a4c)

sub_5911e0(eax_3, *(edi + 0xc), *(edi + 4), 0, nullptr, 2, *(edi + 0x28), *(edi + 0x2c), 0, 
    0xffffffff, 0, esi)
int32_t var_c90 = 0
return sub_56bba0(&var_c90, 0, sub_4f8860, &var_c90, 1, 2)
