// 函数: sub_51ebf0
// 地址: 0x51ebf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = *arg2
void* eax_1

if (*(arg1 + 4) == 0)
    eax_1 = sub_571b30(esi, 0x18)

int32_t* i

if (*(arg1 + 4) != 0 || ((*(eax_1 + 0x98) & 0x7f000400) | (*(eax_1 + 0x9c) & 0x940)) == 0)
    for (i = *(data_1597e0c + (((esi s>> 4 | esi) & data_1597e10) << 2)); i != 0; i = i[4])
        if (esi == *i)
            void* ecx_8 = &i[1]
            
            if (ecx_8 != 0)
                i = nullptr
                int32_t ecx_9 = *(ecx_8 + 4)
                
                if (ecx_9 s> 0)
                    do
                        if (*(*ecx_8 + (i << 2)) == *(arg1 + 8))
                            i.b = 1
                            return i
                        
                        i += 1
                    while (i s< ecx_9)
                    
                    i.b = 0
                    return i
            
            break

i.b = 0
return i
