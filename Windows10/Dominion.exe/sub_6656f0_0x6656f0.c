// 函数: sub_6656f0
// 地址: 0x6656f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* i = data_c23ba8
void* ecx = data_c23bac * 0x18d0 + i

if (i u< ecx)
    while ((*(i + 0x18c8) & 0xffff0000) == 0)
        i += 0x18d0
        
        if (i u>= ecx)
            return i
    
    while (i != 0xffffffff)
        *(i + 0x136c) = 2
        i += 0x18d0
        int32_t ecx_2 = data_c23bac * 0x18d0 + data_c23ba8
        
        if (i u>= ecx_2)
            break
        
        while ((*(i + 0x18c8) & 0xffff0000) == 0)
            i += 0x18d0
            
            if (i u>= ecx_2)
                return i

return i
