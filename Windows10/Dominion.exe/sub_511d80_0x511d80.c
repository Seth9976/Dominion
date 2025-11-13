// 函数: sub_511d80
// 地址: 0x511d80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
int32_t eax = sub_516f30(arg1)
int32_t esi = 0
int32_t* edi = eax + 0xc

while (*edi != 2)
    esi += 1
    edi = &edi[0x9b]
    
    if (esi s>= 4)
        eax.b = 1
        return eax

void* const i = esi * 0x26c
int32_t edi_1 = *(i + eax + 0x10)

if (edi_1 == 0)
    i.b = 1
    return i

int32_t var_1c
char const* const var_18
char* ecx_1

if (arg2 != 0)
    void* eax_2 = sub_571b30(arg2, 0x18)
    
    if (((*(eax_2 + 0x98) & 0x7f000400) | (*(eax_2 + 0x9c) & 0x940)) != 0)
    label_511e94:
        i.b = 0
        return i
    
    for (i = &data_790b58; i s< &data_790bbc; i += 4)
        if (*i == arg1)
            int32_t j = 0
            i = data_cca780 + 0x590 + (data_cca784 << 0xb)
            
            do
                if (*(i - 4) == arg1 && *i == arg2)
                    goto label_511e94
                
                j += 1
                i += 0x14
            while (j s< 0x20)
            
            break
    
    if (data_cca78c == 0)
        data_cca78c = data_cca788
        data_cca788 = arg2
        int32_t eax_7 = edi_1()
        data_cca788 = data_cca78c
        data_cca78c = 0
        return eax_7
    
    var_18 = "CampaignContextPushPile"
    var_1c = 0x748
    ecx_1 = "gCampaignSetup.favoredPileStack == CARD_NONE"
else
    if (data_cca788 == arg2)
        return edi_1()
    
    var_18 = "CanDoCardStamp"
    var_1c = 0x1391
    ecx_1 = "gCampaignSetup.favoredPile == CARD_NONE"

sub_63b870(i, &data_801800, ecx_1, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", var_1c, 
    var_18)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
