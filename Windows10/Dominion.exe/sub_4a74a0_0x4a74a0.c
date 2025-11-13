// 函数: sub_4a74a0
// 地址: 0x4a74a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = 0x172be64
int32_t i = 8
int32_t result_1 = 0x172be64

do
    int32_t ebx_1 = result - 0x7230
    int32_t j = 0x24
    int32_t ecx_1 = result - 0x7340
    int32_t var_c_1 = ecx_1
    
    do
        memset(ecx_1, 0, 0x32c)
        j -= 1
        __builtin_memcpy(ebx_1 - 0x100, &data_7fedfc, 0x100)
        __builtin_memcpy(ebx_1, &data_7fedfc, 0x100)
        int32_t edi_3 = ebx_1 + 0x100
        ebx_1 += 0x32c
        __builtin_memcpy(edi_3, &data_7fedfc, 0x100)
        ecx_1 = var_c_1 + 0x32c
        var_c_1 = ecx_1
    while (j != 0)
    
    int32_t result_2 = result_1
    int32_t j_1 = 8
    int32_t eax = result_2 - 0x110
    int32_t var_c_2 = eax
    
    do
        memset(eax, 0, 0x32c)
        __builtin_memcpy(result_2 - 0x100, &data_7fedfc, 0x100)
        eax = var_c_2 + 0x32c
        __builtin_memcpy(result_2, &data_7fedfc, 0x100)
        var_c_2 = eax
        __builtin_memcpy(result_2 + 0x100, &data_7fedfc, 0x100)
        j_1 -= 1
        result_2 += 0x32c
    while (j_1 != 0)
    
    int32_t j_2 = 8
    int32_t ecx_4 = result_1 + 0x1850
    int32_t var_c_3 = ecx_4
    int32_t ebx_2 = result_1 + 0x1960
    
    do
        memset(ecx_4, 0, 0x32c)
        j_2 -= 1
        __builtin_memcpy(ebx_2 - 0x100, &data_7fedfc, 0x100)
        __builtin_memcpy(ebx_2, &data_7fedfc, 0x100)
        int32_t edi_9 = ebx_2 + 0x100
        ebx_2 += 0x32c
        __builtin_memcpy(edi_9, &data_7fedfc, 0x100)
        ecx_4 = var_c_3 + 0x32c
        var_c_3 = ecx_4
    while (j_2 != 0)
    
    i -= 1
    result = result_1 + 0xa52c
    result_1 = result
while (i != 0)

return result
