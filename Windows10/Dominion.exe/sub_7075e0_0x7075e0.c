// 函数: sub_7075e0
// 地址: 0x7075e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_4 = arg1

if (sub_707330(arg1, 0x3e).b == 0)
    if (sub_707330(arg1, 0x2f) == 0)
        if (sub_707390(arg1) != 0)
            *(arg1 + 4) = 2
            return 1
    else
        sub_7072d0(arg1)
        
        if (sub_707330(arg1, 0x3e) != 0)
            *(arg1 + 4) = 4
            return 1
else
    char* ecx = *(arg1 + 8)
    *(arg1 + 0xc) = ecx
    char* result
    
    while (true)
        result.b = *ecx
        
        if (result.b == 0)
            break
        
        if (result.b == 0x3c)
            break
        
        if (result.b == 0xa)
            *(arg1 + 0x118) += 1
        
        char edx_1 = *ecx
        
        if (edx_1 u>= 0x80)
            result.b = edx_1
            result.b &= 0xe0
            
            if (result.b != 0xc0)
                result.b = edx_1
                result.b &= 0xf0
                
                if (result.b != 0xe0 && (edx_1 & 0xf8) != 0xf0)
                    ecx = &ecx[1]
                    *(arg1 + 8) = ecx
                    continue
        
        ecx = sub_5a0db0(ecx)
        *(arg1 + 8) = ecx
    
    char* edx_2 = *(arg1 + 0xc)
    int32_t edi_1 = 0
    int32_t ecx_1 = ecx - edx_2
    *(arg1 + 0x10) = ecx_1
    
    if (ecx_1 s> 0)
        do
            result.b = *edx_2
            
            if (result.b != 0x20 && result.b != 9 && result.b != 0xd && result.b != 0xa)
                *(arg1 + 4) = 3
                result.b = 1
                return result
            
            edi_1 += 1
            edx_2 = &edx_2[1]
        while (edi_1 s< ecx_1)
    
    if (sub_7074e0(arg1) != 0)
        return 1

return 0
