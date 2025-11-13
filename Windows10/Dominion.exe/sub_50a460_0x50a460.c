// 函数: sub_50a460
// 地址: 0x50a460
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int16_t esi = (*arg1).w
void* eax_1 = sub_573400()
uint32_t esi_1 = zx.d(esi)
void* edi = *(eax_1 + 4)

if (esi_1 u>= 0x320)
    eax_1 = sub_591930()

int32_t ebx = esi_1 * 0x64
char eax_2 = sub_5754f0(eax_1, *(ebx + edi + 0x1a4c), edi, 2, 0)

if (eax_2 == 0)
    return eax_2

int32_t edi_1 = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

void* eax_3
eax_3.b = *(ebx + edi_1 + 0x1a4c) != 0x104
return eax_3
