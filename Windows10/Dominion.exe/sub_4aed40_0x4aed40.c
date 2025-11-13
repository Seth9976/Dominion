// 函数: sub_4aed40
// 地址: 0x4aed40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = data_cc8dc0
char const* const var_10
int32_t var_c
char const* const var_8
void* result
char* ecx_1

if (esi != 0)
    void* ecx
    ecx.b = *(esi + 0x18)
    result.b = ecx.b == 0
    *(esi + 0x18) = result.b
    
    if (ecx.b != 0)
        int32_t ecx_2 = 0x300
        
        if (*(esi + 0x1c) s> 0x300)
            ecx_2 = *(esi + 0x1c)
        
        *(data_cf65b8 + 0x18) = ecx_2
        *(data_cf65b8 + 0x14) = sub_4aecd0(ecx_2, *(esi + 0x14))
    
    ecx.b = *(esi + 0x18)
    sub_63bdd0(ecx.b)
    sub_4d6a20()
    result = data_cc8d5c
    
    if (result != 0)
        *(result + 0x75ac) = 1
        return result
    
    var_8 = "GetClient"
    var_c = 0x7b
    var_10 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_1 = "gClient"
else
    var_8 = "GetLocalSettings"
    var_c = 0x5fb
    var_10 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
    ecx_1 = "gGameSettings.localSettings"

sub_63b870(result, &data_801800, ecx_1, var_10, var_c, var_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
