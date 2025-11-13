// 函数: sub_67eba0
// 地址: 0x67eba0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = arg1
int32_t result

if (esi[0xd] == *(arg2 + 0x34) && esi[0xe] == *(arg2 + 0x38))
    int32_t ecx = esi[0xc]
    
    if (ecx == *(arg2 + 0x30))
        if (ecx == 0)
        label_67ec10:
            result.b = 0
            result.b = 1
            return result
        
        int32_t ecx_1 = ecx << 4
        int32_t i_1 = ecx_1 - 4
        
        if (ecx_1 u>= 4)
            int32_t i
            
            do
                if (*esi != *arg2)
                    goto label_67ebdd
                
                esi = &esi[1]
                arg2 += 4
                i = i_1
                i_1 -= 4
            while (i u>= 4)
        
        if (i_1 == 0xfffffffc)
            goto label_67ec10
        
    label_67ebdd:
        result.b = *esi
        
        if (result.b == *arg2)
            if (i_1 == 0xfffffffd)
                goto label_67ec10
            
            result.b = *(esi + 1)
            
            if (result.b == *(arg2 + 1))
                if (i_1 == 0xfffffffe)
                    goto label_67ec10
                
                result.b = *(esi + 2)
                
                if (result.b == *(arg2 + 2))
                    if (i_1 == 0xffffffff)
                        goto label_67ec10
                    
                    result.b = *(esi + 3)
                    
                    if (result.b == *(arg2 + 3))
                        goto label_67ec10

result.b = 1
result.b = 0
return result
