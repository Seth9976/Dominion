// 函数: sub_56cd40
// 地址: 0x56cd40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
void* eax = sub_573400()
void* esi = *(eax + 4)
int32_t* result = sub_57da30(esi, arg2)
int32_t edx_1 = 7
void* ecx_1 = esi + 0x1594
int32_t i

while (true)
    i = *ecx_1
    
    if (i == arg2)
        break
    
    if (*(ecx_1 + 4) == arg2)
        break
    
    if (i == result)
        break
    
    edx_1 += 1
    ecx_1 += 0x10
    
    if (edx_1 s>= 0x48)
        return result

if (i != 0)
    void* edx_2 = 7
    result = *(eax + 4) + 0x1594
    
    while (*result != i)
        if (result[1] == i)
            break
        
        edx_2 += 1
        result = &result[4]
        
        if (edx_2 s>= 0x48)
            edx_2 = nullptr
            break
    
    if (edx_2 != 0)
        return sub_56cc00(arg1, edx_2)

return result
