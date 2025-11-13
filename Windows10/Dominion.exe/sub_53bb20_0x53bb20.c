// 函数: sub_53bb20
// 地址: 0x53bb20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t var_1c = ecx
int32_t eax
sub_561e00(eax, 0, 1, 0)
void* eax_1 = sub_573400()
sub_590760(eax_1, *(eax_1 + 0xc), *(eax_1 + 4), 1, 4, 0, 0)
void* eax_2 = sub_573400()
int32_t ecx_2 = *(eax_2 + 0xc)

if (ecx_2 != 0xffffffff)
    int32_t eax_3 = *(eax_2 + 4)
    int32_t ecx_3 = ecx_2 * 0x5a30
    *(ecx_3 + eax_3 + 0x17558) |= 2
    void* eax_4 = sub_573400()
    sub_590760(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 2, 1, 0, 0)
    eax_2 = sub_573400()
    int32_t ecx_5 = *(eax_2 + 0xc)
    
    if (ecx_5 != 0xffffffff)
        int32_t eax_5 = *(eax_2 + 4)
        int32_t ecx_6 = ecx_5 * 0x5a30
        *(ecx_6 + eax_5 + 0x17558) |= 8
        void* eax_6 = sub_573400()
        
        if (sub_576b30(eax_6, *(eax_6 + 0xc), *(eax_6 + 4), 0x12, 0, 0, 0) s<= 0)
            sub_56ec80()
        
        int32_t esi = 0
        void* eax_8 = sub_573400()
        void* edi = eax_8
        
        if (*edi == 2)
            uint32_t esi_2 = zx.d((*(edi + 0x10)).w)
            int32_t ebx_1 = *(sub_573400() + 4)
            
            if (esi_2 u>= 0x320)
                sub_591930()
            
            eax_8 = esi_2 * 0x64
            esi = *(eax_8 + ebx_1 + 0x1a4c)
        
        return sub_5911e0(eax_8, *(edi + 0xc), *(edi + 4), 0x12, nullptr, 1, *(edi + 0x28), 
            *(edi + 0x2c), 0, 0xffffffff, 0, esi)

sub_63b870(eax_2, &data_801800, "c.activePlayer != PLAYER_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
