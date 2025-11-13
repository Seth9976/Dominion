// 函数: sub_53d080
// 地址: 0x53d080
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* eax_3 = *(sub_573400() + 0x64)

if (*eax_3 != 0)
    sub_63b870(eax_3, &data_801800, "c.triggerInfo->type == TRIGGERINFO_GAIN", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x1c90, "CostAtGainMoment")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

uint128_t var_1c
uint128_t xmm1 = *sub_576c00(&var_1c, eax_3[3])
int64_t var_30 = xmm1.q
uint32_t var_44[0x5]
uint32_t* eax_5 = sub_576c00(&var_44, 4)
int32_t xmm1_1 = _mm_bsrli_si128(xmm1, 8)
uint128_t xmm0 = *eax_5
var_1c = xmm0
uint32_t result

if (xmm1_1 s>= _mm_bsrli_si128(xmm0, 8) && var_30.d s>= var_1c.d && var_30:4.d s>= var_1c:4.d)
    result.b = 1
    CookieCheckFunction(result)
    return result

result.b = 0
CookieCheckFunction(result)
return result
