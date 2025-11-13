// 函数: sub_712d20
// 地址: 0x712d20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1

if (*(arg1 + 0x78) == arg2)
    return *(arg1 + 0x74)

int32_t ebx = arg2 << 2
int32_t eax_1 = data_147ded8
int32_t result

if (eax_1 == 0)
    result = malloc(ebx)
else
    result = eax_1(ebx, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\AnimationState.c", 0x37c)

if (result != 0)
    memset(result, 0, ebx)

free(*(arg1 + 0x74))
*(arg1 + 0x78) = arg2
*(arg1 + 0x74) = result
return result
