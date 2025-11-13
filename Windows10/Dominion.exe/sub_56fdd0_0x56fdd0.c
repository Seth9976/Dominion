// 函数: sub_56fdd0
// 地址: 0x56fdd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()

if (*(eax + 0x40) == 0)
    sub_591930()

int32_t esi_1 = *(eax + 0x40)
int32_t ecx = *(sub_573400() + 4)
uint32_t eax_2 = zx.d(esi_1.w)
int32_t edi = eax_2 * 0x64
int32_t var_24_1
int32_t eax_7
void* esi_2

if (eax_2 u< 0x320)
    var_24_1 = *(edi + ecx + 0x1a58)
    esi_2 = sub_573400()
    eax_7 = *(esi_2 + 4)
else
    sub_591930()
    var_24_1 = *(ecx + edi + 0x1a58)
    esi_2 = sub_573400()
    int32_t eax_6 = *(esi_2 + 4)
    sub_591930()
    eax_7 = eax_6

uint32_t result = sub_582d10(eax_7, *(edi + eax_7 + 0x1a70), *(esi_2 + 4), esi_1, var_24_1, 0xb, 
    0x3eb, 3, *(esi_2 + 0x28), *(esi_2 + 0x2c), *(esi_2 + 0x30), 0, 0, nullptr, 0, nullptr, nullptr)
return result
