// 函数: sub_618760
// 地址: 0x618760
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_4 = arg1
int32_t result

if (arg2 != 0xffffffff)
    while (true)
        int32_t* ecx = data_cc8d5c
        char const* const var_18
        int32_t var_14
        char const* const var_10
        char* ecx_5
        
        if (ecx == 0)
            var_10 = "GetClient"
            var_14 = 0x7b
            var_18 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
            ecx_5 = "gClient"
        else
            result = *ecx
            int32_t ecx_1 = ecx[1]
            arg1[2] = result
            arg1[3] = ecx_1
            arg1[1] = arg2
            
            if (arg2 s< 0)
                var_10 = "SMDefLookup"
                var_14 = 0xce66
                var_18 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                ecx_5 = "state >= 0"
            else
                int32_t ecx_2 = *arg1
                result = arg2 * 3
                void* esi_1 = ecx_2 + (result << 3)
                
                if (*(ecx_2 + (result << 3)) != arg2)
                    var_10 = "SMDefLookup"
                    var_14 = 0xce67
                    var_18 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                    ecx_5 = "defs[state].state == state"
                else
                    (*(esi_1 + 0x10))()
                    result = *(esi_1 + 8) | *(esi_1 + 0xc)
                    
                    if (result != 0)
                        result.b = 1
                        return result
                    
                    arg2 = *(esi_1 + 4)
                    
                    if (arg2 == 0xffffffff)
                        break
                    
                    continue
        
        sub_63b870(result, &data_801800, ecx_5, var_18, var_14, var_10)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

*arg1 = 0
result.b = 0
return result
