// 函数: sub_56ab80
// 地址: 0x56ab80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()
int32_t var_d24 = 0
int32_t eax_4 = *(eax_2 + 0x28)
char var_d28 = 0
int32_t var_d08 = *eax_2
int32_t var_d04 = *(eax_2 + 0x10)
int128_t var_cd0
int128_t* var_d30 = &var_cd0
int32_t var_d34 = 9
int32_t var_d38 = 1
uint32_t result_1
__builtin_memcpy(&result_1, arg3, 0xc84)
int32_t ecx = *(eax_2 + 0x2c)
int32_t var_d3c = 1
int64_t var_cfc
__builtin_memset(&var_cfc, 0, 0x1c)
int64_t var_cd8 = 0
int32_t var_cdc = ecx
var_cd0 = arg4.o
int32_t var_cf0
int128_t var_cc0 = var_cf0.o
int128_t var_cb0 = eax_4.o
int32_t var_20
int32_t eax_8
int32_t ecx_3
eax_8, ecx_3 = sub_5869d0(&result_1, &var_d08, *(eax_2 + 4), *(eax_2 + 0xc), 1, &result_1, var_20, 
    var_d3c, var_d38, var_d34, var_d30, arg5, var_d28, var_d24)

if (eax_8 != 0)
    uint32_t result = result_1
    int32_t var_d24_1 = ecx_3
    
    if (sub_5624a0(result, arg2) != 0)
        CookieCheckFunction(result)
        return result

CookieCheckFunction(0)
return 0
