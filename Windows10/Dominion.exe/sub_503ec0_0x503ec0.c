// 函数: sub_503ec0
// 地址: 0x503ec0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
uint32_t eax_1 = sub_56b780()
sub_594010(eax_1, *(eax + 0xc), *(eax + 4), eax_1, 2)
sub_561f60(0xfffffffe, 0)
void* eax_2 = sub_573400()

if (*(eax_2 + 0x40) == 0)
    sub_591930()

int32_t edi = *(eax_2 + 0x40)
void* eax_3 = sub_573400()
uint32_t esi_2 = zx.d(edi.w)
int32_t* ebx = *(eax_3 + 4)
uint32_t eax_4 = *(eax_3 + 0xc)

if (esi_2 u>= 0x320)
    sub_591930()

int64_t var_18 = 0
int64_t var_10 = 0
int32_t var_1c = ebx[esi_2 * 0x19 + 0x695]
int32_t var_20 = edi
return sub_586320(&var_20, eax_4, ebx, &var_20, &var_10, &var_18, 0)
