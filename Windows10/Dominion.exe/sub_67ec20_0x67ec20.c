// 函数: sub_67ec20
// 地址: 0x67ec20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result

if (arg1[0x13] == *(arg2 + 0x4c) && arg1[0x14] == *(arg2 + 0x50))
    result = arg1[0x12]
    
    if (result == *(arg2 + 0x48))
        if (result == 0)
            result.b = 0
            result.b = 1
            return result
        
        int32_t esi_1 = result * 0x18
        int32_t i_1 = esi_1 - 4
        
        if (esi_1 u>= 4)
            int32_t i
            
            do
                if (*arg1 != *arg2)
                    goto label_67ec68
                
                arg1 = &arg1[1]
                arg2 += 4
                i = i_1
                i_1 -= 4
            while (i u>= 4)
        
        if (i_1 != 0xfffffffc)
        label_67ec68:
            result.b = *arg1
            
            if (result.b != *arg2)
            label_67ec95:
                result.b = 1
                result.b = 0
                return result
            
            if (i_1 != 0xfffffffd)
                result.b = *(arg1 + 1)
                
                if (result.b != *(arg2 + 1))
                    goto label_67ec95
                
                if (i_1 != 0xfffffffe)
                    result.b = *(arg1 + 2)
                    
                    if (result.b != *(arg2 + 2))
                        goto label_67ec95
                    
                    if (i_1 != 0xffffffff)
                        result.b = *(arg1 + 3)
                        
                        if (result.b != *(arg2 + 3))
                            goto label_67ec95
        
        result.b = 0
        result.b = 1
        return result

result.b = 1
result.b = 0
return result
