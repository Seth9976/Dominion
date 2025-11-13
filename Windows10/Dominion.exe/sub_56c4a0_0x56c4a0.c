// 函数: sub_56c4a0
// 地址: 0x56c4a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
void* var_18 = eax + 0x10
void* eax_1
uint32_t esi

if (*eax == 2)
    int16_t esi_1 = (*(eax + 0x10)).w
    eax_1 = sub_573400()
    esi = zx.d(esi_1)
else
    sub_591930()
    esi = zx.d((*(eax + 0x10)).w)
    var_18 = eax + 0x10
    eax_1 = sub_573400()

void* ebx_1 = *(eax_1 + 4)

if (esi u>= 0x320)
    sub_591930()

int32_t eax_3 = esi * 0x64
uint32_t result = sub_5754f0(eax_3, *(eax_3 + ebx_1 + 0x1a4c), ebx_1, 0x20, 0)

if (result.b == 0)
    sub_63b870(result, &data_801800, "isAttack", "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 
        0x1361, "UntilStarOfNextTurn_AttackOtherPlayers")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* ecx_2 = *(eax + 4)
int32_t i = 1

if (*(ecx_2 + 0xd38) s> 1)
    do
        int32_t temp1_1 = mods.dp.d(sx.q(*(eax + 0xc) + i), *(ecx_2 + 0xd38))
        result = sub_576b30(temp1_1, temp1_1, ecx_2, 0, 0, 0, 0)
        
        if (result s<= 0)
            int32_t* eax_8 = sub_5768a0(*(eax + 4))
            int32_t ecx_4 = *(eax + 0xc)
            eax_8[6] = temp1_1
            eax_8[5] = ecx_4
            int32_t edx_3 = *(var_18 + 4)
            eax_8[7] = *var_18
            eax_8[8] = edx_3
            int32_t edx_4 = *(eax + 0x20)
            eax_8[0x11] = *(eax + 0x1c)
            eax_8[0x12] = edx_4
            eax_8[0xa] = *(eax + 0x24)
            eax_8[0x15] = arg4
            eax_8[0x14] = arg2
            eax_8[0x16] = arg5
            eax_8[0x18] = arg6
            *eax_8 = 2
            eax_8[1] = 2
            eax_8[0x13] = 2
            eax_8[0x1c] = 0
            eax_8[0x1d] = 0
            eax_8[0x1f] = arg3
            eax_8[0x20] = 0
            eax_8[0x21] = arg7
            result = *(*(eax + 4) + 0x1504)
            
            if (result != 3 && result != 5 && result != 4 && result != 6)
                int32_t* ecx_7
                ecx_7.b = result == 2
                result = sub_61b1b0(result, 0x1b, ecx_7.b, temp1_1, 0x14, arg3, nullptr, nullptr, 
                    nullptr, 0, 0, 0, 0, 0)
        
        ecx_2 = *(eax + 4)
        i += 1
    while (i s< *(ecx_2 + 0xd38))

return result
