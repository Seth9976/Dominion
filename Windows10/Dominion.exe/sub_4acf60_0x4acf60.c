// 函数: sub_4acf60
// 地址: 0x4acf60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i

if (arg2 == 2)
    int32_t edx_4 = *(arg1 + 0xbd4)
    i = edx_4 - 1
    
    if (edx_4 - 1 s>= 0)
        void* eax_9 = (i << 4) + 0x25c + arg1
        
        while (i s< *(arg1 + 0xbbc))
            if (*eax_9 != 0)
                goto label_4acf9d
            
            eax_9 -= 0x10
            int32_t i_1 = i
            i -= 1
            
            if (i_1 - 1 s< 0)
                return sub_4ad010(arg1, 0xffffffff) __tailcall
else
    if (arg2 != 4)
        int32_t eax
        sub_63b870(eax, &data_801800, "Halt", 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameCardset.cpp", 0xcd, "CardsetSwipe")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t edx_2 = *(arg1 + 0xbd4)
    i = edx_2 + 1
    
    if (edx_2 + 1 s>= 0)
        void* eax_4 = (i << 4) + 0x25c + arg1
        
        while (i s< *(arg1 + 0xbbc))
            if (*eax_4 != 0)
                goto label_4acf9d
            
            eax_4 += 0x10
            int32_t i_2 = i
            i += 1
            
            if (i_2 + 1 s< 0)
                break

i = 0xffffffff
label_4acf9d:
return sub_4ad010(arg1, i) __tailcall
