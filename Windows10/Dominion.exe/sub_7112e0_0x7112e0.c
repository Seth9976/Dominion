// 函数: sub_7112e0
// 地址: 0x7112e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = 0
int32_t i_1 = 0

if (*(arg1 + 4) s> 0)
    do
        void* j_2 = *(*(arg1 + 8) + (i << 2))
        void* j_1 = j_2
        
        if (j_2 != 0)
            void* j
            
            do
                j = *(j_2 + 4)
                void* k_1 = *(j_2 + 8)
                void* eax_2 = j_2 + 0x10
                void* var_8_1 = eax_2
                
                if (k_1 != 0)
                    void* k
                    
                    do
                        int32_t eax_3 = *eax_2
                        k = *(k_1 + 8)
                        
                        if (eax_3 != 0)
                            eax_3(arg1, 4, k_1, 0)
                        
                        int32_t eax_4 = *(arg1 + 0xc)
                        
                        if (eax_4 != 0)
                            eax_4(arg1, 4, k_1, 0)
                        
                        void* edi_1 = *(k_1 + 0x6c)
                        free(*(edi_1 + 8))
                        free(edi_1)
                        void* edi_2 = *(k_1 + 0x70)
                        free(*(edi_2 + 8))
                        free(edi_2)
                        free(*(k_1 + 0x74))
                        free(k_1)
                        k_1 = k
                        eax_2 = var_8_1
                    while (k != 0)
                    j_2 = j_1
                
                int32_t eax_6 = *eax_2
                
                if (eax_6 != 0)
                    eax_6(arg1, 4, j_2, 0)
                
                int32_t eax_7 = *(arg1 + 0xc)
                
                if (eax_7 != 0)
                    eax_7(arg1, 4, j_2, 0)
                
                void* esi_1 = *(j_2 + 0x6c)
                free(*(esi_1 + 8))
                free(esi_1)
                void* esi_2 = *(j_2 + 0x70)
                free(*(esi_2 + 8))
                free(esi_2)
                free(*(j_2 + 0x74))
                free(j_2)
                j_1 = j
                j_2 = j
            while (j != 0)
            i = i_1
        
        i += 1
        i_1 = i
    while (i s< *(arg1 + 4))

free(*(arg1 + 8))
void* esi_3 = *(arg1 + 0x24)
free(*(esi_3 + 4))
free(esi_3)
free(*(arg1 + 0x20))
free(*(arg1 + 0x28))
return free(arg1)
