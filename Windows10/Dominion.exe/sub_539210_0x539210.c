// 函数: sub_539210
// 地址: 0x539210
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax_3 = sub_573400()

if (*eax_3 != 5)
    sub_63b870(eax_3, &data_801800, "c.contextType == CONTEXT_ACHIEVEMENT", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x1cb1, "DomAchievementDataGet")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* esi = *(eax_3 + 0x18)
int32_t result = *(*(sub_573400() + 4) + 0x19e4)

if (result != *(esi + 4))
    *(esi + 4) = 0
    *(esi + 4) = result

*(esi + 8) += 1
result.b = *(esi + 8) s>= 3
return result
