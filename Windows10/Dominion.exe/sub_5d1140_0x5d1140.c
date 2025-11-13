// 函数: sub_5d1140
// 地址: 0x5d1140
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c = arg3
void* i = data_b809e0
void* eax_1 = data_b809e4 * 0x1c30 + i
int32_t result = 0

if (i u< eax_1)
    while ((*(i + 0x1c28) & 0xffff0000) == 0)
        i += 0x1c30
        
        if (i u>= eax_1)
            return 0
    
    while (i != 0xffffffff)
        if (*(i + 0x2c) == 0 && *(i + 0xa0) == arg3 && *(i + 0xa4) == 0x3ea
                && sub_5cbb20(i) == arg4)
            result += 1
        
        i += 0x1c30
        int32_t eax_5 = data_b809e4 * 0x1c30 + data_b809e0
        
        if (i u>= eax_5)
            break
        
        while ((*(i + 0x1c28) & 0xffff0000) == 0)
            i += 0x1c30
            
            if (i u>= eax_5)
                return result

return result
