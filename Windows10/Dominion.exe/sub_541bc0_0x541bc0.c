// 函数: sub_541bc0
// 地址: 0x541bc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t eax_3 = *(sub_573400() + 4)
uint32_t result = arg1
uint32_t esi = zx.d(result.w)

if (esi u>= 0x320)
    sub_591930()
    result = arg1

int32_t edi = esi * 0x64

if (*(edi + eax_3 + 0x1a4c) != 0xd06 && sub_565de0(result.w, 0xd06).b != 0)
    int32_t* eax_5 = *(sub_573400() + 0x64)
    
    if (*eax_5 != 0)
        sub_63b870(eax_5, &data_801800, "c.triggerInfo->type == TRIGGERINFO_GAIN", 
            "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x1c90, "CostAtGainMoment")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    uint128_t var_70
    uint128_t xmm1_1 = *sub_576c00(&var_70, eax_5[3])
    int64_t var_50_1 = xmm1_1.q
    uint32_t var_30[0x7]
    uint32_t* eax_7 = sub_576c00(&var_30, 3)
    int32_t xmm1_2 = _mm_bsrli_si128(xmm1_1, 8)
    uint128_t xmm0_1 = *eax_7
    var_70 = xmm0_1
    
    if (xmm1_2 s>= _mm_bsrli_si128(xmm0_1, 8) && var_50_1.d s>= var_70.d
            && var_50_1:4.d s>= var_70:4.d)
        int32_t eax_9 = *(sub_573400() + 4)
        
        if (esi u>= 0x320)
            sub_591930()
        
        int32_t ecx_3 = *(edi + eax_9 + 0x1a50)
        int32_t eax_10 = *(edi + eax_9 + 0x1a54)
        result = *(sub_573400() + 4)
        
        if (esi u>= 0x320)
            sub_591930()
        
        if (ecx_3 == *(edi + result + 0x1a58) && eax_10 == *(edi + result + 0x1a5c))
            result.b = 1
            CookieCheckFunction(result)
            return result

result.b = 0
CookieCheckFunction(result)
return result
