// 函数: sub_515210
// 地址: 0x515210
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx = data_cca788
int32_t* i = &data_cc97b8

while (true)
    int32_t ecx_1 = *i
    
    if (ecx_1 != 0)
        if (ecx_1 == 0xc)
            break
        
        i = &i[4]
        
        if (i s< 0xcc99b8)
            continue
    
    i = &data_cc97b8
    
    while (true)
        int32_t ecx_2 = *i
        
        if (ecx_2 != 0)
            if (ecx_2 == 0x12)
                break
            
            i = &i[4]
            
            if (i s< 0xcc99b8)
                continue
        
    label_515255:
        i.b = 0
        return i
    
    break

if (edx != 0)
    for (i = &data_8176a0; i s< &data_8176f0; i = &i[1])
        if (*i == edx)
            goto label_515255

i.b = 1
return i
