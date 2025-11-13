// 函数: sub_509470
// 地址: 0x509470
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
char const* const var_1c
int32_t var_18
char const* const var_14
char* ecx

if (*eax == 5)
    void* esi_1 = *(eax + 0x18)
    int32_t edx_1
    eax, edx_1 = sub_509340()
    int32_t edi_1 = *(esi_1 + 0x24)
    int32_t ecx_1 = 0
    
    if (edi_1 s<= 0)
    label_5094c1:
        eax.b = 0
        return eax
    
    while (true)
        if (*(esi_1 + (ecx_1 << 3) + 4) == eax && *(esi_1 + (ecx_1 << 3) + 8) == edx_1)
            if (arg2 != 1)
                var_14 = "Remodel_Achievement_OnGain"
                var_18 = 0x2f9
                var_1c = "C:\x\ax2017\Jams\Dominion\code\DomCards_Base.cpp"
                ecx = "numCards == 1"
                break
            
            uint32_t esi_3 = zx.d((*arg1).w)
            int32_t edi_2 = *(sub_573400() + 4)
            
            if (esi_3 u>= 0x320)
                sub_591930()
            
            int32_t eax_3
            eax_3.b = *(esi_3 * 0x64 + edi_2 + 0x1a4c) == 0x103
            return eax_3
        
        ecx_1 += 1
        
        if (ecx_1 s>= edi_1)
            goto label_5094c1
else
    var_14 = "DomAchievementDataGet"
    var_18 = 0x1cb1
    var_1c = "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp"
    ecx = "c.contextType == CONTEXT_ACHIEVEMENT"

sub_63b870(eax, &data_801800, ecx, var_1c, var_18, var_14)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
