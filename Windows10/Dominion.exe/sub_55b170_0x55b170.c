// 函数: sub_55b170
// 地址: 0x55b170
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x191c)
__security_cookie
int16_t eax_2 = sub_56b800()
void* eax_3
int32_t edx
eax_3, edx = sub_573400()
uint32_t esi_1 = zx.d(eax_2)
int32_t edi = *(eax_3 + 4)

if (esi_1 u>= 0x320)
    edx = sub_591930()

int32_t eax_5 = *(esi_1 * 0x64 + edi + 0x1a50)
int32_t ebx

if (eax_5 == 0x3ea || eax_5 == 0x3ec || eax_5 == 0x45c || eax_5 == 0x469 || eax_5 == 0x46a
        || eax_5 == 0x46b)
    ebx.b = 1
else
    ebx.b = 0

int32_t __saved_ebp
int32_t arg_c84[0x320]
__builtin_memcpy(&arg_c84, sub_568780(&__saved_ebp, edx, 0x3e9, &__saved_ebp), 0xc84)

if (ebx.b != 0)
    uint32_t eax_8 = sub_56b800()
    
    if (arg1 s>= 0x320)
        sub_591930()
    
    arg_c84[arg1] = eax_8
    arg1 += 1

uint32_t result = sub_5649c0(&arg_c84)
CookieCheckFunction(result)
return result
