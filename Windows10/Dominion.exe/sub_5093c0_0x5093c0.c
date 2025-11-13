// 函数: sub_5093c0
// 地址: 0x5093c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
char const* const var_14
int32_t __saved_esi
char const* const __saved_ebx
char* ecx_1

if (*eax == 5)
    void* edi_1 = *(eax + 0x18)
    
    if (arg2 == 1)
        uint32_t esi_1 = zx.d((*arg1).w)
        int32_t ebx = *(sub_573400() + 4)
        
        if (esi_1 u>= 0x320)
            sub_591930()
        
        int32_t result
        
        if (*(esi_1 * 0x64 + ebx + 0x1a4c) == 0x103 && *(edi_1 + 0x24) s< 4)
            int32_t edx_1
            result, edx_1 = sub_509340()
            int32_t ecx_2 = *(edi_1 + 0x24)
            *(edi_1 + (ecx_2 << 3) + 4) = result
            *(edi_1 + (ecx_2 << 3) + 8) = edx_1
            *(edi_1 + 0x24) += 1
        
        result.b = 0
        return result
    
    __saved_ebx = "Remodel_Achievement_OnTrash"
    __saved_esi = 0x2e7
    var_14 = "C:\x\ax2017\Jams\Dominion\code\DomCards_Base.cpp"
    ecx_1 = "numCards == 1"
else
    __saved_ebx = "DomAchievementDataGet"
    __saved_esi = 0x1cb1
    var_14 = "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp"
    ecx_1 = "c.contextType == CONTEXT_ACHIEVEMENT"

sub_63b870(eax, &data_801800, ecx_1, var_14, __saved_esi, __saved_ebx)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
