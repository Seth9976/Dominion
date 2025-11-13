// 函数: sub_5049c0
// 地址: 0x5049c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax_7 = sub_573400()
int32_t eax = sub_583fc0(eax_7, *(eax_7 + 0xc), *(eax_7 + 4), 0x1000)

if (eax s>= 5)
    sub_561af0(eax, 0, 1, 0)

void* eax_1 = sub_573400()
int32_t result = sub_583fc0(eax_1, *(eax_1 + 0xc), *(eax_1 + 4), 0x1000)

if (result s>= 0xa)
    void* eax_2 = sub_573400()
    sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 1, 0, 0)
    void* eax_3 = sub_573400()
    int32_t ecx_3 = *(eax_3 + 0xc)
    int32_t ecx_6
    
    if (ecx_3 != 0xffffffff)
        int32_t eax_4 = *(eax_3 + 4)
        int32_t ecx_4 = ecx_3 * 0x5a30
        *(ecx_4 + eax_4 + 0x17558) |= 2
        void* eax_5 = sub_573400()
        sub_590760(eax_5, *(eax_5 + 0xc), *(eax_5 + 4), 2, 1, 0, 0)
        eax_3 = sub_573400()
        ecx_6 = *(eax_3 + 0xc)
    
    if (ecx_3 == 0xffffffff || ecx_6 == 0xffffffff)
        sub_63b870(eax_3, &data_801800, "c.activePlayer != PLAYER_NONE", 
            "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
        
        if (sub_63bc30() == 0)
            noreturn sub_63bb00() __tailcall
        
        breakpoint
    
    result = *(eax_3 + 4)
    int32_t ecx_7 = ecx_6 * 0x5a30
    *(ecx_7 + result + 0x17558) |= 8

return result
