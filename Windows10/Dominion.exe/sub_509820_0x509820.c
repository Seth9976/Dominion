// 函数: sub_509820
// 地址: 0x509820
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
char const* const var_14
int32_t __saved_esi
char const* const __saved_ebx
char* ecx

if (*eax == 5)
    void* edi_1 = *(eax + 0x18)
    
    if (arg2 == 1)
        uint32_t esi_1 = zx.d((*arg1).w)
        int32_t ebx = *(sub_573400() + 4)
        
        if (esi_1 u>= 0x320)
            sub_591930()
        
        if (*(esi_1 * 0x64 + ebx + 0x1a4c) == 0x215)
            *(edi_1 + 4) += 1
        
        int32_t result
        
        if (*(edi_1 + 4) == 2 && sub_56eec0(0x215) s> 0)
            result.b = 1
            return result
        
        result.b = 0
        return result
    
    __saved_ebx = "Market_Achievement_OnBuy"
    __saved_esi = 0x36f
    var_14 = "C:\x\ax2017\Jams\Dominion\code\DomCards_Base.cpp"
    ecx = "numCards == 1"
else
    __saved_ebx = "DomAchievementDataGet"
    __saved_esi = 0x1cb1
    var_14 = "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp"
    ecx = "c.contextType == CONTEXT_ACHIEVEMENT"

sub_63b870(eax, &data_801800, ecx, var_14, __saved_esi, __saved_ebx)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
