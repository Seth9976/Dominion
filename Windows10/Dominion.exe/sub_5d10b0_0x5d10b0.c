// 函数: sub_5d10b0
// 地址: 0x5d10b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c = arg1
void* eax_1 = sub_5cc410(arg2, arg1, arg2, 0, 0)

if (eax_1 == 0)
    return eax_1

int32_t i = *(eax_1 + 0x70)
int32_t esi = 0

while (i != 0)
    uint32_t eax_2 = sub_5cba00(i)
    
    if (*(eax_2 + 0x2c) != 0)
        sub_63b870(eax_2, &data_801800, "gfx.type == DOMGFX_CARD", 
            "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x18e6, "NumCardPiles")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t ecx_2 = esi + 1
    i = *(eax_2 + 0x1b94)
    
    if (*(eax_2 + 0xc0) == 0)
        ecx_2 = esi
    
    esi = ecx_2

return esi
