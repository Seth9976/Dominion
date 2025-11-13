// 函数: sub_7072d0
// 地址: 0x7072d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

while (true)
    char* ecx = *(arg1 + 8)
    void* result
    result.b = *ecx
    
    if (result.b != 0x20 && result.b != 9 && result.b != 0xd && result.b != 0xa)
        return result
    
    char* edx_1 = ecx
    
    if (result.b == 0xa)
        *(arg1 + 0x118) += 1
    
    ecx.b = *ecx
    
    if (ecx.b u>= 0x80)
        result.b = ecx.b
        result.b &= 0xe0
        
        if (result.b != 0xc0)
            result.b = ecx.b
            result.b &= 0xf0
            
            if (result.b != 0xe0)
                ecx.b &= 0xf8
                
                if (ecx.b != 0xf0)
                    *(arg1 + 8) = &edx_1[1]
                    continue
    
    *(arg1 + 8) = sub_5a0db0(edx_1)
