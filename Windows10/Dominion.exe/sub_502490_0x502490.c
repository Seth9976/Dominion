// 函数: sub_502490
// 地址: 0x502490
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t esi_1 = zx.d(sub_56b800())
int32_t edi = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t result = esi_1 * 0x64

if (*(result + edi + 0x1a50) != 0x3e9)
    return result

uint32_t eax_2 = sub_56b800()
void* eax_3 = sub_573400()
int32_t var_14_1 = 0
int32_t var_18_1 = 0xffffffff
int32_t var_1c_1 = 0
return sub_571fa0(eax_3, 0xffffffff, *(eax_3 + 4), 0x1001, 1, 0x474, eax_2)
