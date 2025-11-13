// 函数: sub_710f50
// 地址: 0x710f50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = *(arg1 + 0xc)
int32_t result = *(arg1 + 8) + 1

if (result s> ecx)
    int32_t eax_1 = ecx * 2
    *(arg1 + 0xc) = eax_1
    int32_t ebx_1 = eax_1 << 2
    int32_t eax_2 = data_147ded8
    int32_t eax_3
    
    if (eax_2 == 0)
        eax_3 = malloc(ebx_1)
    else
        eax_3 =
            eax_2(ebx_1, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\AnimationState.c", 0x57)
    
    if (eax_3 != 0)
        memset(eax_3, 0, ebx_1)
    
    memcpy(eax_3, *(arg1 + 4), *(arg1 + 8) << 2)
    result = free(*(arg1 + 4))
    *(arg1 + 4) = eax_3

return result
