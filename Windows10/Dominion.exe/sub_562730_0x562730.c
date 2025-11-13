// 函数: sub_562730
// 地址: 0x562730
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()
int32_t* edx_1 = arg4
uint32_t esi = sub_590990(arg4, *(eax_2 + 0xc), *(eax_2 + 4), 0x3ea, arg4)
edx_1[0x320] = esi
int32_t var_d08

if (esi s> arg3)
    var_d08 = *eax_2
    int32_t var_d04_1 = *(eax_2 + 0x10)
    int32_t* ecx_2 = *(eax_2 + 4)
    int64_t var_cfc
    __builtin_memset(&var_cfc, 0, 0x2c)
    int128_t var_cd0 = 0x12.o
    int32_t var_cf0
    int128_t var_cc0_1 = var_cf0.o
    int64_t var_ce0
    int128_t var_cb0_1 = var_ce0.o
    uint32_t eax_8 = sub_5869d0(&var_cd0, &var_d08, ecx_2, *(eax_2 + 0xc), 1, edx_1, esi, arg3, 
        arg3, 9, &var_cd0, 7, 0, 0)
    edx_1 = arg4
    esi = eax_8

int32_t var_d0c_1 = *(eax_2 + 0xc)
var_d08 = *(eax_2 + 4)
void var_c98
int32_t ecx_5
int32_t edi_1

if (esi s> 0)
    edi_1, ecx_5 = __memfill_u32(&var_c98, 0x3ea, esi)
int32_t var_d24_1 = 0
void var_d18
sub_590de0(edx_1, esi, &var_c98, 0x12, var_d18, var_d08)
arg4[0x320] = esi
CookieCheckFunction(arg4)
return arg4
