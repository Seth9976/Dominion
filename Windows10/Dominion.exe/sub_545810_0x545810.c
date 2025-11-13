// 函数: sub_545810
// 地址: 0x545810
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = *(sub_573400() + 0xc)
int32_t ecx = 0
void* eax_2 = *(sub_573400() + 4)
int32_t edx = *(eax_2 + 0x1520)
void* result

if (edx s> 0)
    result = eax_2 + 0x1a70
    
    while (*(result - 0x24) != 0xd4b || *result != i)
        ecx += 1
        result += 0x64
        
        if (ecx s>= edx)
            goto label_545852

if (edx s<= 0 || ecx == 0)
label_545852:
    int32_t i_1 = *(sub_573400() + 0xc)
    int32_t ecx_1 = 0
    void* eax_5 = *(sub_573400() + 4)
    int32_t edx_1 = *(eax_5 + 0x1520)
    
    if (edx_1 s> 0)
        result = eax_5 + 0x1a70
        
        while (*(result - 0x24) != 0xd4c || *result != i_1)
            ecx_1 += 1
            result += 0x64
            
            if (ecx_1 s>= edx_1)
                return sub_56e060(0xd4b) __tailcall
    
    if (edx_1 s<= 0 || ecx_1 == 0)
        return sub_56e060(0xd4b) __tailcall

return result
