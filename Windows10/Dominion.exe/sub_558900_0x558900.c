// 函数: sub_558900
// 地址: 0x558900
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int16_t eax = sub_56b800()
void* eax_1 = sub_573400()
uint32_t esi_1 = zx.d(eax)
int32_t edi = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t eax_3 = esi_1 * 0x64
int32_t eax_4 = sub_571f30(eax_3, *(eax_1 + 0xc), *(eax_1 + 4), 0xe01, *(eax_3 + edi + 0x1a50), 0)
void* eax_5 = sub_573400()

if (eax_4 s< 0)
    sub_591930()

if (eax_4 s>= *(*(eax_5 + 4) + 0x19a4))
    sub_591930()

void* ecx_5 = (eax_4 << 5) + *(eax_5 + 4)
int32_t edi_2 = *(ecx_5 + 0x152dc)
*(ecx_5 + 0x152dc) = 1
void* eax_7 = *(*(eax_1 + 4) + 0x1504)

if (eax_7 != 3 && eax_7 != 5 && eax_7 != 4 && eax_7 != 6)
    int32_t var_1c_1 = *(ecx_5 + 0x152e4)
    int32_t var_20_1 = *(ecx_5 + 0x152e0)
    ecx_5.b = eax_7 == 2
    eax_7, ecx_5 = sub_61b1b0(eax_7, 0x14, ecx_5.b, *(eax_1 + 0xc), eax_4, nullptr, nullptr, 
        nullptr, nullptr, 0, 0, 0, var_20_1, var_1c_1)

void* var_1c_2 = ecx_5
return sub_561e00(eax_7, 0, edi_2 - 1, 0)
