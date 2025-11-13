// 函数: sub_5dc910
// 地址: 0x5dc910
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result

if (*(arg1 + 0x1a18) != 0)
    if (*(arg1 + 0x2e8) == 1)
        result = *(arg1 + 0x378)
        
        if (result == 6)
            if (*(arg1 + 0x2f4) == arg2)
                result.b = 1
                return result
        else if (result == 7 && *(arg1 + 0x2f4) == arg2)
            result.b = 1
            return result
    
    if (*(arg1 + 0x418) == 1 && *(arg1 + 0x4a0) != 0xb)
        result = *(arg1 + 0x420)
        
        if (result == 6 || result == 7)
            result.b = *(arg1 + 0x424) == arg2
            return result
else if (*(arg1 + 0x370) == 1)
    result = *(arg1 + 0x378)
    
    if ((result == 6 || result == 7) && *(arg1 + 0x37c) == arg2)
        result.b = 1
        return result

result.b = 0
return result
