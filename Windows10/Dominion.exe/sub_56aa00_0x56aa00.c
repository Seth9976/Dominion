// 函数: sub_56aa00
// 地址: 0x56aa00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()
int32_t var_d1c = 0
int32_t var_cd8 = 0x12
int32_t eax_3 = *(eax_2 + 0x28)
int32_t var_d24 = 7
int32_t var_ca8 = *eax_2
int32_t var_ca4 = *(eax_2 + 0x10)
int128_t var_d08
int128_t* var_d28 = &var_d08
int32_t var_d2c = 9
int64_t var_cd4
__builtin_memset(&var_cd4, 0, 0x1c)
int64_t var_cb0 = 0
int32_t var_d30 = 1
int32_t var_d34 = 1
uint32_t result_1
__builtin_memcpy(&result_1, arg3, 0xc84)
int32_t ecx = *(eax_2 + 0x2c)
var_d08 = var_cd8.o
int32_t var_cb4 = ecx
int32_t var_cc8
int128_t var_cf8 = var_cc8.o
int128_t var_ce8 = eax_3.o
int32_t var_18
int32_t eax_7
int32_t* ecx_2
eax_7, ecx_2 = sub_5869d0(&result_1, &var_ca8, *(eax_2 + 4), *(eax_2 + 0xc), 1, &result_1, var_18, 
    var_d34, var_d30, var_d2c, var_d28, var_d24, arg4, var_d1c)

if (eax_7 != 0)
    int32_t edi_1 = 0
    uint32_t result = result_1
    int32_t eax_8 = 0
    int32_t edx_1 = *(arg3 + 0xc80)
    
    if (edx_1 s> 0)
        while (true)
            ecx_2 = eax_8 << 2
            
            if (*(ecx_2 + arg3) == result)
                break
            
            eax_8 += 1
            
            if (eax_8 s>= edx_1)
                goto label_56ab40
        
        edi_1 = *(ecx_2 + arg2)
    
    if (edx_1 s<= 0 || edi_1 == 0)
    label_56ab40:
        sub_591930()
    
    int32_t* var_d1c_1 = ecx_2
    
    if (sub_5624a0(result, edi_1) != 0)
        CookieCheckFunction(result)
        return result

CookieCheckFunction(0)
return 0
