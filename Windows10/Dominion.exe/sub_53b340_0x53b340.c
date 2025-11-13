// 函数: sub_53b340
// 地址: 0x53b340
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()

if (*(eax + 0x40) == 0)
    sub_591930()

int32_t edi = *(eax + 0x40)
uint32_t eax_1
char ecx
eax_1, ecx = sub_56b800()
int32_t var_34 = 0
sub_566dc0(eax_1, 0x3ea, eax_1, 0xb, ecx)
int32_t esi_1 = *(sub_573400() + 4)
uint32_t eax_3 = zx.d(edi.w)
int32_t edi_1 = eax_3 * 0x64
int32_t var_24
int32_t eax_7
void* esi_2

if (eax_3 u< 0x320)
    var_24 = *(edi_1 + esi_1 + 0x1a58)
    esi_2 = sub_573400()
    eax_7 = *(esi_2 + 4)
else
    sub_591930()
    var_24 = *(esi_1 + edi_1 + 0x1a58)
    esi_2 = sub_573400()
    int32_t eax_6 = *(esi_2 + 4)
    sub_591930()
    eax_7 = eax_6

uint32_t result = sub_582d10(eax_7, *(edi_1 + eax_7 + 0x1a70), *(esi_2 + 4), edi, var_24, 0xb, 
    0x3eb, 3, *(esi_2 + 0x28), *(esi_2 + 0x2c), *(esi_2 + 0x30), 0, 0, nullptr, 0, nullptr, nullptr)
return result
