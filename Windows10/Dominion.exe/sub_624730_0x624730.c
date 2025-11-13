// 函数: sub_624730
// 地址: 0x624730
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t result_1 = arg1
uint32_t result

if (sub_4b9370().b != 0)
    result = data_cc8d5c
    char const* const var_18
    int32_t var_14
    char const* const var_10
    char* ecx
    
    if (result == 0)
    label_62474b:
        var_10 = "GetClient"
        var_14 = 0x7b
        var_18 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
        ecx = "gClient"
    label_624872:
        sub_63b870(result, &data_801800, ecx, var_18, var_14, var_10)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (*(result + 0x5068) != 1)
    label_624782:
        void* ecx_3
        
        if (data_b824dc == 0)
            result = sub_4b9480()
            int32_t ecx_2 = 0
            int32_t esi_1 = *(result + 0x11a8)
            
            if (esi_1 s> 0)
                uint32_t* edx_2 = result + 0x68
                
                do
                    result = *edx_2
                    
                    if (result == 0x3e9)
                        goto label_6247ca
                    
                    if (result == 0x3ec)
                        goto label_6247ca
                    
                    if (result == 0x3ed)
                        goto label_6247ca
                    
                    ecx_2 += 1
                    edx_2 = &edx_2[0x8b]
                while (ecx_2 s< esi_1)
            
            ecx_3 = data_cc8d5c
            goto label_6247e6
        
    label_6247ca:
        result = sub_4b9480()
        ecx_3 = data_cc8d5c
        
        if (ecx_3 == 0)
            goto label_62474b
        
        if (*(ecx_3 + 0x5068) != 2)
        label_6247e6:
            
            if (ecx_3 == 0)
                goto label_62474b
            
            if (sub_5a0c70(*(ecx_3 + 0x7590), &result_1) != 0xffffffff)
                result = sub_4b9480()
                void* ecx_5 = data_cc8d5c
                uint32_t result_2 = result
                
                if (ecx_5 == 0)
                    goto label_62474b
                
                if (*(ecx_5 + 0x5068) == 0)
                    var_10 = "GetActiveConfig"
                    var_14 = 0x33b6
                    var_18 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                    ecx = "c.activeGame.gameType != GAME_NONE"
                    goto label_624872
                
                result = sub_4e3a30(0xbdfb60)
                
                if (result != 0)
                    bool cond:0_1 = result != 1
                    result = result_1
                    
                    if (cond:0_1 || result != 2)
                        if ((*(result_2 + 0x20) & 4) == 0)
                            result.b = 1
                            return result
                        
                        result.b = result != 2
                        return result
    else if (sub_5b0500(sub_4b93f0()[7], &result_1) s<= 0)
        goto label_624782

result.b = 0
return result
