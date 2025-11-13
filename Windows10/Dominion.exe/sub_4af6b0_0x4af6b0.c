// 函数: sub_4af6b0
// 地址: 0x4af6b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = *(arg2 + 0xc)

if (result == 3)
    if (arg5 != 1)
        return sub_6064b0(arg3, arg4)
    
    return sub_4ad010(*(arg2 + 0x2c), *(arg2 + 0x30))

if (result == 1)
    if (*(arg2 + 0x18) == 0)
        return sub_61b5c0(result, *(arg2 + 0x10), arg3, arg5)
    
    return sub_4af4f0(result, arg2 + 0x14, arg3, arg5)

if (result == 2)
    return result

sub_63b870(result, &data_801800, "Halt", "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp", 
    0x2c7, "PressAction")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
