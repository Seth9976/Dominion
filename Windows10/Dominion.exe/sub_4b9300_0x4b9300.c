// 函数: sub_4b9300
// 地址: 0x4b9300
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_4 = arg1
char const* const var_10
int32_t var_c
char const* const var_8
int32_t eax
char* ecx

if (*arg1 == 2)
    eax = arg1[1]
    void* ecx_1 = data_cc8d5c
    
    if (ecx_1 != 0)
        return sub_4bb050(ecx_1 + 0x507c, eax)
    
    var_8 = "GetClient"
    var_c = 0x7b
    var_10 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx = "gClient"
else
    var_8 = "GetNetworkGame"
    var_c = 0x1283
    var_10 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp"
    ecx = "handle.gameType == GAME_NETWORK"

sub_63b870(eax, &data_801800, ecx, var_10, var_c, var_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
