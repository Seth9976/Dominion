// 函数: sub_50fcb0
// 地址: 0x50fcb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
uint32_t ecx = *(eax + 0xc)
int32_t* ebx = *(eax + 4)

if (arg2 == 0)
    sub_63b870(eax, &data_801800, "whatTo != CARD_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0xf32, "ReplaceStartingCard")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

uint32_t var_24 = ecx
uint32_t result = sub_50f8d0(eax, ecx, ebx, arg1)
int32_t esi_1 = 7
void* ecx_2 = &ebx[0x565]

while (true)
    if (*ecx_2 != arg2 && *(ecx_2 + 4) != arg2)
        esi_1 += 1
        ecx_2 += 0x10
        
        if (esi_1 s< 0x48)
            continue
        
        esi_1 = 0
        break
    
    if (esi_1 == 0)
        break
    
    if (esi_1 - 7 u> 0x41)
        sub_591930()
    
    if (esi_1 s>= 0x48)
        sub_591930()
    
    esi_1 = ebx[esi_1 * 4 + 0x54b]
    break

if (result != 0 && esi_1 != 0)
    return sub_5822e0(
        sub_5822e0(result, 0xffffffff, ebx, result, 0x15, 1, nullptr, 0, 0, 0, 1, 0, nullptr, 0, 
            nullptr, nullptr), 
        ecx, ebx, esi_1, 0x15, 0x3eb, nullptr, 0, 0, 0, 1, 0, nullptr, 0, nullptr, nullptr)

return result
