// 函数: sub_713a30
// 地址: 0x713a30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (*(arg2 + 0x68) != 0)
    return 

if (*(arg2 + 8) != 0)
    sub_713a30()

*(arg2 + 0x68) = 1
int32_t eax_1 = *(arg1 + 0x60)

if (*(arg1 + 0x5c) == eax_1)
    int32_t eax_2 = eax_1 * 2
    *(arg1 + 0x60) = eax_2
    *(arg1 + 0x64) = realloc(*(arg1 + 0x64), eax_2 << 3)

int32_t ecx = *(arg1 + 0x5c)
int32_t eax = *(arg1 + 0x64)
*(eax + (ecx << 3)) = 0
*(eax + (ecx << 3) + 4) = arg2
*(arg1 + 0x5c) += 1
