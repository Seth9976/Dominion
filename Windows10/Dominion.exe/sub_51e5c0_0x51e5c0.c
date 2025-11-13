// 函数: sub_51e5c0
// 地址: 0x51e5c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx = *arg1
int32_t* i

for (i = *(data_1597e0c + (((edx s>> 4 | edx) & data_1597e10) << 2)); i != 0; i = i[4])
    if (edx == *i)
        void* ecx_4 = &i[1]
        
        if (ecx_4 != 0)
            i = nullptr
            int32_t ecx_5 = *(ecx_4 + 4)
            
            if (ecx_5 s> 0)
                while (*(*ecx_4 + (i << 2)) != 0x32)
                    i += 1
                    
                    if (i s>= ecx_5)
                        i.b = 0
                        return i
                
                if (edx != 0x91c)
                    i.b = 1
                    return i
        
        break

i.b = 0
return i
