// 函数: sub_51ac20
// 地址: 0x51ac20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx = data_cce9a8
int32_t result = 0
int32_t var_c = arg1
int32_t result_1 = 0

if (edx s> 0)
    void* esi_1 = &data_cce738
    
    do
        if (arg1 == *(esi_1 - 0xc) && *(esi_1 - 4) == 0)
            int32_t edi_1 = data_cce9ac
            int32_t ebx_1 = data_cca790
            data_cce9ac = *esi_1
            data_cca790 = *(esi_1 - 8)
            (*(esi_1 - 0x10))()
            result = result_1
            arg1 = var_c
            data_cce9ac = edi_1
            data_cca790 = ebx_1
            *(esi_1 - 4) = 1
            edx = data_cce9a8
        
        result += 1
        esi_1 += 0x14
        result_1 = result
    while (result s< edx)

return result
