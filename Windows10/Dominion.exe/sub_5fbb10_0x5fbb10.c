// 函数: sub_5fbb10
// 地址: 0x5fbb10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = arg3 + 0x9cc

for (int32_t i = 0; i s< 0x20; )
    int32_t esi_1 = *(result - 4)
    
    if (esi_1 == 0)
        break
    
    if (esi_1 == arg2)
        *result = arg4
    
    int32_t esi_2 = *(result + 0xc)
    
    if (esi_2 == 0)
        break
    
    if (esi_2 == arg2)
        *(result + 0x10) = arg4
    
    int32_t esi_3 = *(result + 0x1c)
    
    if (esi_3 == 0)
        break
    
    if (esi_3 == arg2)
        *(result + 0x20) = arg4
    
    int32_t esi_4 = *(result + 0x2c)
    
    if (esi_4 == 0)
        break
    
    if (esi_4 == arg2)
        *(result + 0x30) = arg4
    
    i += 4
    result += 0x40

return result
