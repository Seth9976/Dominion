// 函数: sub_6c66c0
// 地址: 0x6c66c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi = arg2

if (arg3 != 0)
    int32_t esi_1 = 1
    
    if (edi s> 1)
        while (true)
            int16_t* eax = arg4
            int16_t* ecx = *(arg3 + (esi_1 << 2))
            
            while (true)
                arg2.w = *ecx
                int16_t temp0_1 = *eax
                bool c_1 = arg2.w u< temp0_1
                
                if (arg2.w == temp0_1)
                    if (arg2.w == 0)
                        arg1 = 0
                        break
                    
                    arg2.w = ecx[1]
                    int16_t temp1_1 = eax[1]
                    c_1 = arg2.w u< temp1_1
                    
                    if (arg2.w == temp1_1)
                        ecx = &ecx[2]
                        eax = &eax[2]
                        
                        if (arg2.w != 0)
                            continue
                        
                        arg1 = 0
                        break
                
                arg1 = sbb.d(eax, eax, c_1) | 1
                break
            
            if (arg1 == 0)
                arg1.b = 1
                return arg1
            
            esi_1 += 1
            
            if (esi_1 s>= edi)
                break

arg1.b = 0
return arg1
