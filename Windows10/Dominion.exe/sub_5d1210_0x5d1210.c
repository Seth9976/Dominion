// 函数: sub_5d1210
// 地址: 0x5d1210
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg3
void* i = data_b809e0
int32_t result = 0
void* edi_1 = data_b809e4 * 0x1c30 + i

if (i u< edi_1)
    while ((*(i + 0x1c28) & 0xffff0000) == 0)
        i += 0x1c30
        
        if (i u>= edi_1)
            return 0
    
    while (i != 0xffffffff)
        if (*(i + 0x2c) == 0 && *(i + 0xa0) == arg3 && *(i + 0xa4) == arg2 && *(i + 0xc8) == arg4
                && *(i + 0xcc) == arg5)
            result += 1
        
        i += 0x1c30
        
        if (i u>= edi_1)
            break
        
        while ((*(i + 0x1c28) & 0xffff0000) == 0)
            i += 0x1c30
            
            if (i u>= edi_1)
                return result

return result
