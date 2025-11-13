// 函数: sub_54f340
// 地址: 0x54f340
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = sub_57dc30(*(sub_573400() + 4), (*arg2).w)
int32_t esi_1 = *(arg1 + 8)
int32_t edx_1 = 0

if (esi_1 s> 0)
    int32_t* ecx_1 = *(arg1 + 4)
    
    do
        if (*ecx_1 == result)
            result.b = 1
            return result
        
        edx_1 += 1
        ecx_1 = &ecx_1[1]
    while (edx_1 s< esi_1)

result.b = 0
return result
