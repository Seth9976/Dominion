// 函数: sub_56b490
// 地址: 0x56b490
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t edx = 0
int32_t i = 7
int32_t* esi_1 = *(sub_573400() + 4) + 0x1594
int32_t var_c8c[0x321]

do
    int32_t ecx = *esi_1
    
    if (ecx != 0)
        var_c8c[edx] = ecx
        edx += 1
    
    i += 1
    esi_1 = &esi_1[4]
while (i s< 0x21)

int64_t var_cb8
__builtin_memset(&var_cb8, 0, 0x2c)
int128_t var_cec = arg1.o
int32_t var_cac
int128_t var_cdc = var_cac.o
int64_t var_c9c
int128_t var_ccc = var_c9c.o
uint32_t result = sub_56b410(&var_cec, edx, &var_c8c, &var_cec, arg2, 0)
CookieCheckFunction(result)
return result
