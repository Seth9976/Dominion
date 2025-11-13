// 函数: sub_4bfcf0
// 地址: 0x4bfcf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_1 = *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x42b4)
char const* const var_c
int32_t var_8
char const* const var_4
void* eax_4
char* ecx_1

if (eax_1 == 0)
    eax_4 = data_cc8d5c
    
    if (eax_4 != 0)
        int32_t ecx_2 = *(eax_4 + 0x1c)
        int32_t result = 0
        
        if (ecx_2 != 6)
            result.b = ecx_2 != 8
        
        return result
    
    var_4 = "GetClient"
    var_8 = 0x7b
    var_c = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_1 = "gClient"
else
    if (eax_1 == 1)
        return 3
    
    eax_4 = eax_1 - 2
    
    if (eax_1 == 2)
        return 2
    
    var_4 = "GetUserOnlineState"
    var_8 = 0xfc5
    var_c = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
    ecx_1 = "Halt"

sub_63b870(eax_4, &data_801800, ecx_1, var_c, var_8, var_4)

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
