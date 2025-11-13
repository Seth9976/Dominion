// 函数: sub_56a740
// 地址: 0x56a740
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()
int32_t var_d18 = 0
char var_d1c = 0
int32_t eax_3 = *(eax_2 + 0x28)
int32_t var_ca0 = *eax_2
int32_t var_c9c = *(eax_2 + 0x10)
int128_t var_d04
int128_t* var_d24 = &var_d04
int32_t var_d28 = 9
int64_t var_cd0
__builtin_memset(&var_cd0, 0, 0x1c)
int64_t var_cac = 0
int32_t var_d2c = 0
int32_t var_d30 = 1
uint32_t result_1
__builtin_memcpy(&result_1, arg3, 0xc84)
int32_t ecx = *(eax_2 + 0x2c)
var_d04 = 0x14.o
int32_t var_cb0 = ecx
int32_t var_cc4
int128_t var_cf4 = var_cc4.o
int128_t var_ce4 = eax_3.o
int32_t var_14
int32_t eax_7
int32_t ecx_2
eax_7, ecx_2 = sub_5869d0(&result_1, &var_ca0, *(eax_2 + 4), *(eax_2 + 0xc), 1, &result_1, var_14, 
    var_d30, var_d2c, var_d28, var_d24, arg4, var_d1c, var_d18)

if (eax_7 != 0)
    uint32_t result = result_1
    int32_t var_d18_1 = ecx_2
    
    if (sub_5624a0(result, arg2) != 0)
        CookieCheckFunction(result)
        return result

CookieCheckFunction(0)
return 0
