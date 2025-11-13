// 函数: sub_5e97a0
// 地址: 0x5e97a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_4d5db0(arg3, arg2)
int32_t var_50 = *(eax + 0x10)
int32_t var_54 = arg2
uint32_t eax_1 = sub_63b5f0("submit network action who:%d pos:%d")
char const* const var_58
int32_t var_54_1
char const* const var_50_1
char* ecx

if (*arg3 s> 0)
    eax_1 = data_cc8d5c
    uint32_t var_c_1 = eax_1
    
    if (eax_1 != 0)
        eax_1 = *(eax_1 + 0x5068)
        
        if (eax_1 != 2 && (eax_1 != 1 || (arg3[8] & 0x104) == 0))
            var_50_1 = "SubmitNetworkAction"
            var_54_1 = 0x57cb
            ecx = "c.activeGame.gameType == GAME_NETWORK || (c.activeGame.gameType == GAME_LOCAL && "
            "(save.setup.config.flags & (GAMEFLAG_WEEKLY_CAMPAIGN | GAMEFLAG"
        else if (arg5 != 2)
        label_5e985a:
            eax_1 = *(eax + 0x10)
            
            if (eax_1 == *(eax + 0xc))
                sub_5e94e0(eax, arg4)
                int32_t edx_3 = *(eax + 0x10) - eax_1
                int32_t ecx_4 = *eax + eax_1
                *(var_c_1 + 0xc) += 1
                char* var_3c = *(var_c_1 + 0xc)
                int32_t var_38 = *arg3
                int32_t var_34 = arg2
                uint32_t var_30 = eax_1
                int32_t var_20 = arg5
                int32_t var_1c = *arg4
                int32_t var_24 = edx_3
                int32_t var_2c = ecx_4
                return sub_68b720(&var_3c, 0xf42b0, *(var_c_1 + 0x14), data_1597ce0, &var_3c)
            
            var_50_1 = "SubmitNetworkAction"
            var_54_1 = 0x57d3
            ecx = "log.logSizePlayed == log.logSizeWritten"
        else
            eax_1 = sub_4b9680(&arg3[2], arg2)
            
            if (*(eax_1 + 0x14) == 3)
                goto label_5e985a
            
            var_50_1 = "SubmitNetworkAction"
            var_54_1 = 0x57cf
            ecx = "IsAI(save, who) == true"
        
        var_58 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    else
        var_50_1 = "GetClient"
        var_54_1 = 0x7b
        var_58 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
        ecx = "gClient"
else
    var_50_1 = "SubmitNetworkAction"
    var_54_1 = 0x57c7
    ecx = "save.id > 0"
    var_58 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"

sub_63b870(eax_1, &data_801800, ecx, var_58, var_54_1, var_50_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
