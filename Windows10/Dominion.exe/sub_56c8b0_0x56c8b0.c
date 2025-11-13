// 函数: sub_56c8b0
// 地址: 0x56c8b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx = __chkstk(0x1910)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
void var_1914
void var_c8c
__builtin_memcpy(&var_c8c, sub_568780(&var_1914, edx, 0x3e9, &var_1914), 0xc84)
void* esi_1 = &var_c8c
void* result = &var_c8c + (arg1 << 2)

if (&var_c8c != result)
    do
        void* eax_5 = sub_573400()
        uint32_t edi_2 = zx.d((*esi_1).w)
        int32_t ebx = *(eax_5 + 4)
        
        if (edi_2 u>= 0x320)
            sub_591930()
        
        if (*(edi_2 * 0x64 + ebx + 0x1a4c) == 0x500)
            result.b = 1
            CookieCheckFunction(result)
            return result
        
        esi_1 += 4
    while (esi_1 != result)

result.b = 0
CookieCheckFunction(result)
return result
