// 函数: sub_58d710
// 地址: 0x58d710
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = 0
int32_t* result = arg1

while (true)
    int32_t edi_1 = *result
    
    if (edi_1 != 0)
        if (edi_1 == 1 && arg2 == result[1])
            break
        
        esi += 1
        result = &result[4]
        
        if (esi s< 0xa)
            continue
    
    int32_t edi_2 = 0
    void* esi_1 = &arg1[0x29]
    
    while (true)
        result = *(esi_1 - 4)
        
        if (result != 0)
            if (result == 1 && arg2 == *esi_1)
                break
            
            int32_t i = 0
            result = esi_1 + 0xc
            
            do
                if (arg2 == *result)
                    goto label_58d795
                
                i += 1
                result = &result[1]
            while (i s< 0xe)
            
            edi_2 += 1
            esi_1 += 0x48
            
            if (edi_2 s< 4)
                continue
        
        int32_t ecx = 0
        result = &arg1[0x71]
        
        while (true)
            int32_t esi_2 = result[-1]
            
            if (esi_2 != 0)
                if (esi_2 == 1 && arg2 == *result)
                    break
                
                ecx += 1
                result = &result[4]
                
                if (ecx s< 0x6b)
                    continue
            
            result.b = 0
            return result
        
        break
    
    break

label_58d795:
result.b = 1
return result
