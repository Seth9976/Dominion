// 函数: sub_4c5930
// 地址: 0x4c5930
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

sub_4b8f10(arg1)
void* result = data_cc8d5c
char const* const var_10
int32_t var_c
char const* const var_8
char* ecx

if (result != 0)
    if (*(result + 0x5068) != 2 || *(result + 0x506c) != arg1)
        return sub_4bc4b0(arg1) __tailcall
    
    if (*(result + 0x5040) == 0)
        *(result + 0x5040) = arg1
        return result
    
    var_8 = "QueueRemoveMultiplayerGame"
    var_c = 0x1a6f
    var_10 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
    ecx = "c.queueRemoveMultiplayerGame == GAMEIDX_NONE"
else
    var_8 = "GetClient"
    var_c = 0x7b
    var_10 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx = "gClient"

sub_63b870(result, &data_801800, ecx, var_10, var_c, var_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
