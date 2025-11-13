// 函数: sub_5108a0
// 地址: 0x5108a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg2 u> 0x48)
    int32_t var_18
    char const* const ecx_2
    
    if (arg2 s>= 0x3e8)
        var_18 = 0x33e
        ecx_2 = "who != PLAYER_NONE"
    else
        var_18 = 0x33d
        ecx_2 = "where >= START_PLAYER_PILES"
    
    sub_63b870(arg1, &data_801800, ecx_2, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_18, 
        "GetPileHead")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (arg2 s>= 0x48)
    sub_591930()

int32_t i = *(arg3 + arg2 * 0x10 + 0x152c)
int32_t result = 0
uint32_t edi_1

for (; i != 0; i = *(edi_1 * 0x64 + arg3 + 0x1aa4))
    edi_1 = zx.d(i.w)
    *(arg4 + (result << 2)) = i
    result += 1
    
    if (edi_1 u>= 0x320)
        sub_591930()

return result
