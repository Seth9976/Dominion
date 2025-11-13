// 函数: sub_5ca330
// 地址: 0x5ca330
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = arg3
void* ebx = arg2
void* var_d38 = eax_2
void* var_d30 = ebx
char const* const var_d5c
int32_t var_d58
char const* const var_d54
char* ecx_1

if (*eax_2 != 0xffffffff)
    void var_d28
    eax_2 = sub_5939a0(&var_d28, arg4)
    float var_d34_1 = 1f
    int32_t var_ce8
    
    if (var_ce8 == 0x18)
        var_d34_1 = 0f
    
    int32_t edi_1 = 0
    int32_t var_d40_1 = 0
    
    if (*(ebx + 0xd38) s<= 0)
    label_5ca471:
        int32_t var_cd8
        sub_4f49c0(eax_2, &var_d28, ebx, var_cd8)
        sub_4f4d70(&var_d28, var_d38 + 0xc, var_d34_1)
        uint32_t result = sub_4f50e0(ebx, &var_d28)
        __builtin_memcpy(arg4, &var_d28, 0xd18)
        CookieCheckFunction(result)
        return result
    
    void* esi_1 = &data_1779fb0
    int32_t* ecx_3 = 0x11b8
    void* var_d3c_1 = &data_1779fb0
    
    while (true)
        if (ecx_3 s< 0x11b8)
            var_d54 = "LogGet"
            var_d58 = 0x39
            ecx_1 = "who >= 0"
        else
            void* ebx_1 = *(var_d38 + 8)
            eax_2 = *(ebx_1 + 0x11a8)
            
            if (eax_2 s> 8)
                var_d54 = "LogGet"
                var_d58 = 0x3a
                ecx_1 = "save.setup.numPlayers <= MAX_PLAYERS_LATEST"
            else if (edi_1 s>= eax_2)
                var_d54 = "LogGet"
                var_d58 = 0x3b
                ecx_1 = "who < save.setup.numPlayers"
            else
                eax_2 = nullptr
                *((edi_1 << 2) + &data_1839fb0) = 0
                int32_t* i = nullptr
                *((edi_1 << 2) + &data_1839fe0) = 0
                
                if (*(ecx_3 + ebx_1 + 0xc) s> 0)
                    void* edi_2 = nullptr
                    
                    do
                        esi_1 += 4
                        edi_2 += 1
                        int32_t eax_5 = *(i + *(ecx_3 + ebx_1))
                        i = &i[1]
                        *(esi_1 - 4) = eax_5
                    while (i s< *(ecx_3 + ebx_1 + 0xc))
                    
                    esi_1 = var_d3c_1
                    void* var_d44 = edi_2
                    edi_1 = var_d40_1
                    eax_2 = var_d44
                    *((edi_1 << 2) + &data_1839fe0) = eax_2
                
                ebx = var_d30
                edi_1 += 1
                esi_1 += 0x20000
                var_d40_1 = edi_1
                ecx_3 = &ecx_3[6]
                var_d3c_1 = esi_1
                
                if (edi_1 s>= *(ebx + 0xd38))
                    goto label_5ca471
                
                continue
        
        var_d5c = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSave.cpp"
        break
else
    var_d54 = "DomAIAction"
    var_d58 = 0xf9
    var_d5c = "C:\x\ax2017\Jams\Dominion\code\DomAI.cpp"
    ecx_1 = "ai.aiLevel != DBAI_NONE"

sub_63b870(eax_2, &data_801800, ecx_1, var_d5c, var_d58, var_d54)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
