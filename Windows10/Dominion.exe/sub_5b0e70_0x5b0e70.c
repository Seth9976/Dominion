// 函数: sub_5b0e70
// 地址: 0x5b0e70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = *(arg1 + 0x40018)

if (eax != 0)
    free(*(eax - 4))

void* eax_1 = *(arg1 + 0x40010)

if (eax_1 != 0)
    free(*(eax_1 - 4))

void* result = *(arg1 + 0x40004)

if (result == 0)
    return result

return free(*(result - 4))
