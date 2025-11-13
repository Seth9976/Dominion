// 函数: sub_51e490
// 地址: 0x51e490
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = *arg1
void* eax_1 = sub_571b30(i, 0x18)
int32_t* i_1

if (((*(eax_1 + 0x98) & 0x7f000400) | (*(eax_1 + 0x9c) & 0x940)) == 0)
    i_1 = *(data_1597e0c + (((i s>> 4 | i) & data_1597e10) << 2))
    int32_t* i_2 = i_1
    
    if (i_2 != 0)
        while (i != *i_2)
            i_2 = i_2[4]
            
            if (i_2 == 0)
                goto label_51e51a
        
        if (i_2 == 0xfffffffc)
            goto label_51e51a
        
        int32_t ecx_8 = 0
        int32_t edx_2 = i_2[2]
        
        if (edx_2 s<= 0)
            goto label_51e50d
        
        do
            if (*(i_2[1] + (ecx_8 << 2)) == 0x32)
                goto label_51e51d
            
            ecx_8 += 1
        while (ecx_8 s< edx_2)
        
        goto label_51e51a
    
label_51e50d:
    
    if (i_1 != 0)
    label_51e51a:
        
        do
            if (i == *i_1)
                void* ecx_9 = &i_1[1]
                
                if (ecx_9 != 0)
                    i_1 = nullptr
                    int32_t ecx_10 = *(ecx_9 + 4)
                    
                    if (ecx_10 s> 0)
                        do
                            if (*(*ecx_9 + (i_1 << 2)) == 0x4d)
                                i_1.b = 1
                                return i_1
                            
                            i_1 += 1
                        while (i_1 s< ecx_10)
                        
                        i_1.b = 0
                        return i_1
                
                break
            
            i_1 = i_1[4]
        while (i_1 != 0)

label_51e51d:
i_1.b = 0
return i_1
