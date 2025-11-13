// 函数: sub_4c3550
// 地址: 0x4c3550
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg3

if (sub_4c3500(arg3, arg2) == 0 && sub_5f1a50(arg3) != 0)
    int32_t ebx = 0
    int32_t i = 0
    
    if (*(arg3 + 0x11a8) s> 0)
        do
            int32_t eax_2 = sub_4c3500(arg3, i)
            
            if (eax_2.b == 0)
                int32_t eax_3 = sub_5f1ae0(eax_2, i, arg3, 1, arg4, arg5)
                
                if (ebx == 0 || eax_3 s< ebx)
                    ebx = eax_3
            
            i += 1
        while (i s< *(arg3 + 0x11a8))
    
    int32_t* eax_4 = sub_4b9480()
    
    if (arg3 == eax_4)
        void* eax_5 = sub_5cc5e0(arg2)
        bool cond:0 = *(eax_5 + 0x20) == ebx
        *arg4 = *(eax_5 + 0x24)
        *arg5 = *(eax_5 + 0x28)
        int32_t result
        result.b = cond:0
        return result
    
    sub_63b870(eax_4, &data_801800, "&save == &ActiveGame()", 
        "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x74da, "GameSpecific_GetRank")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

return 0
