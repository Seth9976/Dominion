// 函数: sub_5cddc0
// 地址: 0x5cddc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result

if ((*(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x42bc) & 1) == 0)
    result = sub_5cc5e0(arg1)
    void* result_1 = result
    
    if (*(result_1 + 0x4d0d) != 1)
        uint32_t eax = sub_5d1210(result, 0x3ea, arg1, 0, 0)
        
        if (sub_5cdc20(eax, 0x3ea, arg1, eax).b == 0)
            result.b = 1
            return result
        
        if (sub_5d10b0(arg1, 0x3ea) s< 8)
            result.b = 1
            return result
        
        *(result_1 + 0x4d0d) = 1

result.b = 0
return result
