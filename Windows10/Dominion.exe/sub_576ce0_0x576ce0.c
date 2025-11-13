// 函数: sub_576ce0
// 地址: 0x576ce0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = 0
int32_t* edx = arg1 + 0xa8

while (true)
    int32_t esi_1 = *edx
    
    if (esi_1 != 0)
        if (esi_1 == 3)
            break
        
        eax += 1
        edx = &edx[0x2d]
        
        if (eax s< 8)
            continue
    
    return 0

return *(eax * 0xb4 + arg1 + 0xbc)
