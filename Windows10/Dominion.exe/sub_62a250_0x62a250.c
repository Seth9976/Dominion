// 函数: sub_62a250
// 地址: 0x62a250
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result
int32_t edx
result, edx = sub_66b600(sub_64e7a0(sub_4bb9f0(0x1a979d0, arg1, "tbl_logEntries")), 0xffffffff)

if (result == 0 && arg2 s< 0)
    return result

void* eax_2 = data_cc8d5c
char const* const var_30
int32_t var_2c_1
char const* const var_28_1
char* ecx_2

if (eax_2 == 0)
label_62a298:
    var_28_1 = "GetClient"
    var_2c_1 = 0x7b
    var_30 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_2 = "gClient"
else if (*(eax_2 + 0x5068) != 0)
    eax_2 = sub_5da130(0xb80ad8, 0xbdfb60)
    
    if (data_cc8d5c == 0)
        goto label_62a298
    
    void* eax_3 = eax_2
    
    if (eax_2 == 0)
        int32_t var_14_1 = 0
    label_62a303:
        int32_t edx_1 = data_1597e30
        int32_t eax_4 = result + arg2
        int32_t esi_1 = arg2 + edx
        char ecx_4 = arg1.b
        int32_t var_c = eax_4
        int32_t var_8_1 = esi_1
        
        if (esi_1 s< edx_1)
            int32_t var_28_3 = 0
            data_1724a4c = 1
            return sub_66b420(eax_4, &var_c, ecx_4)
        
        int32_t var_8_2 = edx_1
        int32_t edx_2 = edx_1 - esi_1
        int32_t edx_3 = edx_2 + eax_4
        int32_t var_28_2 = 1
        
        if (edx_2 + eax_4 s< 0)
            edx_3 = 0
        
        data_1724a4c = 0
        var_c = edx_3
        return sub_66b420(0, &var_c, ecx_4)
    
    eax_2 = eax_3 - 1
    
    if (eax_3 == 1)
        sub_5a04d0(eax_2 + 1)
        goto label_62a303
    
    var_28_1 = "DomLogRange"
    var_2c_1 = 0x1383
    var_30 = "C:\x\ax2017\Jams\Dominion\code\DomLog.cpp"
    ecx_2 = "Halt"
else
    var_28_1 = "GetActiveConfig"
    var_2c_1 = 0x33b6
    var_30 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx_2 = "c.activeGame.gameType != GAME_NONE"

sub_63b870(eax_2, &data_801800, ecx_2, var_30, var_2c_1, var_28_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
