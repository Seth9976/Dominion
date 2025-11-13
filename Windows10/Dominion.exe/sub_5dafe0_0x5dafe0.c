// 函数: sub_5dafe0
// 地址: 0x5dafe0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = data_b604e0

if (result == 0xffffffff)
    result = 0

if (data_b80b44 == result)
    void* ecx_1 = data_cc8d5c
    
    if (ecx_1 == 0)
        sub_63b870(result, &data_801800, "gClient", 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (data_b80b48 == *(ecx_1 + 0x7590))
        result = data_b80b08
        
        if (result == 3 || result == 0xfd || result == 2)
            result.b = 1
            return result

result.b = 0
return result
