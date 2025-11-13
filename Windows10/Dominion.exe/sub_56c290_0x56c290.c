// 函数: sub_56c290
// 地址: 0x56c290
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()

if (*eax != 2)
    sub_591930()

uint32_t esi_1 = zx.d((*(eax + 0x10)).w)
void* ebx = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t eax_2 = esi_1 * 0x64
uint32_t eax_3 = sub_5754f0(eax_2, *(eax_2 + ebx + 0x1a4c), ebx, 0x20, 0)
int32_t var_30_1
char const* const ecx_1

if (eax_3.b != 0)
    void* ecx_2 = *(eax + 4)
    int32_t ebx_1 = 1
    int32_t result = 0xffffffff
    
    if (*(ecx_2 + 0xd38) s<= 1)
        return 0xffffffff
    
    while (true)
        int32_t temp1_1 = mods.dp.d(sx.q(*(eax + 0xc) + ebx_1), *(ecx_2 + 0xd38))
        
        if (sub_576b30(temp1_1, temp1_1, ecx_2, 0, 0, 0, 0) s<= 0)
            void* eax_10 = sub_5768a0(*(eax + 4))
            int32_t result_1 = result
            
            if (result_1 == 0xffffffff)
                result_1 = *(eax_10 + 0x2c)
                result = result_1
            
            *(eax_10 + 0x14) = *(eax + 0xc)
            *(eax_10 + 0x18) = temp1_1
            int32_t ecx_4 = *(eax + 0x10)
            eax_3 = *(eax + 0x14)
            *(eax_10 + 0x1c) = ecx_4
            *(eax_10 + 0x20) = eax_3
            
            if (ecx_4 == 0)
                break
            
            int32_t ecx_5 = *(eax + 0x20)
            *(eax_10 + 0x44) = *(eax + 0x1c)
            *(eax_10 + 0x48) = ecx_5
            *(eax_10 + 0x28) = *(eax + 0x24)
            *(eax_10 + 0x54) = arg1
            *(eax_10 + 0x58) = arg2
            *(eax_10 + 0x70) = 0
            *eax_10 = 0
            *(eax_10 + 4) = 2
            *(eax_10 + 0x4c) = 2
            *(eax_10 + 0x50) = 0xe
            *(eax_10 + 0x60) = 0
            *(eax_10 + 0x74) = 0
            *(eax_10 + 0x7c) = 0xd
            *(eax_10 + 0x80) = arg4
            *(eax_10 + 0x84) = 0x2a
            *(eax_10 + 0x40) = result_1
            void* eax_20 = *(*(eax + 4) + 0x1504)
            
            if (eax_20 != 3 && eax_20 != 5 && eax_20 != 4 && eax_20 != 6)
                void* ecx_6
                ecx_6.b = eax_20 == 2
                eax_20 = sub_61b1b0(eax_20, 0x1b, ecx_6.b, temp1_1, 0x14, 0xd, arg4, nullptr, 
                    nullptr, 0, 0, 0, 0, 0)
            
            sub_56b8e0(eax_20, eax_10 + 0x70, *(eax + 4), eax_10 + 0x74, eax_10 + 0x78, arg3)
        
        ecx_2 = *(eax + 4)
        ebx_1 += 1
        
        if (ebx_1 s>= *(ecx_2 + 0xd38))
            return result
    
    char const* const var_2c_3 = "UntilForever_AttackOtherPlayers"
    var_30_1 = 0x133f
    ecx_1 = "ability.which.which != CARDID_NULL"
else
    char const* const var_2c_1 = "UntilForever_AttackOtherPlayers"
    var_30_1 = 0x1326
    ecx_1 = "isAttack"

sub_63b870(eax_3, &data_801800, ecx_1, "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", var_30_1, 
    "UntilForever_AttackOtherPlayers")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
