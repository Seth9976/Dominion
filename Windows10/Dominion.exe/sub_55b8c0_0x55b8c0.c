// 函数: sub_55b8c0
// 地址: 0x55b8c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
void* eax = sub_571b30(arg1, data_cce9b0)
int32_t ecx_4 = (*(eax + 0x98) & 0x7f000400) | (*(eax + 0x9c) & 0x940)
int32_t result

if (ecx_4 == 0)
    result = data_cce9c4
    int32_t edx_1 = 0
    
    while (*(edx_1 + result + 0x28) != 0)
        edx_1 += 0x3c
        ecx_4 += 1
        
        if (edx_1 s>= 0xf0)
            break
    
    int32_t* edx_2 = 0x15c
    
    while (*(edx_2 + result) != 0)
        edx_2 = &edx_2[1]
        ecx_4 += 1
        
        if (edx_2 s> 0x16c)
            break
    
    int32_t eax_6
    
    if (ecx_4 == 4)
        for (int32_t i = 0; i s< 0xf0; i += 0x3c)
            int32_t ecx_5 = *(i + result + 0x28)
            
            if (ecx_5 == 0)
                break
            
            if ((*(sub_571b30(ecx_5, data_cce9b0) + 0x9c) & 0x40) != 0)
                goto label_55b9c1
            
            result = data_cce9c4
        
        int32_t* esi_1 = 0x15c
        
        while (true)
            int32_t ecx_8 = *(esi_1 + result)
            
            if (ecx_8 == 0)
                break
            
            if ((*(sub_571b30(ecx_8, data_cce9b0) + 0x9c) & 0x40) != 0)
                goto label_55b9c1
            
            esi_1 = &esi_1[1]
            
            if (esi_1 s> 0x16c)
                break
            
            result = data_cce9c4
        
        eax_6 = *(sub_571b30(arg1, data_cce9b0) + 0x98) & 0x80000000
    
    if (ecx_4 != 4 || eax_6 == 0)
    label_55b9c1:
        result.b = 1
        return result

result.b = 0
return result
