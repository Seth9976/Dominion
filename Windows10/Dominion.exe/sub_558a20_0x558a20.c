// 函数: sub_558a20
// 地址: 0x558a20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int16_t eax = sub_56b800()
void* eax_1 = sub_573400()
uint32_t esi_1 = zx.d(eax)
int32_t ebx = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t eax_3 = esi_1 * 0x64
int32_t eax_4 = sub_571f30(eax_3, *(eax_1 + 0xc), *(eax_1 + 4), 0xe01, *(eax_3 + ebx + 0x1a50), 0)
void* eax_5 = sub_573400()

if (eax_4 s< 0)
    sub_591930()

if (eax_4 s>= *(*(eax_5 + 4) + 0x19a4))
    sub_591930()

void* ecx_5 = (eax_4 << 5) + *(eax_5 + 4)
void* edx_1 = *(ecx_5 + 0x152dc)
*(ecx_5 + 0x152dc) = edx_1 + 1
void* result = *(*(eax_1 + 4) + 0x1504)

if (result == 3 || result == 5 || result == 4 || result == 6)
    return result

int32_t var_1c_1 = *(ecx_5 + 0x152e4)
int32_t var_20_1 = *(ecx_5 + 0x152e0)
ecx_5.b = result == 2
return sub_61b1b0(result, 0x14, ecx_5.b, *(eax_1 + 0xc), eax_4, nullptr, edx_1, nullptr, nullptr, 
    0, 0, 0, var_20_1, var_1c_1)
