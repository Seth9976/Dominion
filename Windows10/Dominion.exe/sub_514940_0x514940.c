// 函数: sub_514940
// 地址: 0x514940
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* i

for (i = &data_cc97b8; i s< 0xcc99b8; i = &i[4])
    int32_t ecx_1 = *i
    
    if (ecx_1 == 0)
        break
    
    if (ecx_1 == 0x12)
        int32_t j = data_cca788
        
        if (j == 0)
            i.b = 1
            return i
        
        i = *(data_1597e0c + (((j s>> 4 | j) & data_1597e10) << 2))
        int32_t* i_1 = i
        
        if (i_1 != 0)
            while (j != *i_1)
                i_1 = i_1[4]
                
                if (i_1 == 0)
                    goto label_5149cf
            
            if (i_1 == 0xfffffffc)
                goto label_5149cf
            
            int32_t ecx_6 = 0
            int32_t edx_2 = i_1[2]
            
            if (edx_2 s<= 0)
                goto label_5149c2
            
            do
                if (*(i_1[1] + (ecx_6 << 2)) == 0x16)
                    goto label_514965
                
                ecx_6 += 1
            while (ecx_6 s< edx_2)
            
            goto label_5149cf
        
    label_5149c2:
        
        if (i != 0)
        label_5149cf:
            
            do
                if (j == *i)
                    void* ecx_7 = &i[1]
                    
                    if (ecx_7 != 0)
                        i = nullptr
                        int32_t ecx_8 = *(ecx_7 + 4)
                        
                        if (ecx_8 s> 0)
                            do
                                if (*(*ecx_7 + (i << 2)) == 0x1e)
                                    goto label_514965
                                
                                i += 1
                            while (i s< ecx_8)
                    
                    break
                
                i = i[4]
            while (i != 0)
        
        if ((*(sub_571b30(j, 0x17) + 0x98) & 4) != 0
                && (*(sub_571b30(j, 0x17) + 0x9c) & 0x1000) == 0)
            i.b = 1
            return i
        
        break

label_514965:
i.b = 0
return i
