// 函数: sub_4b10e0
// 地址: 0x4b10e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* i = nullptr
*(arg1 + 0x200) = 0

do
    int32_t j = 0
    char* ecx_1 = i + 0x7e7dc4
    
    do
        if ((*ecx_1 & 1) != 0)
            int32_t ecx_2 = *(arg1 + 0x200)
            void* edx_1 = arg1 + (ecx_2 << 3)
            *(arg1 + 0x200) = ecx_2 + 1
            *edx_1 = *(i + &data_7e7d30)
            *(edx_1 + 4) = *(i + j * 0xc + 0x7e7dbc)
            break
        
        j += 1
        ecx_1 = &ecx_1[0xc]
    while (j s< 8)
    
    i += 0xec
while (i s< 0x19d0)

return arg1
