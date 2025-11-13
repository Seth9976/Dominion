// 函数: sub_58bb00
// 地址: 0x58bb00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t edi = zx.d(arg4.w)

if (edi u>= 0x320)
    sub_591930()

int32_t ecx = *(arg3 + 0xd38)
void* edi_2 = edi * 0x64 + arg3
int32_t var_24[0x6]

if (ecx s> 0)
    __builtin_memset(&var_24, 0, ecx << 2)

void* eax_3 = sub_571b30(*(edi_2 + 0x1a4c), *(arg3 + 0xd48))
int32_t eax_5 = *(eax_3 + 0x9c) & 0x940
int32_t edx_1

if (((*(eax_3 + 0x98) & 0x7f000400) | eax_5) != 0)
    edx_1 = *(edi_2 + 0x1a4c)

if (((*(eax_3 + 0x98) & 0x7f000400) | eax_5) == 0 || edx_1 == 0xd4d || edx_1 == 0xd4e)
    if (*(edi_2 + 0x1a70) != arg2)
        CookieCheckFunction(0)
        return 0
    
    int32_t edx_2 = *(edi_2 + 0x1a4c)
    
    if (edx_2 == 0xb13)
        uint32_t eax_7 = sub_58b790(eax_5, arg2, arg3, arg4)
        CookieCheckFunction(eax_7)
        return eax_7
    
    sub_58b880(&var_24, edx_2, arg3, &var_24)
else
    sub_58b9f0(&var_24, edx_1, arg3, &var_24)

uint32_t eax_9 = var_24[arg2]
CookieCheckFunction(eax_9)
return eax_9
