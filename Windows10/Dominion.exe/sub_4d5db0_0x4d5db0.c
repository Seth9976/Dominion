// 函数: sub_4d5db0
// 地址: 0x4d5db0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8
int32_t eax
char const* const ecx

if (arg2 s>= 0)
    eax = *(arg1 + 0x11a8)
    
    if (eax s<= 8)
        if (arg2 s< eax)
            return arg1 + (arg2 + 0xbd) * 0x18
        
        char const* const var_4_2 = "LogGet"
        var_8 = 0x3b
        ecx = "who < save.setup.numPlayers"
    else
        char const* const var_4_1 = "LogGet"
        var_8 = 0x3a
        ecx = "save.setup.numPlayers <= MAX_PLAYERS_LATEST"
else
    char const* const var_4 = "LogGet"
    var_8 = 0x39
    ecx = "who >= 0"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Jams\Shared\TggGame\code\GameSave.cpp", var_8, 
    "LogGet")

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
