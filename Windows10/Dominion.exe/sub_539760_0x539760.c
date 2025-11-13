// 函数: sub_539760
// 地址: 0x539760
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
void* eax = sub_573400()

if (*eax != 5)
    sub_63b870(eax, &data_801800, "c.contextType == CONTEXT_ACHIEVEMENT", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x1cb1, "DomAchievementDataGet")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* edi = *(eax + 0x18)
int32_t result = *(*(sub_573400() + 4) + 0x19e4)

if (result != *(edi + 4))
    *(edi + 4) = 0
    *(edi + 4) = result

int32_t i_1 = arg2

if (i_1 s> 0)
    int32_t i
    
    do
        uint32_t esi_2 = zx.d((*arg1).w)
        int32_t eax_5 = *(sub_573400() + 4)
        
        if (esi_2 u>= 0x320)
            sub_591930()
        
        if (*(esi_2 * 0x64 + eax_5 + 0x1a4c) == 0x30e)
            *(edi + 8) = 1
        
        i = i_1
        i_1 -= 1
    while (i != 1)

if (*(edi + 8) == 0)
    result.b = 0
    return result

result.b = *(edi + 9) != 0
return result
