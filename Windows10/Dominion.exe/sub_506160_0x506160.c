// 函数: sub_506160
// 地址: 0x506160
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = *(arg1 + 4)

if (esi == 0)
    return 

uint32_t esi_1 = zx.d(esi.w)
int32_t eax_2 = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t edi_1 = *(arg1 + 4)
int32_t eax_4 = *(esi_1 * 0x64 + eax_2 + 0x1a58)
void* eax_5 = sub_573400()
int32_t eax_6 = *(eax_5 + 4)
uint32_t eax_7 = zx.d(edi_1.w)

if (eax_7 u>= 0x320)
    sub_591930()

sub_582d10(eax_6, *(eax_7 * 0x64 + eax_6 + 0x1a70), *(eax_5 + 4), edi_1, eax_4, 0xb, 0x3ea, 3, 
    *(eax_5 + 0x28), *(eax_5 + 0x2c), *(eax_5 + 0x30), 0, 0, nullptr, 0, nullptr, nullptr)
