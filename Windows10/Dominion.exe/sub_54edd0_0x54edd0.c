// 函数: sub_54edd0
// 地址: 0x54edd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
void* eax = sub_573400()

if (*(eax + 0x40) == 0)
    sub_591930()

int32_t esi_1 = *(eax + 0x40)
uint32_t edi = zx.d(esi_1.w)
int32_t ebx = *(sub_573400() + 4)

if (edi u>= 0x320)
    sub_591930()

int32_t eax_2 = edi * 0x64
int32_t edx = 0x3ec

if (*(eax_2 + ebx + 0x1a4c) != 0x1012)
    edx = 0x3e9

return sub_5690c0(eax_2, edx, esi_1, 0x15)
