// 函数: sub_5014c0
// 地址: 0x5014c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
void arg_c84
__builtin_memcpy(&__saved_ebp, sub_568780(&arg_c84, __chkstk(0x1914), 0x3ea, &arg_c84), 0xc84)
int16_t eax_2 = sub_56b800()
void* eax_3
int32_t ecx
eax_3, ecx = sub_573400()
uint32_t esi_2 = zx.d(eax_2)
int32_t edi = *(eax_3 + 4)

if (esi_2 u>= 0x320)
    sub_591930()

int32_t eax_4 = esi_2 * 0x64
int32_t var_18_1 = ecx
int32_t var_1c = 0
int32_t ebx
ebx.b = *(eax_4 + edi + 0x1a50) == 0x3ea
uint32_t eax_5 = sub_568960(eax_4, 0, 0x3eb, 0)
int32_t var_1c_1 = 0
uint32_t eax_7 = sub_568960(eax_5, 0, 0x3ec, 0) + eax_5
uint32_t ecx_2 = arg1 - ebx

if (eax_7 s>= ecx_2)
    return ecx_2

return eax_7
