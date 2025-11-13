// 函数: sub_516c00
// 地址: 0x516c00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
int32_t ecx = data_cca790
int32_t* esi_2

if (ecx != 2)
    esi_2 = data_cca780 + ((ecx + 0xa02) << 3)
else
    esi_2 = data_cca780 + 0x540 + (data_cca784 << 0xb)

int32_t eax_4 = *esi_2
int32_t var_14
char const* const var_10_1
char* ecx_4

if (eax_4 != 0x3e8)
    if (eax_4 == 0x5dc)
        int32_t esi_6 = esi_2[1]
        int32_t edx_7 = sub_58ffd0(&data_cca794, esi_6)
        int32_t eax_11
        eax_11.b = data_cca790 != 0
        sub_50a6a0((eax_11 << 1) + 3, edx_7, esi_6, 4, (eax_11 << 1) + 3)
        return sub_50e690(esi_6)
    
    var_10_1 = "ThemePiece_SelfModified"
    var_14 = 0x1cbb
    ecx_4 = "Halt"
else
    int32_t esi_4 = esi_2[1]
    int32_t edx_2 = sub_58ffd0(&data_cca794, esi_4)
    int32_t eax_2
    eax_2.b = data_cca790 != 0
    eax_4 = sub_50abe0((eax_2 << 1) + 3, edx_2, esi_4, (eax_2 << 1) + 3)
    
    if (data_cca78c == 0)
        data_cca78c = data_cca788
        data_cca788 = esi_4
        int32_t eax_7 = sub_50af00(sub_516f30(0xfa0), &var_8)
        eax_4 = sub_516f30(sub_50af60(eax_7, var_8, &data_cc8de0, eax_7))
        int32_t i = 0
        int32_t* edx_5 = eax_4 + 0xc
        
        do
            if (*edx_5 == 1)
                (*(i * 0x26c + eax_4 + 0x10))()
                int32_t result = data_cca78c
                data_cca788 = result
                data_cca78c = 0
                return result
            
            i += 1
            edx_5 = &edx_5[0x9b]
        while (i s< 4)
        
        var_10_1 = "CampaignPieceDefGetFn"
        var_14 = 0x30a
        ecx_4 = "Halt"
    else
        var_10_1 = "CampaignContextPushPile"
        var_14 = 0x748
        ecx_4 = "gCampaignSetup.favoredPileStack == CARD_NONE"

sub_63b870(eax_4, &data_801800, ecx_4, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_14, var_10_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
