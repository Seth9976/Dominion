// 函数: sub_5055a0
// 地址: 0x5055a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()

if (*(eax + 0x40) == 0)
    sub_591930()

int32_t edi = *(eax + 0x40)
void* eax_1 = sub_573400()
uint32_t eax_2 = sub_56b780()
sub_594010(eax_2, *(eax_1 + 0xc), *(eax_1 + 4), eax_2, 1)
sub_561f60(0xffffffff, 0)
void* eax_3 = sub_573400()
uint32_t esi_2 = zx.d(edi.w)
int32_t ebx = *(eax_3 + 4)

if (esi_2 u>= 0x320)
    eax_3 = sub_591930()

return sub_5695c0(eax_3, *(esi_2 * 0x64 + ebx + 0x1a58), edi, 0xb)
