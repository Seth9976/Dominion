// 函数: sub_4edf20
// 地址: 0x4edf20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = arg1
void* i = &data_18f8e68
int32_t var_14 = ebx

do
    for (void* j = *i; j != 0; j = *(j + 0x10))
        *(*(j + 8) + 0xe1) = 0
    
    i += 4
while (i s< &data_1938e68)

void* result = sub_4edea0(*((ebx << 2) + &data_1779f8c))
void* i_1 = &data_18f8e68
void* i_2 = &data_18f8e68

do
    void* j_1 = *i_1
    void* j_2 = nullptr
    void* j_3 = nullptr
    
    while (j_1 != 0)
        result = *(j_1 + 8)
        
        if (*(result + 0xb4) != ebx || *(result + 0xe1) != 0)
            j_2 = j_1
            *(result + 0xe1) = 0
            j_1 = *(j_1 + 0x10)
            j_3 = j_2
        else
            int32_t ecx_1 = *(j_1 + 0x10)
            void* result_1 = j_2 + 0x10
            
            if (j_2 != 0)
                *result_1 = ecx_1
            else
                *i_1 = ecx_1
            
            void* ecx_2 = *(j_1 + 8)
            int32_t k = 0
            
            if (*(ecx_2 + 0xd4) s> 0)
                int32_t edi_1 = 0
                
                do
                    sub_7597b9(*(*(ecx_2 + 0xd0) + edi_1 + 0xc))
                    sub_7597b9(*(*(*(j_1 + 8) + 0xd0) + edi_1 + 0x14))
                    ecx_2 = *(j_1 + 8)
                    edi_1 += 0x54
                    k += 1
                while (k s< *(ecx_2 + 0xd4))
                
                j_2 = j_3
            
            if (ecx_2 != 0)
                void* var_24_2 = ecx_2
                sub_4ee050(ecx_2)
            
            int32_t var_24_3 = 0x18
            operator new(j_1)
            result = result_1
            i_1 = i_2
            ebx = var_14
            
            if (j_2 == 0)
                result = i_1
            
            j_1 = *result
    
    i_1 += 4
    i_2 = i_1
while (i_1 s< &data_1938e68)

return result
