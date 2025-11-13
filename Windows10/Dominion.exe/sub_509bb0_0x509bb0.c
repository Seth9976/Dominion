// 函数: sub_509bb0
// 地址: 0x509bb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char const* const __saved_edi
int32_t __saved_esi
char const* const __saved_ebx
void* eax
char* ecx

if (arg2 == 1)
    eax = sub_573400()
    
    if (*eax == 5)
        void* edi = *(eax + 0x18)
        uint32_t esi_1 = zx.d((*arg1).w)
        int32_t ebx = *(sub_573400() + 4)
        
        if (esi_1 u>= 0x320)
            sub_591930()
        
        int32_t ecx_1 = *(edi + 0x14)
        int32_t edx = *(esi_1 * 0x64 + ebx + 0x1a4c)
        int32_t eax_4 = 0
        
        if (ecx_1 s> 0)
            do
                if (*(edi + (eax_4 << 2) + 4) == edx)
                    eax_4.b = 0
                    return eax_4
                
                eax_4 += 1
            while (eax_4 s< ecx_1)
        
        if (ecx_1 s>= 4)
            *(edi + 0x14) = ecx_1 + 1
            int32_t eax_6
            eax_6.b = ecx_1 == 4
            return eax_6
        
        *(edi + (ecx_1 << 2) + 4) = edx
        *(edi + 0x14) += 1
        int32_t eax_5
        eax_5.b = *(edi + 0x14) == 5
        return eax_5
    
    __saved_ebx = "DomAchievementDataGet"
    __saved_esi = 0x1cb1
    __saved_edi = "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp"
    ecx = "c.contextType == CONTEXT_ACHIEVEMENT"
else
    __saved_ebx = "Artisan_Achievement_OnGain"
    __saved_esi = 0x409
    __saved_edi = "C:\x\ax2017\Jams\Dominion\code\DomCards_Base.cpp"
    ecx = "numCards == 1"

sub_63b870(eax, &data_801800, ecx, __saved_edi, __saved_esi, __saved_ebx)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
