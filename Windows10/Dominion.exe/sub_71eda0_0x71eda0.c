// 函数: sub_71eda0
// 地址: 0x71eda0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = 0xcb45e4

if (arg6 == 0)
    esi = 0xcb45f8

void* eax_1 = *(esi + (arg8 << 2))
int32_t eax_2 = data_147dee8
void* ecx_2

if (eax_2 == 0)
    ecx_2 = arg6
else
    ecx_2 = arg5 - arg6 - 1

char* result_1 = ecx_2 * arg2 + arg3
arg5 = result_1

if (eax_2 != 0)
    arg2 = neg.d(arg2)

char* result = arg7

if (result s> 0)
    char* esi_1 = arg9
    void* edi_2 = result_1 - arg2
    char* ebx_1 = result
    char* edx_1 = result_1 - esi_1
    char* var_10_1 = edx_1
    char* i
    
    do
        char* eax_3 = esi_1
        
        if (eax_1 u<= 6)
            switch (eax_1)
                case nullptr
                    result_1 = arg5
                    
                    while (true)
                        eax_3.b = *(edx_1 + eax_3)
                        edi_2 += 1
                        *esi_1 = eax_3.b
                        esi_1 = &esi_1[1]
                        char* temp5_1 = ebx_1
                        ebx_1 -= 1
                        
                        if (temp5_1 == 1)
                            break
                        
                        eax_3 = esi_1
                case 1
                    result_1 = arg5
                    
                    while (true)
                        eax_3.b = *(edx_1 + eax_3)
                        edi_2 += 1
                        *esi_1 = eax_3.b
                        esi_1 = &esi_1[1]
                        char* temp6_1 = ebx_1
                        ebx_1 -= 1
                        
                        if (temp6_1 == 1)
                            break
                        
                        eax_3 = esi_1
                case 2
                    result_1 = arg5
                    
                    while (true)
                        eax_3.b = *(edx_1 + eax_3)
                        edi_2 += 1
                        eax_3.b -= *(edi_2 - 1)
                        *esi_1 = eax_3.b
                        esi_1 = &esi_1[1]
                        char* temp7_1 = ebx_1
                        ebx_1 -= 1
                        
                        if (temp7_1 == 1)
                            break
                        
                        eax_3 = esi_1
                case 3
                    while (true)
                        edi_2 += 1
                        edx_1.b = *(edi_2 - 1)
                        edx_1.b u>>= 1
                        eax_3.b = *(var_10_1 + eax_3)
                        result_1 = arg5
                        eax_3.b -= edx_1.b
                        *esi_1 = eax_3.b
                        esi_1 = &esi_1[1]
                        char* temp2_1 = ebx_1
                        ebx_1 -= 1
                        
                        if (temp2_1 == 1)
                            break
                        
                        eax_3 = esi_1
                case 4
                    char* j
                    
                    do
                        edi_2 += 1
                        edx_1.b = sbb.b(edx_1.b, edx_1.b, 0 u< *(edi_2 - 1))
                        edx_1.b &= *(edi_2 - 1)
                        result_1 = arg5
                        *esi_1 = *(var_10_1 + esi_1) - edx_1.b
                        esi_1 = &esi_1[1]
                        j = ebx_1
                        ebx_1 -= 1
                    while (j != 1)
                case 5
                    result_1 = arg5
                    
                    while (true)
                        eax_3.b = *(edx_1 + eax_3)
                        edi_2 += 1
                        *esi_1 = eax_3.b
                        esi_1 = &esi_1[1]
                        char* temp8_1 = ebx_1
                        ebx_1 -= 1
                        
                        if (temp8_1 == 1)
                            break
                        
                        eax_3 = esi_1
                case 6
                    result_1 = arg5
                    
                    while (true)
                        eax_3.b = *(edx_1 + eax_3)
                        edi_2 += 1
                        *esi_1 = eax_3.b
                        esi_1 = &esi_1[1]
                        char* temp9_1 = ebx_1
                        ebx_1 -= 1
                        
                        if (temp9_1 == 1)
                            break
                        
                        eax_3 = esi_1
            
            break
        
        result_1 = arg5
        edi_2 += 1
        esi_1 = &esi_1[1]
        i = ebx_1
        ebx_1 -= 1
    while (i != 1)
    result = arg7

int32_t edi_4 = arg4 * result

if (result s< edi_4)
    char* edx_3 = result_1 - arg2
    void* i_2 = edi_4 - result
    void* var_c_1 = arg9 + result
    char* var_8_1 = edx_3
    char* var_10_2 = result - arg2
    arg4 = i_2
    void* i_1
    
    do
        char* result_2 = result_1
        result = arg7
        
        if (eax_1 u<= 6)
            switch (eax_1)
                case nullptr
                    void* ebx_5 = var_c_1
                    
                    while (true)
                        result.b = *(result_2 + result)
                        edx_3 = &edx_3[1]
                        result_1 = &result_1[1]
                        *ebx_5 = result.b
                        ebx_5 += 1
                        void* i_3 = i_2
                        i_2 -= 1
                        
                        if (i_3 == 1)
                            break
                        
                        result = arg7
                        result_2 = result_1
                case 1
                    void* ebx_6 = var_c_1
                    
                    while (true)
                        result.b = *(result_2 + result)
                        edx_3 = &edx_3[1]
                        result.b -= *result_1
                        ebx_6 += 1
                        result_1 = &result_1[1]
                        *(ebx_6 - 1) = result.b
                        void* i_4 = i_2
                        i_2 -= 1
                        
                        if (i_4 == 1)
                            break
                        
                        result = arg7
                        result_2 = result_1
                case 2
                    void* ebx_7 = var_c_1
                    
                    while (true)
                        ebx_7 += 1
                        result.b = *(result_2 + result)
                        result_1 = &result_1[1]
                        var_8_1 = &var_8_1[1]
                        result.b -= *(var_10_2 + result_2)
                        *(ebx_7 - 1) = result.b
                        void* i_5 = i_2
                        i_2 -= 1
                        
                        if (i_5 == 1)
                            break
                        
                        result = arg7
                        result_2 = result_1
                case 3
                    void* ebx_8 = var_c_1
                    
                    while (true)
                        ebx_8 += 1
                        var_8_1 = &var_8_1[1]
                        uint32_t eax_7 = zx.d(*result_1)
                        result_1 = &result_1[1]
                        result.b = *(result_2 + arg7)
                        result.b -= ((zx.d(*(var_10_2 + result_2)) + eax_7) u>> 1).b
                        *(ebx_8 - 1) = result.b
                        void* i_6 = i_2
                        i_2 -= 1
                        
                        if (i_6 == 1)
                            break
                        
                        result_2 = result_1
                case 4
                    while (true)
                        result.b = *edx_3
                        uint32_t ebx_9 = zx.d(result.b)
                        arg8:3.b = result.b
                        char* eax_8
                        eax_8.b = *(var_10_2 + result_2)
                        arg6:3.b = eax_8.b
                        eax_8.b = *result_1
                        uint32_t edx_8 = zx.d(eax_8.b)
                        char var_14_1 = eax_8.b
                        uint32_t esi_5 = edx_8 - ebx_9
                        uint32_t edi_6 = zx.d(arg6:3.b) + esi_5
                        int32_t eax_11
                        int32_t edx_9
                        edx_9:eax_11 = sx.q(edi_6 - edx_8)
                        int32_t eax_13 = (eax_11 ^ edx_9) - edx_9
                        int32_t eax_15
                        int32_t edx_10
                        edx_10:eax_15 = sx.q(esi_5)
                        int32_t eax_17 = (eax_15 ^ edx_10) - edx_10
                        int32_t eax_19
                        int32_t edx_11
                        edx_11:eax_19 = sx.q(edi_6 - ebx_9)
                        int32_t esi_8 = (eax_19 ^ edx_11) - edx_11
                        
                        if (eax_13 s> eax_17 || eax_13 s> esi_8)
                            char edx_12 = arg8:3.b
                            
                            if (eax_17 s<= esi_8)
                                edx_12 = arg6:3.b
                            
                            var_14_1 = edx_12
                        
                        result = result_1
                        var_8_1 = &var_8_1[1]
                        result_1 = &result_1[1]
                        result.b = *(result + arg7)
                        result.b -= var_14_1
                        *var_c_1 = result.b
                        void* temp16_1 = arg4
                        arg4 -= 1
                        var_c_1 += 1
                        
                        if (temp16_1 == 1)
                            break
                        
                        edx_3 = var_8_1
                        result_2 = result_1
                case 5
                    void* ebx_10 = var_c_1
                    
                    while (true)
                        edx_3.b = *result_1
                        ebx_10 += 1
                        result.b = *(result_2 + result)
                        result_1 = &result_1[1]
                        var_8_1 = &var_8_1[1]
                        edx_3.b u>>= 1
                        result.b -= edx_3.b
                        *(ebx_10 - 1) = result.b
                        void* i_7 = i_2
                        i_2 -= 1
                        
                        if (i_7 == 1)
                            break
                        
                        result = arg7
                        result_2 = result_1
                case 6
                    void* ebx_11 = var_c_1
                    
                    while (true)
                        var_8_1 = &var_8_1[1]
                        ebx_11 += 1
                        char* edx_16
                        edx_16.b = *(result_2 + result)
                        edx_16.b -= *result_1
                        result_1 = &result_1[1]
                        *(ebx_11 - 1) = edx_16.b
                        void* i_8 = i_2
                        i_2 -= 1
                        
                        if (i_8 == 1)
                            break
                        
                        result_2 = result_1
            
            break
        
        var_c_1 += 1
        edx_3 = &edx_3[1]
        result_1 = &result_1[1]
        var_8_1 = edx_3
        i_1 = i_2
        i_2 -= 1
        arg4 = i_2
    while (i_1 != 1)

return result
