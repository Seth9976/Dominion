// 函数: sub_628ab0
// 地址: 0x628ab0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t edx = data_b809e4
void* i_1 = data_b809e0
void* i = i_1
void* result

for (result = edx * 0x1c30 + i; i u< result; i += 0x1c30)
    if ((*(i + 0x1c28) & 0xffff0000) != 0)
        while (i != 0xffffffff)
            if (*(i + 0x2c) == 1 && *(i + 0x174) == 2)
                sub_5cb5a0(i)
                edx = data_b809e4
                i_1 = data_b809e0
            
            i += 0x1c30
            result = edx * 0x1c30 + i_1
            
            if (i u>= result)
                break
            
            while ((*(i + 0x1c28) & 0xffff0000) == 0)
                i += 0x1c30
                
                if (i u>= result)
                    goto label_628b41
        
        break

label_628b41:

if (data_8db664 != 0)
    int32_t ecx_2 = data_8db674
    
    if (ecx_2 != 0)
        int32_t eax_3 = *(sub_4d3b00(ecx_2) + 0x18)
        
        if (eax_3 != 0)
            eax_3(data_8db678)
    
    sub_64e810(&data_8db678)
    void* ecx_3 = data_8db684
    int128_t xmm0_1 = data_8db664.o
    data_8db668 = 0
    data_8db664 = 0
    result = ecx_3 + 1
    data_8db66c = ecx_3
    data_8db674.o = xmm0_1
    data_8db684 = result
    data_8db660 = 0

return result
