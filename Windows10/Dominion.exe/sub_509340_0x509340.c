// 函数: sub_509340
// 地址: 0x509340
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
int32_t var_c
char* ecx

if (*eax == 5)
    int32_t* edx_1 = *(eax + 8)
    
    if (edx_1 != 0)
        if (*edx_1 == 2)
            edx_1[0xb]
            return edx_1[0xa]
        
        char const* const var_8_2 = "AchievementContextID"
        var_c = 0x2e0
        ecx = "c.parent->contextType == CONTEXT_CARD"
    else
        char const* const var_8_1 = "AchievementContextID"
        var_c = 0x2df
        ecx = "c.parent"
else
    char const* const var_8 = "AchievementContextID"
    var_c = 0x2de
    ecx = "c.contextType == CONTEXT_ACHIEVEMENT"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomCards_Base.cpp", var_c, 
    "AchievementContextID")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
