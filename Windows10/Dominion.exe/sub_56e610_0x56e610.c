// 函数: sub_56e610
// 地址: 0x56e610
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x1928)
int32_t __saved_ebp
int32_t var_c = __security_cookie ^ &__saved_ebp
void* eax_2
int32_t edx
eax_2, edx = sub_573400()
uint32_t esi = zx.d(arg2)
int32_t edi = *(eax_2 + 4)

if (esi u>= 0x320)
    edx = sub_591930()

int32_t eax_4 = *(esi * 0x64 + edi + 0x1a4c)
void var_1928
void var_c98
__builtin_memcpy(&var_c98, sub_568780(&var_1928, edx, 0x3e9, &var_1928), 0xc84)
void* esi_2 = &var_c98
int32_t var_18
void* result = &var_c98 + (var_18 << 2)

if (&var_c98 != result)
    do
        void* eax_8 = sub_573400()
        uint32_t edi_2 = zx.d((*esi_2).w)
        int32_t ebx_1 = *(eax_8 + 4)
        
        if (edi_2 u>= 0x320)
            sub_591930()
        
        if (*(edi_2 * 0x64 + ebx_1 + 0x1a4c) == eax_4)
            result.b = 1
            CookieCheckFunction(result)
            return result
        
        esi_2 += 4
    while (esi_2 != result)

result.b = 0
CookieCheckFunction(result)
return result
