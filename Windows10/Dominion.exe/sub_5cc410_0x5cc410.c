// 函数: sub_5cc410
// 地址: 0x5cc410
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* i = data_b809e0
void* esi_1 = data_b809e4 * 0x1c30 + i

if (i u< esi_1)
    while ((*(i + 0x1c28) & 0xffff0000) == 0)
        i += 0x1c30
        
        if (i u>= esi_1)
            return 0
    
    while (i != 0xffffffff)
        if (*(i + 0x2c) == 3 && *(i + 0x58) == arg2 && *(i + 0x5c) == arg3 && *(i + 0x60) == arg4
                && *(i + 0x64) == arg5)
            return i
        
        i += 0x1c30
        
        if (i u>= esi_1)
            break
        
        while ((*(i + 0x1c28) & 0xffff0000) == 0)
            i += 0x1c30
            
            if (i u>= esi_1)
                return 0

return nullptr
