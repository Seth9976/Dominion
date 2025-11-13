// 函数: sub_6068a0
// 地址: 0x6068a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx = data_be1e04

if (edx s>= 0xff)
    int32_t eax
    sub_63b870(eax, &data_801800, "gDomClient.numCardArtToPreload < MAX_ELEMENTS - 1", 
        "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0xa3db, "QueuePreloadCardArt")
    
    if (sub_63bc30() == 0)
        noreturn sub_63bb00() __tailcall
    
    breakpoint

int32_t result = 0

if (edx s> 0)
    do
        if (*((result << 2) + &data_be1a04) == arg1)
            return result
        
        result += 1
    while (result s< edx)

*((edx << 2) + &data_be1a04) = arg1
data_be1e04 += 1
return result
