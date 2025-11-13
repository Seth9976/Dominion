// 函数: sub_512370
// 地址: 0x512370
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c
char const* const var_8
int32_t eax
char* ecx

if (data_cca78c == 0)
    int32_t eax_1 = data_cca788
    data_cca788 = arg1
    data_cca78c = eax_1
    eax = sub_516f30(arg2)
    int32_t i = 0
    int32_t* edx = eax + 0xc
    
    do
        if (*edx == 1)
            (*(i * 0x26c + eax + 0x10))()
            int32_t result = data_cca78c
            data_cca788 = result
            data_cca78c = 0
            return result
        
        i += 1
        edx = &edx[0x9b]
    while (i s< 4)
    
    var_8 = "CampaignPieceDefGetFn"
    var_c = 0x30a
    ecx = "Halt"
else
    var_8 = "CampaignContextPushPile"
    var_c = 0x748
    ecx = "gCampaignSetup.favoredPileStack == CARD_NONE"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", var_c, 
    var_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
