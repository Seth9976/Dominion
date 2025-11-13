// 函数: sub_5ee870
// 地址: 0x5ee870
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = 0

if (data_b81810 s> 0)
    do
        void* ecx_1
        
        if (i != 0xffffffff)
            int32_t var_c
            char const* const ecx_3
            
            if (i s< 0)
                char const* const var_8_1 = "PGUIGet"
                var_c = 0xa86
                ecx_3 = "who >= 0"
            label_5ee8dc:
                sub_63b870(i, &data_801800, ecx_3, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
                    var_c, "PGUIGet")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            if (i s>= 6)
                char const* const var_8 = "PGUIGet"
                var_c = 0xa87
                ecx_3 = "(int)who < (int)MAX_PLAYERS_DOM"
                goto label_5ee8dc
            
            ecx_1 = i * 0x4d30 + &data_b64570
        else
            ecx_1 = &data_b64570
        
        i += 1
        *ecx_1 = 0
    while (i s< data_b81810)

return i
