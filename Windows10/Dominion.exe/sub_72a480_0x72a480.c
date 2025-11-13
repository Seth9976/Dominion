// 函数: sub_72a480
// 地址: 0x72a480
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = arg3
char* edx = *(esi + 0xa8)
void* ebx = esi + 0xa8
void* eax = *(esi + 0xac)
void* edi = esi + 0x20
void* var_18 = edi
uint32_t var_28
uint32_t var_24
char var_5_2
void* ecx_2
void* var_20
char var_5_1
void* edx_1
void* edx_3

if (edx u>= eax)
    if (*edi != 0)
        void* eax_3 = (*(esi + 0x10))(*(esi + 0x1c), esi + 0x28, *(esi + 0x24))
        *ebx = esi + 0x28
        
        if (eax_3 != 0)
            eax = eax_3 + 0x28 + esi
            *(esi + 0xac) = eax
        else
            *edi = eax_3
            eax = esi + 0x29
            *(esi + 0xac) = eax
            *(esi + 0x28) = 0
        
        var_5_1 = *(esi + 0x28)
        edx_1 = esi + 0x29
        var_18 = edi
        goto label_72a4f8
    
    ecx_2 = edi
    var_20 = edi
    var_18 = edi
    var_24 = 0
label_72a52e:
    
    if (*ecx_2 != 0)
        void* eax_7 = (*(esi + 0x10))(*(esi + 0x1c), esi + 0x28, *(esi + 0x24))
        *ebx = esi + 0x28
        
        if (eax_7 != 0)
            eax = eax_7 + 0x28 + esi
            *(esi + 0xac) = eax
        else
            *var_20 = 0
            eax = esi + 0x29
            *(esi + 0xac) = eax
            *(esi + 0x28) = 0
        
        var_5_2 = *(esi + 0x28)
        edx_3 = esi + 0x29
        ecx_2 = var_20
        goto label_72a57b
    
    var_5_2 = 0
    var_28 = 0
label_72a5aa:
    
    if (*ecx_2 == 0)
        ecx_2.b = 0
    else
        void* eax_13 = (*(esi + 0x10))(*(esi + 0x1c), esi + 0x28, *(esi + 0x24))
        *ebx = esi + 0x28
        
        if (eax_13 != 0)
            *(esi + 0xac) = eax_13 + 0x28 + esi
            void* eax_18
            eax_18.b = *(esi + 0x28)
            ecx_2.b = eax_18.b
            *ebx = esi + 0x29
        else
            *var_20 = 0
            *(esi + 0xac) = esi + 0x29
            *(esi + 0x28) = 0
            void* eax_15
            eax_15.b = *(esi + 0x28)
            ecx_2.b = eax_15.b
            *ebx = esi + 0x29
else
    arg3.b = *edx
    edx_1 = &edx[1]
    var_5_1 = arg3.b
label_72a4f8:
    void* var_3c_1 = ebx
    *ebx = edx_1
    ecx_2 = edi
    var_24 = zx.d(var_5_1)
    ebx = esi + 0xa8
    var_20 = ecx_2
    
    if (edx_1 u>= eax)
        goto label_72a52e
    
    ecx_2.b = *edx_1
    edx_3 = edx_1 + 1
    var_5_2 = ecx_2.b
    ecx_2 = edi
label_72a57b:
    void* var_3c_2 = ebx
    *ebx = edx_3
    edi = var_18
    var_28 = zx.d(var_5_2)
    ebx = esi + 0xa8
    
    if (edx_3 u>= eax)
        goto label_72a5aa
    
    ecx_2.b = *edx_3
    *ebx = edx_3 + 1
uint32_t eax_20 = zx.d(ecx_2.b)
uint32_t eax_21 = sub_7203e0(esi)
uint32_t i_12 = sub_7203e0(esi)
char* ecx_6 = *ebx
char edx_5

if (ecx_6 u< *(esi + 0xac))
    edx_5 = *ecx_6
    *ebx = &ecx_6[1]
else if (*edi == 0)
    edx_5 = 0
else
    void* eax_24 = (*(esi + 0x10))(*(esi + 0x1c), esi + 0x28, *(esi + 0x24))
    *ebx = esi + 0x28
    
    if (eax_24 != 0)
        *(esi + 0xac) = eax_24 + 0x28 + esi
        edx_5 = *(esi + 0x28)
        *ebx = esi + 0x29
    else
        *edi = eax_24
        *(esi + 0xac) = esi + 0x29
        *(esi + 0x28) = 0
        edx_5 = *(esi + 0x28)
        *ebx = esi + 0x29

uint32_t edi_2 = zx.d(edx_5)
sub_7203e0(esi)
sub_7203e0(esi)
uint32_t eax_30 = sub_7203e0(esi)
uint32_t i_13
uint32_t edx_6
i_13, edx_6 = sub_7203e0(esi)
void* ecx_13 = *(esi + 0xac)
void* eax_31 = *ebx
uint32_t var_40
uint32_t var_20_1
void* eax_32

if (eax_31 u< ecx_13)
label_72a701:
    edx_6.b = *eax_31
    edx_6 = zx.d(edx_6.b)
    var_20_1 = edx_6
    var_40 = edx_6
    *(esi + 0xa8) = eax_31 + 1
    ebx = esi + 0xa8
    
    if (eax_31 + 1 u>= ecx_13)
        eax_32 = var_18
        goto label_72a744
    
    edx_6.b = *(eax_31 + 1)
    *ebx = eax_31 + 2
else
    eax_32 = var_18
    
    if (*eax_32 != 0)
        void* eax_35
        eax_35, edx_6 = (*(esi + 0x10))(*(esi + 0x1c), esi + 0x28, *(esi + 0x24))
        
        if (eax_35 != 0)
            eax_31 = esi + 0x28
            ecx_13 = eax_35 + 0x28 + esi
            *ebx = eax_31
            *(esi + 0xac) = ecx_13
        else
            *var_18 = eax_35
            eax_31 = esi + 0x28
            ecx_13 = esi + 0x29
            *ebx = eax_31
            *(esi + 0xac) = ecx_13
            *eax_31 = 0
        
        goto label_72a701
    
    var_20_1 = 0
    var_40 = 0
label_72a744:
    
    if (*eax_32 == 0)
        edx_6.b = 0
    else
        void* eax_41
        eax_41, edx_6 = (*(esi + 0x10))(*(esi + 0x1c), esi + 0x28, *(esi + 0x24))
        *ebx = esi + 0x28
        
        if (eax_41 != 0)
            *(esi + 0xac) = eax_41 + 0x28 + esi
            edx_6.b = *(esi + 0x28)
            *ebx = esi + 0x29
        else
            *var_18 = 0
            *(esi + 0xac) = esi + 0x29
            *(esi + 0x28) = 0
            edx_6.b = *(esi + 0x28)
            *ebx = esi + 0x29
uint32_t ecx_17 = eax_20
char* var_34 = nullptr
int32_t var_30 = 0
int32_t var_3c_4 = 0
uint32_t var_44 = 0
int32_t var_48 = 1

if (eax_20 u>= 8)
    ecx_17 -= 8

int32_t var_10_1
uint32_t count_1

if (var_28 == 0)
    if (var_40 - 8 u> 0x18)
        count_1 = 0
        var_10_1 = 0
    else
        switch (var_40 + &jump_table_72ae3c[3])
            case &lookup_table_72ae50
                count_1 = 1
                var_10_1 = 0
            case &lookup_table_72ae50[1], &lookup_table_72ae50[2], &lookup_table_72ae50[3], 
                    &lookup_table_72ae50[4], &lookup_table_72ae50[5], &lookup_table_72ae50[6], 
                    &lookup_table_72ae50[9], &lookup_table_72ae50[0xa], &lookup_table_72ae50[0xb], 
                    &lookup_table_72ae50[0xc], &lookup_table_72ae50[0xd], 
                    &lookup_table_72ae50[0xe], &lookup_table_72ae50[0xf], 
                    &lookup_table_72ae50[0x11], &lookup_table_72ae50[0x12], 
                    &lookup_table_72ae50[0x13], &lookup_table_72ae50[0x14], 
                    &lookup_table_72ae50[0x15], &lookup_table_72ae50[0x16], 
                    &lookup_table_72ae50[0x17]
                count_1 = 0
                var_10_1 = 0
            case &lookup_table_72ae50[7]
                count_1 = 3
                var_10_1 = 1
            case &lookup_table_72ae50[8]
                if (ecx_17 != 3)
                    count_1 = 3
                    var_10_1 = 1
                else
                    count_1 = 2
                    var_10_1 = 0
            case &lookup_table_72ae50[0x10], &lookup_table_72ae50[0x18]
                count_1 = var_20_1 u>> 3
                var_10_1 = 0
else if (edi_2 - 8 u> 0x18)
    count_1 = 0
    var_10_1 = 0
else
    switch (edi_2 + &jump_table_72ae10[2])
        case &lookup_table_72ae20
            count_1 = 1
            var_10_1 = 0
        case &lookup_table_72ae20[1], &lookup_table_72ae20[2], &lookup_table_72ae20[3], 
                &lookup_table_72ae20[4], &lookup_table_72ae20[5], &lookup_table_72ae20[6], 
                &lookup_table_72ae20[9], &lookup_table_72ae20[0xa], &lookup_table_72ae20[0xb], 
                &lookup_table_72ae20[0xc], &lookup_table_72ae20[0xd], &lookup_table_72ae20[0xe], 
                &lookup_table_72ae20[0xf], &lookup_table_72ae20[0x11], &lookup_table_72ae20[0x12], 
                &lookup_table_72ae20[0x13], &lookup_table_72ae20[0x14], &lookup_table_72ae20[0x15], 
                &lookup_table_72ae20[0x16], &lookup_table_72ae20[0x17]
            count_1 = 0
            var_10_1 = 0
        case &lookup_table_72ae20[7], &lookup_table_72ae20[8]
            count_1 = 3
            var_10_1 = 1
        case &lookup_table_72ae20[0x10], &lookup_table_72ae20[0x18]
            count_1 = edi_2 u>> 3
            var_10_1 = 0

if (count_1 != 0)
    uint32_t edx_8 = eax_30
    *arg2 = edx_8
    *arg4 = i_13
    
    if (arg5 != 0)
        *arg5 = count_1
    
    if (edx_8 s>= 0 && i_13 s>= 0)
        int32_t eax_61
        int32_t edx_9
        
        if (i_13 != 0)
            edx_9:eax_61 = 0x7fffffff
            edx_8 = eax_30
        
        if (i_13 == 0 || edx_8 s<= divs.dp.d(edx_9:eax_61, i_13))
            int32_t edi_6 = i_13 * edx_8
            
            if (edi_6 s>= 0 && edi_6 s<= divu.dp.d(0:0x7fffffff, count_1))
                if (i_13 == 0)
                    goto label_72a8f6
                
                if (eax_30 s<= divs.dp.d(0x7fffffff, i_13))
                    uint32_t eax_67
                    eax_67.b = var_5_2
                    var_5_2 = eax_67.b
                label_72a8f6:
                    char* result_2
                    int32_t ecx_19
                    result_2, ecx_19 = malloc(count_1 * i_13 * eax_30)
                    char* result = result_2
                    
                    if (result != 0)
                        int32_t eax_74
                        
                        if (*(esi + 0x10) != 0)
                            ecx_19 = *(esi + 0xac)
                            eax_74 = ecx_19 - *ebx
                        
                        if (*(esi + 0x10) == 0 || eax_74 s>= var_24)
                            *(esi + 0xa8) = *ebx + var_24
                        else
                            *ebx = ecx_19
                            (*(esi + 0x14))(*(esi + 0x1c), var_24 - eax_74)
                        
                        uint32_t var_28_1
                        char* result_1
                        char var_5_3
                        char* edx_16
                        uint32_t count
                        
                        if (var_28 == 0)
                            edx_16 = result
                            ecx_19.b = var_5_2
                            result_1 = edx_16
                            var_28_1 = var_20_1
                            var_5_3 = ecx_19.b
                            int32_t ecx_20
                            uint32_t i_9
                            
                            if (eax_20 u>= 8)
                            label_72aaee:
                                count = count_1
                            label_72aaf9:
                                uint32_t i_14 = i_13
                                int32_t i_8 = i_14 * eax_30
                                int32_t i_11 = i_8
                                
                                if (i_8 != 0)
                                    char* eax_95 = edx_16
                                    int32_t ebx_11 = 0
                                    char* var_24_1 = eax_95
                                    int32_t i
                                    
                                    do
                                        if (eax_20 u< 8)
                                        label_72abb9:
                                            
                                            if (var_5_3 != 0)
                                                uint32_t eax_109
                                                
                                                if (var_28_1 != 8)
                                                    eax_109, edx_16 = sub_7203e0(esi)
                                                else
                                                    char* eax_107 = *(esi + 0xa8)
                                                    
                                                    if (eax_107 u< *(esi + 0xac))
                                                        i_8.b = *eax_107
                                                        *(esi + 0xa8) = &eax_107[1]
                                                        eax_109 = zx.d(i_8.b)
                                                    else if (*(esi + 0x20) == 0)
                                                        eax_109 = 0
                                                    else
                                                        void* eax_111
                                                        eax_111, edx_16 = (*(esi + 0x10))(
                                                            *(esi + 0x1c), esi + 0x28, 
                                                            *(esi + 0x24))
                                                        char ecx_31
                                                        
                                                        if (eax_111 != 0)
                                                            *(esi + 0xac) = eax_111 + 0x28 + esi
                                                            ecx_31 = *(esi + 0x28)
                                                            *(esi + 0xa8) = esi + 0x29
                                                            eax_109 = zx.d(ecx_31)
                                                        else
                                                            *(esi + 0x20) = eax_111
                                                            *(esi + 0xac) = esi + 0x29
                                                            *(esi + 0x28) = 0
                                                            ecx_31 = *(esi + 0x28)
                                                            *(esi + 0xa8) = esi + 0x29
                                                            eax_109 = zx.d(ecx_31)
                                                
                                                uint32_t ecx_33 = 0
                                                
                                                if (eax_109 s< i_12)
                                                    ecx_33 = eax_109
                                                
                                                if (count != 0)
                                                    memcpy(&var_30, &var_34[ecx_33 * count], count)
                                            else if (var_10_1 == 0)
                                                int32_t ebx_17 = 0
                                                
                                                if (count != 0)
                                                    do
                                                        char* eax_119 = *(esi + 0xa8)
                                                        
                                                        if (eax_119 u< *(esi + 0xac))
                                                            i_8.b = *eax_119
                                                            *(esi + 0xa8) = &eax_119[1]
                                                        else if (*(esi + 0x20) == 0)
                                                            i_8.b = 0
                                                        else
                                                            void* eax_122
                                                            eax_122, edx_16, i_8 = (*(esi + 0x10))(
                                                                *(esi + 0x1c), esi + 0x28, 
                                                                *(esi + 0x24))
                                                            
                                                            if (eax_122 != 0)
                                                                *(esi + 0xac) = eax_122 + 0x28 + esi
                                                                i_8.b = *(esi + 0x28)
                                                                count = count_1
                                                                *(esi + 0xa8) = esi + 0x29
                                                            else
                                                                *(esi + 0x20) = eax_122
                                                                *(esi + 0xac) = esi + 0x29
                                                                *(esi + 0x28) = 0
                                                                i_8.b = *(esi + 0x28)
                                                                count = count_1
                                                                *(esi + 0xa8) = esi + 0x29
                                                        
                                                        *(&var_30 + ebx_17) = i_8.b
                                                        ebx_17 += 1
                                                    while (ebx_17 s< count)
                                            else
                                                sub_72a400(esi, &var_30)
                                            
                                            ebx_11 = var_3c_4
                                            eax_95 = var_24_1
                                            var_48 = 0
                                            i_8 = i_11
                                        else
                                            if (ebx_11 == 0)
                                                char* eax_96 = *(esi + 0xa8)
                                                
                                                if (eax_96 u< *(esi + 0xac))
                                                    i_8.b = *eax_96
                                                    *(esi + 0xa8) = &eax_96[1]
                                                else if (*(esi + 0x20) == 0)
                                                    i_8.b = 0
                                                else
                                                    void* eax_99
                                                    eax_99, edx_16, i_8 = (*(esi + 0x10))(
                                                        *(esi + 0x1c), esi + 0x28, *(esi + 0x24))
                                                    
                                                    if (eax_99 != 0)
                                                        *(esi + 0xac) = eax_99 + 0x28 + esi
                                                        i_8.b = *(esi + 0x28)
                                                        *(esi + 0xa8) = esi + 0x29
                                                    else
                                                        *(esi + 0x20) = eax_99
                                                        *(esi + 0xac) = esi + 0x29
                                                        *(esi + 0x28) = 0
                                                        i_8.b = *(esi + 0x28)
                                                        *(esi + 0xa8) = esi + 0x29
                                                
                                                uint32_t eax_105 = zx.d(i_8.b)
                                                var_3c_4 = (eax_105 & 0x7f) + 1
                                                var_44 = eax_105 u>> 7
                                                goto label_72abb9
                                            
                                            if (var_44 == 0 || var_48 != 0)
                                                goto label_72abb9
                                        
                                        if (count != 0)
                                            memcpy(eax_95, &var_30, count)
                                            eax_95 = var_24_1
                                            i_8 = i_11
                                        
                                        ebx_11 -= 1
                                        eax_95 = &eax_95[count]
                                        i = i_8
                                        i_8 -= 1
                                        var_3c_4 = ebx_11
                                        var_24_1 = eax_95
                                        i_11 = i_8
                                    while (i != 1)
                                    i_14 = i_13
                                
                                if (1 - (zx.d(edx_6.b) u>> 5 & 1) != 0)
                                    int32_t ecx_36 = 0
                                    int32_t var_4c_1 = 0
                                    
                                    if (i_14 s> 0)
                                        uint32_t i_15 = i_13
                                        int32_t eax_128 = 0
                                        void* ebx_18 = nullptr
                                        edx_16 = count * eax_30
                                        char* var_54_1 = edx_16
                                        
                                        do
                                            char* i_1 = edx_16
                                            
                                            if (i_1 s> 0)
                                                void* esi_1 = ebx_18 + result_1
                                                void* edx_35 =
                                                    (i_13 - eax_128 - 1) * count_1 * eax_30 + ebx_18
                                                    + result_1
                                                
                                                do
                                                    eax_128.b = *edx_35
                                                    esi_1 += 1
                                                    char* ecx_37
                                                    ecx_37.b = *(esi_1 - 1)
                                                    edx_35 += 1
                                                    *(esi_1 - 1) = eax_128.b
                                                    i_1 -= 1
                                                    *(edx_35 - 1) = ecx_37.b
                                                while (i_1 s> 0)
                                                
                                                ecx_36 = var_4c_1
                                                edx_16 = var_54_1
                                                i_15 = i_13
                                            
                                            ecx_36 += 1
                                            ebx_18 += edx_16
                                            var_4c_1 = ecx_36
                                            eax_128 = ecx_36 * 2
                                        while (eax_128 s< i_15)
                                
                                if (var_34 != 0)
                                    free(var_34)
                                
                            label_72adc2:
                                i_9 = i_13
                                ecx_20 = var_10_1
                            label_72adc8:
                                result = result_1
                            else
                                var_5_3 = ecx_19.b
                                ecx_20 = var_10_1
                                result_1 = edx_16
                                var_28_1 = var_20_1
                                
                                if (ecx_20 != 0)
                                    goto label_72aaee
                                
                                i_9 = i_13
                                result_1 = result
                                
                                if (i_9 s<= 0)
                                    goto label_72adc8
                                
                                uint32_t eax_80 = eax_30 * count_1
                                uint32_t var_3c_5 = eax_80
                                
                                if (1 - (zx.d(edx_6.b) u>> 5 & 1) == 0)
                                    result_1 = result
                                    uint32_t i_2
                                    
                                    do
                                        sub_720200(eax_80, result, esi, eax_80)
                                        eax_80 = var_3c_5
                                        result = &result[eax_80]
                                        i_2 = i_9
                                        i_9 -= 1
                                    while (i_2 != 1)
                                    goto label_72adc2
                                
                                uint32_t i_6 = i_13
                                void* ebx_8 = (i_9 - 1) * count_1 * eax_30 + result
                                uint32_t i_3
                                
                                do
                                    sub_720200(eax_80, ebx_8, esi, eax_80)
                                    eax_80 = var_3c_5
                                    ebx_8 -= eax_80
                                    i_3 = i_6
                                    i_6 -= 1
                                while (i_3 != 1)
                                i_9 = i_13
                                ecx_20 = var_10_1
                            
                            if (count_1 u>= 3 && ecx_20 == 0)
                                int32_t i_10 = i_9 * eax_30
                                char* result_3 = result
                                
                                if (i_10 != 0)
                                    int32_t i_4
                                    
                                    do
                                        edx_16.b = *result_3
                                        ecx_20.b = result_3[2]
                                        *result_3 = ecx_20.b
                                        result_3[2] = edx_16.b
                                        result_3 = &result_3[count_1]
                                        i_4 = i_10
                                        i_10 -= 1
                                    while (i_4 != 1)
                            
                            return result
                        
                        if (eax_21 s>= 0)
                            int32_t eax_83
                            int32_t ecx_25
                            
                            if (*(esi + 0x10) != 0)
                                ecx_25 = *(esi + 0xac)
                                eax_83 = ecx_25 - *(esi + 0xa8)
                            
                            if (*(esi + 0x10) == 0 || eax_83 s>= eax_21)
                                *(esi + 0xa8) += eax_21
                            else
                                *(esi + 0xa8) = ecx_25
                                (*(esi + 0x14))(*(esi + 0x1c), eax_21 - eax_83)
                        else
                            *(esi + 0xa8) = *(esi + 0xac)
                        
                        if (i_12 s< 0 || i_12 s> divu.dp.d(0:0x7fffffff, count_1))
                            free(result)
                        else
                            char* eax_89 = malloc(count_1 * i_12)
                            var_34 = eax_89
                            
                            if (eax_89 != 0)
                                var_28_1 = var_20_1
                                
                                if (var_10_1 == 0)
                                    uint32_t eax_90
                                    eax_90.b = var_5_2
                                    var_5_3 = eax_90.b
                                    result_1 = result
                                    uint32_t eax_92 = count_1 * i_12
                                    
                                    if (sub_720200(eax_92, eax_89, esi, eax_92) == 0)
                                        free(result)
                                        free(var_34)
                                        return 0
                                    
                                    count = count_1
                                else
                                    char* ebx_10 = eax_89
                                    char* ecx_27
                                    ecx_27.b = var_5_2
                                    edx_16 = result
                                    result_1 = edx_16
                                    var_5_3 = ecx_27.b
                                    
                                    if (i_12 s<= 0)
                                        goto label_72aaee
                                    
                                    result_1 = result
                                    count = count_1
                                    uint32_t i_7 = i_12
                                    var_28_1 = var_20_1
                                    var_5_3 = ecx_27.b
                                    uint32_t i_5
                                    
                                    do
                                        sub_72a400(esi, ebx_10)
                                        ebx_10 = &ebx_10[count]
                                        i_5 = i_7
                                        i_7 -= 1
                                    while (i_5 != 1)
                                
                                edx_16 = result_1
                                goto label_72aaf9
                            
                            free(result)

return 0
