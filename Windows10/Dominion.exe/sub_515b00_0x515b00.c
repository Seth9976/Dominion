// 函数: sub_515b00
// 地址: 0x515b00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_14
char const* const var_10
int32_t eax
char* ecx

if (arg2 != 0x141e)
    if (arg1 != 0)
        void* eax_1 = sub_571b30(arg1, 0x18)
        eax = *(eax_1 + 0x9c) & 0x940
        
        if (((*(eax_1 + 0x98) & 0x7f000400) | eax) != 0)
            eax.b = 0
            return eax
    
    if (data_cca78c == 0)
        data_cca78c = data_cca788
        data_cca788 = arg1
        int32_t eax_4 = sub_516f30(arg2)
        int32_t ecx_5 = 0
        int32_t* edx = eax_4 + 0xc
        int32_t ebx
        
        while (true)
            if (*edx == 2)
                ebx.b = 1
                eax_4 = *(ecx_5 * 0x26c + eax_4 + 0x10)
                
                if (eax_4 != 0)
                    eax_4 = eax_4()
                    char temp0_1 = eax_4.b
                    eax_4.b = neg.b(eax_4.b)
                    eax_4.b = sbb.b(eax_4.b, eax_4.b, temp0_1 != 0)
                    ebx.b = 1 & eax_4.b
                
                break
            
            ecx_5 += 1
            edx = &edx[0x9b]
            
            if (ecx_5 s>= 4)
                ebx.b = 1
                break
        
        eax_4.b = ebx.b
        data_cca788 = data_cca78c
        data_cca78c = 0
        return eax_4
    
    var_10 = "CampaignContextPushPile"
    var_14 = 0x748
    ecx = "gCampaignSetup.favoredPileStack == CARD_NONE"
else
    var_10 = "CanAddStamp"
    var_14 = 0x1a16
    ecx = "stamp != CLANDMOD_EVENT_STAMP_GOT_IT_ALREADY"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", var_14, 
    var_10)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
