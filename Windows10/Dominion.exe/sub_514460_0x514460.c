// 函数: sub_514460
// 地址: 0x514460
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t esi = data_cca788
void* const j

if (esi != 0)
    int32_t eax_2 = *(sub_571b30(esi, 0x17) + 0x98) & 4
    
    if (eax_2 == 0)
        int32_t eax_6 = *(sub_571b30(esi, eax_2 + 0x17) + 0x98) & 2
        
        if (eax_6 == 0 && (*(sub_571b30(esi, eax_6 + 0x17) + 0x98) & 0x40000) == 0)
        label_514584:
            j.b = 0
            return j
    
    j = &data_817700
    
    while (true)
        if (*j == esi)
            goto label_514584
        
        j += 4
        
        if (j s>= 0x81774c)
            void* ecx_8 = *(data_1597e0c + (((esi s>> 4 | esi) & data_1597e10) << 2))
            int32_t* i = ecx_8
            void* var_c_1 = ecx_8
            
            for (; i != 0; i = i[4])
                if (esi == *i)
                    if (i != 0xfffffffc)
                        j = nullptr
                        int32_t ecx_10 = i[2]
                        
                        if (ecx_10 s> 0)
                            do
                                if (*(i[1] + (j << 2)) == 0x5c)
                                    goto label_514584
                                
                                j += 1
                            while (j s< ecx_10)
                    
                    ecx_8 = var_c_1
                    break
            
            for (void* const i_1 = &data_8176f0; i_1 != 0x8176fc; i_1 += 4)
                for (j = ecx_8; j != 0; j = *(j + 0x10))
                    if (esi == *j)
                        void* ecx_11 = j + 4
                        
                        if (ecx_11 != 0)
                            j = nullptr
                            int32_t ecx_12 = *(ecx_11 + 4)
                            
                            if (ecx_12 s> 0)
                                do
                                    if (*(*ecx_11 + (j << 2)) == *i_1)
                                        goto label_514584
                                    
                                    j += 1
                                while (j s< ecx_12)
                        
                        ecx_8 = var_c_1
                        break
            
            break

j.b = 1
return j
