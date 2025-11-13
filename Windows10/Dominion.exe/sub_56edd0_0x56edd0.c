// 函数: sub_56edd0
// 地址: 0x56edd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()

if (*eax != 2)
    sub_591930()

uint32_t esi_1 = zx.d((*(eax + 0x10)).w)
void* edi = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t eax_2 = esi_1 * 0x64
uint32_t eax_3 = sub_5754f0(eax_2, *(eax_2 + edi + 0x1a4c), edi, 0x20, 0)

if (eax_3.b == 0)
    sub_63b870(eax_3, &data_801800, "isAttack", "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 
        0x1a48, "CollectAttackUnblocked")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* ecx_1 = *(eax + 4)
int32_t i = 1
int32_t result = 0

if (*(ecx_1 + 0xd38) s> 1)
    do
        int32_t temp1_1 = mods.dp.d(sx.q(*(eax + 0xc) + i), *(ecx_1 + 0xd38))
        
        if (sub_576b30(temp1_1, temp1_1, ecx_1, 0, 0, 0, 0) s<= 0)
            *(arg1 + (result << 2)) = temp1_1
            result += 1
        
        ecx_1 = *(eax + 4)
        i += 1
    while (i s< *(ecx_1 + 0xd38))

return result
