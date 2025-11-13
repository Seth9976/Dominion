// 函数: sub_57fac0
// 地址: 0x57fac0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg3
int32_t eax = *(arg3 + 0x1504)
int32_t var_1c
char const* const ecx

if (eax == 3 || eax == 6)
    char const* const var_18_2 = "AchivementDataGet"
    var_1c = 0x251a
    ecx = "g.simStyle != SIM_SIMULATION && g.simStyle != SIM_AUTOPLAY"
else
    int32_t esi_1 = *(arg3 + 0x5eb68)
    
    if (esi_1 != 0xffffffff)
        eax = 0
        
        if (esi_1 s> 0)
            void* ecx_1 = arg3 + 0x45d68
            
            do
                int32_t edx = *ecx_1
                
                if (edx == 0)
                    break
                
                if (arg4 == edx)
                    return arg2 * 0x84 + 0x45d6c + eax * 0x31c + arg3
                
                eax += 1
                ecx_1 += 0x31c
            while (eax s< esi_1)
        
        if (esi_1 s< 0x80)
            int32_t ecx_4 = esi_1 * 0x31c
            *(arg3 + 0x5eb68) = esi_1 + 1
            *(ecx_4 + arg3 + 0x45d68) = arg4
            return arg2 * 0x84 + 0x45d6c + ecx_4 + arg3
        
        char const* const var_18_1 = "AchivementDataGet"
        var_1c = 0x2528
        ecx = "g.numAchivementData < MAX_UNIQUE_CARDS_IN_A_GAME"
    else
        char const* const var_18 = "AchivementDataGet"
        var_1c = 0x251c
        ecx = "g.numAchivementData != -1"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_1c, 
    "AchivementDataGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
