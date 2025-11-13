// 函数: sub_608460
// 地址: 0x608460
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx = data_be1538
int32_t edx = *(ecx + 0xbd4)

if (edx != 0)
    return sub_4ad010(ecx, edx - 1)

int32_t ecx_1 = data_ccf6f0
int32_t edx_3 = data_ccf6f4 - 1
data_ccf6f4 = edx_3
void var_10
void* var_c
int32_t eax_2 = sub_6062d0(&var_c, edx_3, ecx_1, &var_c, &var_10)
return sub_4ad010(data_be1538, eax_2 - 1)
