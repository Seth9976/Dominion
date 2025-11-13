// 函数: sub_64ee20
// 地址: 0x64ee20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg3
int32_t edi = arg2
int32_t eax = arg3
int32_t esi = 0
int32_t var_8_1 = eax

if (edi s> 0)
    while (true)
        char* ecx = *(eax + (esi << 2))
        char* const eax_1 = &data_801800
        
        if (ecx != 0)
            eax_1 = ecx
        
        char* ecx_1 = arg4
        int32_t eax_3
        
        while (true)
            arg2.b = *eax_1
            char temp0_1 = *ecx_1
            bool c_1 = arg2.b u< temp0_1
            
            if (arg2.b == temp0_1)
                if (arg2.b == 0)
                    eax_3 = 0
                    break
                
                arg2.b = eax_1[1]
                char temp1_1 = ecx_1[1]
                c_1 = arg2.b u< temp1_1
                
                if (arg2.b == temp1_1)
                    eax_1 = &eax_1[2]
                    ecx_1 = &ecx_1[2]
                    
                    if (arg2.b != 0)
                        continue
                    
                    eax_3 = 0
                    break
            
            eax_3 = sbb.d(eax_1, eax_1, c_1) | 1
            break
        
        if (eax_3 == 0)
            eax_3.b = 1
            return eax_3
        
        eax = var_8_1
        esi += 1
        
        if (esi s>= edi)
            break

eax.b = 0
return eax
