// 函数: sub_539830
// 地址: 0x539830
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char const* const var_14
int32_t var_10
char const* const __saved_edi
void* eax
char* ecx

if (arg2 == 1)
    uint32_t esi_2 = zx.d((*arg1).w)
    int32_t edi_1 = *(sub_573400() + 4)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    if (*(esi_2 * 0x64 + edi_1 + 0x1a4c) != 0x30e)
        int32_t eax_6
        eax_6.b = 0
        return eax_6
    
    eax = sub_573400()
    
    if (*eax == 5)
        void* esi_3 = *(eax + 0x18)
        int32_t eax_5 = *(*(sub_573400() + 4) + 0x19e4)
        
        if (eax_5 != *(esi_3 + 4))
            *(esi_3 + 4) = 0
            *(esi_3 + 4) = eax_5
        
        bool cond:2 = *(esi_3 + 8) != 0
        *(esi_3 + 9) = 1
        eax_5.b = cond:2
        return eax_5
    
    __saved_edi = "DomAchievementDataGet"
    var_10 = 0x1cb1
    var_14 = "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp"
    ecx = "c.contextType == CONTEXT_ACHIEVEMENT"
else
    __saved_edi = "MiningVillage_Achievement_OnTrash"
    var_10 = 0x2fc
    var_14 = "C:\x\ax2017\Jams\Dominion\code\DomCards_Intrigue.cpp"
    ecx = "numCards == 1"

sub_63b870(eax, &data_801800, ecx, var_14, var_10, __saved_edi)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
