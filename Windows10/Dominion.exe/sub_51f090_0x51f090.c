// 函数: sub_51f090
// 地址: 0x51f090
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = *(arg1 + 4)
int32_t esi = *arg2

if (ecx == 0)
    sub_63b870(arg2, &data_801800, "exp != DOM_EXP_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x1002, "IsExpansion")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_2
char edx
edx:eax_2 = sx.q(esi)
int32_t result

if ((eax_2 + zx.d(edx)) s>> 8 == ecx)
    void* eax_4 = sub_571b30(esi, 0x18)
    
    if (((*(eax_4 + 0x98) & 0x7f000400) | (*(eax_4 + 0x9c) & 0x940)) == 0)
        result.b = 1
        return result

result.b = 0
return result
