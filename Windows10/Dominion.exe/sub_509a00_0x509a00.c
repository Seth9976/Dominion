// 函数: sub_509a00
// 地址: 0x509a00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
void* eax = sub_573400()
char const* const var_24
int32_t var_20
char const* const var_1c
char* ecx_1

if (*eax == 5)
    void* edi_1 = *(eax + 0x18)
    int32_t edx_1
    eax, edx_1 = sub_509340()
    int32_t esi_1 = *(edi_1 + 0x24)
    int32_t ecx_2 = 0
    
    if (esi_1 s<= 0)
        eax.b = 0
        return eax
    
    while (*(edi_1 + (ecx_2 << 3) + 4) != eax || *(edi_1 + (ecx_2 << 3) + 8) != edx_1)
        ecx_2 += 1
        
        if (ecx_2 s>= esi_1)
            eax.b = 0
            return eax
    
    if (arg2 == 1)
        uint32_t esi_3 = zx.d((*arg1).w)
        int32_t ebx_1 = *(sub_573400() + 4)
        
        if (esi_3 u>= 0x320)
            sub_591930()
        
        int32_t ecx_3 = *(esi_3 * 0x64 + ebx_1 + 0x1a4c)
        
        if (ecx_3 == 0x106)
            int32_t eax_3
            eax_3.b = 1
            return eax_3
        
        eax = *(edi_1 + 0x48)
        
        if (eax s< 8)
            *(edi_1 + (eax << 2) + 0x28) = ecx_3
            *(edi_1 + 0x48) += 1
        
        eax.b = 0
        return eax
    
    var_1c = "Mine_Achievement_OnGain"
    var_20 = 0x3a1
    var_24 = "C:\x\ax2017\Jams\Dominion\code\DomCards_Base.cpp"
    ecx_1 = "numCards == 1"
else
    var_1c = "DomAchievementDataGet"
    var_20 = 0x1cb1
    var_24 = "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp"
    ecx_1 = "c.contextType == CONTEXT_ACHIEVEMENT"

sub_63b870(eax, &data_801800, ecx_1, var_24, var_20, var_1c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
