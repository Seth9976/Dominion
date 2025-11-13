// 函数: sub_5669b0
// 地址: 0x5669b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()
uint32_t edi_1 = zx.d(arg3.w)
int32_t ebx = *(sub_573400() + 4)

if (edi_1 u>= 0x320)
    sub_591930()

if (*(edi_1 * 0x64 + ebx + 0x1a50) != 0x3ea)
    sub_591930()

void var_c90
memset(&var_c90, 0, 0xc80)
int32_t var_14
int32_t var_14_1 = var_14 + 1
int32_t var_c94 = arg3
int32_t result = sub_579560(arg3, &var_c94, *(eax_2 + 4), 0x3ea, *(eax_2 + 0x28), *(eax_2 + 0x2c), 
    *(eax_2 + 0x30), arg2, &data_7bfad0, arg4)
CookieCheckFunction(result)
return result
