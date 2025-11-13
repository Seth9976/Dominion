// 函数: sub_72d900
// 地址: 0x72d900
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t ebx
int32_t var_44c = ebx
void* esi = arg3
void* var_418 = esi
int32_t edi = 0
void var_40c
char* eax_4 = sub_72d5c0(arg3, &var_40c)
void* ecx = eax_4
char const* const edx_1 = "#?RADIANCE"
int32_t eax_6

while (true)
    ebx.b = *eax_4
    char const temp2_1 = *edx_1
    bool c_1 = ebx.b u< temp2_1
    
    if (ebx.b == temp2_1)
        if (ebx.b == 0)
            eax_6 = 0
            break
        
        ebx.b = eax_4[1]
        char temp3_1 = edx_1[1]
        c_1 = ebx.b u< temp3_1
        
        if (ebx.b == temp3_1)
            eax_4 = &eax_4[2]
            edx_1 = &edx_1[2]
            
            if (ebx.b != 0)
                continue
            
            eax_6 = 0
            break
    
    eax_6 = sbb.d(eax_4, eax_4, c_1) | 1
    break

int32_t eax_9

if (eax_6 != 0)
    char const* const eax_7 = "#?RGBE"
    
    while (true)
        edx_1.b = *ecx
        char const temp4_1 = *eax_7
        bool c_2 = edx_1.b u< temp4_1
        
        if (edx_1.b == temp4_1)
            if (edx_1.b == 0)
                eax_9 = 0
                break
            
            edx_1.b = *(ecx + 1)
            char temp6_1 = eax_7[1]
            c_2 = edx_1.b u< temp6_1
            
            if (edx_1.b == temp6_1)
                ecx += 2
                eax_7 = &eax_7[2]
                
                if (edx_1.b != 0)
                    continue
                
                eax_9 = 0
                break
        
        eax_9 = sbb.d(eax_7, eax_7, c_2) | 1
        break

if (eax_6 == 0 || eax_9 == 0)
    char* _EndPtr_1 = sub_72d5c0(esi, &var_40c)
    char* _EndPtr = _EndPtr_1
    
    if (*_EndPtr_1 != 0)
        while (true)
            char const* const ecx_2 = "FORMAT=32-bit_rle_rgbe"
            int32_t eax_11
            
            while (true)
                char edx_3 = *_EndPtr_1
                char const temp5_1 = *ecx_2
                bool c_3 = edx_3 u< temp5_1
                
                if (edx_3 == temp5_1)
                    if (edx_3 == 0)
                        eax_11 = 0
                        break
                    
                    edx_3 = _EndPtr_1[1]
                    char temp7_1 = ecx_2[1]
                    c_3 = edx_3 u< temp7_1
                    
                    if (edx_3 == temp7_1)
                        _EndPtr_1 = &_EndPtr_1[2]
                        ecx_2 = &ecx_2[2]
                        
                        if (edx_3 != 0)
                            continue
                        
                        eax_11 = 0
                        break
                
                eax_11 = sbb.d(_EndPtr_1, _EndPtr_1, c_3) | 1
                break
            
            if (eax_11 == 0)
                edi = 1
            
            _EndPtr_1 = sub_72d5c0(esi, &var_40c)
            _EndPtr = _EndPtr_1
            
            if (*_EndPtr_1 == 0)
                break
        
        if (edi != 0)
            char* _Str1 = sub_72d5c0(esi, &var_40c)
            _EndPtr = _Str1
            
            if (strncmp(_Str1, "-Y ", 3) == 0)
                _EndPtr = &_EndPtr[3]
                int32_t eax_15 = strtol(&_EndPtr[3], &_EndPtr, 0xa)
                char* _Str1_1 = _EndPtr
                
                while (*_Str1_1 == 0x20)
                    _Str1_1 = &_Str1_1[1]
                    _EndPtr = _Str1_1
                
                if (strncmp(_Str1_1, "+X ", 3) == 0)
                    void* _String = &_EndPtr[3]
                    _EndPtr = _String
                    int32_t j_3 = strtol(_String, nullptr, 0xa)
                    int32_t edi_1 = eax_15
                    *arg2 = j_3
                    *arg4 = edi_1
                    
                    if (arg5 != 0)
                        *arg5 = 3
                    
                    if (j_3 s>= 0 && edi_1 s>= 0)
                        int32_t eax_19
                        int32_t edx_6
                        
                        if (edi_1 != 0)
                            edx_6:eax_19 = 0x7fffffff
                        
                        if (edi_1 == 0 || j_3 s<= divs.dp.d(edx_6:eax_19, edi_1))
                            int32_t eax_22 = j_3 * edi_1
                            
                            if (eax_22 s>= 0 && eax_22 s<= 0x2aaaaaaa)
                                int32_t eax_23 = eax_22 * 3
                                
                                if (eax_23 s>= 0 && eax_23 s<= 0x1fffffff)
                                    float* result
                                    uint32_t edx_9
                                    result, edx_9 = sub_71f560(eax_23, edi_1, j_3, 3)
                                    
                                    if (result != 0)
                                        int32_t j_4 = j_3
                                        int32_t ebx_8
                                        int32_t edi_10
                                        
                                        if (j_4 - 8 u> 0x7ff7)
                                            ebx_8 = 0
                                        label_72e1a2:
                                            
                                            if (ebx_8 s< edi_1)
                                                edi_10 = 0
                                                goto label_72e1ac
                                        else
                                            uint32_t var_420_1 = 0
                                            uint32_t var_43c_1 = 0
                                            
                                            if (edi_1 s> 0)
                                                void* edi_2 = esi + 0xa8
                                                int32_t var_444 = j_4 * 0xc
                                                float* result_1 = result
                                                void* var_438_1 = edi_2
                                                void* (* const var_448_1)(uint32_t _Size) = malloc
                                                
                                                while (true)
                                                    char* eax_27 = *edi_2
                                                    void* ebx_2 = esi + 0x20
                                                    void* ecx_9 = *(esi + 0xac)
                                                    uint32_t var_424_1
                                                    uint32_t var_414_1
                                                    char var_40e_1
                                                    char var_40d_1
                                                    
                                                    if (eax_27 u>= ecx_9)
                                                        if (*ebx_2 != 0)
                                                            void* eax_30 = (*(esi + 0x10))(
                                                                *(esi + 0x1c), esi + 0x28, 
                                                                *(esi + 0x24))
                                                            
                                                            if (eax_30 != 0)
                                                                ecx_9 = eax_30 + 0x28 + esi
                                                                *(esi + 0xac) = ecx_9
                                                            else
                                                                ecx_9 = esi + 0x29
                                                                *ebx_2 = eax_30
                                                                *(esi + 0xac) = ecx_9
                                                                *(esi + 0x28) = eax_30.b
                                                            
                                                            eax_30.b = *(esi + 0x28)
                                                            var_40d_1 = eax_30.b
                                                            eax_27 = esi + 0x29
                                                            goto label_72dc20
                                                        
                                                        var_40d_1 = 0
                                                        var_414_1 = 0
                                                    label_72dc4c:
                                                        
                                                        if (*ebx_2 != 0)
                                                            void* eax_33 = (*(esi + 0x10))(
                                                                *(esi + 0x1c), esi + 0x28, 
                                                                *(esi + 0x24))
                                                            *edi_2 = esi + 0x28
                                                            
                                                            if (eax_33 != 0)
                                                                ecx_9 = eax_33 + 0x28 + esi
                                                                *(esi + 0xac) = ecx_9
                                                            else
                                                                ecx_9 = esi + 0x29
                                                                *ebx_2 = eax_33
                                                                *(esi + 0xac) = ecx_9
                                                                *(esi + 0x28) = eax_33.b
                                                            
                                                            eax_27 = *edi_2
                                                            goto label_72dc88
                                                        
                                                        var_40e_1 = 0
                                                        var_424_1 = 0
                                                    label_72dcb8:
                                                        
                                                        if (*ebx_2 == 0)
                                                            edx_9.b = 0
                                                        else
                                                            void* eax_36
                                                            eax_36, edx_9 = (*(esi + 0x10))(
                                                                *(esi + 0x1c), esi + 0x28, 
                                                                *(esi + 0x24))
                                                            *edi_2 = esi + 0x28
                                                            
                                                            if (eax_36 != 0)
                                                                *(esi + 0xac) = eax_36 + 0x28 + esi
                                                                char* eax_41 = *edi_2
                                                                edx_9.b = *eax_41
                                                                eax_27 = &eax_41[1]
                                                                *edi_2 = eax_27
                                                            else
                                                                *ebx_2 = eax_36
                                                                *(esi + 0xac) = esi + 0x29
                                                                *(esi + 0x28) = 0
                                                                char* eax_38 = *edi_2
                                                                edx_9.b = *eax_38
                                                                eax_27 = &eax_38[1]
                                                                *edi_2 = eax_27
                                                    else
                                                        edx_9.b = *eax_27
                                                        eax_27 = &eax_27[1]
                                                        var_40d_1 = edx_9.b
                                                    label_72dc20:
                                                        *edi_2 = eax_27
                                                        esi = var_418
                                                        var_414_1 = zx.d(var_40d_1)
                                                        
                                                        if (eax_27 u>= ecx_9)
                                                            goto label_72dc4c
                                                        
                                                    label_72dc88:
                                                        edx_9.b = *eax_27
                                                        eax_27 = &eax_27[1]
                                                        var_40e_1 = edx_9.b
                                                        *edi_2 = eax_27
                                                        var_424_1 = zx.d(edx_9.b)
                                                        
                                                        if (eax_27 u>= ecx_9)
                                                            goto label_72dcb8
                                                        
                                                        edx_9.b = *eax_27
                                                        eax_27 = &eax_27[1]
                                                        *edi_2 = eax_27
                                                    
                                                    uint32_t ecx_13 = zx.d(edx_9.b)
                                                    int16_t top
                                                    
                                                    if (var_414_1 != 2 || var_424_1 != 2
                                                            || ecx_13.b s< 0)
                                                        ecx_13.b = var_40d_1
                                                        var_418.b = ecx_13.b
                                                        ecx_13.b = var_40e_1
                                                        var_418:1.b = ecx_13.b
                                                        var_418:2.b = edx_9.b
                                                        
                                                        if (eax_27 u< *(esi + 0xac))
                                                            ecx_13.b = *eax_27
                                                            eax_27 = &eax_27[1]
                                                            *(esi + 0xa8) = eax_27
                                                        else if (*(esi + 0x20) == 0)
                                                            ecx_13.b = 0
                                                        else
                                                            void* eax_76
                                                            eax_76, ecx_13 = (*(esi + 0x10))(
                                                                *(esi + 0x1c), esi + 0x28, 
                                                                *(esi + 0x24))
                                                            
                                                            if (eax_76 != 0)
                                                                *(esi + 0xac) = eax_76 + 0x28 + esi
                                                                eax_27 = esi + 0x29
                                                                ecx_13.b = *(esi + 0x28)
                                                                *(esi + 0xa8) = eax_27
                                                            else
                                                                *(esi + 0x20) = eax_76
                                                                *(esi + 0xac) = esi + 0x29
                                                                eax_27 = esi + 0x29
                                                                *(esi + 0x28) = 0
                                                                ecx_13.b = *(esi + 0x28)
                                                                *(esi + 0xa8) = eax_27
                                                        
                                                        var_418:3.b = ecx_13.b
                                                        sub_72d7d0(eax_27, &var_418, result, 
                                                            4.20389539e-45f)
                                                        top += 1
                                                        edi_10 = 1
                                                        ebx_8 = 0
                                                        j_4 = free(var_420_1)
                                                        
                                                        do
                                                            sub_720200(j_4, &var_444, esi, 4)
                                                            int32_t eax_83 =
                                                                (ebx_8 * j_3 + edi_10) * 3
                                                            sub_72d7d0(eax_83, &var_444, 
                                                                &result[eax_83], 4.20389539e-45f)
                                                            top += 1
                                                            j_4 = j_3
                                                            edi_10 += 1
                                                        label_72e1ac:
                                                        while (edi_10 s< j_4)
                                                        
                                                        edi_1 = eax_15
                                                        ebx_8 += 1
                                                        break
                                                    
                                                    uint32_t var_414_2 = ecx_13 << 8
                                                    uint32_t ecx_14
                                                    
                                                    if (eax_27 u< *(esi + 0xac))
                                                        ecx_14.b = *eax_27
                                                        *edi_2 = &eax_27[1]
                                                    else if (*ebx_2 == 0)
                                                        ecx_14.b = 0
                                                    else
                                                        void* eax_45 = (*(esi + 0x10))(
                                                            *(esi + 0x1c), esi + 0x28, 
                                                            *(esi + 0x24))
                                                        *edi_2 = esi + 0x28
                                                        
                                                        if (eax_45 != 0)
                                                            *(esi + 0xac) = eax_45 + 0x28 + esi
                                                            char* eax_51 = *edi_2
                                                            ecx_14.b = *eax_51
                                                            *edi_2 = &eax_51[1]
                                                        else
                                                            *ebx_2 = eax_45
                                                            *(esi + 0xac) = esi + 0x29
                                                            *(esi + 0x28) = 0
                                                            char* eax_47 = *edi_2
                                                            ecx_14.b = *eax_47
                                                            *edi_2 = &eax_47[1]
                                                    
                                                    uint32_t eax_54 = zx.d(ecx_14.b) | var_414_2
                                                    int32_t j_2 = j_3
                                                    
                                                    if (eax_54 != j_2)
                                                    label_72e0da:
                                                        free(result)
                                                        free(var_420_1)
                                                        goto label_72e0c5
                                                    
                                                    if (var_420_1 == 0)
                                                        if (j_2 s<= 0x1fffffff)
                                                            eax_54 = malloc(j_2 << 2)
                                                            var_420_1 = eax_54
                                                        
                                                        if (j_2 s> 0x1fffffff || eax_54 == 0)
                                                            free(result)
                                                            goto label_72e0c5
                                                        
                                                        j_2 = j_3
                                                    
                                                    int32_t i = 0
                                                    int32_t i_2 = 0
                                                    
                                                    do
                                                        int32_t j = j_2
                                                        int32_t var_424_2 = 0
                                                        int32_t j_1 = j_2
                                                        
                                                        while (j s> 0)
                                                            char* ecx_15 = *edi_2
                                                            eax_54 = *(esi + 0xac)
                                                            void* ecx_16
                                                            
                                                            if (ecx_15 u>= eax_54)
                                                                if (*(esi + 0x20) != 0)
                                                                    int32_t eax_57 = (*(esi + 0x10))(
                                                                        *(esi + 0x1c), esi + 0x28, 
                                                                        *(esi + 0x24))
                                                                    
                                                                    if (eax_57 != 0)
                                                                        eax_54 = eax_57 + 0x28 + esi
                                                                        *(esi + 0xac) = eax_54
                                                                    else
                                                                        *(esi + 0x20) = eax_57
                                                                        eax_54 = esi + 0x29
                                                                        *(esi + 0xac) = eax_54
                                                                        *(esi + 0x28) = 0
                                                                    
                                                                    i.b = *(esi + 0x28)
                                                                    ecx_16 = esi + 0x29
                                                                    goto label_72de6a
                                                                
                                                                i.b = 0
                                                            label_72df39:
                                                                uint32_t ecx_17 = zx.d(i.b)
                                                                uint32_t var_414_3 = ecx_17
                                                                
                                                                if (ecx_17 u> j)
                                                                    goto label_72e0da
                                                                
                                                                if (i.b != 0)
                                                                    char* ebx_4 =
                                                                        i_2 + (var_424_2 << 2) + var_420_1
                                                                    var_424_2 += ecx_17
                                                                    bool cond:4_1
                                                                    
                                                                    do
                                                                        eax_54 = *edi_2
                                                                        
                                                                        if (eax_54 u< *(esi + 0xac))
                                                                            ecx_17.b = *eax_54
                                                                            eax_54 += 1
                                                                            *edi_2 = eax_54
                                                                        else if (*(esi + 0x20) == 0)
                                                                            ecx_17.b = 0
                                                                        else
                                                                            void* eax_68
                                                                            eax_68, ecx_17 = (*(esi + 0x10))(
                                                                                *(esi + 0x1c), esi + 0x28, 
                                                                                *(esi + 0x24))
                                                                            
                                                                            if (eax_68 != 0)
                                                                                *(esi + 0xac) = eax_68 + 0x28 + esi
                                                                                eax_54 = esi + 0x29
                                                                                ecx_17.b = *(esi + 0x28)
                                                                                edi_2 = esi + 0xa8
                                                                                *edi_2 = eax_54
                                                                            else
                                                                                *(esi + 0x20) = eax_68
                                                                                *(esi + 0xac) = esi + 0x29
                                                                                eax_54 = esi + 0x29
                                                                                *(esi + 0x28) = 0
                                                                                ecx_17.b = *(esi + 0x28)
                                                                                edi_2 = esi + 0xa8
                                                                                *edi_2 = eax_54
                                                                        
                                                                        *ebx_4 = ecx_17.b
                                                                        ebx_4 = &ebx_4[4]
                                                                        cond:4_1 = var_414_3 != 1
                                                                        var_414_3 -= 1
                                                                    while (cond:4_1)
                                                                
                                                                i = i_2
                                                            else
                                                                i.b = *ecx_15
                                                                ecx_16 = &ecx_15[1]
                                                            label_72de6a:
                                                                j = j_1
                                                                *var_438_1 = ecx_16
                                                                esi = var_418
                                                                
                                                                if (i.b u<= 0x80)
                                                                    edi_2 = esi + 0xa8
                                                                    goto label_72df39
                                                                
                                                                if (ecx_16 u< eax_54)
                                                                    j.b = *ecx_16
                                                                    eax_54 = ecx_16 + 1
                                                                    *(esi + 0xa8) = eax_54
                                                                else if (*(esi + 0x20) == 0)
                                                                    j.b = 0
                                                                else
                                                                    void* eax_60
                                                                    eax_60, j = (*(esi + 0x10))(
                                                                        *(esi + 0x1c), esi + 0x28, 
                                                                        *(esi + 0x24))
                                                                    
                                                                    if (eax_60 != 0)
                                                                        *(esi + 0xac) = eax_60 + 0x28 + esi
                                                                        eax_54 = esi + 0x29
                                                                        j.b = *(esi + 0x28)
                                                                        *(esi + 0xa8) = eax_54
                                                                    else
                                                                        *(esi + 0x20) = eax_60
                                                                        *(esi + 0xac) = esi + 0x29
                                                                        eax_54 = esi + 0x29
                                                                        *(esi + 0x28) = 0
                                                                        j.b = *(esi + 0x28)
                                                                        *(esi + 0xa8) = eax_54
                                                                
                                                                i.b -= 0x80
                                                                uint32_t k_1 = zx.d(i.b)
                                                                
                                                                if (k_1 u> j_1)
                                                                    goto label_72e0da
                                                                
                                                                bool cond:3_1 = i.b == 0
                                                                i = i_2
                                                                
                                                                if (not(cond:3_1))
                                                                    eax_54 =
                                                                        i + (var_424_2 << 2) + var_420_1
                                                                    var_424_2 += k_1
                                                                    uint32_t k
                                                                    
                                                                    do
                                                                        *eax_54 = j.b
                                                                        eax_54 += 4
                                                                        k = k_1
                                                                        k_1 -= 1
                                                                    while (k != 1)
                                                            j_2 = j_3
                                                            edi_2 = esi + 0xa8
                                                            j = j_2 - var_424_2
                                                            j_1 = j
                                                        
                                                        i += 1
                                                        i_2 = i
                                                    while (i s< 4)
                                                    
                                                    if (j_2 s> 0)
                                                        uint32_t ebx_5 = var_420_1
                                                        int32_t i_3 = j_2
                                                        float* result_2 = result_1
                                                        int32_t i_1
                                                        
                                                        do
                                                            eax_54 = sub_72d7d0(eax_54, ebx_5, 
                                                                result_2, 4.20389539e-45f)
                                                            top += 1
                                                            result_2 = &result_2[3]
                                                            ebx_5 += 4
                                                            i_1 = i_3
                                                            i_3 -= 1
                                                        while (i_1 != 1)
                                                        esi = var_418
                                                        edi_2 = var_438_1
                                                    
                                                    edx_9 = var_43c_1 + 1
                                                    result_1 = &result_1[j_4 * 3]
                                                    var_43c_1 = edx_9
                                                    
                                                    if (edx_9 s< eax_15)
                                                        continue
                                                    
                                                    if (var_420_1 != 0)
                                                        free(var_420_1)
                                                    
                                                    goto label_72e0a3
                                                
                                                goto label_72e1a2
                                    label_72e0a3:
                                        CookieCheckFunction(result)
                                        return result

label_72e0c5:
CookieCheckFunction(0)
return 0
