// 函数: sub_52ecf0
// 地址: 0x52ecf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t esi = zx.d(arg1)
int32_t edi = *(sub_573400() + 4)

if (esi u>= 0x320)
    sub_591930()

int32_t esi_1 = *(esi * 0x64 + edi + 0x1a4c)
int32_t eax_2
int32_t ecx
eax_2, ecx = sub_56e820(4, 0)

if (eax_2.b == 0)
    return eax_2

int32_t var_14 = ecx
int32_t var_18 = 0
uint32_t eax_3
eax_3.b = sub_568960(eax_2, esi_1, 0x3e9, 0) s> 0
return eax_3
