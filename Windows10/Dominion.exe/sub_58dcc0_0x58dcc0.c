// 函数: sub_58dcc0
// 地址: 0x58dcc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = arg3
int32_t edx = *(arg3 + 0xc80)

if (edx != 0)
    uint32_t eax_1 = sub_63ed10(arg2, edx)
    *(arg3 + (eax_1 << 2))
    *(arg3 + 0xc80) -= 1
    *(arg3 + (eax_1 << 2)) = *(arg3 + (*(arg3 + 0xc80) << 2))
    return 1

if ((arg4 & 1) != 0)
    int32_t edx_2 = *(arg3 + 0x2588)
    
    if (edx_2 != 0)
        uint32_t eax_5 = sub_63ed10(arg2, edx_2)
        *(arg3 + (eax_5 << 2) + 0x1908)
        *(arg3 + 0x2588) -= 1
        *(arg3 + (eax_5 << 2) + 0x1908) = *(arg3 + (*(arg3 + 0x2588) << 2) + 0x1908)
        return 3

int32_t edx_4 = *(arg3 + 0x1904)

if (edx_4 == 0)
    return 0

uint32_t eax_9 = sub_63ed10(arg2, edx_4)
*(arg3 + (eax_9 << 2) + 0xc84)
*(arg3 + 0x1904) -= 1
*(arg3 + (eax_9 << 2) + 0xc84) = *(arg3 + (*(arg3 + 0x1904) << 2) + 0xc84)
return 2
