// 函数: sub_5d0dc0
// 地址: 0x5d0dc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = sub_610fb0(arg1)

if (result.b != 0)
    result = *(arg1 + 0x2c)
    
    switch (result)
        case nullptr
            return sub_5d0ab0(arg1, 0) __tailcall
        case 1
            if (*(arg1 + 0x174) == 1)
                return sub_5d0b70(arg1) __tailcall
        case 3
            return sub_5d09f0(arg1, 0) __tailcall
        case 4, 5
            nop
        default
            sub_63b870(result, &data_801800, "Halt", 
                "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x180e, "DomGfxInspect")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn

return result
