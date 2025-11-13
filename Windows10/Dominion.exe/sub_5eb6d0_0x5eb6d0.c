// 函数: sub_5eb6d0
// 地址: 0x5eb6d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result

for (int32_t i = 0x22; i s< 0x26; i += 1)
    if (i s>= 0x48)
        sub_591930()
    
    result = i << 4
    int32_t edx_1 = *(result + arg1 + 0x1524)
    
    if (edx_1 != 0 && sub_5754f0(result, edx_1, arg1, 0, 0x800).b != 0
            && *(result + arg1 + 0x1524) == 0x121c)
        int32_t j_1 = *(arg1 + 0x19a4)
        int32_t i_1 = i
        
        if (i == 0x476)
            i_1 = 6
        
        int32_t edx_2 = 0
        
        if (j_1 s<= 0)
            result.b = 1
            return result
        
        result = arg1 + 0x152cc
        int32_t j
        
        do
            if (*(result + 4) == i_1 && *result == 0xffffffff && *(result - 4) == 0x1200)
                edx_2 += *(result + 0x10)
            
            result += 0x20
            j = j_1
            j_1 -= 1
        while (j != 1)
        
        if (edx_2 == 0)
            result.b = 1
            return result

result.b = 0
return result
