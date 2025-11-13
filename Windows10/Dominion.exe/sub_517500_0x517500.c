// 函数: sub_517500
// 地址: 0x517500
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* i

for (i = &data_cc97b8; i s< 0xcc99b8; i = &i[4])
    int32_t ecx_1 = *i
    
    if (ecx_1 == 0)
        break
    
    if (ecx_1 == 0x11)
        int32_t edx_1 = 0
        i = data_cca780 + 0x34 + (data_cca784 << 0xb)
        
        while (*i != 0)
            edx_1 += 1
            i = &i[0xf]
            
            if (edx_1 s>= 4)
                break
        
        if (edx_1 s>= 2)
            break
        
        i.b = 1
        return i

i.b = 0
return i
