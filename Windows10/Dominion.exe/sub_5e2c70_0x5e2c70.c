// 函数: sub_5e2c70
// 地址: 0x5e2c70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_4 = arg1
void* esi = data_b809e0
uint32_t result = data_b809e4 * 0x1c30 + esi

if (esi u< result)
    while ((*(esi + 0x1c28) & 0xffff0000) == 0)
        esi += 0x1c30
        
        if (esi u>= result)
            return result
    
    if (esi != 0xffffffff)
        while (true)
            if (*(esi + 0x2c) == 6 && *(esi + 0x1e0) == arg1 && *(esi + 0x1e4) == arg2)
                sub_5cd3e0(esi)
                return sub_5cb5a0(esi)
            
            esi += 0x1c30
            
            if (esi u>= result)
                break
            
            while ((*(esi + 0x1c28) & 0xffff0000) == 0)
                esi += 0x1c30
                
                if (esi u>= result)
                    return result
            
            if (esi == 0xffffffff)
                return result

return result
