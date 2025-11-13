// 函数: sub_6d9930
// 地址: 0x6d9930
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* result = *arg2
arg2 = result

if (result != 0)
    int32_t i = 0
    
    if (*result s> 0)
        int32_t ebx_1 = 0
        
        do
            void* esi_2 = result[2] + ebx_1
            int32_t edx_1 = *(esi_2 + 0x38)
            
            if (edx_1 != 0)
                (*(*data_147b070 + 0x30))(edx_1)
                *(esi_2 + 0x38) = 0
            
            int32_t edx_2 = *(esi_2 + 0x3c)
            
            if (edx_2 != 0)
                (*(*data_147b070 + 0x3c))(edx_2)
                *(esi_2 + 0x3c) = 0
            
            int32_t edx_3 = *(esi_2 + 0x40)
            
            if (edx_3 != 0)
                (*(*data_147b070 + 0x30))(edx_3)
                *(esi_2 + 0x40) = 0
            
            int32_t edx_4 = *(esi_2 + 0x44)
            
            if (edx_4 != 0)
                (*(*data_147b070 + 0x3c))(edx_4)
                *(esi_2 + 0x44) = 0
            
            result = arg2
            i += 1
            *(esi_2 + 0x48) = 0
            ebx_1 += 0x150
        while (i s< *result)

int32_t* edi_1 = data_147abe8

if (edi_1 != 0)
    int32_t* edi_2 = *edi_1
    void* esi_3 = nullptr
    
    while (true)
        if (esi_3 != 0)
            esi_3 += 0x6c
        else
            esi_3 = *edi_2
        
        result = edi_2[1] * 0x6c + *edi_2
        
        if (esi_3 u>= result)
            break
        
        while ((*(esi_3 + 0x68) & 0xffff0000) == 0)
            esi_3 += 0x6c
            
            if (esi_3 u>= result)
                return result
        
        if (*(esi_3 + 4) == arg1)
            sub_6d97a0()

return result
