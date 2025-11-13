// 函数: sub_71df00
// 地址: 0x71df00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = nullptr
void* var_10 = nullptr
int32_t result = malloc(0x10000)

if (result == 0)
    return result

int32_t* eax = realloc(nullptr, 0xa)

if (eax != 0)
    eax[1] = 0
    esi = &eax[2]
    var_10 = esi
    *eax = 2

void* ecx = esi - 8
*(esi + *(esi - 4)) = 0x78
int32_t edi = *ecx
int32_t eax_3 = *(esi - 4) + 1
*(esi - 4) = eax_3

if (eax_3 + 1 s>= edi)
    if (esi == 0)
        ecx = nullptr
    
    void** eax_6 = realloc(ecx, (edi << 1) + 9)
    
    if (eax_6 != 0)
        esi = &eax_6[2]
        *eax_6 = (edi << 1) + 1
        var_10 = esi

int32_t var_c = 3
int32_t ebx = 3
void* i = nullptr
*(esi + *(esi - 4)) = 0x5e
*(esi - 4) += 1
__builtin_memset(result, 0, 0x10000)
int32_t var_1c = 3
void* i_12 = nullptr

if (arg2 - 3 s> 0)
    do
        int32_t j_6 = 3
        int32_t var_28_1 = 0
        void* eax_10 = i + arg3
        uint32_t ecx_5 =
            (((zx.d(*(i + arg3 + 2)) << 8) + zx.d(*(i + arg3 + 1))) << 8) + zx.d(*(i + arg3))
        uint32_t ecx_6 = ecx_5 ^ ecx_5 << 3
        uint32_t ecx_7 = ecx_6 + (ecx_6 u>> 5)
        uint32_t ecx_8 = ecx_7 ^ ecx_7 << 4
        uint32_t ecx_9 = ecx_8 + (ecx_8 u>> 0x11)
        uint32_t ecx_10 = ecx_9 ^ ecx_9 << 0x19
        int32_t eax_25 = ((ecx_10 u>> 6) + ecx_10) & 0x3fff
        void* edx = *(result + (eax_25 << 2))
        int32_t* edi_4 = result + (eax_25 << 2)
        int32_t* var_30_1 = edi_4
        void* var_34_1 = edx
        
        if (edx != 0)
            int32_t j = 0
            int32_t j_21 = 0
            
            if (*(edx - 4) s> 0)
                void* edi_6 = i_12 - 0x8000
                void* var_38_1 = edi_6
                
                do
                    int32_t esi_2 = *(edx + (j << 2))
                    
                    if (esi_2 - arg3 s> edi_6)
                        int32_t k = 0
                        void* edi_8 = arg2 - i_12
                        
                        if (edi_8 s> 0)
                            while (k s< 0x102)
                                char* ecx_12 = eax_10 + k
                                void* eax_27
                                eax_27.b = *(ecx_12 + esi_2 - eax_10)
                                
                                if (eax_27.b != *ecx_12)
                                    break
                                
                                k += 1
                                
                                if (k s>= edi_8)
                                    break
                            
                            j = j_21
                        
                        edi_6 = var_38_1
                        
                        if (k s>= j_6)
                            j_6 = k
                            var_28_1 = esi_2
                        
                        edx = var_34_1
                    
                    j += 1
                    j_21 = j
                while (j s< *(edx - 4))
                
                esi = var_10
                ebx = var_1c
                
                if (*(edx - 4) != 0x10)
                    edi_4 = var_30_1
                else
                    memmove(edx, edx + 0x20, 0x20)
                    edi_4 = var_30_1
                    *(*edi_4 - 4) = 8
        
        void* eax_30 = *edi_4
        int32_t* ecx_13 = eax_30 - 8
        
        if (eax_30 == 0)
            var_30_1 = edi_4
            void* edi_9
            
            if (eax_30 == 0)
                edi_9 = 2
                ecx_13 = nullptr
            else
            label_71e103:
                edi_9 = (*ecx_13 << 1) + 1
            
            void* eax_40 = realloc(ecx_13, (edi_9 << 2) + 8)
            
            if (eax_40 != 0)
                if (*var_30_1 == 0)
                    *(eax_40 + 4) = 0
                
                *var_30_1 = eax_40 + 8
                *eax_40 = edi_9
        else if (*(eax_30 - 4) + 1 s>= *ecx_13)
            goto label_71e103
        
        void* edx_1 = *(result + (eax_25 << 2))
        *(edx_1 + (*(edx_1 - 4) << 2)) = arg3 + i_12
        void* eax_45 = *(result + (eax_25 << 2))
        *(eax_45 - 4) += 1
        
        if (var_28_1 == 0)
        label_71e75e:
            void* eax_128
            eax_128.b = *(i_12 + arg3)
            uint32_t ecx_69 = zx.d(eax_128.b)
            
            if (eax_128.b u> 0x8f)
                int32_t ecx_75 = ecx_69 + 0x100
                int32_t edx_30 = 0
                int32_t j_38 = 9
                int32_t j_1
                
                do
                    int32_t eax_139 = ecx_75 & 1
                    ecx_75 s>>= 1
                    edx_30 = (edx_30 * 2) | eax_139
                    j_1 = j_38
                    j_38 -= 1
                while (j_1 != 1)
                int32_t edi_42 = var_c + 9
                ebx |= edx_30 << var_c.b
                var_c = edi_42
                var_1c = ebx
                var_10 = esi
                
                if (edi_42 s>= 8)
                    uint32_t j_39 = edi_42 u>> 3
                    uint32_t j_30 = j_39
                    var_c = edi_42 + (neg.d(j_39) << 3)
                    uint32_t j_2
                    
                    do
                        void* ecx_78
                        void* edi_45
                        
                        if (esi == 0)
                            edi_45 = 2
                            ecx_78 = nullptr
                        label_71e886:
                            void* eax_145 = realloc(ecx_78, edi_45 + 8)
                            
                            if (eax_145 != 0)
                                if (esi == 0)
                                    *(eax_145 + 4) = esi
                                
                                esi = eax_145 + 8
                                *(esi - 8) = edi_45
                        else
                            ecx_78 = esi - 8
                            int32_t edi_44 = *ecx_78
                            
                            if (*(esi - 4) + 1 s>= edi_44)
                                edi_45 = (edi_44 << 1) + 1
                                goto label_71e886
                        *(esi + *(esi - 4)) = ebx.b
                        *(esi - 4) += 1
                        ebx u>>= 8
                        j_2 = j_30
                        j_30 -= 1
                    while (j_2 != 1)
                    var_10 = esi
                    var_1c = ebx
            else
                int32_t ecx_70 = ecx_69 + 0x30
                int32_t edx_27 = 0
                int32_t j_37 = 8
                int32_t j_3
                
                do
                    int32_t eax_130 = ecx_70 & 1
                    ecx_70 s>>= 1
                    edx_27 = (edx_27 * 2) | eax_130
                    j_3 = j_37
                    j_37 -= 1
                while (j_3 != 1)
                int32_t ecx_72 = var_c + 8
                ebx |= edx_27 << var_c.b
                var_c = ecx_72
                var_1c = ebx
                var_10 = esi
                
                if (ecx_72 s>= 8)
                    uint32_t j_48 = ecx_72 u>> 3
                    uint32_t j_29 = j_48
                    var_c = ecx_72 + (neg.d(j_48) << 3)
                    uint32_t j_4
                    
                    do
                        void* ecx_74 = esi - 8
                        void* edi_40
                        
                        if (esi == 0)
                            edi_40 = 2
                        label_71e7d9:
                            
                            if (esi == 0)
                                ecx_74 = nullptr
                            
                            void* eax_136 = realloc(ecx_74, edi_40 + 8)
                            
                            if (eax_136 != 0)
                                if (esi == 0)
                                    *(eax_136 + 4) = esi
                                
                                esi = eax_136 + 8
                                *(esi - 8) = edi_40
                        else
                            int32_t edi_39 = *ecx_74
                            
                            if (*(esi - 4) + 1 s>= edi_39)
                                edi_40 = (edi_39 << 1) + 1
                                goto label_71e7d9
                        *(esi + *(esi - 4)) = ebx.b
                        *(esi - 4) += 1
                        ebx u>>= 8
                        j_4 = j_29
                        j_29 -= 1
                    while (j_4 != 1)
                    var_10 = esi
                    var_1c = ebx
            
            i = i_12 + 1
        else
            void* i_18 = i_12
            uint32_t ecx_21 = (((zx.d(*(i_18 + arg3 + 3)) << 8) + zx.d(*(i_18 + arg3 + 2))) << 8)
                + zx.d(*(i_18 + arg3 + 1))
            uint32_t ecx_22 = ecx_21 ^ ecx_21 << 3
            uint32_t ecx_23 = ecx_22 + (ecx_22 u>> 5)
            uint32_t ecx_24 = ecx_23 ^ ecx_23 << 4
            uint32_t ecx_25 = ecx_24 + (ecx_24 u>> 0x11)
            uint32_t ecx_26 = ecx_25 ^ ecx_25 << 0x19
            void* edx_3 = *(result + ((((ecx_26 u>> 6) + ecx_26) & 0x3fff) << 2))
            void* var_40_3 = edx_3
            
            if (edx_3 != 0)
                int32_t eax_61 = 0
                int32_t var_38_2 = 0
                
                if (*(edx_3 - 4) s> 0)
                    void* ecx_32 = i_18 - 0x7fff
                    
                    while (true)
                        int32_t edi_11 = *(edx_3 + (eax_61 << 2))
                        
                        if (edi_11 - arg3 s> ecx_32)
                            char* j_5 = nullptr
                            
                            if (arg2 - i_12 - 1 s> 0)
                                while (j_5 s< 0x102)
                                    void* eax_63
                                    eax_63.b = j_5[edi_11]
                                    
                                    if (eax_63.b != *(arg3 + 1 + i_18 + j_5))
                                        break
                                    
                                    j_5 = &j_5[1]
                                    
                                    if (j_5 s>= arg2 - i_12 - 1)
                                        break
                                
                                esi = var_10
                                ebx = var_1c
                            
                            if (j_5 s> j_6)
                                goto label_71e75e
                            
                            edx_3 = var_40_3
                            ecx_32 = i_18 - 0x7fff
                        
                        eax_61 = var_38_2 + 1
                        var_38_2 = eax_61
                        
                        if (eax_61 s>= *(edx_3 - 4))
                            i_18 = i_12
                            break
            
            void* ecx_33 = nullptr
            int32_t j_16 = i_18 - var_28_1 + arg3
            void* var_38_3 = nullptr
            
            if (j_6 s> 3)
                uint32_t eax_67
                
                do
                    eax_67 = zx.d(*((ecx_33 << 1) + &data_88e32c))
                    ecx_33 += 1
                while (j_6 s> eax_67 - 1)
                var_38_3 = ecx_33
            
            int32_t var_c_1
            void* eax_71
            uint32_t ebx_3
            
            if (ecx_33 + 0x101 s<= 0x8f)
                int32_t ecx_34 = ecx_33 + 0x131
                int32_t edx_8 = 0
                int32_t j_32 = 8
                int32_t j_7
                
                do
                    eax_71 = ecx_34 & 1
                    ecx_34 s>>= 1
                    edx_8 = (edx_8 * 2) | eax_71
                    j_7 = j_32
                    j_32 -= 1
                while (j_7 != 1)
                ebx_3 = ebx | edx_8 << var_c.b
                var_c_1 = var_c + 8
                var_10 = esi
                
                if (var_c + 8 s>= 8)
                    uint32_t j_41 = (var_c + 8) u>> 3
                    uint32_t j_22 = j_41
                    var_c_1 = var_c + 8 + (neg.d(j_41) << 3)
                    uint32_t j_8
                    
                    do
                        void* ecx_38 = esi - 8
                        void* edi_14
                        
                        if (esi == 0)
                            edi_14 = 2
                        label_71e307:
                            
                            if (esi == 0)
                                ecx_38 = nullptr
                            
                            void* eax_77 = realloc(ecx_38, edi_14 + 8)
                            
                            if (eax_77 != 0)
                                if (esi == 0)
                                    *(eax_77 + 4) = esi
                                
                                esi = eax_77 + 8
                                *(esi - 8) = edi_14
                        else
                            int32_t edi_13 = *ecx_38
                            
                            if (*(esi - 4) + 1 s>= edi_13)
                                edi_14 = (edi_13 << 1) + 1
                                goto label_71e307
                        *(esi + *(esi - 4)) = ebx_3.b
                        *(esi - 4) += 1
                        ebx_3 u>>= 8
                        j_8 = j_22
                        j_22 -= 1
                    while (j_8 != 1)
                    var_10 = esi
            else if (ecx_33 + 0x101 s<= 0xff)
                void* ecx_39 = ecx_33 + 0x201
                int32_t edx_11 = 0
                int32_t j_33 = 9
                int32_t j_9
                
                do
                    eax_71 = ecx_39 & 1
                    ecx_39 s>>= 1
                    edx_11 = (edx_11 * 2) | eax_71
                    j_9 = j_33
                    j_33 -= 1
                while (j_9 != 1)
                ebx_3 = ebx | edx_11 << var_c.b
                var_c_1 = var_c + 9
                var_10 = esi
                
                if (var_c + 9 s>= 8)
                    uint32_t j_42 = (var_c + 9) u>> 3
                    uint32_t j_23 = j_42
                    var_c_1 = var_c + 9 + (neg.d(j_42) << 3)
                    uint32_t j_10
                    
                    do
                        void* ecx_43 = esi - 8
                        void* edi_17
                        
                        if (esi == 0)
                            edi_17 = 2
                        label_71e3b7:
                            
                            if (esi == 0)
                                ecx_43 = nullptr
                            
                            void* eax_84 = realloc(ecx_43, edi_17 + 8)
                            
                            if (eax_84 != 0)
                                if (esi == 0)
                                    *(eax_84 + 4) = esi
                                
                                esi = eax_84 + 8
                                *(esi - 8) = edi_17
                        else
                            int32_t edi_16 = *ecx_43
                            
                            if (*(esi - 4) + 1 s>= edi_16)
                                edi_17 = (edi_16 << 1) + 1
                                goto label_71e3b7
                        *(esi + *(esi - 4)) = ebx_3.b
                        *(esi - 4) += 1
                        ebx_3 u>>= 8
                        j_10 = j_23
                        j_23 -= 1
                    while (j_10 != 1)
                    var_10 = esi
            else if (ecx_33 + 0x101 s> 0x117)
                void* ecx_49 = ecx_33 + 0xa9
                int32_t edx_17 = 0
                int32_t j_35 = 8
                int32_t j_11
                
                do
                    eax_71 = ecx_49 & 1
                    ecx_49 s>>= 1
                    edx_17 = (edx_17 * 2) | eax_71
                    j_11 = j_35
                    j_35 -= 1
                while (j_11 != 1)
                ebx_3 = ebx | edx_17 << var_c.b
                var_c_1 = var_c + 8
                var_10 = esi
                
                if (var_c + 8 s>= 8)
                    uint32_t j_44 = (var_c + 8) u>> 3
                    uint32_t j_25 = j_44
                    var_c_1 = var_c + 8 + (neg.d(j_44) << 3)
                    uint32_t j_12
                    
                    do
                        void* ecx_53 = esi - 8
                        void* edi_23
                        
                        if (esi == 0)
                            edi_23 = 2
                        label_71e507:
                            
                            if (esi == 0)
                                ecx_53 = nullptr
                            
                            void* eax_98 = realloc(ecx_53, edi_23 + 8)
                            
                            if (eax_98 != 0)
                                if (esi == 0)
                                    *(eax_98 + 4) = esi
                                
                                esi = eax_98 + 8
                                *(esi - 8) = edi_23
                        else
                            int32_t edi_22 = *ecx_53
                            
                            if (*(esi - 4) + 1 s>= edi_22)
                                edi_23 = (edi_22 << 1) + 1
                                goto label_71e507
                        *(esi + *(esi - 4)) = ebx_3.b
                        *(esi - 4) += 1
                        ebx_3 u>>= 8
                        j_12 = j_25
                        j_25 -= 1
                    while (j_12 != 1)
                    var_10 = esi
            else
                void* ecx_44 = ecx_33 + 1
                int32_t edx_14 = 0
                int32_t j_34 = 7
                int32_t j_13
                
                do
                    eax_71 = ecx_44 & 1
                    ecx_44 s>>= 1
                    edx_14 = (edx_14 * 2) | eax_71
                    j_13 = j_34
                    j_34 -= 1
                while (j_13 != 1)
                ebx_3 = ebx | edx_14 << var_c.b
                var_c_1 = var_c + 7
                var_10 = esi
                
                if (var_c + 7 s>= 8)
                    uint32_t j_43 = (var_c + 7) u>> 3
                    uint32_t j_24 = j_43
                    var_c_1 = var_c + 7 + (neg.d(j_43) << 3)
                    uint32_t j_14
                    
                    do
                        void* ecx_48 = esi - 8
                        void* edi_20
                        
                        if (esi == 0)
                            edi_20 = 2
                        label_71e467:
                            
                            if (esi == 0)
                                ecx_48 = nullptr
                            
                            void* eax_91 = realloc(ecx_48, edi_20 + 8)
                            
                            if (eax_91 != 0)
                                if (esi == 0)
                                    *(eax_91 + 4) = esi
                                
                                esi = eax_91 + 8
                                *(esi - 8) = edi_20
                        else
                            int32_t edi_19 = *ecx_48
                            
                            if (*(esi - 4) + 1 s>= edi_19)
                                edi_20 = (edi_19 << 1) + 1
                                goto label_71e467
                        *(esi + *(esi - 4)) = ebx_3.b
                        *(esi - 4) += 1
                        ebx_3 u>>= 8
                        j_14 = j_24
                        j_24 -= 1
                    while (j_14 != 1)
                    var_10 = esi
            
            eax_71.b = *(var_38_3 + 0x88e2c8)
            
            if (eax_71.b != 0)
                int32_t ecx_56 = var_c_1 + zx.d(eax_71.b)
                ebx_3 |= (j_6 - zx.d(*((var_38_3 << 1) + &data_88e328))) << var_c_1.b
                var_c_1 = ecx_56
                var_10 = esi
                
                if (ecx_56 s>= 8)
                    uint32_t j_45 = ecx_56 u>> 3
                    uint32_t j_26 = j_45
                    var_c_1 = ecx_56 + (neg.d(j_45) << 3)
                    uint32_t j_15
                    
                    do
                        void* ecx_58 = esi - 8
                        void* edi_26
                        
                        if (esi == 0)
                            edi_26 = 2
                        label_71e5ac:
                            
                            if (esi == 0)
                                ecx_58 = nullptr
                            
                            void* eax_106 = realloc(ecx_58, edi_26 + 8)
                            
                            if (eax_106 != 0)
                                if (esi == 0)
                                    *(eax_106 + 4) = esi
                                
                                esi = eax_106 + 8
                                *(esi - 8) = edi_26
                        else
                            int32_t edi_25 = *ecx_58
                            
                            if (*(esi - 4) + 1 s>= edi_25)
                                edi_26 = (edi_25 << 1) + 1
                                goto label_71e5ac
                        *(esi + *(esi - 4)) = ebx_3.b
                        *(esi - 4) += 1
                        ebx_3 u>>= 8
                        j_15 = j_26
                        j_26 -= 1
                    while (j_15 != 1)
                    var_10 = esi
            
            void* edi_27 = nullptr
            void* var_30_2 = nullptr
            
            if (j_16 s> 1)
                uint32_t eax_108
                
                do
                    eax_108 = zx.d(*((edi_27 << 1) + &data_88e2ec))
                    edi_27 += 1
                while (j_16 s> eax_108 - 1)
                var_30_2 = edi_27
            
            int32_t edx_23 = 0
            int32_t ecx_60 = edi_27
            int32_t j_36 = 5
            int32_t j_17
            
            do
                int32_t eax_111 = ecx_60 & 1
                ecx_60 s>>= 1
                edx_23 = (edx_23 * 2) | eax_111
                j_17 = j_36
                j_36 -= 1
            while (j_17 != 1)
            void* edi_28 = var_30_2
            int32_t ecx_62 = var_c_1 + 5
            ebx = ebx_3 | edx_23 << var_c_1.b
            var_c = ecx_62
            var_1c = ebx
            int32_t edx_25
            
            if (ecx_62 s>= 8)
                uint32_t j_46 = ecx_62 u>> 3
                uint32_t j_27 = j_46
                var_c = ecx_62 + (neg.d(j_46) << 3)
                uint32_t j_18
                
                do
                    void* ecx_64 = esi - 8
                    void* edi_31
                    
                    if (esi == 0)
                        edi_31 = 2
                    label_71e669:
                        
                        if (esi == 0)
                            ecx_64 = nullptr
                        
                        void* eax_117
                        eax_117, edx_25 = realloc(ecx_64, edi_31 + 8)
                        
                        if (eax_117 != 0)
                            if (esi == 0)
                                *(eax_117 + 4) = esi
                            
                            esi = eax_117 + 8
                            *(esi - 8) = edi_31
                    else
                        int32_t edi_30 = *ecx_64
                        
                        if (*(esi - 4) + 1 s>= edi_30)
                            edi_31 = (edi_30 << 1) + 1
                            goto label_71e669
                    *(esi + *(esi - 4)) = ebx.b
                    *(esi - 4) += 1
                    ebx u>>= 8
                    j_18 = j_27
                    j_27 -= 1
                while (j_18 != 1)
                edi_28 = var_30_2
                ecx_62 = var_c
                var_1c = ebx
                var_10 = esi
            
            edx_25.b = *(edi_28 + 0x88dea4)
            
            if (edx_25.b != 0)
                var_10 = esi
                ebx |= (j_16 - zx.d(*((edi_28 << 1) + &data_88e2e8))) << ecx_62.b
                int32_t ecx_65 = ecx_62 + zx.d(edx_25.b)
                var_1c = ebx
                var_c = ecx_65
                
                if (ecx_65 s>= 8)
                    uint32_t j_47 = ecx_65 u>> 3
                    uint32_t j_28 = j_47
                    var_c = ecx_65 + (neg.d(j_47) << 3)
                    uint32_t j_19
                    
                    do
                        void* ecx_67 = esi - 8
                        void* edi_37
                        
                        if (esi == 0)
                            edi_37 = 2
                        label_71e717:
                            
                            if (esi == 0)
                                ecx_67 = nullptr
                            
                            void* eax_126 = realloc(ecx_67, edi_37 + 8)
                            
                            if (eax_126 != 0)
                                if (esi == 0)
                                    *(eax_126 + 4) = esi
                                
                                esi = eax_126 + 8
                                *(esi - 8) = edi_37
                        else
                            int32_t edi_36 = *ecx_67
                            
                            if (*(esi - 4) + 1 s>= edi_36)
                                edi_37 = (edi_36 << 1) + 1
                                goto label_71e717
                        *(esi + *(esi - 4)) = ebx.b
                        *(esi - 4) += 1
                        ebx u>>= 8
                        j_19 = j_28
                        j_28 -= 1
                    while (j_19 != 1)
                    var_1c = ebx
                    var_10 = esi
            
            i = i_12 + j_6
        
        i_12 = i
    while (i s< arg2 - 3)

if (i s< arg2)
    do
        uint32_t ecx_79 = zx.d(*(arg3 + i))
        
        if (*(arg3 + i) u> 0x8f)
            int32_t ecx_85 = ecx_79 + 0x100
            int32_t edx_37 = 0
            int32_t i_14 = 9
            int32_t i_1
            
            do
                int32_t eax_160 = ecx_85 & 1
                ecx_85 s>>= 1
                edx_37 = (edx_37 * 2) | eax_160
                i_1 = i_14
                i_14 -= 1
            while (i_1 != 1)
            int32_t edi_50 = var_c + 9
            ebx |= edx_37 << var_c.b
            var_c = edi_50
            
            if (edi_50 s>= 8)
                uint32_t i_16 = edi_50 u>> 3
                uint32_t i_10 = i_16
                var_c = edi_50 + (neg.d(i_16) << 3)
                uint32_t i_2
                
                do
                    void* ecx_88
                    void* edi_53
                    
                    if (esi == 0)
                        edi_53 = 2
                        ecx_88 = nullptr
                    label_71e9fc:
                        void* eax_166 = realloc(ecx_88, edi_53 + 8)
                        
                        if (eax_166 != 0)
                            if (esi == 0)
                                *(eax_166 + 4) = esi
                            
                            esi = eax_166 + 8
                            *(esi - 8) = edi_53
                    else
                        ecx_88 = esi - 8
                        int32_t edi_52 = *ecx_88
                        
                        if (*(esi - 4) + 1 s>= edi_52)
                            edi_53 = (edi_52 << 1) + 1
                            goto label_71e9fc
                    *(esi + *(esi - 4)) = ebx.b
                    *(esi - 4) += 1
                    ebx u>>= 8
                    i_2 = i_10
                    i_10 -= 1
                while (i_2 != 1)
        else
            int32_t ecx_80 = ecx_79 + 0x30
            int32_t edx_34 = 0
            int32_t i_13 = 8
            int32_t i_3
            
            do
                int32_t eax_151 = ecx_80 & 1
                ecx_80 s>>= 1
                edx_34 = (edx_34 * 2) | eax_151
                i_3 = i_13
                i_13 -= 1
            while (i_3 != 1)
            int32_t ecx_82 = var_c + 8
            ebx |= edx_34 << var_c.b
            var_c = ecx_82
            
            if (ecx_82 s>= 8)
                uint32_t i_19 = ecx_82 u>> 3
                uint32_t i_9 = i_19
                var_c = ecx_82 + (neg.d(i_19) << 3)
                uint32_t i_4
                
                do
                    void* ecx_84 = esi - 8
                    void* edi_48
                    
                    if (esi == 0)
                        edi_48 = 2
                    label_71e95f:
                        
                        if (esi == 0)
                            ecx_84 = nullptr
                        
                        void* eax_157 = realloc(ecx_84, edi_48 + 8)
                        
                        if (eax_157 != 0)
                            if (esi == 0)
                                *(eax_157 + 4) = esi
                            
                            esi = eax_157 + 8
                            *(esi - 8) = edi_48
                    else
                        int32_t edi_47 = *ecx_84
                        
                        if (*(esi - 4) + 1 s>= edi_47)
                            edi_48 = (edi_47 << 1) + 1
                            goto label_71e95f
                    *(esi + *(esi - 4)) = ebx.b
                    *(esi - 4) += 1
                    ebx u>>= 8
                    i_4 = i_9
                    i_9 -= 1
                while (i_4 != 1)
        
        i = i_12 + 1
        i_12 = i
    while (i s< arg2)
    
    var_10 = esi

int32_t i_15 = 7
int32_t i_5

do
    i_5 = i_15
    i_15 -= 1
while (i_5 != 1)
int32_t i_7 = var_c + 7
uint32_t ebx_4 = ebx

if (i_7 s>= 8)
    uint32_t i_17 = i_7 u>> 3
    uint32_t i_11 = i_17
    i_7 += neg.d(i_17) << 3
    uint32_t i_6
    
    do
        void* eax_172
        void* ecx_90
        
        if (esi == 0)
            eax_172 = 2
            ecx_90 = nullptr
        label_71ea9b:
            void* eax_174 = realloc(ecx_90, eax_172 + 8)
            
            if (eax_174 != 0)
                if (esi == 0)
                    *(eax_174 + 4) = esi
                
                esi = eax_174 + 8
                *(esi - 8) = eax_172
        else
            ecx_90 = esi - 8
            int32_t edx_41 = *ecx_90
            
            if (*(esi - 4) + 1 s>= edx_41)
                eax_172 = (edx_41 << 1) + 1
                goto label_71ea9b
        *(esi + *(esi - 4)) = ebx_4.b
        *(esi - 4) += 1
        ebx_4 u>>= 8
        i_6 = i_11
        i_11 -= 1
    while (i_6 != 1)
    var_10 = esi

if (i_7 != 0)
    do
        i_7 += 1
        
        if (i_7 s>= 8)
            uint32_t j_40 = i_7 u>> 3
            uint32_t j_31 = j_40
            uint32_t j_20
            
            do
                void* ecx_92
                void* edi_57
                
                if (esi == 0)
                    edi_57 = 2
                    ecx_92 = nullptr
                label_71eb16:
                    void* eax_182 = realloc(ecx_92, edi_57 + 8)
                    
                    if (eax_182 != 0)
                        if (esi == 0)
                            *(eax_182 + 4) = esi
                        
                        esi = eax_182 + 8
                        *(esi - 8) = edi_57
                else
                    ecx_92 = esi - 8
                    int32_t edi_56 = *ecx_92
                    
                    if (*(esi - 4) + 1 s>= edi_56)
                        edi_57 = (edi_56 << 1) + 1
                        goto label_71eb16
                *(esi + *(esi - 4)) = ebx_4.b
                *(esi - 4) += 1
                ebx_4 u>>= 8
                j_20 = j_31
                j_31 -= 1
            while (j_20 != 1)
            i_7 += neg.d(j_40) << 3
    while (i_7 != 0)
    
    var_10 = esi

int32_t i_8 = 0
int32_t result_1 = result

do
    int32_t eax_184 = *(result_1 + (i_8 << 2))
    
    if (eax_184 != 0)
        free(eax_184 - 8)
        result_1 = result
    
    i_8 += 1
while (i_8 s< 0x4000)

free(result_1)
int32_t var_30_3 = 0
int32_t ebx_5 = 1
int32_t edi_59 = arg2 s% 0x15b0
int32_t eax_191 = 0
int32_t var_3c_3 = 0

if (arg2 s> 0)
    int32_t edx_44 = 0
    
    do
        int32_t ecx_94 = 0
        
        if (edi_59 s> 0)
            do
                uint32_t eax_192 = zx.d(*(arg3 + eax_191 + ecx_94))
                ecx_94 += 1
                ebx_5 += eax_192
                edx_44 += ebx_5
            while (ecx_94 s< edi_59)
            
            var_30_3 = edx_44
        
        ebx_5 += ebx_5 u/ 0xfff1 * 0xffff000f
        edx_44 = var_30_3 + var_30_3 u/ 0xfff1 * 0xffff000f
        eax_191 = var_3c_3 + edi_59
        var_30_3 = edx_44
        edi_59 = 0x15b0
        var_3c_3 = eax_191
    while (eax_191 s< arg2)
    
    esi = var_10

void* ecx_95
void* edi_61

if (esi == 0)
    edi_61 = 2
    ecx_95 = nullptr
label_71ec37:
    void* eax_201 = realloc(ecx_95, edi_61 + 8)
    
    if (eax_201 != 0)
        if (esi == 0)
            *(eax_201 + 4) = esi
        
        esi = eax_201 + 8
        *(esi - 8) = edi_61
else
    int32_t edi_60 = *(esi - 8)
    
    if (*(esi - 4) + 1 s>= edi_60)
        edi_61 = (edi_60 << 1) + 1
        ecx_95 = esi - 8
        goto label_71ec37
*(esi + *(esi - 4)) = (var_30_3 u>> 8).b
void* ecx_98 = esi - 8
int32_t edi_62 = *ecx_98
int32_t eax_204 = *(esi - 4) + 1
*(esi - 4) = eax_204

if (eax_204 + 1 s>= edi_62)
    if (esi == 0)
        ecx_98 = nullptr
    
    void** eax_207 = realloc(ecx_98, (edi_62 << 1) + 9)
    
    if (eax_207 != 0)
        esi = &eax_207[2]
        *eax_207 = (edi_62 << 1) + 1

*(esi + *(esi - 4)) = var_30_3.b
void* ecx_100 = esi - 8
int32_t edi_64 = *ecx_100
int32_t eax_210 = *(esi - 4) + 1
*(esi - 4) = eax_210

if (eax_210 + 1 s>= edi_64)
    if (esi == 0)
        ecx_100 = nullptr
    
    void** eax_213 = realloc(ecx_100, (edi_64 << 1) + 9)
    
    if (eax_213 != 0)
        esi = &eax_213[2]
        *eax_213 = (edi_64 << 1) + 1

*(esi + *(esi - 4)) = (ebx_5 u>> 8).b
void* ecx_103 = esi - 8
int32_t edi_66 = *ecx_103
int32_t eax_216 = *(esi - 4) + 1
*(esi - 4) = eax_216

if (eax_216 + 1 s>= edi_66)
    if (esi == 0)
        ecx_103 = nullptr
    
    void** eax_219 = realloc(ecx_103, (edi_66 << 1) + 9)
    
    if (eax_219 != 0)
        esi = &eax_219[2]
        *eax_219 = (edi_66 << 1) + 1

*(esi + *(esi - 4)) = ebx_5.b
uint32_t count = *(esi - 4) + 1
*(esi - 4) = count
*arg4 = count
memmove(esi - 8, esi, count)
return esi - 8
