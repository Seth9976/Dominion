// 函数: sub_548130
// 地址: 0x548130
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x1910)
int32_t var_14 = 0
void arg_c80
uint32_t eax_1 = sub_5685f0(&arg_c80, 0, 0x3ea, &arg_c80, 4)
int32_t var_14_1 = 7
void var_8
uint32_t result = sub_56a740(eax_1, 0x3ea, &var_8, __builtin_memcpy(&var_8, eax_1, 0xc84))

if (result != 0)
    return result

uint32_t esi_2 = zx.d(sub_56b800())
int32_t edi_1 = *(sub_573400() + 4)

if (esi_2 u>= 0x320)
    sub_591930()

int32_t esi_3 = *(esi_2 * 0x64 + edi_1 + 0x1a58)
uint32_t eax_5
int32_t ecx_2
eax_5, ecx_2 = sub_56b800()
int32_t var_14_2 = ecx_2
return sub_5624a0(eax_5, esi_3)
