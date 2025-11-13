// 函数: sub_51f820
// 地址: 0x51f820
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = *arg2
void* eax_1 = sub_571b30(esi, 0x18)

if (((*(eax_1 + 0x98) & 0x7f000400) | (*(eax_1 + 0x9c) & 0x940)) != 0)
    int32_t eax_3
    eax_3.b = 0
    return eax_3

int32_t ebx = 0
int32_t* i = **(arg1 + 4)
int32_t* i_2 = i

if (i s> 0)
    int32_t* edx_1 = **(arg1 + 8)
    arg2 = edx_1
    i = *(data_1597e0c + (((esi s>> 4 | esi) & data_1597e10) << 2))
    int32_t* i_1 = i
    
    while (true)
        int32_t ecx_8 = edx_1[ebx]
        
        for (; i != 0; i = i[4])
            if (esi == *i)
                void* edx_2 = &i[1]
                
                if (edx_2 != 0)
                    i = nullptr
                    int32_t edx_3 = *(edx_2 + 4)
                    
                    if (edx_3 s> 0)
                        do
                            if (*(*edx_2 + (i << 2)) == ecx_8)
                                if (ecx_8 == 0xe && esi == 0xd0d)
                                    break
                                
                                i.b = 1
                                return i
                            
                            i += 1
                        while (i s< edx_3)
                
                edx_1 = arg2
                break
        
        ebx += 1
        
        if (ebx s>= i_2)
            break
        
        i = i_1

i.b = 0
return i
