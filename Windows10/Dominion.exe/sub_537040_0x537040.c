// 函数: sub_537040
// 地址: 0x537040
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void arg_c84
int32_t eax_1
int32_t edx_1
eax_1, edx_1 = sub_568780(&arg_c84, __chkstk(0x259c), 0x3eb, &arg_c84)
int32_t __saved_ebp
__builtin_memcpy(&__saved_ebp, eax_1, 0xc84)
void arg_190c
__builtin_memcpy(&arg_c84, sub_568780(&arg_190c, edx_1, 0x3ec, &arg_190c), 0xc84)

if (arg1 == 0 && arg2 == 0)
    return 0

int16_t eax_5 = sub_56b800()
void* eax_6
int32_t ecx
eax_6, ecx = sub_573400()
uint32_t esi_3 = zx.d(eax_5)
int32_t edi = *(eax_6 + 4)

if (esi_3 u>= 0x320)
    sub_591930()

int32_t eax_7 = esi_3 * 0x64
int32_t var_18_2 = ecx
int32_t var_1c = 0
int32_t ebx
ebx.b = *(eax_7 + edi + 0x1a50) == 0x3ea
int32_t result
result.b = sub_568960(eax_7, 0, 0x3ea, 4) s<= ebx
return result
