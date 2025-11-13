// 函数: sub_562540
// 地址: 0x562540
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_d08 = arg8
int32_t eax_3 = *(arg3 + 0xc80)

if (arg2 s>= eax_3)
    arg2 = eax_3

if (arg2 == 0)
    memset(arg4, arg2, 0xc84)
    CookieCheckFunction(arg4)
    return arg4

int64_t var_cfc
__builtin_memset(&var_cfc, 0, 0x2c)
int128_t var_cd0 = arg6.o
int32_t var_cf0
int128_t var_cc0 = var_cf0.o
int64_t var_ce0
int128_t var_cb0 = var_ce0.o
void var_ca0
int32_t* eax_7 = sub_563960(&var_ca0, 0, arg3, &var_ca0, arg2, 9, &var_cd0, 7, arg7, 0)
int32_t eax_8 = var_d08
__builtin_memcpy(arg4, eax_7, 0xc84)

if (eax_8 != 0)
    eax_8(arg4)

void* eax_9 = sub_573400()
uint32_t edx = *(arg4 + 0xc80)
int32_t eax_10 = *(eax_9 + 4)
var_d08 = *(eax_9 + 0xc)
int32_t var_d04 = eax_10
int32_t ecx_4
int32_t edi_1

if (edx s> 0)
    edi_1, ecx_4 = __memfill_u32(&var_ca0, arg5, edx)
sub_590de0(arg4, edx, &var_ca0, 0x12, 0)
CookieCheckFunction(arg4)
return arg4
