// 函数: sub_5dc7e0
// 地址: 0x5dc7e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = *(arg1 + 0x2c)

if (result == 0)
    int32_t ecx = *(arg1 + 0xa0)
    
    if (ecx != 0xffffffff)
        result = data_b604e0
        
        if (result == 0xffffffff)
            result = 0
        
        if (ecx != result)
            result.b = 1
            return result
else if (result != 3)
    sub_63b870(result, &data_801800, "gfx.type == DOMGFX_CARD || gfx.type == DOMGFX_PILE", 
        "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x38e0, "IsOpponentCard")
    
    if (sub_63bc30() == 0)
        noreturn sub_63bb00() __tailcall
    
    breakpoint

result.b = 0
return result
