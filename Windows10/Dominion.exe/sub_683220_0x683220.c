// 函数: sub_683220
// 地址: 0x683220
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float var_48[0x10]
float* eax_1 = sub_64b1b0(&var_48, arg1, arg1, &var_48)
void* ecx = data_147b06c
int128_t xmm1 = *(eax_1 + 0x10)
int128_t xmm2 = *(eax_1 + 0x20)
int128_t xmm3 = *(eax_1 + 0x30)
int32_t eax_2 = arg1[7]
*(ecx + 0x124) = *eax_1
*(ecx + 0xa0) = eax_2
*(ecx + 0x134) = xmm1
*(ecx + 0x164) = 1
*(ecx + 0x144) = xmm2
*(ecx + 0x154) = xmm3
return sub_649cc0(&arg1[5])
