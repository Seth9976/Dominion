// 函数: sub_55e330
// 地址: 0x55e330
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_94 = ecx
int32_t eax
sub_561e00(eax, 0, 1, 0)
void* eax_1 = sub_573400()
sub_590760(eax_1, *(eax_1 + 0xc), *(eax_1 + 4), 1, 1, 0, 0)
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
int32_t var_94_1 = *(eax_4 + 0x30)
int32_t var_98 = *(eax_4 + 0x2c)
int32_t var_9c = *(eax_4 + 0x28)
uint32_t result = sub_588c60(eax_4, *(eax_4 + 0xc), *(eax_4 + 4))

if (result == 0)
    return result

uint32_t eax_5 = sub_56b800()
void* eax_6
int32_t ecx_5
eax_6, ecx_5 = sub_573400()
int32_t var_94_2 = 0
int32_t var_98_1 = *(eax_6 + 0x2c)
void var_40
int32_t* eax_7 = sub_591880(&var_40, 0x38, ecx_5, eax_5, *(eax_6 + 0x28))
uint32_t edi_1 = zx.d(result.w)
int128_t var_70 = *eax_7
int128_t var_60_1 = *(eax_7 + 0x10)
int128_t var_50_1 = *(eax_7 + 0x20)
void* var_98_3
int32_t eax_11
void* esi_2

if (sub_569720(&var_70, 0x3eb, result, 0x475, &var_70) != 0x475)
    esi_2 = sub_573400()
    eax_11 = *(esi_2 + 4)
    
    if (edi_1 u>= 0x320)
        sub_591930()
    
    int32_t var_94_4 = 0
    var_98_3 = nullptr
else
    esi_2 = sub_573400()
    eax_11 = *(esi_2 + 4)
    
    if (edi_1 u>= 0x320)
        sub_591930()
    
    int32_t var_94_3 = 0
    var_98_3 = 0xffffffff

return sub_582d10(eax_11, *(edi_1 * 0x64 + eax_11 + 0x1a70), *(esi_2 + 4), result, 0x3ee, 0xb, 
    0x3eb, 5, *(esi_2 + 0x28), *(esi_2 + 0x2c), *(esi_2 + 0x30), 0, 0, nullptr, 0, var_98_3, 
    nullptr)
