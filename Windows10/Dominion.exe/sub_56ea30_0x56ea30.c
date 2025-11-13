// 函数: sub_56ea30
// 地址: 0x56ea30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c = arg1
void* eax = sub_573400()
uint32_t esi_1 = zx.d((*(eax + 0x10)).w)
void* ebx = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t eax_2 = esi_1 * 0x64
uint32_t result = sub_5754f0(eax_2, *(eax_2 + ebx + 0x1a4c), ebx, 0x20, 0)

if (result.b == 0)
    sub_63b870(result, &data_801800, "isAttack", "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 
        0x1a0a, "AddOngoing_AttackOtherPlayers")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* ecx_1 = *(eax + 4)
int32_t i = 0

if (*(ecx_1 + 0xd38) s> 0)
    do
        int32_t eax_5
        int32_t edx_1
        edx_1:eax_5 = sx.q(*(ecx_1 + 0x19cc) + i)
        int32_t temp1_1 = mods.dp.d(edx_1:eax_5, *(ecx_1 + 0xd38))
        result = divs.dp.d(edx_1:eax_5, *(ecx_1 + 0xd38))
        
        if (temp1_1 != *(eax + 0xc))
            result = sub_576b30(result, temp1_1, ecx_1, 0, 0, 0, 0)
            
            if (result s<= 0)
                result = sub_5911e0(result, temp1_1, *(eax + 4), arg1, nullptr, 2, 0, 0, 0, 
                    *(eax + 0xc), 0, 0)
        
        ecx_1 = *(eax + 4)
        i += 1
    while (i s< *(ecx_1 + 0xd38))

return result
