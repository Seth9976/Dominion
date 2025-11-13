// 函数: sub_559020
// 地址: 0x559020
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = *arg1
void* eax_1 = sub_573400()
int32_t edx = 0
void* result = *(eax_1 + 4) + *(eax_1 + 0xc) * 0x5a30
int32_t ecx_1 = *(result + 0x1752c)

if (ecx_1 s> 0)
    result += 0x18e78
    
    do
        if (*result == esi)
            result.b = 1
            return result
        
        edx += 1
        result += 4
    while (edx s< ecx_1)

result.b = 0
return result
