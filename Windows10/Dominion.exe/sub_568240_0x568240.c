// 函数: sub_568240
// 地址: 0x568240
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint128_t var_1c
uint128_t xmm1 = *sub_576c00(&var_1c, arg1)
int64_t var_30 = xmm1.q
uint32_t var_44[0x5]
uint32_t* eax_3 = sub_576c00(&var_44, arg2)
int32_t xmm1_1 = _mm_bsrli_si128(xmm1, 8)
uint128_t xmm0 = *eax_3
var_1c = xmm0

if (xmm1_1 == _mm_bsrli_si128(xmm0, 8) && var_30:4.d == var_1c:4.d)
    uint32_t eax_5
    eax_5.b = var_30.d == var_1c.d
    CookieCheckFunction(eax_5)
    return eax_5

uint32_t eax_4
eax_4.b = 0
CookieCheckFunction(eax_4)
return eax_4
