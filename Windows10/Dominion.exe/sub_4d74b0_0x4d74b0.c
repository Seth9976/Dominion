// 函数: sub_4d74b0
// 地址: 0x4d74b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi = arg2
int32_t var_448 = arg2
void* edx = arg3
void* var_40c = edx
arg4[1] = 0
arg4[5] = 0
int32_t esi = *(edx + 0x1e1a0)
arg4[3] = *(edx + 0x1e1a4)
arg4[4] = *(edx + 0x1e1a8)
int32_t eax_2 = 0
arg4[2] = esi
*arg4 = edi
int32_t var_42c_1
__builtin_memset(&var_42c_1, 0, 0x20)

if (esi s<= 0)
    return arg4

char eax_154

while (true)
    char* const ecx_1 = &data_801800
    void* esi_2 = eax_2 * 0x7868 + edx
    int32_t edx_1 = eax_2 * 0x880
    *(edi + edx_1 + 0x6cc) = *(esi_2 + 0x42c0)
    *(edi + edx_1 + 0x6d0) = *(esi_2 + 0x42c4)
    *(edi + edx_1 + 0x6d8) = *(esi_2 + 0x42c8)
    *(edi + edx_1 + 0x6d4) = *(esi_2 + 0x42cc)
    char* eax_7 = *(esi_2 + 0x4248)
    
    if (eax_7 != 0)
        ecx_1 = eax_7
    
    *(edi + edx_1 + 0x568) = ecx_1
    char* const ecx_2 = &data_801800
    char* eax_8 = *(esi_2 + 0x4258)
    
    if (eax_8 != 0)
        ecx_2 = eax_8
    
    *(edi + edx_1 + 8) = ecx_2
    char* const ecx_3 = &data_801800
    *(edi + edx_1 + 0x18) = *(esi_2 + 0x425c)
    char* eax_10 = *(esi_2 + 0x4244)
    
    if (eax_10 != 0)
        ecx_3 = eax_10
    
    *(edi + edx_1 + 0x560) = ecx_3
    void var_408
    __builtin_memcpy(&var_408, esi_2 + 0x353c, 0x80)
    __builtin_memcpy(var_448 + 0x5d0 + edx_1, &var_408, 0x80)
    *(var_448 + edx_1 + 0x574) = *(esi_2 + 0x3538)
    *(var_448 + edx_1 + 0x660) = *(esi_2 + 0x423c)
    int32_t eax_12
    eax_12.b = *(esi_2 + 0x4240)
    *(var_448 + edx_1 + 0x664) = eax_12.b
    int32_t edi_5 = 0
    *(var_448 + edx_1 + 0x650) = arg12 + var_42c_1 * 0x14
    int32_t eax_16 = 0
    *(var_448 + edx_1 + 0x658) = 0
    void* edx_2 = esi_2 + 0x35bc
    void* esi_5 = 0xffffca44 - esi_2
    
    while (*(edx_2 + 8) != 0)
        int32_t ecx_6 = *(edx_2 + 0x10)
        void* eax_17 = esi_5 + edx_2
        edi_5 += 1
        int128_t xmm0_1 = *edx_2
        edx_2 += 0x14
        void* eax_18 = eax_17 + *(var_448 + edx_1 + 0x650)
        *eax_18 = xmm0_1
        *(eax_18 + 0x10) = ecx_6
        eax_16 = *(var_448 + edx_1 + 0x658) + 1
        *(var_448 + edx_1 + 0x658) = eax_16
        esi_5 = 0xffffca44 - esi_2
        
        if (edi_5 s>= 0xa0)
            break
    
    var_42c_1 += eax_16
    char* const ecx_10 = &data_801800
    *(var_448 + edx_1 + 0x570) = *(esi_2 + 0x3508)
    char* eax_21 = *(esi_2 + 0x350c)
    
    if (eax_21 != 0)
        ecx_10 = eax_21
    
    *(var_448 + edx_1 + 0x578) = ecx_10
    char* const ecx_11 = &data_801800
    char* eax_22 = *(esi_2 + 0x3510)
    
    if (eax_22 != 0)
        ecx_11 = eax_22
    
    *(var_448 + edx_1 + 0x580) = ecx_11
    char* const ecx_12 = &data_801800
    char* eax_23 = *(esi_2 + 0x3514)
    
    if (eax_23 != 0)
        ecx_12 = eax_23
    
    *(var_448 + edx_1 + 0x588) = ecx_12
    char* const ecx_13 = &data_801800
    char* eax_24 = *(esi_2 + 0x3518)
    
    if (eax_24 != 0)
        ecx_13 = eax_24
    
    *(var_448 + edx_1 + 0x590) = ecx_13
    char* const ecx_14 = &data_801800
    char* eax_25 = *(esi_2 + 0x351c)
    
    if (eax_25 != 0)
        ecx_14 = eax_25
    
    *(var_448 + edx_1 + 0x598) = ecx_14
    char* const ecx_15 = &data_801800
    char* eax_26 = *(esi_2 + 0x3520)
    
    if (eax_26 != 0)
        ecx_15 = eax_26
    
    *(var_448 + edx_1 + 0x5a0) = ecx_15
    char* const ecx_16 = &data_801800
    char* eax_27 = *(esi_2 + 0x3524)
    
    if (eax_27 != 0)
        ecx_16 = eax_27
    
    *(var_448 + edx_1 + 0x5a8) = ecx_16
    char* const ecx_17 = &data_801800
    char* eax_28 = *(esi_2 + 0x3528)
    
    if (eax_28 != 0)
        ecx_17 = eax_28
    
    *(var_448 + edx_1 + 0x5b0) = ecx_17
    char* const ecx_18 = &data_801800
    char* eax_29 = *(esi_2 + 0x352c)
    
    if (eax_29 != 0)
        ecx_18 = eax_29
    
    *(var_448 + edx_1 + 0x5b8) = ecx_18
    char* const ecx_19 = &data_801800
    char* eax_30 = *(esi_2 + 0x3530)
    
    if (eax_30 != 0)
        ecx_19 = eax_30
    
    *(var_448 + edx_1 + 0x5c0) = ecx_19
    char* const ecx_20 = &data_801800
    char* eax_31 = *(esi_2 + 0x3534)
    
    if (eax_31 != 0)
        ecx_20 = eax_31
    
    *(var_448 + edx_1 + 0x5c8) = ecx_20
    char* const ecx_21 = &data_801800
    void* edx_5 = *arg4 + edx_1
    *(edx_5 + 0x6dc) = *(esi_2 + 0x42b4)
    *(edx_5 + 0x6e0) = *(esi_2 + 0x42b8)
    *(edx_5 + 0x6e4) = *(esi_2 + 0x42bc)
    char* eax_36 = *(esi_2 + 4)
    
    if (eax_36 != 0)
        ecx_21 = eax_36
    
    *(edx_5 + 0x10) = ecx_21
    char* const ecx_22 = &data_801800
    *(edx_5 + 0x1c) = *(esi_2 + 8)
    char* eax_38 = *esi_2
    
    if (eax_38 != 0)
        ecx_22 = eax_38
    
    *edx_5 = ecx_22
    int32_t ecx_23 = edx_1
    *(edx_5 + 0x6c8) = *(esi_2 + 0x42b0)
    *(edx_5 + 0x668) = *(esi_2 + 0x424c)
    *(edx_5 + 0x66c) = *(esi_2 + 0x4250)
    int32_t var_430_2 = ecx_23
    int128_t xmm1_1 = *(esi_2 + 0x4270)
    int32_t i_6 = 3
    int128_t xmm2_1 = *(esi_2 + 0x4280)
    *(edx_5 + 0x670) = *(esi_2 + 0x4260)
    *(edx_5 + 0x680) = xmm1_1
    *(edx_5 + 0x690) = xmm2_1
    *(edx_5 + 0x6f8) = *(esi_2 + 0x42d0)
    *(edx_5 + 0x6fc) = *(esi_2 + 0x42d4)
    void* edx_6 = esi_2 + 0x10
    void* var_448_1 = edx_6
    int32_t i
    
    do
        int32_t eax_47 = *arg4 + 0x20 + ecx_23
        void var_388
        void var_1c8
        __builtin_memcpy(&var_388, sub_4d7100(&var_1c8, edx_6, edx_6, &var_1c8), 0x1c0)
        edx_6 = var_448_1 + 0x11a8
        __builtin_memcpy(eax_47, &var_388, 0x1c0)
        ecx_23 = var_430_2 + 0x1c0
        var_448_1 = edx_6
        i = i_6
        i_6 -= 1
        var_430_2 = ecx_23
    while (i != 1)
    void* esi_10 = esi_2
    int32_t edi_8 = *arg4
    var_448 = edi_8
    int32_t var_438_2 = 0
    int32_t ecx_27 = edx_1
    int32_t var_428_1
    *(edi_8 + ecx_27 + 0x7b8) = arg5 + var_428_1 * 0x28
    *(edi_8 + ecx_27 + 0x7c0) = *(esi_10 + 0x56d8)
    int32_t eax_54 = *(esi_10 + 0x56d8)
    var_428_1 += eax_54
    int32_t var_458
    char const* const var_454_2
    char* eax_62
    char* ecx_78
    
    if (eax_54 s> 0)
        void* edi_9 = esi_10 + 0x42e0
        void* eax_55 = 0xffffbd20 - esi_10
        void* var_43c_2 = eax_55
        bool cond:1_1
        
        do
            int32_t* edx_11 = eax_55 + edi_9 + *(var_448 + ecx_27 + 0x7b8)
            *edx_11 = *(edi_9 - 8)
            edx_11[1] = *(edi_9 - 4)
            edx_11[2] = *edi_9
            int32_t eax_60 = *(edi_9 + 8)
            edx_11[5] = *(edi_9 + 0xc)
            edx_11[4] = eax_60
            int32_t eax_61 = *(edi_9 + 0x10)
            edx_11[7] = *(edi_9 + 0x14)
            char* const ecx_30 = &data_801800
            edx_11[6] = eax_61
            eax_62 = *(edi_9 + 0x18)
            
            if (eax_62 != 0)
                ecx_30 = eax_62
            
            edx_11[8] = ecx_30
            
            if (var_428_1 s> 0x200)
                var_454_2 = "ToSave"
                var_458 = 0x356
                ecx_78 = "allocedEntitlements <= 4 * MAX_PROFILE_ENTITLEMENTS"
                goto label_4d8091
            
            edi_9 += 0x28
            ecx_27 = edx_1
            cond:1_1 = var_438_2 + 1 s< *(esi_10 + 0x56d8)
            var_438_2 += 1
            eax_55 = var_43c_2
        while (cond:1_1)
        edi_8 = var_448
    
    *(edi_8 + ecx_27 + 0x7d8) = esi_10 + 0x56e8
    eax_62 = *(esi_10 + 0x58e8)
    *(edi_8 + ecx_27 + 0x7e0) = eax_62
    
    if (eax_62 s< 0)
        var_454_2 = "ToSave"
        var_458 = 0x35b
        ecx_78 = "save.profiles[i].smartplays.numSmartplays >= 0"
    else
        int32_t i_7 = 0
        *(edi_8 + ecx_27 + 0x7e8) = esi_10 + 0x58ec
        *(edi_8 + ecx_27 + 0x7f0) = *(esi_10 + 0x63dc)
        *(edi_8 + ecx_27 + 0x7f8) = esi_10 + 0x63e0
        *(edi_8 + ecx_27 + 0x800) = *(esi_10 + 0x6ed0)
        *(edi_8 + ecx_27 + 0x808) = *(esi_10 + 0x6ed4)
        *(edi_8 + ecx_27 + 0x80c) = *(esi_10 + 0x6ed8)
        *(edi_8 + ecx_27 + 0x810) = arg6
        *(edi_8 + ecx_27 + 0x818) = *(esi_10 + 0x71dc)
        
        if (*(esi_10 + 0x71dc) s> 0)
            int32_t edx_12 = 0
            void* edi_10 = esi_10 + 0x6ee0
            int32_t i_1
            
            do
                char* eax_74 = *(edi_10 - 4)
                edi_10 += 0xc
                edx_12 += 0x18
                char* const ecx_31 = &data_801800
                
                if (eax_74 != 0)
                    ecx_31 = eax_74
                
                *(edx_12 + *(var_448 + edx_1 + 0x810) - 0x18) = ecx_31
                char* const ecx_32 = &data_801800
                char* eax_77 = *(edi_10 - 0xc)
                
                if (eax_77 != 0)
                    ecx_32 = eax_77
                
                *(edx_12 + *(var_448 + edx_1 + 0x810) - 0x10) = ecx_32
                esi_10 = esi_2
                *(edx_12 + *(var_448 + edx_1 + 0x810) - 8) = *(edi_10 - 8)
                i_1 = i_7 + 1
                i_7 = i_1
            while (i_1 s< *(esi_10 + 0x71dc))
            ecx_27 = edx_1
            edi_8 = var_448
        
        char* var_424_1
        *(edi_8 + ecx_27 + 0x7c8) = arg9 + (var_424_1 << 3)
        *(edi_8 + ecx_27 + 0x7d0) = 0
        
        if (*(esi_10 + 0x56e4) == 0)
        label_4d7be1:
            char* var_420_1
            *(edi_8 + ecx_27 + 0x840) = arg7 + (var_420_1 << 2)
            *(edi_8 + ecx_27 + 0x848) = 0
            
            if (*(esi_10 + 0x7208) == 0)
            label_4d7cf3:
                *(edi_8 + ecx_27 + 0x84c) = *(esi_10 + 0x7218)
                int32_t var_41c_1
                *(edi_8 + ecx_27 + 0x850) = arg8 + (var_41c_1 << 3)
                *(edi_8 + ecx_27 + 0x858) = 0
                
                if (*(esi_10 + 0x7214) != 0)
                    int32_t i_2 = 0
                    int32_t* eax_114 = *(esi_10 + 0x720c)
                    
                    do
                        int32_t* j = *eax_114
                        
                        if (j != 0)
                            do
                                int32_t* j_9 = j[2]
                                int32_t* j_5 = j
                                
                                if (j_9 == 0)
                                    int32_t edx_26 = *(esi_10 + 0x7210)
                                    int32_t ecx_56 = ((*j s>> 4 | *j) & edx_26) + 1
                                    
                                    if (ecx_56 u<= edx_26)
                                        int32_t** eax_116 = *(esi_10 + 0x720c) + (ecx_56 << 2)
                                        
                                        do
                                            j = *eax_116
                                            
                                            if (j != 0)
                                                goto label_4d7d8c
                                            
                                            ecx_56 += 1
                                            eax_116 = &eax_116[1]
                                        while (ecx_56 u<= edx_26)
                                    
                                    j = nullptr
                                else
                                    j = j_9
                                
                            label_4d7d8c:
                                int32_t ecx_57 = *(var_448 + edx_1 + 0x858)
                                int32_t* edx_28 = *(var_448 + edx_1 + 0x850) + (ecx_57 << 3)
                                *(var_448 + edx_1 + 0x858) = ecx_57 + 1
                                esi_10 = esi_2
                                *edx_28 = *j_5
                                edx_28[1] = j_5[1]
                            while (j != 0)
                            
                            break
                        
                        i_2 += 1
                        eax_114 = &eax_114[1]
                    while (i_2 u<= *(esi_10 + 0x7210))
                    
                    ecx_27 = edx_1
                    edi_8 = var_448
                    var_41c_1 += *(edi_8 + ecx_27 + 0x858)
                
                int32_t eax_124 = *(esi_10 + 0x71f0)
                *(edi_8 + ecx_27 + 0x85c) = *(esi_10 + 0x71e0)
                *(edi_8 + ecx_27 + 0x86c) = eax_124
                int32_t eax_125 = *(esi_10 + 0x71fc)
                *(edi_8 + ecx_27 + 0x870) = *(esi_10 + 0x71f4)
                *(edi_8 + ecx_27 + 0x878) = eax_125
                int32_t var_418_1
                *(edi_8 + ecx_27 + 0x6a0) = (var_418_1 << 4) + arg10
                *(edi_8 + ecx_27 + 0x6a8) = 0
                
                if (*(esi_10 + 0x4298) != 0)
                    int32_t i_3 = 0
                    int32_t* eax_129 = *(esi_10 + 0x4290)
                    
                    do
                        int32_t* j_1 = *eax_129
                        
                        if (j_1 != 0)
                            do
                                int32_t* j_10 = j_1[4]
                                int32_t* j_6 = j_1
                                
                                if (j_10 == 0)
                                    int32_t edx_30 = *(esi_10 + 0x4294)
                                    int32_t ecx_64 = ((*j_1 s>> 4 | *j_1) & edx_30) + 1
                                    
                                    if (ecx_64 u<= edx_30)
                                        int32_t** eax_131 = *(esi_10 + 0x4290) + (ecx_64 << 2)
                                        
                                        do
                                            j_1 = *eax_131
                                            
                                            if (j_1 != 0)
                                                goto label_4d7eb0
                                            
                                            ecx_64 += 1
                                            eax_131 = &eax_131[1]
                                        while (ecx_64 u<= edx_30)
                                    
                                    j_1 = nullptr
                                else
                                    j_1 = j_10
                                
                            label_4d7eb0:
                                int32_t eax_133 = *(var_448 + edx_1 + 0x6a8)
                                int32_t* edx_34 = (eax_133 << 4) + *(var_448 + edx_1 + 0x6a0)
                                *(var_448 + edx_1 + 0x6a8) = eax_133 + 1
                                esi_10 = esi_2
                                *edx_34 = *j_6
                                int32_t ecx_67 = j_6[3]
                                edx_34[2] = j_6[2]
                                edx_34[3] = ecx_67
                            while (j_1 != 0)
                            
                            break
                        
                        i_3 += 1
                        eax_129 = &eax_129[1]
                    while (i_3 u<= *(esi_10 + 0x4294))
                    
                    ecx_27 = edx_1
                    var_418_1 += *(var_448 + ecx_27 + 0x6a8)
                
                edi = var_448
                int32_t var_414_1
                *(edi + ecx_27 + 0x6b0) = arg11 + var_414_1 * 0x18
                *(edi + ecx_27 + 0x6b8) = 0
                int32_t edx_43
                
                if (*(esi_10 + 0x42a4) == 0)
                    edx_43 = edx_1
                else
                    int32_t i_4 = 0
                    int32_t* eax_140 = *(esi_10 + 0x429c)
                    
                    do
                        int32_t* j_2 = *eax_140
                        
                        if (j_2 != 0)
                            do
                                int32_t* j_11 = j_2[6]
                                int32_t* j_7 = j_2
                                
                                if (j_11 == 0)
                                    int32_t edx_39 = *(esi_10 + 0x42a0)
                                    int32_t ecx_72 = ((*j_2 s>> 4 | *j_2) & edx_39) + 1
                                    
                                    if (ecx_72 u<= edx_39)
                                        int32_t** eax_142 = *(esi_10 + 0x429c) + (ecx_72 << 2)
                                        
                                        do
                                            j_2 = *eax_142
                                            
                                            if (j_2 != 0)
                                                goto label_4d7f98
                                            
                                            ecx_72 += 1
                                            eax_142 = &eax_142[1]
                                        while (ecx_72 u<= edx_39)
                                    
                                    j_2 = nullptr
                                else
                                    j_2 = j_11
                                
                            label_4d7f98:
                                int32_t edx_40 = *(var_448 + edx_1 + 0x6b8)
                                int32_t* esi_17 = *(var_448 + edx_1 + 0x6b0) + edx_40 * 0x18
                                *(var_448 + edx_1 + 0x6b8) = edx_40 + 1
                                *esi_17 = *j_7
                                int32_t ecx_75 = j_7[3]
                                esi_17[4] = j_7[2]
                                esi_17[5] = ecx_75
                                int32_t ecx_76 = j_7[5]
                                esi_17[2] = j_7[4]
                                esi_17[3] = ecx_76
                                esi_10 = esi_2
                            while (j_2 != 0)
                            
                            break
                        
                        i_4 += 1
                        eax_140 = &eax_140[1]
                    while (i_4 u<= *(esi_10 + 0x42a0))
                    
                    edx_43 = edx_1
                    edi = var_448
                    var_414_1 += *(edi + edx_43 + 0x6b8)
                
                int32_t ecx_77 = *(esi_10 + 0x42ac)
                *(edi + edx_43 + 0x6c0) = *(esi_10 + 0x42a8)
                *(edi + edx_43 + 0x6c4) = ecx_77
                int32_t var_410_1
                eax_2 = var_410_1 + 1
                edx = var_40c
                var_410_1 = eax_2
                
                if (eax_2 s>= *(edx + 0x1e1a0))
                    return arg4
                
                continue
            else
                int32_t ecx_43 = 0
                int32_t* eax_96 = *(esi_10 + 0x7200)
                
                while (true)
                    int32_t* edi_11 = *eax_96
                    
                    if (edi_11 != 0)
                        int32_t* var_430_3
                        
                        while (true)
                            int32_t* eax_97 = edi_11[2]
                            var_430_3 = edi_11
                            
                            if (eax_97 == 0)
                                break
                            
                            edi_11 = eax_97
                        label_4d7c49:
                            int32_t ecx_44 = *(var_448 + edx_1 + 0x848)
                            int32_t* edx_21 = *(var_448 + edx_1 + 0x840) + (ecx_44 << 2)
                            *(var_448 + edx_1 + 0x848) = ecx_44 + 1
                            esi_10 = esi_2
                            *edx_21 = *var_430_3
                        
                        int32_t edx_22 = *(esi_10 + 0x7204)
                        int32_t ecx_50 = ((*edi_11 s>> 4 | *edi_11) & edx_22) + 1
                        
                        if (ecx_50 u<= edx_22)
                            int32_t** eax_104 = *(esi_10 + 0x7200) + (ecx_50 << 2)
                            
                            do
                                edi_11 = *eax_104
                                
                                if (edi_11 != 0)
                                    goto label_4d7c49
                                
                                ecx_50 += 1
                                eax_104 = &eax_104[1]
                            while (ecx_50 u<= edx_22)
                        
                        edi_8 = var_448
                        int32_t ecx_51 = *(edi_8 + edx_1 + 0x848)
                        int32_t* edx_23 = *(edi_8 + edx_1 + 0x840) + (ecx_51 << 2)
                        ecx_27 = edx_1
                        *(edi_8 + ecx_27 + 0x848) = ecx_51 + 1
                        *edx_23 = *var_430_3
                        break
                    
                    ecx_43 += 1
                    eax_96 = &eax_96[1]
                    
                    if (ecx_43 u> *(esi_10 + 0x7204))
                        ecx_27 = edx_1
                        edi_8 = var_448
                        break
                
                eax_62 = &var_420_1[*(edi_8 + ecx_27 + 0x848)]
                var_420_1 = eax_62
                
                if (eax_62 s<= 0x200)
                    goto label_4d7cf3
                
                var_454_2 = "ToSave"
                var_458 = 0x3aa
                ecx_78 = "allocedViewedProducts <= 4 * MAX_PROFILE_VIEWED_PRODUCTS"
        else
            int32_t i_5 = 0
            int32_t* eax_85 = *(esi_10 + 0x56dc)
            
            do
                int32_t* j_3 = *eax_85
                
                if (j_3 != 0)
                    do
                        int32_t* j_8 = j_3[2]
                        int32_t* j_4 = j_3
                        
                        if (j_8 == 0)
                            int32_t edx_15 = *(esi_10 + 0x56e0)
                            int32_t ecx_39 = ((*j_3 s>> 4 | *j_3) & edx_15) + 1
                            
                            if (ecx_39 u<= edx_15)
                                int32_t** eax_87 = *(esi_10 + 0x56dc) + (ecx_39 << 2)
                                
                                do
                                    j_3 = *eax_87
                                    
                                    if (j_3 != 0)
                                        goto label_4d7b7c
                                    
                                    ecx_39 += 1
                                    eax_87 = &eax_87[1]
                                while (ecx_39 u<= edx_15)
                            
                            j_3 = nullptr
                        else
                            j_3 = j_8
                        
                    label_4d7b7c:
                        int32_t ecx_40 = *(var_448 + edx_1 + 0x7d0)
                        int32_t* edx_17 = *(var_448 + edx_1 + 0x7c8) + (ecx_40 << 3)
                        *(var_448 + edx_1 + 0x7d0) = ecx_40 + 1
                        esi_10 = esi_2
                        *edx_17 = *j_4
                        edx_17[1] = j_4[1]
                    while (j_3 != 0)
                    
                    break
                
                i_5 += 1
                eax_85 = &eax_85[1]
            while (i_5 u<= *(esi_10 + 0x56e0))
            
            ecx_27 = edx_1
            edi_8 = var_448
            eax_62 = &var_424_1[*(edi_8 + ecx_27 + 0x7d0)]
            var_424_1 = eax_62
            
            if (eax_62 s<= 0x100)
                goto label_4d7be1
            
            var_454_2 = "ToSave"
            var_458 = 0x37c
            ecx_78 = "allocedEntitlementStates <= 4 * MAX_ENTITLEMENT_GRANTS"
    
label_4d8091:
    sub_63b870(eax_62, &data_801800, ecx_78, 
        "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp", var_458, var_454_2)
    eax_154 = sub_63bc30()
    break

if (eax_154 != 0)
    breakpoint

sub_63bb00()
noreturn
