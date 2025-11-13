// 函数: sub_5de8b0
// 地址: 0x5de8b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* i = data_b809e0
void* edx = data_b809e4 * 0x1c30 + i

if (i u< edx)
    while ((*(i + 0x1c28) & 0xffff0000) == 0)
        i += 0x1c30
        
        if (i u>= edx)
            return 0
    
    while (i != 0xffffffff)
        if (*(i + 0x2c) == 0 && *(i + 0x98) == arg1 && *(i + 0x168) == 0)
            return i
        
        i += 0x1c30
        
        if (i u>= edx)
            break
        
        while ((*(i + 0x1c28) & 0xffff0000) == 0)
            i += 0x1c30
            
            if (i u>= edx)
                return 0

return nullptr
