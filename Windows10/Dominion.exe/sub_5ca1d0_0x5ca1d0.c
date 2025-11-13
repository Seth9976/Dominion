// 函数: sub_5ca1d0
// 地址: 0x5ca1d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* eax_2 = sub_4b9480()
int32_t ebx = 0
int32_t* var_2c = eax_2
int128_t var_20

if (*(arg1 + 0xd38) s> 0)
    void* ecx = &data_1779fb0
    void* esi_1 = &eax_2[0x471]
    void* var_24_1 = &data_1779fb0
    
    while (true)
        int32_t var_44_1
        char* ecx_5
        
        if (ecx s< &data_1779fb0)
            char const* const var_40_2 = "LogGet"
            var_44_1 = 0x39
            ecx_5 = "who >= 0"
        else
            eax_2 = eax_2[0x46a]
            
            if (eax_2 s> 8)
                char const* const var_40_1 = "LogGet"
                var_44_1 = 0x3a
                ecx_5 = "save.setup.numPlayers <= MAX_PLAYERS_LATEST"
            else if (ebx s>= eax_2)
                char const* const var_40 = "LogGet"
                var_44_1 = 0x3b
                ecx_5 = "who < save.setup.numPlayers"
            else
                int32_t edi_1 = 0
                int32_t eax_4
                int32_t edx_1
                edx_1:eax_4 = sx.q(*(esi_1 + 8))
                *((ebx << 2) + &data_1839fb0) = 0
                *((ebx << 2) + &data_1839fe0) = 0
                *(&var_20 + (ebx << 2)) = (eax_4 + (edx_1 & 3)) s>> 2
                int32_t* i = nullptr
                
                if (*esi_1 s> 0)
                    void* edx_3 = ecx
                    
                    do
                        edx_3 += 4
                        edi_1 += 1
                        int32_t ecx_2 = *(i + *(esi_1 - 0xc))
                        i = &i[1]
                        *(edx_3 - 4) = ecx_2
                    while (i s< *esi_1)
                    
                    ecx = var_24_1
                    *((ebx << 2) + &data_1839fe0) = edi_1
                
                ebx += 1
                ecx += 0x20000
                esi_1 += 0x18
                var_24_1 = ecx
                eax_2 = var_2c
                
                if (ebx s>= *(arg1 + 0xd38))
                    break
                
                continue
        
        sub_63b870(eax_2, &data_801800, ecx_5, "C:\x\ax2017\Jams\Shared\TggGame\code\GameSave.cpp", 
            var_44_1, "LogGet")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

uint32_t result = memcpy(0x183ad20, arg1, 0x5f080)
data_1839fc8 = var_20
int64_t var_10
data_1839fd8 = var_10
CookieCheckFunction(result)
return result
