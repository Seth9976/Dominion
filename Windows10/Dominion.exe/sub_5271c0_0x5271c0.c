// 函数: sub_5271c0
// 地址: 0x5271c0
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
sub_561af0(eax_2, 0, 2, 0)
void* eax_3 = sub_564390()
void* eax_4 = sub_573400()
void* eax_5 = sub_5887c0(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 0)

if (eax_5 != 0)
    uint32_t esi_1 = zx.d(eax_5.w)
    int32_t ebx_1 = *(sub_573400() + 4)
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    int32_t esi_2 = *(esi_1 * 0x64 + ebx_1 + 0x1a4c)
    int32_t ecx_4
    ecx_4.b = esi_2 != eax_3
    eax_5 = sub_566890(ecx_4)
    
    if (eax_5 != 0)
        if (esi_2 != eax_3)
            return sub_56e9c0(nullptr)
        
        sub_56e9c0(1)
        void* eax_8 = sub_573400()
        uint32_t edi_1 = zx.d(eax_5.w)
        int32_t eax_9 = *(eax_8 + 4)
        
        if (edi_1 u>= 0x320)
            sub_591930()
        
        uint32_t eax_10 = sub_582d10(eax_9, *(edi_1 * 0x64 + eax_9 + 0x1a70), *(eax_8 + 4), eax_5, 
            0x3eb, 0xb, 0x3ea, 3, *(eax_8 + 0x28), *(eax_8 + 0x2c), *(eax_8 + 0x30), 0, 0, nullptr, 
            0, nullptr, nullptr)
        return eax_10

return eax_5
