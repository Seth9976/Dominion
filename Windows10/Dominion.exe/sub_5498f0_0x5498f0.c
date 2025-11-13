// 函数: sub_5498f0
// 地址: 0x5498f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result

if (sub_56e820(2, 0).b != 0)
    int32_t* eax_1 = *(sub_573400() + 0x64)
    
    if (*eax_1 != 0)
        sub_63b870(eax_1, &data_801800, "c.triggerInfo->type == TRIGGERINFO_GAIN", 
            "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x1c90, "CostAtGainMoment")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    uint128_t var_50
    uint128_t xmm1_1 = *sub_576c00(&var_50, eax_1[3])
    int64_t var_70_1 = xmm1_1.q
    uint32_t var_28[0x6]
    uint32_t* eax_3 = sub_576c00(&var_28, 5)
    int32_t xmm1_2 = _mm_bsrli_si128(xmm1_1, 8)
    uint128_t xmm0_1 = *eax_3
    var_50 = xmm0_1
    
    if (xmm1_2 s>= _mm_bsrli_si128(xmm0_1, 8) && var_70_1.d s>= var_50.d
            && var_70_1:4.d s>= var_50:4.d)
        result.b = 1
        return result

result.b = 0
return result
