// 函数: sub_72b070
// 地址: 0x72b070
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax = sub_7202a0(arg3)

if (sub_7202a0(arg3) + (eax << 0x10) == 0x38425053 && sub_7202a0(arg3) == 1)
    int32_t* ebx_1 = arg3 + 0xa8
    int32_t eax_4
    int32_t ecx_3
    
    if (*(arg3 + 0x10) != 0)
        eax_4 = *(arg3 + 0xac)
        ecx_3 = eax_4 - *ebx_1
    
    if (*(arg3 + 0x10) == 0 || ecx_3 s>= 6)
        *ebx_1 += 6
    else
        *ebx_1 = eax_4
        (*(arg3 + 0x14))(*(arg3 + 0x1c), 6 - ecx_3)
    
    uint32_t eax_7 = sub_7202a0(arg3)
    
    if (eax_7 u<= 0x10)
        uint32_t eax_8 = sub_7202a0(arg3)
        uint32_t eax_10 = sub_7202a0(arg3) + (eax_8 << 0x10)
        uint32_t eax_11 = sub_7202a0(arg3)
        uint32_t eax_13 = sub_7202a0(arg3) + (eax_11 << 0x10)
        uint32_t eax_14 = sub_7202a0(arg3)
        
        if (eax_14 == 8)
            goto label_72b144
        
        if (eax_14 == 0x10)
            ebx_1 = arg3 + 0xa8
        label_72b144:
            
            if (sub_7202a0(arg3) == 3)
                uint32_t eax_16 = sub_7202a0(arg3)
                uint32_t eax_17 = sub_7202a0(arg3)
                uint32_t esi_7 = eax_16 << 0x10
                uint32_t eax_18 = eax_17 + esi_7
                
                if (eax_17 + esi_7 s>= 0)
                    int32_t ecx_14
                    int32_t edx
                    
                    if (*(arg3 + 0x10) != 0)
                        edx = *(arg3 + 0xac)
                        ecx_14 = edx - *ebx_1
                    
                    if (*(arg3 + 0x10) == 0 || ecx_14 s>= eax_18)
                        *ebx_1 += eax_18
                    else
                        *ebx_1 = edx
                        (*(arg3 + 0x14))(*(arg3 + 0x1c), eax_18 - ecx_14)
                else
                    *ebx_1 = *(arg3 + 0xac)
                
                uint32_t eax_22 = sub_7202a0(arg3)
                uint32_t eax_23 = sub_7202a0(arg3)
                uint32_t esi_9 = eax_22 << 0x10
                uint32_t ecx_18 = eax_23 + esi_9
                void* var_18_1
                int32_t* ebx_2
                
                if (eax_23 + esi_9 s>= 0)
                    void* eax_25 = arg3 + 0xac
                    ebx_2 = arg3 + 0xa8
                    int32_t edx_2
                    int32_t esi_10
                    
                    if (*(arg3 + 0x10) != 0)
                        esi_10 = *eax_25
                        edx_2 = esi_10 - *ebx_2
                        var_18_1 = eax_25
                    
                    if (*(arg3 + 0x10) == 0 || edx_2 s>= ecx_18)
                        *ebx_2 += ecx_18
                        var_18_1 = eax_25
                    else
                        int32_t eax_26 = *(arg3 + 0x14)
                        int32_t var_40_3 = *(arg3 + 0x1c)
                        *ebx_2 = esi_10
                        eax_26(var_40_3, ecx_18 - edx_2)
                else
                    *ebx_1 = *(arg3 + 0xac)
                    ebx_2 = arg3 + 0xa8
                    var_18_1 = arg3 + 0xac
                
                uint32_t eax_27 = sub_7202a0(arg3)
                uint32_t eax_28 = sub_7202a0(arg3)
                uint32_t esi_12 = eax_27 << 0x10
                uint32_t ecx_23 = eax_28 + esi_12
                
                if (eax_28 + esi_12 s>= 0)
                    int32_t eax_33
                    int32_t edx_3
                    
                    if (*(arg3 + 0x10) != 0)
                        edx_3 = *var_18_1
                        eax_33 = edx_3 - *ebx_2
                    
                    if (*(arg3 + 0x10) == 0 || eax_33 s>= ecx_23)
                        *ebx_2 += ecx_23
                    else
                        *ebx_2 = edx_3
                        (*(arg3 + 0x14))(*(arg3 + 0x1c), ecx_23 - eax_33)
                else
                    *ebx_2 = *var_18_1
                
                uint32_t eax_35 = sub_7202a0(arg3)
                
                if (eax_35 s<= 1 && eax_13 s>= 0)
                    uint32_t ecx_26
                    
                    if (eax_13 != 0)
                        if (divs.dp.d(0x7fffffff, eax_13) s>= 4)
                            ecx_26 = eax_13 << 2
                            
                            if (ecx_26 s>= 0)
                                goto label_72b291
                    else
                        ecx_26 = eax_13 << 2
                    label_72b291:
                        uint32_t eax_40 = eax_10
                        
                        if (eax_40 s>= 0)
                            if (eax_40 == 0)
                                goto label_72b2b2
                            
                            if (ecx_26 s<= divs.dp.d(0x7fffffff, eax_10))
                                eax_40 = eax_10
                            label_72b2b2:
                                int32_t j_8 = eax_13 * eax_40
                                int32_t j_9 = j_8
                                void* result_2 = malloc(j_8 << 2)
                                void* result = result_2
                                
                                if (result_2 != 0)
                                    if (eax_35 == 0)
                                        uint32_t esi_14 = eax_7
                                        void* i = nullptr
                                        void* result_3 = result_2
                                        void* i_4 = nullptr
                                        void* result_4 = result_3
                                        
                                        do
                                            if (i s< esi_14)
                                                if (*arg6 != 0x10)
                                                    char* esi_16 = i + result_2
                                                    
                                                    if (eax_14 != 0x10)
                                                        if (j_8 s> 0)
                                                            int32_t j_5 = j_8
                                                            int32_t j
                                                            
                                                            do
                                                                char* eax_53 = *(arg3 + 0xa8)
                                                                
                                                                if (eax_53 u< *(arg3 + 0xac))
                                                                    i.b = *eax_53
                                                                    *(arg3 + 0xa8) = &eax_53[1]
                                                                else if (*(arg3 + 0x20) == 0)
                                                                    i.b = 0
                                                                else
                                                                    int32_t eax_56
                                                                    eax_56, i = (*(arg3 + 0x10))(
                                                                        *(arg3 + 0x1c), arg3 + 0x28, 
                                                                        *(arg3 + 0x24))
                                                                    
                                                                    if (eax_56 != 0)
                                                                        *(arg3 + 0xac) = eax_56 + 0x28 + arg3
                                                                        i.b = *(arg3 + 0x28)
                                                                        *(arg3 + 0xa8) = arg3 + 0x29
                                                                    else
                                                                        *(arg3 + 0x20) = eax_56
                                                                        *(arg3 + 0xac) = arg3 + 0x29
                                                                        *(arg3 + 0x28) = 0
                                                                        i.b = *(arg3 + 0x28)
                                                                        *(arg3 + 0xa8) = arg3 + 0x29
                                                                
                                                                *esi_16 = i.b
                                                                esi_16 = &esi_16[4]
                                                                j = j_5
                                                                j_5 -= 1
                                                            while (j != 1)
                                                        label_72b4a6:
                                                            result_2 = result
                                                            result_3 = result_4
                                                            i = i_4
                                                            j_8 = j_9
                                                    else if (j_8 s> 0)
                                                        int32_t j_1
                                                        
                                                        do
                                                            esi_16 = &esi_16[4]
                                                            esi_16[0xfffffffc] =
                                                                (sub_7202a0(arg3) s>> 8).b
                                                            j_1 = j_8
                                                            j_8 -= 1
                                                        while (j_1 != 1)
                                                        goto label_72b4a6
                                                else
                                                    void* result_5 = result_3
                                                    
                                                    if (j_8 s> 0)
                                                        int32_t j_2
                                                        
                                                        do
                                                            *result_5 = sub_7202a0(arg3)
                                                            result_5 += 8
                                                            j_2 = j_8
                                                            j_8 -= 1
                                                        while (j_2 != 1)
                                                        goto label_72b4a6
                                                
                                                esi_14 = eax_7
                                            else
                                                char* eax_49 = i + result_2
                                                result_2.b = i != 3
                                                result_2.b -= 1
                                                
                                                if (j_8 s> 0)
                                                    int32_t j_7 = j_8
                                                    int32_t j_3
                                                    
                                                    do
                                                        *eax_49 = result_2.b
                                                        eax_49 = &eax_49[4]
                                                        j_3 = j_7
                                                        j_7 -= 1
                                                    while (j_3 != 1)
                                                    i = i_4
                                                
                                                result_3 = result_4
                                                result_2 = result
                                            
                                            i += 1
                                            result_3 += 2
                                            i_4 = i
                                            result_4 = result_3
                                        while (i s< 4)
                                    else
                                        int32_t ecx_28 = eax_10 * eax_7
                                        int32_t ecx_29 = ecx_28 * 2
                                        
                                        if (ecx_28 * 2 s>= 0)
                                            int32_t eax_45
                                            int32_t edx_8
                                            
                                            if (*(arg3 + 0x10) != 0)
                                                edx_8 = *(arg3 + 0xac)
                                                eax_45 = edx_8 - *(arg3 + 0xa8)
                                            
                                            if (*(arg3 + 0x10) == 0 || eax_45 s>= ecx_29)
                                                *(arg3 + 0xa8) += ecx_29
                                            else
                                                *(arg3 + 0xa8) = edx_8
                                                (*(arg3 + 0x14))(*(arg3 + 0x1c), ecx_29 - eax_45)
                                        else
                                            *(arg3 + 0xa8) = *(arg3 + 0xac)
                                        
                                        void* result_1 = result
                                        void* i_1 = nullptr
                                        uint32_t ecx_31 = eax_7
                                        
                                        do
                                            char* edx_9 = i_1 + result_1
                                            
                                            if (i_1 s< ecx_31)
                                                if (sub_72ae70(result_1, edx_9, arg3, j_8) == 0)
                                                    free(result)
                                                    goto label_72b388
                                                
                                                ecx_31 = eax_7
                                                result_1 = result
                                            else if (j_8 s> 0)
                                                int32_t j_6 = j_8
                                                ecx_31.b = i_1 != 3
                                                ecx_31.b -= 1
                                                int32_t j_4
                                                
                                                do
                                                    *edx_9 = ecx_31.b
                                                    edx_9 = &edx_9[4]
                                                    j_4 = j_6
                                                    j_6 -= 1
                                                while (j_4 != 1)
                                                ecx_31 = eax_7
                                                result_1 = result
                                            
                                            i_1 += 1
                                        while (i_1 s< 4)
                                    
                                    uint32_t edx_10 = eax_10
                                    
                                    if (eax_7 s>= 4)
                                        int32_t i_5 = eax_13 * edx_10
                                        
                                        if (i_5 s> 0)
                                            if (*arg6 != 0x10)
                                                char* edx_12 = result + 1
                                                int32_t i_2
                                                
                                                do
                                                    int32_t* eax_62
                                                    eax_62.b = edx_12[2]
                                                    
                                                    if (eax_62.b != 0 && eax_62.b != 0xff)
                                                        float xmm2_2 =
                                                            1f / (float.s(zx.d(eax_62.b)) / 255f)
                                                        float xmm1_4 = (1f - xmm2_2) * 255f
                                                        edx_12[0xffffffff] = (int.d(
                                                            float.s(zx.d(edx_12[0xffffffff]))
                                                            * xmm2_2 + xmm1_4)).b
                                                        *edx_12 = (int.d(
                                                            float.s(zx.d(*edx_12)) * xmm2_2
                                                            + xmm1_4)).b
                                                        edx_12[1] = int.d(
                                                            float.s(zx.d(edx_12[1])) * xmm2_2
                                                            + xmm1_4).b
                                                    
                                                    edx_12 = &edx_12[4]
                                                    i_2 = i_5
                                                    i_5 -= 1
                                                while (i_2 != 1)
                                            else
                                                int16_t* edx_11 = result + 2
                                                int32_t i_3
                                                
                                                do
                                                    uint32_t eax_63 = zx.d(edx_11[2])
                                                    
                                                    if (eax_63.w != 0 && eax_63.w != 0xffff)
                                                        float xmm2_1 =
                                                            1f / (float.s(eax_63) / 65535f)
                                                        float xmm1_2 = (1f - xmm2_1) * 65535f
                                                        edx_11[-1] = (int.d(
                                                            float.s(zx.d(edx_11[-1])) * xmm2_1
                                                            + xmm1_2)).w
                                                        *edx_11 = (int.d(
                                                            float.s(zx.d(*edx_11)) * xmm2_1
                                                            + xmm1_2)).w
                                                        edx_11[1] = (int.d(
                                                            float.s(zx.d(edx_11[1])) * xmm2_1
                                                            + xmm1_2)).w
                                                    
                                                    edx_11 = &edx_11[4]
                                                    i_3 = i_5
                                                    i_5 -= 1
                                                while (i_3 != 1)
                                            
                                            edx_10 = eax_10
                                    
                                    if (arg5 != 0)
                                        *arg5 = 4
                                    
                                    *arg4 = edx_10
                                    *arg2 = eax_13
                                    return result

label_72b388:
return 0
