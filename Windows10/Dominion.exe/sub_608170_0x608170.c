// 函数: sub_608170
// 地址: 0x608170
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = arg2
int32_t esi = 0
int32_t result_1 = result
int32_t var_c = arg3
*arg4 = 0
*arg5 = 0

if (result s> 0)
    do
        int32_t ecx = *(arg3 + (esi << 2))
        
        if (ecx == 0)
            sub_63b870(result, &data_801800, "bans[i] != CARD_NONE", 
                "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0xa58a, "CountBanTypes")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        void* eax = sub_571b30(ecx, 0x18)
        result = *(eax + 0x9c) & 0x940
        
        if (((*(eax + 0x98) & 0x7f000400) | result) == 0)
            *arg5 += 1
        else
            *arg4 += 1
        
        arg3 = var_c
        esi += 1
    while (esi s< result_1)

return result
