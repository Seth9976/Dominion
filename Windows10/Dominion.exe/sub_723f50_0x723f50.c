// 函数: sub_723f50
// 地址: 0x723f50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i_1 = arg2

if (i_1 s> 0)
    int32_t* esi_1 = arg3 + 0x46cc
    int32_t i
    
    do
        int32_t eax = *esi_1
        
        if (eax != 0)
            free(eax)
            *esi_1 = 0
            esi_1[-1] = 0
        
        int32_t eax_1 = esi_1[1]
        
        if (eax_1 != 0)
            free(eax_1)
            esi_1[1] = 0
            esi_1[3] = 0
        
        int32_t eax_2 = esi_1[2]
        
        if (eax_2 != 0)
            free(eax_2)
            esi_1[2] = 0
        
        esi_1 = &esi_1[0x12]
        i = i_1
        i_1 -= 1
    while (i != 1)

return arg4
