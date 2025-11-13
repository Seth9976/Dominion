// 函数: sub_5176a0
// 地址: 0x5176a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t result = sub_50b8c0(sub_5177c0)
uint32_t result_1 = result
int32_t var_18
char const* const var_14
char* ecx

if (result_1 != 0)
    int32_t ecx_1 = 0
    
    for (int32_t i = 0; i u< 0x3f0; )
        if (*(i + &data_7bfae8) == result_1)
            int32_t eax = ecx_1 * 9
            int32_t edx_1 = *((eax << 3) + &data_7bfaec)
            
            if (edx_1 != 0)
                result_1 = *((eax << 3) + &data_7bfaf0 + (sub_63ed10(&data_cc8de0, edx_1) << 2))
            
            break
        
        i += 0x48
        ecx_1 += 1
    
    void* eax_2
    int32_t ecx_3
    eax_2, ecx_3 = sub_571b30(result_1, 0x17)
    int32_t eax_4 = *(eax_2 + 0x98) & 2
    
    if (eax_4 != 0)
        int32_t var_14_1 = 0
        return sub_50ac80(eax_4, result_1, 0xdb1, ecx_3, 0)
    
    int32_t i_1 = 0
    result = data_cca780 + 0x58c + (data_cca784 << 0xb)
    
    do
        if (*result == 0)
            *(result + 4) = result_1
            *result = 0xdb2
            *(result + 8) = 0xffffffff
            *(result + 0xc) = 0
            *(result + 0x10) = 0
            return result
        
        i_1 += 1
        result += 0x14
    while (i_1 s< 0x20)
    
    var_14 = "CampaignAddExtra"
    var_18 = 0x242
    ecx = "Halt"
else
    var_14 = "CardMod_CardStart"
    var_18 = 0x1e86
    ecx = "pile != CARD_NONE"

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_18, var_14)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
