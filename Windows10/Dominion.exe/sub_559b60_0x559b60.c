// 函数: sub_559b60
// 地址: 0x559b60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t var_10 = 0
int32_t eax
uint32_t eax_1
int32_t ecx_1
eax_1, ecx_1 = sub_568960(eax, 0x1205, 0x3e9, 0)
int32_t eax_2 = eax_1 - 1
void* eax_4

switch (eax_2)
    case 0, 4
        void* eax_3 = sub_573400()
        sub_590760(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 1, 3, 0, 0)
        eax_4 = sub_573400()
        int32_t ecx_3 = *(eax_4 + 0xc)
        
        if (ecx_3 == 0xffffffff)
            goto label_559c30
        
        int32_t eax_5 = *(eax_4 + 4)
        int32_t ecx_4 = ecx_3 * 0x5a30
        *(ecx_4 + eax_5 + 0x17558) |= 2
        return eax_5
    case 1, 5
        int32_t var_c_1 = ecx_1
        return sub_561e00(eax_2, 0, 3, 0)
    case 2, 6
        return sub_561af0(eax_2, 0, 3, 0)
    case 3, 7
        void* eax_8 = sub_573400()
        sub_590760(eax_8, *(eax_8 + 0xc), *(eax_8 + 4), 2, 3, 0, 0)
        eax_4 = sub_573400()
        int32_t ecx_6 = *(eax_4 + 0xc)
        
        if (ecx_6 == 0xffffffff)
        label_559c30:
            sub_63b870(eax_4, &data_801800, "c.activePlayer != PLAYER_NONE", 
                "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
            
            if (sub_63bc30() == 0)
                noreturn sub_63bb00() __tailcall
            
            breakpoint
        
        eax_2 = *(eax_4 + 4)
        int32_t ecx_7 = ecx_6 * 0x5a30
        *(ecx_7 + eax_2 + 0x17558) |= 8

return eax_2
