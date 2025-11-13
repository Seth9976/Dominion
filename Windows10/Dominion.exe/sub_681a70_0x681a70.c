// 函数: sub_681a70
// 地址: 0x681a70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = data_147abe4

if (result != 0 && *(result + 0x1c) != 0)
    while (*(result + 0x48) != 0)
        int32_t* edi_1 = *(result + 0x40)
        void* ecx_1 = edi_1[1]
        *(result + 0x40) = ecx_1
        
        if (ecx_1 == 0)
            *(result + 0x44) = 0
        else
            *(ecx_1 + 8) = 0
        
        int32_t* esi_1 = *edi_1
        *(result + 0x48) -= 1
        sub_64c080(edi_1, 0xc)
        int32_t edx_1 = esi_1[0x391]
        
        if (edx_1 != 0)
            (*(*data_147b070 + 0x54))(edx_1)
            esi_1[0x391] = 0
        
        esi_1[0x1f9] = 0
        esi_1[0xfe] = 0
        esi_1[0xfd] = 0
        esi_1[2] = 0
        esi_1[1] = 0
        
        if (esi_1 != 0)
            sub_64c080(esi_1, 0xf08)
        
        result = data_147abe4
    
    *(result + 0x1c) = 0

return result
