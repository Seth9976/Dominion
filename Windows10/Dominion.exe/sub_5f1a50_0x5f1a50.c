// 函数: sub_5f1a50
// 地址: 0x5f1a50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* result = sub_4b9480()

if (arg1 != result)
    sub_63b870(result, &data_801800, "&save == &ActiveGame()", 
        "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x74d4, "GameSpecific_IsGameOver")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (data_b824dc != 0)
label_5f1a65:
    result.b = 1
    return result

result = sub_4b9480()
int32_t ecx = 0
int32_t esi_1 = result[0x46a]

if (esi_1 s> 0)
    void* edx_1 = &result[0x1a]
    
    do
        result = *edx_1
        
        if (result == 0x3e9)
            goto label_5f1a65
        
        if (result == 0x3ec)
            goto label_5f1a65
        
        if (result == 0x3ed)
            goto label_5f1a65
        
        ecx += 1
        edx_1 += 0x22c
    while (ecx s< esi_1)

result.b = 0
return result
