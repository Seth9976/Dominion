// 函数: sub_4b93f0
// 地址: 0x4b93f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx = data_cc8d5c
char const* const var_10
int32_t var_c
char const* const var_8
int32_t eax
char* ecx_1

if (ecx != 0)
    eax = *(ecx + 0x5068) - 1
    
    if (eax u> 3)
        var_8 = "ActiveGameSafe"
        var_c = 0x129b
        var_10 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp"
        ecx_1 = "Halt"
    else
        switch (eax)
            case 0, 2, 3
                return ecx + 0x5098
            case 1
                return sub_4b9300(ecx + 0x5068)
else
    var_8 = "GetClient"
    var_c = 0x7b
    var_10 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_1 = "gClient"

sub_63b870(eax, &data_801800, ecx_1, var_10, var_c, var_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
