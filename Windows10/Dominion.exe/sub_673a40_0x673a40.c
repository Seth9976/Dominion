// 函数: sub_673a40
// 地址: 0x673a40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t result = sub_64e7a0(arg3)

if (*(result + 0x171c) == 0)
    int32_t eax = *arg4
    *(arg2 + (eax << 2)) = arg3
    *arg4 = eax + 1
    result = sub_64e7a0(arg3)
    int32_t esi_1 = 0
    uint32_t result_1 = result
    int32_t ecx_1 = *(result + 0x189c)
    
    if (ecx_1 != 0)
        do
            *(result + (esi_1 << 2) + 0x179c)
            sub_673a40(arg4)
            result = result_1
            esi_1 += 1
        while (esi_1 != ecx_1)

return result
