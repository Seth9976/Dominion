// 函数: sub_648980
// 地址: 0x648980
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t edi = arg2
int64_t var_8c = *(arg1 + 8)
int128_t xmm0_1 = *(arg1 + 0x14)
int32_t var_84 = *(arg1 + 0x10)
void* eax_3 = *(arg1 + 0x2c)
float var_a0 = *(arg1 + 0x24)
int128_t var_60 = var_a0.o
int128_t var_50 = xmm0_1

if (eax_3 != 0)
    arg2.b = *(eax_3 + 0xc) != 0
else
    arg2.b = 0

float* eax_5 = sub_64b1b0(&var_a0, arg2, &var_60, &var_a0)
var_60 = *eax_5
int128_t var_50_1 = *(eax_5 + 0x10)
int128_t var_40 = *(eax_5 + 0x20)
uint32_t eax_6 = arg1

if (arg2.b == 0)
    eax_6 = 0

int128_t var_30 = *(eax_5 + 0x30)
int32_t* result = sub_648470(eax_6, &var_60, *(arg1 + 4), edi, 0, eax_6)
CookieCheckFunction(result)
return result
