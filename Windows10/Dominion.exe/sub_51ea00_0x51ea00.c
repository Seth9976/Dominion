// 函数: sub_51ea00
// 地址: 0x51ea00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = *arg1
void* eax_1 = sub_571b30(i, 0x18)
int32_t* result

if (((*(eax_1 + 0x98) & 0x7f000400) | (*(eax_1 + 0x9c) & 0x940)) != 0)
label_51ea86:
    result.b = 0
    return result

result = *(data_1597e0c + (((i s>> 4 | i) & data_1597e10) << 2))

if (result != 0)
    while (i != *result)
        result = result[4]
        
        if (result == 0)
            result.b = 1
            return result
    
    void* ecx_8 = &result[1]
    
    if (ecx_8 != 0)
        result = nullptr
        int32_t ecx_9 = *(ecx_8 + 4)
        
        if (ecx_9 s> 0)
            do
                if (*(*ecx_8 + (result << 2)) == 0x32)
                    goto label_51ea86
                
                result += 1
            while (result s< ecx_9)

result.b = 1
return result
