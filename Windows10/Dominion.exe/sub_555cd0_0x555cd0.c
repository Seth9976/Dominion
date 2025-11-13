// 函数: sub_555cd0
// 地址: 0x555cd0
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

if (sub_5754f0(eax_1, *(ebx + edi + 0x1a4c), edi, 2, 0) != 0)
    return 1

void* eax_3 = sub_573400()
void* edi_1 = *(eax_3 + 4)

if (esi_1 u>= 0x320)
    eax_3 = sub_591930()

return sub_5754f0(eax_3, *(ebx + edi_1 + 0x1a4c), edi_1, 4, 0) != 0
