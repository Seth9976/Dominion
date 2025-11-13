// 函数: sub_509190
// 地址: 0x509190
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
int32_t var_c
char const* const ecx

if (*eax == 5)
    int32_t* ecx_1 = *(eax + 8)
    
    if (ecx_1 != 0)
        if (*ecx_1 == 2)
            int32_t edx = 0
            
            if (arg1 s> 0)
                do
                    ecx_1 = ecx_1[2]
                    
                    if (ecx_1 == 0)
                        break
                    
                    if (*ecx_1 != 2)
                        break
                    
                    if (edx == arg1 - 1)
                        return ecx_1[4]
                    
                    edx += 1
                while (edx s< arg1)
            
            return 0
        
        char const* const var_8_2 = "AchievementCardSourcePlay"
        var_c = 0x29c
        ecx = "c.parent->contextType == CONTEXT_CARD"
    else
        char const* const var_8_1 = "AchievementCardSourcePlay"
        var_c = 0x29b
        ecx = "c.parent"
else
    char const* const var_8 = "AchievementCardSourcePlay"
    var_c = 0x29a
    ecx = "c.contextType == CONTEXT_ACHIEVEMENT"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomCards_Base.cpp", var_c, 
    "AchievementCardSourcePlay")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
