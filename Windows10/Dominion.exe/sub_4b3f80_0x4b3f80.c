// 函数: sub_4b3f80
// 地址: 0x4b3f80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_4 = ecx
int32_t eax = sub_4b3f20(ecx)
char const* const var_10
int32_t var_c
char const* const var_8
char* ecx_1

if (eax != 0xffffffff)
    int32_t ecx_2 = data_cc8d5c
    
    if (ecx_2 != 0)
        return (eax << 5) + 0x28 + ecx_2
    
    var_8 = "GetClient"
    var_c = 0x7b
    var_10 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_1 = "gClient"
else
    var_8 = "LookupFriend"
    var_c = 0xa75
    var_10 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp"
    ecx_1 = "idx != -1"

sub_63b870(eax, &data_801800, ecx_1, var_10, var_c, var_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
