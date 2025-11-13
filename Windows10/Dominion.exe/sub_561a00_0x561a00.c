// 函数: sub_561a00
// 地址: 0x561a00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint32_t result = __security_cookie ^ &__saved_ebp
uint32_t result_1 = result
int32_t edi = 0
void* var_c90 = arg1

if (arg2 != 0)
    *(arg2 + 0xc80) = 0

int32_t i = 0

if (*(arg1 + 0xc80) s> 0)
    do
        uint32_t esi_2 = zx.d((*(arg1 + (i << 2))).w)
        int32_t eax_2 = *(sub_573400() + 4)
        
        if (esi_2 u>= 0x320)
            sub_591930()
        
        int32_t j = *(esi_2 * 0x64 + eax_2 + 0x1a4c)
        result = 0
        int32_t var_c8c[0x321]
        
        if (edi s<= 0)
        label_561a7e:
            var_c8c[edi] = j
            edi += 1
            arg1 = var_c90
        else
            while (var_c8c[result] != j)
                result += 1
                
                if (result s>= edi)
                    goto label_561a7e
            
            if (arg2 != 0)
                *(arg2 + (*(arg2 + 0xc80) << 2)) = *(var_c90 + (i << 2))
                *(arg2 + 0xc80) += 1
            
            arg1 = var_c90
            *(arg1 + 0xc80) -= 1
            result = *(arg1 + (*(arg1 + 0xc80) << 2))
            *(arg1 + (i << 2)) = result
            i -= 1
        i += 1
    while (i s< *(arg1 + 0xc80))

CookieCheckFunction(result)
return result
