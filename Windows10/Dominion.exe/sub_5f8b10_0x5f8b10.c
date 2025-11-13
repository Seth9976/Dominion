// 函数: sub_5f8b10
// 地址: 0x5f8b10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_4 = arg1
int32_t edx = 0
int32_t eax = 0
int32_t var_c
char const* const var_8
char* ecx

while (true)
    if (*(eax + &data_77fca8) == arg1)
        if (edx s>= 0)
            if (edx u< 0x12)
                return (&data_77fcb4)[edx * 7]
            
            var_8 = "DomExpDefGetByIndex"
            var_c = 0x118c
            ecx = "i < ARRAYSIZE(DOM_EXP_DEFS)"
        else
            var_8 = "DomExpDefGetByIndex"
            var_c = 0x118b
            ecx = "i >= 0"
        
        break
    
    eax += 0x1c
    edx += 1
    
    if (eax u>= 0x1f8)
        var_8 = "DomGetIndxByExp"
        var_c = 0x119c
        ecx = "Halt"
        break

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp", var_c, 
    var_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
