// 函数: sub_528a10
// 地址: 0x528a10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx = __chkstk(0x191c)
__security_cookie
int32_t __saved_ebp
int32_t eax_3
int32_t edx_1
eax_3, edx_1 = sub_568780(&__saved_ebp, edx, 0x3ea, &__saved_ebp)
void arg_c84
__builtin_memcpy(&arg_c84, eax_3, 0xc84)
int32_t var_1c = 0
uint32_t result = sub_56ab80(sub_561880(eax_3, edx_1, &arg_c84, 4), 0x3ea, &arg_c84, 0x12, 9)

if (result != 0)
    void* eax_5 = sub_573400()
    uint32_t esi_2 = zx.d(result.w)
    int32_t ebx_1 = *(eax_5 + 0xc)
    void* edi_1 = *(eax_5 + 4)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    int32_t eax_6 = esi_2 * 0x64
    int32_t var_8
    sub_576e90(eax_6, edi_1, &var_8, ebx_1, *(eax_6 + edi_1 + 0x1a4c), 0)
    int32_t var_24_1 = var_8 + 3
    result = sub_564ce0(esi_2)

CookieCheckFunction(result)
return result
