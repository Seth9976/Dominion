// 函数: sub_51e950
// 地址: 0x51e950
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = *arg1
int32_t* i

for (i = *(data_1597e0c + (((esi s>> 4 | esi) & data_1597e10) << 2)); i != 0; i = i[4])
    if (esi == *i)
        void* ecx_4 = &i[1]
        
        if (ecx_4 != 0)
            i = nullptr
            int32_t ecx_5 = *(ecx_4 + 4)
            
            if (ecx_5 s> 0)
                while (*(*ecx_4 + (i << 2)) != 0x39)
                    i += 1
                    
                    if (i s>= ecx_5)
                        i.b = 0
                        return i
                
                void* eax_2 = sub_571b30(esi, 0x18)
                
                if (((*(eax_2 + 0x98) & 0x7f000400) | (*(eax_2 + 0x9c) & 0x940)) == 0)
                    i.b = 1
                    return i
        
        break

i.b = 0
return i
