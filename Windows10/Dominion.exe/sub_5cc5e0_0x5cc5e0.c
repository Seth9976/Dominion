// 函数: sub_5cc5e0
// 地址: 0x5cc5e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg1 == 0xffffffff)
    return 0xb604f0

int32_t var_8
char const* const ecx

if (arg1 s>= 0)
    if (arg1 s< 6)
        return arg1 * 0x4d30 + 0xb604f0
    
    char const* const var_4_1 = "PGUIGet"
    var_8 = 0xa87
    ecx = "(int)who < (int)MAX_PLAYERS_DOM"
else
    char const* const var_4 = "PGUIGet"
    var_8 = 0xa86
    ecx = "who >= 0"

int32_t eax
sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_8, "PGUIGet")

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
