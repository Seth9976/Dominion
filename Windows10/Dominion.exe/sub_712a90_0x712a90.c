// 函数: sub_712a90
// 地址: 0x712a90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1

if (arg2 s< *(arg1 + 4))
    return *(*(arg1 + 8) + (arg2 << 2))

int32_t ebx = (arg2 + 1) << 2
int32_t eax_3 = data_147ded8
int32_t eax_4

if (eax_3 == 0)
    eax_4 = malloc(ebx)
else
    eax_4 = eax_3(ebx, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\AnimationState.c", 0x325)

if (eax_4 != 0)
    memset(eax_4, 0, ebx)

memcpy(eax_4, *(arg1 + 8), *(arg1 + 4) << 2)
free(*(arg1 + 8))
*(arg1 + 8) = eax_4
*(arg1 + 4) = arg2 + 1
return 0
