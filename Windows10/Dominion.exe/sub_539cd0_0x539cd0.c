// 函数: sub_539cd0
// 地址: 0x539cd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()

if (*eax != 5)
    sub_63b870(eax, &data_801800, "c.contextType == CONTEXT_ACHIEVEMENT", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x1cb1, "DomAchievementDataGet")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* esi = *(eax + 0x18)
int32_t eax_3 = *(*(sub_573400() + 4) + 0x19e4)

if (eax_3 != *(esi + 4))
    *(esi + 4) = 0
    *(esi + 4) = eax_3

*(esi + 8) += arg1
int32_t result
result.b = *(esi + 8) s>= 6
return result
