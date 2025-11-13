// 函数: sub_4d63a0
// 地址: 0x4d63a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
int32_t edi = 0
int32_t esi = 0
int32_t eax = *arg1
void* result

while (true)
    if (*(sub_61dad0() + 8 + esi) != eax)
        esi += 0xc
        edi += 1
        
        if (esi s< 0x78)
            continue
        
        goto label_4d63d8
    
    if (edi != 4 && edi != 9)
    label_4d63d8:
        int32_t edx_1 = arg1[0x46a]
        int32_t ecx_1 = 0
        
        if (edx_1 s> 0)
            result = &arg1[0x471]
            
            while (*result == 0)
                ecx_1 += 1
                result += 0x18
                
                if (ecx_1 s>= edx_1)
                    result.b = 0
                    return result
            
            break
    else if (arg1[0x477] != 0)
        break
    
    result.b = 0
    return result

result.b = 1
return result
