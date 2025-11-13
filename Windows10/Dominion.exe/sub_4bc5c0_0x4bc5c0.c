// 函数: sub_4bc5c0
// 地址: 0x4bc5c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8
char const* const ecx

if (arg2 s< 6)
    if (arg2 s>= 0)
        return arg2 * 0x22c + 0x40 + arg1
    
    char const* const var_4_1 = "PlayerConfigFromSlot"
    var_8 = 0x36e
    ecx = "slot >= 0"
else
    char const* const var_4 = "PlayerConfigFromSlot"
    var_8 = 0x36d
    ecx = "slot < GameSpecific_MaxPlayers()"

int32_t eax
sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp", var_8, 
    "PlayerConfigFromSlot")

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
