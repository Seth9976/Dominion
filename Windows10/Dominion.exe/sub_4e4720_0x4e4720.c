// 函数: sub_4e4720
// 地址: 0x4e4720
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result

if (*arg1 == 0 && arg1[0x28] == 0 && arg1[0x2ff] == 0 && arg1[0x300] == 0 && arg1[0x5bd] == 0)
    int32_t edx_1 = 0
    result = &arg1[0x272]
    
    while (true)
        if (*result != 0)
            if (*(result + 8) != 0)
                break
            
            if (*(result + 0xc) != 0xa)
                break
            
            edx_1 += 1
            result += 0x10
            
            if (edx_1 s< 0x20)
                continue
        
        if (arg1[0x2f2] != 0)
            break
        
        if (arg1[0x2f3] != 2 || arg1[0x2f4] != 0 || arg1[0x2f5] != 2 || arg1[0x2f6] != 0
                || arg1[0x2f7] != 2 || arg1[0x2f8] != 0 || arg1[0x2f9] != 2 || arg1[0x2fa] != 0
                || arg1[0x2fb] != 1 || arg1[0x2fc] != 0 || arg1[0x2fd] != 2 || arg1[0x2fe].b != 0
                || *(arg1 + 0xbf9) != 0)
            break
        
        result.b = arg1[0x5c4] != 0
        return result

result.b = 1
return result
