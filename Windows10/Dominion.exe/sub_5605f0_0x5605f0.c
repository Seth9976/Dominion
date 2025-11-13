// 函数: sub_5605f0
// 地址: 0x5605f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_2c = ecx
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
void* result = sub_5887c0(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 0)

if (result == 0)
    return result

void* eax_5
int32_t ecx_5
eax_5, ecx_5 = sub_573400()
uint32_t edi_1 = zx.d(result.w)
int32_t esi_1 = *(eax_5 + 4)

if (edi_1 u>= 0x320)
    sub_591930()

int32_t eax_6 = edi_1 * 0x64
int32_t var_2c_1 = ecx_5
int32_t var_30_1 = 0
uint32_t eax_7 = sub_568960(eax_6, *(eax_6 + esi_1 + 0x1a4c), 0x3e9, 0)
int32_t ecx_6
ecx_6.b = eax_7 s<= 0
sub_566890(ecx_6)

if (eax_7 s<= 0)
    return sub_56e9c0(nullptr)

void* eax_8 = sub_573400()
int32_t eax_9 = *(eax_8 + 4)

if (edi_1 u>= 0x320)
    sub_591930()

sub_582d10(eax_9, *(eax_6 + eax_9 + 0x1a70), *(eax_8 + 4), result, 0x3eb, 0xb, 0x3ea, 3, 
    *(eax_8 + 0x28), *(eax_8 + 0x2c), *(eax_8 + 0x30), 0, 0, nullptr, 0, nullptr, nullptr)
return sub_56e9c0(1)
