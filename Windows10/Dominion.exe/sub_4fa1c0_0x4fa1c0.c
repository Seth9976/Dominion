// 函数: sub_4fa1c0
// 地址: 0x4fa1c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax_11 = sub_573400()
sub_590760(eax_11, *(eax_11 + 0xc), *(eax_11 + 4), 1, 1, 0, 0)
void* eax = sub_573400()
int32_t ecx_1 = *(eax + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_1 = *(eax + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
*(ecx_2 + eax_1 + 0x17558) |= 2
sub_561af0(eax_1, 0, 1, 0)
void* eax_2 = sub_573400()
int32_t ecx_4 = *(*(eax_2 + 4) + 0xd38)
int32_t eax_6
int32_t edx_1
edx_1:eax_6 = sx.q(*(eax_2 + 0xc) - 1 + ecx_4)
int32_t result = *(sub_573400() + 4)
int32_t i_1 = *(mods.dp.d(edx_1:eax_6, ecx_4) * 0x5a30 + result + 0x17514)

if (i_1 s> 0)
    int32_t i
    
    do
        result = sub_563590(0x105)
        
        if (result != 0)
            void* eax_9 = sub_573400()
            result = sub_583720(eax_9, *(eax_9 + 0xc), *(eax_9 + 4), result, 0x476, nullptr, 0x476, 
                0, 0, 4)
        
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
