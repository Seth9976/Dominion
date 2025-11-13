// 函数: sub_60a160
// 地址: 0x60a160
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = arg1[2]
int32_t temp0 = arg2[2]

if (result s<= temp0)
    if (result s< temp0)
        result.b = 0
        return result
    
    result = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    
    if (*arg1 != *(result + 0x4250))
        result = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        int32_t ebx_1 = *arg2
        
        if (ebx_1 == *(result + 0x4250))
            result.b = 0
            return result
        
        char* eax = arg2[1]
        char* const ecx_6 = &data_801800
        char* const edx_1 = &data_801800
        
        if (eax != 0)
            edx_1 = eax
        
        char* eax_1 = arg1[1]
        
        if (eax_1 != 0)
            ecx_6 = eax_1
        
        while (true)
            eax_1.b = *ecx_6
            char temp1_1 = *edx_1
            bool c_1 = eax_1.b u< temp1_1
            
            if (eax_1.b == temp1_1)
                if (eax_1.b == 0)
                    result = nullptr
                    break
                
                eax_1.b = ecx_6[1]
                char temp3_1 = edx_1[1]
                c_1 = eax_1.b u< temp3_1
                
                if (eax_1.b == temp3_1)
                    ecx_6 = &ecx_6[2]
                    edx_1 = &edx_1[2]
                    
                    if (eax_1.b != 0)
                        continue
                    
                    result = nullptr
                    break
            
            result = sbb.d(eax_1, eax_1, c_1) | 1
            break
        
        if (result s<= 0)
            if (result s>= 0)
                result.b = *arg1 s> ebx_1
                return result
            
            result.b = 0
            return result

result.b = 1
return result
