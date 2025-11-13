// 函数: sub_517800
// 地址: 0x517800
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t result = sub_50b8c0(sub_5177c0)
uint32_t i = result
int32_t var_44
char const* const var_40
char* ecx

if (i != 0)
    int32_t eax = data_1597e0c
    int32_t edi_1 = 0
    int32_t ecx_4 = (i s>> 4 | i) & data_1597e10
    int128_t var_2c
    __builtin_memcpy(&var_2c, 
        "\x16\x00\x00\x00\x05\x00\x00\x00\x04\x00\x00\x00\x11\x00\x00\x00\x14\x00\x00\x00\x19\x00\x00\x"
    "00\x1e\x00\x00\x00\x30\x00\x00\x00\x1c\x00\x00\x00", 
        0x24)
    int32_t* eax_1 = *(eax + (ecx_4 << 2))
    int32_t* var_8_1 = eax_1
    int32_t eax_2
    int32_t ecx_6
    
    while (true)
        if (eax_1 != 0)
            while (i != *eax_1)
                eax_1 = eax_1[4]
                
                if (eax_1 == 0)
                    goto label_51789a
            
            if (eax_1 != 0xfffffffc)
                eax_2 = 0
                ecx_6 = eax_1[2]
                
                if (ecx_6 s> 0)
                    break
        
    label_51789a:
        edi_1 += 1
        
        if (edi_1 u>= 9)
            int32_t eax_7
            int32_t ecx_14
            eax_7, ecx_14 = sub_50ed40(i)
            int32_t var_40_1 = 0
            return sub_50ac80(eax_7, i, eax_7, ecx_14, 0)
        
        eax_1 = var_8_1
    
    while (true)
        if (*(eax_1[1] + (eax_2 << 2)) == *(&var_2c + (edi_1 << 2)))
            void* eax_3 = sub_571b30(i, 0x18)
            result = *(eax_3 + 0x9c) & 0x940
            
            if (((*(eax_3 + 0x98) & 0x7f000400) | result) == 0)
                int32_t i_1 = 0
                result = data_cca780 + 0x58c + (data_cca784 << 0xb)
                
                do
                    if (*result == 0)
                        *result = 0xdb8
                        *(result + 4) = i
                        *(result + 8) = 0xffffffff
                        *(result + 0xc) = 0
                        *(result + 0x10) = 0
                        return result
                    
                    i_1 += 1
                    result += 0x14
                while (i_1 s< 0x20)
                
                var_40 = "CampaignAddExtra"
                var_44 = 0x242
                ecx = "Halt"
            else
                var_40 = "CardMod_DoubleCopies"
                var_44 = 0x1eaa
                ecx = "!IsLandscape(pile)"
            
            break
        
        eax_2 += 1
        
        if (eax_2 s>= ecx_6)
            goto label_51789a
else
    var_40 = "CardMod_DoubleCopies"
    var_44 = 0x1e95
    ecx = "pile != CARD_NONE"

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_44, var_40)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
