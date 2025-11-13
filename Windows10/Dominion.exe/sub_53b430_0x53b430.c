// 函数: sub_53b430
// 地址: 0x53b430
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()

if (*(eax + 0x40) == 0)
    sub_591930()

int32_t esi_1 = *(eax + 0x40)
uint32_t eax_1
char ecx
eax_1, ecx = sub_56b800()
int32_t var_34 = 0
sub_566dc0(eax_1, 0x3ea, eax_1, 0xb, ecx)
uint32_t esi_2 = zx.d(esi_1.w)
uint32_t result = *(sub_573400() + 4)

if (esi_2 u>= 0x320)
    sub_591930()

int32_t edi = esi_2 * 0x64

if (*(edi + result + 0x1a50) == 0x3ea)
    return result

void* eax_5 = *(sub_573400() + 4) + edi
int32_t var_24_2
int32_t eax_10
void* esi_3

if (esi_2 u< 0x320)
    var_24_2 = *(eax_5 + 0x1a58)
    esi_3 = sub_573400()
    eax_10 = *(esi_3 + 4)
else
    sub_591930()
    var_24_2 = *(eax_5 + 0x1a58)
    esi_3 = sub_573400()
    int32_t eax_9 = *(esi_3 + 4)
    sub_591930()
    eax_10 = eax_9

return sub_582d10(eax_10, *(edi + eax_10 + 0x1a70), *(esi_3 + 4), esi_1, var_24_2, 0xb, 0x3ea, 3, 
    *(esi_3 + 0x28), *(esi_3 + 0x2c), *(esi_3 + 0x30), 0, 0, nullptr, 0, nullptr, nullptr)
