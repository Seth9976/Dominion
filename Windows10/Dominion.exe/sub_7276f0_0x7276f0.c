// 函数: sub_7276f0
// 地址: 0x7276f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* var_18 = arg2
uint32_t* esi = *arg3
int32_t ecx
ecx.b = arg6 == 0x10
uint32_t count_1 = (ecx + 1) * arg5

if (arg8 == 0)
    return sub_7266e0(arg3, arg2, arg3, arg4, arg5, *esi, esi[1], arg6, arg7)

int32_t edi_1 = esi[1]
uint32_t esi_1 = *esi
int32_t var_14

if (esi_1 s< 0 || edi_1 s< 0)
    var_14 = 0
else
    int32_t eax_2
    int32_t edx
    
    if (edi_1 != 0)
        edx:eax_2 = 0x7fffffff
    
    if (edi_1 != 0 && esi_1 s> divs.dp.d(edx:eax_2, edi_1))
        var_14 = 0
    else
        int32_t esi_2 = esi_1 * edi_1
        
        if (esi_2 s< 0 || count_1 s< 0)
            var_14 = 0
        else
            int32_t eax_4
            int32_t edx_2
            
            if (count_1 != 0)
                edx_2:eax_4 = 0x7fffffff
            
            if (count_1 != 0 && esi_2 s> divs.dp.d(edx_2:eax_4, count_1))
                var_14 = 0
            else
                var_14 = malloc(esi_2 * count_1)

int32_t i = 0
int128_t xmm0 = data_8913d0
int32_t i_1 = 0
int128_t xmm1 = data_8911e0
int32_t var_1c = arg4
int128_t xmm2 = data_891450
int128_t xmm3 = data_891460
int32_t* esi_12

do
    int128_t var_78 = xmm2
    int32_t var_68_1 = 2
    int32_t var_64_1 = 2
    int32_t* edi_3 = *arg3
    int32_t var_60_1 = 1
    int32_t esi_4 = *(&var_78 + i)
    int128_t var_5c = xmm0
    int32_t var_4c_1 = 0
    int32_t var_48_1 = 1
    int32_t var_44_1 = 0
    int32_t var_a0_1 = 2
    int32_t var_9c_1 = 0
    uint32_t k_2 = divu.dp.d(0:(*edi_3 - 1 + esi_4 - *(&var_5c + i)), esi_4)
    int32_t var_98_1 = 1
    int32_t var_84_1 = 4
    int32_t var_80_1 = 2
    int32_t var_7c_1 = 2
    int128_t var_b0 = xmm1
    int32_t esi_5 = *(&var_b0 + i_1)
    int32_t var_c_1 = esi_5
    int128_t var_94 = xmm3
    int32_t edx_5 = *(&var_94 + i_1)
    uint32_t j_2
    uint32_t j_1
    
    if (k_2 != 0)
        j_1 = divu.dp.d(0:(edi_3[1] - esi_5 + edx_5 - 1), edx_5)
        j_2 = j_1
    
    if (k_2 == 0 || j_1 == 0)
        esi_12 = arg3
    else
        int32_t eax_22 = (((*(*arg3 + 8) * k_2 * arg6 + 7) s>> 3) + 1) * j_1
        
        if (sub_7266e0(eax_22, var_18, arg3, var_1c, arg5, k_2, j_1, arg6, arg7) == 0)
            free(var_14)
            return 0
        
        if (j_1 s> 0)
            uint32_t k_3 = k_2
            int32_t edx_11 = 0
            uint32_t count = count_1
            int32_t esi_7 = k_3 * count
            int32_t var_2c_1 = 0
            int32_t esi_8 = var_c_1
            uint32_t j
            
            do
                if (k_3 s> 0)
                    int32_t edi_4 = 0
                    int32_t* eax_24 = *arg3
                    int32_t esi_11 = arg3[3] + edx_11
                    int32_t* var_38_1 = eax_24
                    uint32_t k_1 = k_2
                    uint32_t k
                    
                    do
                        memcpy((*eax_24 * var_c_1 + edi_4 + *(&var_5c + i_1)) * count + var_14, 
                            esi_11, count)
                        count = count_1
                        edi_4 += esi_4
                        esi_11 += count
                        k = k_1
                        k_1 -= 1
                        eax_24 = var_38_1
                    while (k != 1)
                    esi_8 = var_c_1
                    edx_11 = var_2c_1
                    j_1 = j_2
                    k_3 = k_2
                
                esi_8 += edx_5
                edx_11 += esi_7
                j = j_1
                j_1 -= 1
                var_c_1 = esi_8
                var_2c_1 = edx_11
                j_2 = j_1
            while (j != 1)
        
        esi_12 = arg3
        free(esi_12[3])
        var_18 = &var_18[eax_22]
        var_1c -= eax_22
        xmm0 = data_8913d0
        xmm1 = data_8911e0
        xmm2 = data_891450
        xmm3 = data_891460
    
    i = i_1 + 4
    i_1 = i
while (i s< 0x1c)

esi_12[3] = var_14
return 1
