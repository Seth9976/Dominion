// 函数: sub_525110
// 地址: 0x525110
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x191c)
__security_cookie
int32_t var_18 = 0
int32_t __saved_ebp
int32_t arg_c84[0x323]
__builtin_memcpy(&__saved_ebp, sub_5685f0(&arg_c84, 0, 0x3ea, &arg_c84, 4), 0xc84)
int32_t ecx_2
int32_t edi_1

if (arg1 s> 0)
    edi_1, ecx_2 = __memfill_u32(&arg_c84, 0x3ea, arg1)
uint32_t esi_2 = zx.d(sub_56b800())
int32_t edi_2 = *(sub_573400() + 4)

if (esi_2 u>= 0x320)
    sub_591930()

uint32_t eax_6 = esi_2 * 0x64

if (*(eax_6 + edi_2 + 0x1a50) == 0x3e9)
    arg_c84[arg1] = 0x3e9
    eax_6 = sub_56b800()
    uint32_t esi_3 = eax_6
    
    if (arg1 s>= 0x320)
        eax_6 = sub_591930()
    
    (&__saved_ebp)[arg1] = esi_3
    arg1 += 1

uint32_t result = sub_56a880(eax_6, &arg_c84, &__saved_ebp, 0x69)

if (result != 0)
    result = sub_561af0(result, 0, 5, 0)

CookieCheckFunction(result)
return result
