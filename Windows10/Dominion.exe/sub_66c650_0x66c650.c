// 函数: sub_66c650
// 地址: 0x66c650
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
uint32_t result = sub_64e7a0(ecx)
int32_t esi = data_c28c58
int32_t ecx_1 = 0

if (esi s> 0)
    do
        if (*(((&data_c27c58)[ecx_1] << 4) + &data_c23c18) == result)
            return result
        
        ecx_1 += 1
    while (ecx_1 s< esi)

result = *(result + 0x1604)
(&data_c27c58)[esi] = result
data_c28c58 += 1
return result
