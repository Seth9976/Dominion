// 函数: sub_56d740
// 地址: 0x56d740
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t edx
ecx, edx = __chkstk(0x191c)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
uint32_t result = 0
void var_1920
void var_c8c
__builtin_memcpy(&var_c8c, sub_568780(&var_1920, edx, ecx, &var_1920), 0xc84)
void* edi = &var_c8c
void* eax_6 = &var_c8c + (arg1 << 2)

if (&var_c8c != eax_6)
    do
        void* eax_7 = sub_573400()
        uint32_t esi_2 = zx.d((*edi).w)
        int32_t eax_8 = *(eax_7 + 4)
        
        if (esi_2 u>= 0x320)
            sub_591930()
        
        int32_t i = *(esi_2 * 0x64 + eax_8 + 0x1a4c)
        int32_t eax_10 = 0
        
        if (result s> 0)
            while (*(edx + (eax_10 << 2)) != i)
                eax_10 += 1
                
                if (eax_10 s>= result)
                    break
        
        int32_t edx_1 = eax_10 << 2
        
        if (eax_10 == result)
            *(edx_1 + arg2) = 0
            *(edx + (result << 2)) = i
            result += 1
        
        *(edx_1 + arg2) += 1
        edi += 4
    while (edi != eax_6)

CookieCheckFunction(result)
return result
