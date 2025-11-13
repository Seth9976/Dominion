// 函数: sub_5122d0
// 地址: 0x5122d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = 0
int32_t eax_2 = data_cca780 + 0xc + (data_cca784 << 0xb)
int32_t i = 0
int32_t var_14 = eax_2

do
    int32_t edi_1 = *(eax_2 + (i << 2))
    
    if (edi_1 == 0)
        break
    
    int32_t var_c
    
    if (sub_5121c0(edi_1, &var_c) != 0)
        int32_t result_1 = result
        result += 1
        *(arg1 + (result_1 << 2)) = edi_1
        *(arg2 + (result_1 << 2)) = var_c
    
    eax_2 = var_14
    i += 1
while (i s< 0xa)

return result
