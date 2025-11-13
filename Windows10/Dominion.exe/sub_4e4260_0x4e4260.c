// 函数: sub_4e4260
// 地址: 0x4e4260
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg3
int32_t* esi = arg3
int32_t result = 0
int32_t i_1 = arg2
int32_t result_1 = 0
*arg4 = 0

if (i_1 s> 0)
    int32_t i
    
    do
        int32_t ecx_1 = 1
        int128_t* const eax = &data_77fea0
        
        while (true)
            int32_t edx = *eax
            
            if (*esi == edx)
                result = result_1 | ecx_1
                result_1 = result
                
                if (edx == 0x13)
                    *arg4 |= esi[1]
                
                break
            
            eax += 4
            ecx_1 *= 2
            
            if (eax == &data_77fee8)
                result = result_1
                break
        
        esi = &esi[4]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
