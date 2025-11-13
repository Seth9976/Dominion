// 函数: sub_4c7c50
// 地址: 0x4c7c50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_4 = arg1
int32_t eax = sub_4c52c0(arg1 + 8)

if (eax u> 0x13)
    sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp", 
        0x1d2b, "GameIsGreen")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

uint32_t result

switch (eax)
    case 0, 1, 2, 0x10, 0x12
        result.b = 1
        return result
    case 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x11, 0x13
        result.b = 0
        return result
