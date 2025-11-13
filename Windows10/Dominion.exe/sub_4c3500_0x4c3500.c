// 函数: sub_4c3500
// 地址: 0x4c3500
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi = *(arg1 + 0x11a8)
int32_t result = 0

if (edi s> 0)
    void* esi_1 = arg1 + 0x64
    
    do
        if (*esi_1 == arg2)
            result = *(result * 0x22c + arg1 + 0x68)
            
            if (result != 0x3e9 && result != 0x3ec && result != 0x3ed)
                break
            
            result.b = 1
            return result
        
        result += 1
        esi_1 += 0x22c
    while (result s< edi)

result.b = 0
return result
