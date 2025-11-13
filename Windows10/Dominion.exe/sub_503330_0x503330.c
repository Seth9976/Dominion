// 函数: sub_503330
// 地址: 0x503330
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t var_1c = ecx
int32_t eax
sub_561e00(eax, 0, 6, 0)
void* eax_1 = sub_573400()
sub_590760(eax_1, *(eax_1 + 0xc), *(eax_1 + 4), 1, 2, 0, 0)
void* eax_2 = sub_573400()
int32_t ecx_2 = *(eax_2 + 0xc)

if (ecx_2 == 0xffffffff)
    sub_63b870(eax_2, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_3 = *(eax_2 + 4)
int32_t ecx_3 = ecx_2 * 0x5a30
*(ecx_3 + eax_3 + 0x17558) |= 2
void* eax_4 = sub_573400()

if (*eax_4 != 2)
    sub_591930()

void* edi = *(eax_4 + 4)
uint32_t eax_5 = *(eax_4 + 0xc)
void* eax_6 = sub_5768a0(edi)
*(eax_6 + 0x14) = 0xffffffff
*eax_6 = 3
*(eax_6 + 0x4c) = 1
int32_t edx_1 = *(eax_4 + 0x14)
*(eax_6 + 0x1c) = *(eax_4 + 0x10)
*(eax_6 + 0x20) = edx_1
*(eax_6 + 0x24) = 0
int32_t eax_7 = *(eax_4 + 0x20)
*(eax_6 + 0x44) = *(eax_4 + 0x1c)
*(eax_6 + 0x48) = eax_7
*(eax_6 + 4) = 2
*(eax_6 + 0x50) = eax_5
*(eax_6 + 0x54) = eax_5
*(eax_6 + 0x58) = 0
*(eax_6 + 0x70) = 0
*(eax_6 + 0x74) = 0
*(eax_6 + 0x7c) = 0xb
void* result = *(edi + 0x1504)

if (result == 3 || result == 5 || result == 4 || result == 6)
    return result

uint32_t ecx_7
ecx_7.b = result == 2
return sub_61b1b0(result, 0x1b, ecx_7.b, eax_5, 0x14, 0xb, nullptr, nullptr, nullptr, 0, 0, 0, 0, 0)
