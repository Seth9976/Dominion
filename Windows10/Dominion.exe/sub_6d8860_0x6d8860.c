// 函数: sub_6d8860
// 地址: 0x6d8860
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* edi = data_147abe8

if (edi != 0)
    int32_t* edi_1 = *edi
    void* esi_1 = nullptr
    
    while (true)
        if (esi_1 != 0)
            esi_1 += 0x6c
        else
            esi_1 = *edi_1
        
        int32_t eax_2 = edi_1[1] * 0x6c + *edi_1
        
        if (esi_1 u>= eax_2)
            break
        
        while ((*(esi_1 + 0x68) & 0xffff0000) == 0)
            esi_1 += 0x6c
            
            if (esi_1 u>= eax_2)
                goto label_6d88a2
        
        sub_6d97a0()

label_6d88a2:
sub_681a70()
void* esi_2 = nullptr

while (true)
    void* ecx_2 = data_cafe8c
    
    do
        if (esi_2 != 0)
            esi_2 += 0xf10
        else
            esi_2 = ecx_2
        
        void* result = data_cafe90 * 0xf10 + ecx_2
        
        if (esi_2 u>= result)
            return result
        
        while ((*(esi_2 + 0xf0c) & 0xffff0000) == 0)
            esi_2 += 0xf10
            
            if (esi_2 u>= result)
                return result
    while (*esi_2 != arg1)
    
    int32_t edx_1 = *(esi_2 + 0xe44)
    
    if (edx_1 != 0)
        (*(*data_147b070 + 0x54))(edx_1)
        *(esi_2 + 0xe44) = 0
    
    *(esi_2 + 0x7e4) = 0
    *(esi_2 + 0x3f8) = 0
    *(esi_2 + 0x3f4) = 0
    *(esi_2 + 8) = 0
    *(esi_2 + 4) = 0
    *(esi_2 + 0xf08) = 0
