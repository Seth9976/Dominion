// 函数: sub_55c3c0
// 地址: 0x55c3c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()

if (*(eax + 0x40) == 0)
    sub_591930()

int32_t esi_1 = *(eax + 0x40)
uint32_t esi_2 = zx.d(esi_1.w)
uint32_t result = *(sub_573400() + 4)

if (esi_2 u>= 0x320)
    sub_591930()

int32_t edi = esi_2 * 0x64

if (*(edi + result + 0x1a50) == 0x3eb)
    return result

void* eax_4 = *(sub_573400() + 4) + edi
int32_t var_24_2
int32_t eax_9
void* esi_3

if (esi_2 u< 0x320)
    var_24_2 = *(eax_4 + 0x1a58)
    esi_3 = sub_573400()
    eax_9 = *(esi_3 + 4)
else
    sub_591930()
    var_24_2 = *(eax_4 + 0x1a58)
    esi_3 = sub_573400()
    int32_t eax_8 = *(esi_3 + 4)
    sub_591930()
    eax_9 = eax_8

return sub_582d10(eax_9, *(edi + eax_9 + 0x1a70), *(esi_3 + 4), esi_1, var_24_2, 0xb, 0x3eb, 
    nullptr, *(esi_3 + 0x28), *(esi_3 + 0x2c), *(esi_3 + 0x30), 0, 0, nullptr, 0, nullptr, nullptr)
