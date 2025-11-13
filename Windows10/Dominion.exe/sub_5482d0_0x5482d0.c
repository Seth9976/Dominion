// 函数: sub_5482d0
// 地址: 0x5482d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int16_t eax = sub_56b800()
void* eax_1
int32_t ecx_1
eax_1, ecx_1 = sub_573400()
uint32_t esi_1 = zx.d(eax)
int32_t edi = *(eax_1 + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t eax_2 = esi_1 * 0x64
int32_t var_1c = ecx_1
int32_t var_20 = 0
int32_t ebx
ebx.b = *(eax_2 + edi + 0x1a50) == 0x3ea
int32_t eax_4
int32_t edx
edx:eax_4 = muls.dp.d(0x55555556, ebx + sub_568960(eax_2, 0, 0x3e9, 0))
int32_t var_20_1 = 0
uint32_t edi_3 = (edx u>> 0x1f) + edx
uint32_t eax_5 = sub_568960(eax_4, 0, 0x3eb, 0)
int32_t var_20_2 = 0
uint32_t eax_7 = sub_568960(eax_5, 0, 0x3ec, 0) + eax_5

if (eax_7 s< edi_3)
    return eax_7

return edi_3
