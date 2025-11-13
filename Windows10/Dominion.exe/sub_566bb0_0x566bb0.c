// 函数: sub_566bb0
// 地址: 0x566bb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
uint32_t esi = zx.d(arg1.w)
int32_t* ebx = *(eax + 4)
uint32_t eax_1 = *(eax + 0xc)

if (esi u>= 0x320)
    sub_591930()

int32_t eax_3 = ebx[esi * 0x19 + 0x695]
int32_t var_18 = arg1
int32_t var_14 = eax_3
uint32_t eax_4 = sub_56b800()
uint32_t esi_1 = zx.d(eax_4.w)

if (esi_1 u>= 0x320)
    sub_591930()

uint32_t var_20 = eax_4
int64_t var_10 = 0
int32_t var_1c = ebx[esi_1 * 0x19 + 0x695]
return sub_586320(&var_18, eax_1, ebx, &var_18, &var_10, &var_20, arg2 | 2)
