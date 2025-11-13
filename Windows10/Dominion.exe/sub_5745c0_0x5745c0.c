// 函数: sub_5745c0
// 地址: 0x5745c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = *(arg3 + 0x1520)
int32_t edi = 0

if (result s> 0)
    void* esi_1 = arg3 + 0x1a4c
    
    while (*(esi_1 + 4) != 0x3eb || *esi_1 != 0x101 || *(esi_1 + 0x24) != arg2)
        edi += 1
        esi_1 += 0x64
        
        if (edi s>= result)
            return result
    
    *esi_1 = arg4
    *(esi_1 - 4) = sub_571b30(arg4, *(arg3 + 0xd48))
    result = *(arg3 + 0x1504)
    
    if (result != 3 && result != 5 && result != 4 && result != 6)
        return sub_61b1b0(result, 0x2d, result == 2, arg2, edi, arg4, nullptr, nullptr, nullptr, 0, 
            0, 0, 0, 0)

return result
