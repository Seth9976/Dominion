// 函数: sub_5dc8c0
// 地址: 0x5dc8c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result

if (*(arg1 + 0x1a18) == 0 && *(arg1 + 0x370) == 1)
    result = *(arg1 + 0x378)
    
    if (result == 0x15)
        result.b = 1
        return result
    
    if (result == 6 || result == 7)
        int32_t eax = *(arg1 + 0x37c)
        
        if (eax == 0x3ee || eax == 0x3ef || eax == 0x3f0)
            result.b = 1
            return result

result.b = 0
return result
