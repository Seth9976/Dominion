// 函数: sub_5f1ae0
// 地址: 0x5f1ae0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = sub_4b9480()

if (arg3 != eax)
    sub_63b870(eax, &data_801800, "&save == &ActiveGame()", 
        "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x74da, "GameSpecific_GetRank")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* eax_1 = sub_5cc5e0(arg2)
int32_t result = *(eax_1 + 0x20)
*arg5 = *(eax_1 + 0x24)
*arg6 = *(eax_1 + 0x28)

if (arg4 == 0)
    if (sub_4c3500(arg3, arg2) != 0)
        return 0xffffffff
    
    int32_t i = 0
    
    if (*(arg3 + 0x11a8) s> 0)
        do
            if (sub_4c3500(arg3, i) != 0 && *(sub_5cc5e0(i) + 0x20) s< result)
                result -= 1
            
            i += 1
        while (i s< *(arg3 + 0x11a8))

return result
