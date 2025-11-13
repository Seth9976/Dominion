// 函数: sub_6dcec0
// 地址: 0x6dcec0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = 0
int32_t edx = *arg2

if (edx s> 0)
    int32_t* esi_1 = arg2[2]
    
    do
        if (*esi_1 == arg4)
            if (esi_1 == 0)
                break
            
            sub_6dcb90(&esi_1[2], arg4, arg3, &esi_1[2])
            uint32_t count = arg2[2] - 0x10 + (*arg2 << 4) - esi_1
            
            if (count s> 0)
                memcpy(esi_1, &esi_1[4], count)
            
            int32_t temp0 = *arg2
            *arg2 -= 1
            
            if (temp0 == 1)
                count = arg2[2]
                
                if (count != 0)
                    _aligned_free(count)
                
                arg2[2] = 0
            
            count.b = 1
            return count
        
        eax += 1
        esi_1 = &esi_1[4]
    while (eax s< edx)

eax.b = 0
return eax
