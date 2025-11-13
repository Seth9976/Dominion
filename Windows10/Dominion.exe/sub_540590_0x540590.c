// 函数: sub_540590
// 地址: 0x540590
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_2 = sub_57dc30(*(sub_573400() + 4), (*arg2).w)
int32_t ecx_1 = 0
int32_t result = *(arg1 + 0x74)

if (result s> 0)
    do
        if (*(arg1 + 4 + (ecx_1 << 2)) == eax_2)
            goto label_5405ed
        
        ecx_1 += 1
    while (ecx_1 s< result)

if ((*(sub_571b30(eax_2, *(*(sub_573400() + 4) + 0xd48)) + 0x98) & 4) != 0)
    result.b = 1
    return result

label_5405ed:
result.b = 0
return result
