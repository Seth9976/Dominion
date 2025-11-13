// 函数: sub_535a00
// 地址: 0x535a00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
int32_t edx = 0
void* result = *(eax + 4) + *(eax + 0xc) * 0x5a30
int32_t ecx_1 = *(result + 0x17544)

if (ecx_1 s> 0)
    result += 0x19af8
    
    do
        if (*result == arg1)
            result.b = 1
            return result
        
        edx += 1
        result += 4
    while (edx s< ecx_1)

result.b = 0
return result
