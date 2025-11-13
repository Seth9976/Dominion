// 函数: sub_508fd0
// 地址: 0x508fd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax_2 = sub_573400()

if (*eax_2 != 5)
    sub_63b870(eax_2, &data_801800, "c.contextType == CONTEXT_ACHIEVEMENT", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x1cb1, "DomAchievementDataGet")
    
    if (sub_63bc30() == 0)
        noreturn sub_63bb00() __tailcall
    
    breakpoint

int32_t* result = *(eax_2 + 0x18) + 4
int32_t ecx = result[1]

if (ecx s>= 5 && ecx == *result)
    result.b = 1
    return result

result.b = 0
return result
