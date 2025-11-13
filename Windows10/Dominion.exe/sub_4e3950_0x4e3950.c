// 函数: sub_4e3950
// 地址: 0x4e3950
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_4 = arg1
int32_t var_c
char const* const var_8
int32_t eax
char* ecx

if (arg1 s>= 0)
    int32_t ecx_1 = 0
    eax = 0
    
    while (true)
        if (*(eax + &data_77fca8) == arg1)
            if (ecx_1 s>= 0)
                if (ecx_1 u< 0x12)
                    return ecx_1 * 0x1c + &data_77fca8
                
                var_8 = "DomExpDefGetByIndex"
                var_c = 0x118c
                ecx = "i < ARRAYSIZE(DOM_EXP_DEFS)"
            else
                var_8 = "DomExpDefGetByIndex"
                var_c = 0x118b
                ecx = "i >= 0"
            
            break
        
        eax += 0x1c
        ecx_1 += 1
        
        if (eax u>= 0x1f8)
            var_8 = "DomGetIndxByExp"
            var_c = 0x119c
            ecx = "Halt"
            break
else
    var_8 = "DomGetExpansionDef"
    var_c = 0x11a1
    ecx = "exp >= 0"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp", var_c, 
    var_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
