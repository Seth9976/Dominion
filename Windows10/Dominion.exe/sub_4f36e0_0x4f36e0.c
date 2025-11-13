// 函数: sub_4f36e0
// 地址: 0x4f36e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* esi = nullptr
char var_10[0x8]
void* eax_2 = sub_58be50(arg1, &var_10)
int32_t edx_1 = *(arg1 + 0xd38)
int32_t ecx = 0

if (edx_1 s> 0)
    do
        eax_2 = esi + 1
        
        if (var_10[ecx] == 0)
            eax_2 = esi
        
        ecx += 1
        esi = eax_2
    while (ecx s< edx_1)
    
    if (esi s> 0)
        uint32_t i = 0
        
        do
            float xmm1_1
            
            if (var_10[i] == 0)
                xmm1_1 = (zx.o(0)).d
            else
                xmm1_1 = 1f / _mm_cvtepi32_ps(zx.o(esi))
            
            *(arg2 + (i << 2)) = xmm1_1
            i += 1
        while (i s< *(arg1 + 0xd38))
        
        CookieCheckFunction(i)
        return i

sub_63b870(eax_2, &data_801800, "numWinners > 0", "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", 
    0x13f0, "ScoreGameOver")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
