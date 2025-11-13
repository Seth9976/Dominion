// 函数: sub_4ba400
// 地址: 0x4ba400
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if ((sub_4b9480()[8].b & 4) == 0)
    int32_t* eax
    eax.b = 0
    return eax

void* eax_1 = data_cc8d5c
char const* const var_10
int32_t var_c
char const* const var_8
char* ecx

if (eax_1 != 0)
    int64_t xmm0_1 = *(eax_1 + 0x5048)
    eax_1 = *(eax_1 + 0x5050)
    *arg1 = xmm0_1
    arg1[1].d = eax_1
    
    if (*arg1 != 0)
        eax_1.b = 1
        return eax_1
    
    var_8 = "GetActiveGameDate"
    var_c = 0x1637
    var_10 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp"
    ecx = "date.year != 0"
else
    var_8 = "GetClient"
    var_c = 0x7b
    var_10 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx = "gClient"

sub_63b870(eax_1, &data_801800, ecx, var_10, var_c, var_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
