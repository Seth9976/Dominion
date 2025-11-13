// 函数: sub_624650
// 地址: 0x624650
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax

if (sub_4b9370().b != 0)
    if (data_b824dc == 0)
        int32_t* eax_1 = sub_4b9480()
        int32_t ecx_1 = 0
        int32_t esi_1 = eax_1[0x46a]
        
        if (esi_1 s> 0)
            void* edx_1 = &eax_1[0x1a]
            
            do
                int32_t eax_2 = *edx_1
                
                if (eax_2 == 0x3e9)
                    goto label_6246a9
                
                if (eax_2 == 0x3ec)
                    goto label_6246a9
                
                if (eax_2 == 0x3ed)
                    goto label_6246a9
                
                ecx_1 += 1
                edx_1 += 0x22c
            while (ecx_1 s< esi_1)
        
        eax = data_cc8d5c
        goto label_6246d3
    
label_6246a9:
    sub_4b9480()
    eax = data_cc8d5c
    char const* const var_10
    int32_t var_c
    char const* const var_8
    char* ecx_2
    
    if (eax == 0)
    label_6246b7:
        var_8 = "GetClient"
        var_c = 0x7b
        var_10 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
        ecx_2 = "gClient"
    label_62470e:
        sub_63b870(eax, &data_801800, ecx_2, var_10, var_c, var_8)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (*(eax + 0x5068) != 2)
    label_6246d3:
        
        if (eax == 0)
            goto label_6246b7
        
        if (*(eax + 0x5068) != 0)
            int32_t eax_3
            eax_3.b = sub_4e3a30(0xbdfb60) != 0
            return eax_3
        
        var_8 = "GetActiveConfig"
        var_c = 0x33b6
        var_10 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        ecx_2 = "c.activeGame.gameType != GAME_NONE"
        goto label_62470e

eax.b = 0
return eax
