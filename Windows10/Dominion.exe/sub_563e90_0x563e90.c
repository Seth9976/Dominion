// 函数: sub_563e90
// 地址: 0x563e90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
void* esi = eax

if (*esi != 2)
    eax = sub_591930()

int32_t edi = *(esi + 0x10)
int32_t ecx = *(esi + 4)
int16_t var_7c = edi.w
int32_t var_80 = edi
char eax_1
int32_t ecx_1
eax_1, ecx_1 = sub_582de0(eax, edi, ecx, 0x3e9)

if (eax_1 != 0)
    return 0

int32_t var_94 = 0
int32_t var_98 = *(esi + 0x2c)
void var_40
int32_t* eax_2 = sub_591880(&var_40, 0x15, ecx_1, edi, *(esi + 0x28))
int32_t edi_1 = *(esi + 0xc)
int128_t var_70 = *eax_2
int128_t var_60 = *(eax_2 + 0x10)
int128_t xmm0_2 = *(eax_2 + 0x20)
int32_t var_78 = *esi
int32_t* esi_1 = *(esi + 4)
int32_t var_74 = *(esi + 0x10)
int128_t var_50 = xmm0_2

if (var_7c u>= 0x320)
    sub_591930()

int32_t eax_6

if (edi_1 != esi_1[0x673])
    eax_6 = edi_1
else
    eax_6 = esi_1[0x674]

int32_t result
int32_t ecx_3
result, ecx_3 =
    sub_623300(eax_6, &var_78, esi_1, edi_1, eax_6, 1, &var_80, 1, 1, 0, 9, &var_70, 7, 0, 0)

if (result == 0)
    result.b = 0
    return result

int32_t var_94_1 = ecx_3
return sub_5624a0(var_80, 0x3e9)
