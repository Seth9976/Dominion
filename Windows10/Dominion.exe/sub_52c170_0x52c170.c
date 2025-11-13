// 函数: sub_52c170
// 地址: 0x52c170
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()

if (*(eax + 0x40) == 0)
    sub_591930()

int32_t ebx = *(eax + 0x40)
uint32_t esi_1 = zx.d(ebx.w)
int32_t eax_2 = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t edi = esi_1 * 0x64

if (*(edi + eax_2 + 0x1a50) != 0x3ea)
    void* eax_5 = *(sub_573400() + 4) + edi
    int32_t var_10_2
    int32_t eax_10
    void* esi_2
    
    if (esi_1 u< 0x320)
        var_10_2 = *(eax_5 + 0x1a58)
        int32_t var_14_2 = 0
        int32_t var_18_2 = 0
        esi_2 = sub_573400()
        eax_10 = *(esi_2 + 4)
    else
        sub_591930()
        var_10_2 = *(eax_5 + 0x1a58)
        int32_t var_14_1 = 0
        int32_t var_18_1 = 0
        esi_2 = sub_573400()
        int32_t eax_9 = *(esi_2 + 4)
        sub_591930()
        eax_10 = eax_9
    
    sub_582d10(eax_10, *(edi + eax_10 + 0x1a70), *(esi_2 + 4), ebx, var_10_2, 0xb, 0x3ea, 3, 
        *(esi_2 + 0x28), *(esi_2 + 0x2c), *(esi_2 + 0x30), 0, 0, nullptr, 0, nullptr, nullptr)

void* eax_13 = sub_573400()
sub_590760(eax_13, *(eax_13 + 0xc), *(eax_13 + 4), 1, 1, 0, 0)
void* eax_14 = sub_573400()
int32_t ecx_3 = *(eax_14 + 0xc)

if (ecx_3 == 0xffffffff)
    sub_63b870(eax_14, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_15 = *(eax_14 + 4)
int32_t ecx_4 = ecx_3 * 0x5a30
*(ecx_4 + eax_15 + 0x17558) |= 2
int32_t esi_3 = *(*(sub_573400() + 4) + 0x19cc)
void* result = sub_573400()

if (esi_3 == *(result + 0xc))
    result = *(*(sub_573400() + 4) + 0x19ec)
    
    if (result == 3 || result == 2)
        return sub_56d320()

return result
