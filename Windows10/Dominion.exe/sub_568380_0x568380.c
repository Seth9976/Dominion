// 函数: sub_568380
// 地址: 0x568380
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()
uint32_t esi_1 = zx.d(arg3)
int32_t ebx = *(eax_2 + 0xc)
void* edi = *(eax_2 + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t eax_3 = esi_1 * 0x64
int32_t var_c
sub_576e90(eax_3, edi, &var_c, ebx, *(eax_3 + edi + 0x1a4c), 0)
uint128_t var_24
uint128_t xmm1 = *sub_576c00(&var_24, var_c)
int64_t var_38 = xmm1.q
uint32_t var_54[0x7]
uint32_t* eax_5 = sub_576c00(&var_54, arg4)
int32_t edx_1 = var_38:4.d
int32_t xmm1_1 = _mm_bsrli_si128(xmm1, 8)
uint128_t xmm0 = *eax_5
uint32_t result = var_38.d
var_24 = xmm0
int32_t esi_2 = var_24:4.d
int32_t ecx_1 = var_24.d
int32_t xmm0_1 = _mm_bsrli_si128(xmm0, 8)
bool cond:0 = xmm1_1 s> xmm0_1

if (xmm1_1 s< xmm0_1)
    if (result s<= ecx_1 && edx_1 s<= esi_2)
    label_568429:
        result.b = 1
        CookieCheckFunction(result)
        return result
    
    cond:0 = xmm1_1 s> xmm0_1

if (cond:0)
label_568459:
    result.b = 0
    CookieCheckFunction(result)
    return result

bool cond:1_1 = result s> ecx_1

if (result s< ecx_1)
    if (edx_1 s<= esi_2)
        goto label_568429
    
    cond:1_1 = result s> ecx_1

if (cond:1_1)
    goto label_568459

result.b = edx_1 s< esi_2
CookieCheckFunction(result)
return result
