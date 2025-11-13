// 函数: sub_509db0
// 地址: 0x509db0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char const* const var_1c
int32_t var_18_1
char const* const var_14_1
void* eax
char* ecx_1

if (arg2 == 1)
    uint32_t esi_2 = zx.d((*arg1).w)
    int32_t edi_1 = *(sub_573400() + 4)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    uint32_t result
    
    if (*(esi_2 * 0x64 + edi_1 + 0x1a4c) != 0x105)
        result.b = 0
        return result
    
    int32_t ecx_2
    eax, ecx_2 = sub_573400()
    
    if (*eax == 5)
        void* esi_3 = *(eax + 0x18)
        int32_t var_14_2 = ecx_2
        int32_t var_18_2 = 0
        
        if (sub_568960(eax, 0x105, 0x3ea, 0) == 0)
            result.b = *(esi_3 + 4) s>= 5
            return result
        
        *(esi_3 + 4) = 0
        result.b = 0
        return result
    
    var_14_1 = "DomAchievementDataGet"
    var_18_1 = 0x1cb1
    var_1c = "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp"
    ecx_1 = "c.contextType == CONTEXT_ACHIEVEMENT"
else
    var_14_1 = "Merchant_Achievement_AfterPlayAny"
    var_18_1 = 0x449
    var_1c = "C:\x\ax2017\Jams\Dominion\code\DomCards_Base.cpp"
    ecx_1 = "numCards == 1"

sub_63b870(eax, &data_801800, ecx_1, var_1c, var_18_1, var_14_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
