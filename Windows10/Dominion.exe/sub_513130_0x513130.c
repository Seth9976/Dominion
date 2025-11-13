// 函数: sub_513130
// 地址: 0x513130
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()

if (*(eax + 0x40) == 0)
    sub_591930()

int16_t esi_1 = (*(eax + 0x40)).w
void* eax_1 = sub_573400()
uint32_t esi_2 = zx.d(esi_1)
int32_t edi = *(eax_1 + 4)

if (esi_2 u>= 0x320)
    eax_1 = sub_591930()

return sub_50dc80(eax_1, 1, *(esi_2 * 0x64 + edi + 0x1a4c), 4, 1)
