// 函数: sub_582de0
// 地址: 0x582de0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t edi = zx.d(arg2.w)

if (edi u>= 0x320)
    sub_591930()

int32_t result = edi * 0x64
int32_t ecx = *(result + arg3 + 0x1a50)

if (ecx == 0x3eb)
    int32_t eax = *(result + arg3 + 0x1a70)
    
    if (eax == 0xffffffff)
        sub_63b870(eax, &data_801800, "who != PLAYER_NONE", 
            "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x33e, "GetPileHead")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (*(eax * 0x5a30 + arg3 + 0x172d4) != arg2)
        result.b = 1
        return result
    
    goto label_582e34

label_582e34:

if (arg4 != 7)
    if (ecx != 0x3e9)
        if (ecx != 0x451 || arg4 != 0x3e9)
            result.b = ecx != arg4
            return result
    else if (arg4 != 0x451)
        result.b = ecx != arg4
        return result
else if (ecx - 7 u> 0x40)
    result.b = 1
    return result

result.b = 0
return result
