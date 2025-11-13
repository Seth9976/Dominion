// 函数: sub_5ddda0
// 地址: 0x5ddda0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = *(arg1 + 0x1c28)

if (data_b7fcd0 == esi)
    int32_t eax_1
    eax_1.b = *(arg1 + 0x1bf8) != 4
    return eax_1 + 3

if (data_b80b4c != 2 || *(arg1 + 0x2c) != 0 || *(arg1 + 0xa4) != 0x3e9 || data_b80b08 == 0x2b
        || *(arg1 + 0x98) != data_b80b50)
    int32_t edx_1 = *(arg1 + 0x1a18)
    int32_t eax_4 = data_b604e0
    
    if (edx_1 s<= 0)
        if (eax_4 == 0xffffffff)
            eax_4 = 0
        
        int32_t eax_13
        
        if (*(arg1 + 0xa0) == eax_4 && edx_1 == 0 && *(arg1 + 0x370) == 1)
            eax_13 = *(arg1 + 0x378)
        
        if (*(arg1 + 0xa0) == eax_4 && edx_1 == 0 && *(arg1 + 0x370) == 1
                && (eax_13 == 6 || eax_13 == 7) && *(arg1 + 0x37c) == 0x3ea)
            return 2
        
        int32_t result
        result.b = sub_5dc840(arg1) != 0
        return result
    
    if (eax_4 == 0xffffffff)
        eax_4 = 0
    
    if (*(arg1 + 0x2e8) == 0)
        return 0
    
    int32_t edx_2 = data_b7d434
    
    if (*(arg1 + 0xa0) != eax_4)
    label_5ddece:
        
        if (esi != edx_2)
        label_5ddeeb:
            
            if (*(arg1 + 0x418) != 1)
                return 0
            
            int32_t eax_10 = *(arg1 + 0x420)
            
            if (eax_10 == 6)
                if (*(arg1 + 0x424) u> 0x48)
                    return 0
            else if (eax_10 != 7 || *(arg1 + 0x424) u> 0x48)
                return 0
        else
            int32_t eax_9 = *(arg1 + 0x1ac8)
            
            if (eax_9 == 6)
                if (*(arg1 + 0x1acc) u> 0x48)
                    goto label_5ddeeb
            else if (eax_9 != 7 || *(arg1 + 0x1acc) u> 0x48)
                goto label_5ddeeb
    else
        if (*(arg1 + 0x370) == 0)
            return 0
        
        if (esi == edx_2)
            int32_t eax_5 = *(arg1 + 0x1ac8)
            
            if (eax_5 == 6)
                if (*(arg1 + 0x1acc) == 0x3ea)
                    return 2
            else if (eax_5 == 7 && *(arg1 + 0x1acc) == 0x3ea)
                return 2
        
        if (*(arg1 + 0x418) == 1)
            int32_t eax_6 = *(arg1 + 0x420)
            
            if (eax_6 == 6)
                if (*(arg1 + 0x424) == 0x3ea)
                    return 2
            else if (eax_6 == 7 && *(arg1 + 0x424) == 0x3ea)
                return 2
        
        if (esi != edx_2)
        label_5ddea9:
            
            if (*(arg1 + 0x418) != 1)
                goto label_5ddece
            
            int32_t eax_8 = *(arg1 + 0x420)
            
            if (eax_8 == 6)
                if (*(arg1 + 0x424) != 0x3ec)
                    goto label_5ddece
            else if (eax_8 != 7 || *(arg1 + 0x424) != 0x3ec)
                goto label_5ddece
        else
            int32_t eax_7 = *(arg1 + 0x1ac8)
            
            if (eax_7 == 6)
                if (*(arg1 + 0x1acc) != 0x3ec)
                    goto label_5ddea9
            else if (eax_7 != 7 || *(arg1 + 0x1acc) != 0x3ec)
                goto label_5ddea9

return 1
