// 函数: sub_58e1e0
// 地址: 0x58e1e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const i = &data_77fca8
int32_t result = 0
void* const i_1 = &data_77fca8

do
    void* var_c
    int32_t j_1 = sub_571770(*i, &var_c)
    
    if (j_1 s> 0)
        int32_t* ecx_2 = var_c + 4
        int32_t j
        
        do
            if ((ecx_2[0x26] & 0x10000) == 0 && arg3 s>= *ecx_2 && arg3 s< ecx_2[1]
                    && ((ecx_2[0x25] & arg4) | (ecx_2[0x26] & arg5)) != 0)
                *(arg2 + (result << 2)) = ecx_2[0x22]
                result += 1
            
            ecx_2 = &ecx_2[0x1a6]
            j = j_1
            j_1 -= 1
        while (j != 1)
    
    i = i_1 + 0x1c
    i_1 = i
while (i s< &data_77fea0)

return result
