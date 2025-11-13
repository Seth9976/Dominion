// 函数: sub_680a70
// 地址: 0x680a70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* edi_1 = arg2
int32_t* ebx_1 = &arg2[(((arg4 - arg2) s/ 0x1c) s>> 1) * 7]
int32_t* var_8 = ebx_1
int32_t eax_4 = (arg4 - 0x1c - edi_1) s/ 0x1c

if (eax_4 s<= 0x28)
    int32_t var_2c_1 = arg5
    sub_681740(eax_4, ebx_1, edi_1, arg4 - 0x1c)
else
    int32_t eax_6 = (eax_4 + 1) s>> 3
    int32_t var_2c = arg5
    int32_t edi_4 = eax_6 * 0x1c
    void** eax_7 = &arg2[eax_6 * 0xe]
    sub_681740(eax_7, &arg2[eax_6 * 7], arg2, eax_7)
    int32_t var_34_1 = arg5
    void** eax_8 = &var_8[eax_6 * 7]
    sub_681740(eax_8, var_8, var_8 - edi_4, eax_8)
    int32_t var_3c_1 = arg5
    void* eax_11 = arg4 - 0x1c - eax_6 * 0x38
    void** esi_9 = arg4 - 0x1c - edi_4
    int32_t var_44_1 = arg5
    ebx_1 = var_8
    sub_681740(sub_681740(eax_11, esi_9, eax_11, arg4 - 0x1c), ebx_1, &arg2[eax_6 * 7], esi_9)
    edi_1 = arg2

void* esi_12 = &ebx_1[7]
void* var_10 = esi_12

if (edi_1 u< ebx_1)
    while (true)
        void* edi_5 = *ebx_1
        void* ecx_12 = &ebx_1[-7]
        void* ecx_13 = *ecx_12
        char* eax_13 = *(edi_5 + 8)
        char* esi_10 = eax_13
        char* ecx_14 = *(ecx_13 + 8)
        char* edx_14 = ecx_14
        int32_t edx_16
        
        while (true)
            ebx_1.b = *edx_14
            char temp0_1 = *esi_10
            bool c_1 = ebx_1.b u< temp0_1
            bool z_1 = ebx_1.b == temp0_1
            arg5:3.b = ebx_1.b
            ebx_1 = var_8
            
            if (z_1)
                if (arg5:3.b == 0)
                    edx_16 = 0
                    break
                
                ebx_1.b = edx_14[1]
                char temp3_1 = esi_10[1]
                c_1 = ebx_1.b u< temp3_1
                bool z_2 = ebx_1.b == temp3_1
                arg5:3.b = ebx_1.b
                ebx_1 = var_8
                
                if (z_2)
                    edx_14 = &edx_14[2]
                    esi_10 = &esi_10[2]
                    
                    if (arg5:3.b != 0)
                        continue
                    
                    edx_16 = 0
                    break
            
            edx_16 = sbb.d(edx_14, edx_14, c_1) | 1
            break
        
        if (edx_16 s< 0)
            break
        
        void* esi_11
        
        if (edx_16 s> 0)
            esi_11 = ecx_13
        else
            edx_16 = ebx_1[-6]
            int32_t temp6_1 = ebx_1[1]
            
            if (edx_16 s< temp6_1)
                break
            
            esi_11 = ecx_13
            
            if (edx_16 s<= temp6_1 && esi_11 u< edi_5)
                break
        
        int32_t eax_15
        
        while (true)
            edx_16.b = *eax_13
            char temp8_1 = *ecx_14
            bool c_2 = edx_16.b u< temp8_1
            
            if (edx_16.b == temp8_1)
                if (edx_16.b == 0)
                    eax_15 = 0
                    break
                
                edx_16.b = eax_13[1]
                char temp15_1 = ecx_14[1]
                c_2 = edx_16.b u< temp15_1
                
                if (edx_16.b == temp15_1)
                    eax_13 = &eax_13[2]
                    ecx_14 = &ecx_14[2]
                    
                    if (edx_16.b != 0)
                        continue
                    
                    eax_15 = 0
                    break
            
            eax_15 = sbb.d(eax_13, eax_13, c_2) | 1
            break
        
        if (eax_15 s< 0)
            break
        
        if (eax_15 s<= 0)
            int32_t eax_16 = ebx_1[1]
            int32_t temp21_1 = ebx_1[-6]
            
            if (eax_16 s< temp21_1)
                break
            
            if (eax_16 s<= temp21_1 && edi_5 u< esi_11)
                break
        
        ebx_1 = ecx_12
        var_8 = ebx_1
        
        if (arg2 u>= ebx_1)
            break
    
    esi_12 = var_10

void* eax_27 = arg4

if (esi_12 u< eax_27)
    void* eax_18 = *(*ebx_1 + 8)
    void* var_18_3 = eax_18
    
    while (true)
        void* edi_6 = *esi_12
        char* edx_17 = eax_18
        char* ecx_15 = *(edi_6 + 8)
        char* eax_19 = ecx_15
        int32_t eax_21
        
        while (true)
            ebx_1.b = *eax_19
            char temp1_1 = *edx_17
            bool c_3 = ebx_1.b u< temp1_1
            bool z_5 = ebx_1.b == temp1_1
            arg5:3.b = ebx_1.b
            ebx_1 = var_8
            
            if (z_5)
                if (arg5:3.b == 0)
                    eax_21 = 0
                    break
                
                ebx_1.b = eax_19[1]
                char temp5_1 = edx_17[1]
                c_3 = ebx_1.b u< temp5_1
                bool z_6 = ebx_1.b == temp5_1
                arg5:3.b = ebx_1.b
                ebx_1 = var_8
                
                if (z_6)
                    eax_19 = &eax_19[2]
                    edx_17 = &edx_17[2]
                    
                    if (arg5:3.b != 0)
                        continue
                    
                    eax_21 = 0
                    break
            
            eax_21 = sbb.d(eax_19, eax_19, c_3) | 1
            break
        
        if (eax_21 s< 0)
            break
        
        if (eax_21 s<= 0)
            int32_t eax_22 = *(esi_12 + 4)
            int32_t temp9_1 = ebx_1[1]
            
            if (eax_22 s< temp9_1)
                break
            
            if (eax_22 s<= temp9_1 && edi_6 u< *ebx_1)
                break
        
        void* eax_23 = var_18_3
        int32_t eax_25
        
        while (true)
            edx_17.b = *eax_23
            char temp13_1 = *ecx_15
            bool c_4 = edx_17.b u< temp13_1
            
            if (edx_17.b == temp13_1)
                if (edx_17.b == 0)
                    eax_25 = 0
                    break
                
                edx_17.b = *(eax_23 + 1)
                char temp20_1 = ecx_15[1]
                c_4 = edx_17.b u< temp20_1
                
                if (edx_17.b == temp20_1)
                    eax_23 += 2
                    ecx_15 = &ecx_15[2]
                    
                    if (edx_17.b != 0)
                        continue
                    
                    eax_25 = 0
                    break
            
            eax_25 = sbb.d(eax_23, eax_23, c_4) | 1
            break
        
        if (eax_25 s< 0)
            break
        
        if (eax_25 s<= 0)
            int32_t eax_26 = ebx_1[1]
            int32_t temp24_1 = *(esi_12 + 4)
            
            if (eax_26 s< temp24_1)
                break
            
            if (eax_26 s<= temp24_1 && *ebx_1 u< edi_6)
                break
        
        eax_18 = var_18_3
        esi_12 += 0x1c
        
        if (esi_12 u>= arg4)
            break
    
    eax_27 = arg4
    var_10 = esi_12

void* edi_7 = esi_12
int32_t* edx_18 = ebx_1
label_680ce2:
int32_t* var_14_2 = edx_18

while (true)
    void* var_18_4 = edi_7
    
    while (true)
        if (edi_7 u< eax_27)
            while (true)
                char* ecx_16 = *(*edi_7 + 8)
                char* esi_13 = ecx_16
                char* eax_30 = *(*ebx_1 + 8)
                char* edx_19 = eax_30
                int32_t edx_21
                
                while (true)
                    ebx_1.b = *edx_19
                    char temp7_1 = *esi_13
                    bool c_5 = ebx_1.b u< temp7_1
                    bool z_9 = ebx_1.b == temp7_1
                    arg5:3.b = ebx_1.b
                    ebx_1 = var_8
                    
                    if (z_9)
                        if (arg5:3.b == 0)
                            edx_21 = 0
                            break
                        
                        ebx_1.b = edx_19[1]
                        char temp12_1 = esi_13[1]
                        c_5 = ebx_1.b u< temp12_1
                        bool z_10 = ebx_1.b == temp12_1
                        arg5:3.b = ebx_1.b
                        ebx_1 = var_8
                        
                        if (z_10)
                            edx_19 = &edx_19[2]
                            esi_13 = &esi_13[2]
                            
                            if (arg5:3.b != 0)
                                continue
                            
                            edx_21 = 0
                            break
                    
                    edx_21 = sbb.d(edx_19, edx_19, c_5) | 1
                    break
                
                if (edx_21 s>= 0)
                    int32_t esi_14
                    
                    if (edx_21 s> 0)
                        esi_14 = *edi_7
                    label_680d53:
                        int32_t eax_32
                        
                        while (true)
                            edx_21.b = *ecx_16
                            char temp22_1 = *eax_30
                            bool c_6 = edx_21.b u< temp22_1
                            
                            if (edx_21.b == temp22_1)
                                if (edx_21.b == 0)
                                    eax_32 = 0
                                    break
                                
                                edx_21.b = ecx_16[1]
                                char temp27_1 = eax_30[1]
                                c_6 = edx_21.b u< temp27_1
                                
                                if (edx_21.b == temp27_1)
                                    ecx_16 = &ecx_16[2]
                                    eax_30 = &eax_30[2]
                                    
                                    if (edx_21.b != 0)
                                        continue
                                    
                                    eax_32 = 0
                                    break
                            
                            eax_32 = sbb.d(eax_30, eax_30, c_6) | 1
                            break
                        
                        if (eax_32 s< 0)
                            break
                        
                        if (eax_32 s<= 0)
                            int32_t eax_33 = *(edi_7 + 4)
                            int32_t temp30_1 = ebx_1[1]
                            
                            if (eax_33 s< temp30_1)
                                break
                            
                            if (eax_33 s<= temp30_1 && esi_14 u< *ebx_1)
                                break
                        
                        void* esi_15 = var_10
                        var_10 = esi_15 + 0x1c
                        
                        if (esi_15 != edi_7)
                            int32_t ecx_17 = *(esi_15 + 0x18)
                            int128_t xmm1_1 = *esi_15
                            int64_t xmm2_1 = *(esi_15 + 0x10)
                            *esi_15 = *edi_7
                            *(esi_15 + 0x10) = *(edi_7 + 0x10)
                            *(esi_15 + 0x18) = *(edi_7 + 0x18)
                            *edi_7 = xmm1_1
                            *(edi_7 + 0x10) = xmm2_1
                            *(edi_7 + 0x18) = ecx_17
                    else
                        edx_21 = ebx_1[1]
                        int32_t temp18_1 = *(edi_7 + 4)
                        
                        if (edx_21 s>= temp18_1)
                            esi_14 = *edi_7
                            
                            if (edx_21 s> temp18_1 || *ebx_1 u>= esi_14)
                                goto label_680d53
                
                edi_7 += 0x1c
                
                if (edi_7 u>= arg4)
                    break
            
            edx_18 = var_14_2
            var_18_4 = edi_7
        
        bool cond:1_1 = edx_18 != arg2
        
        if (edx_18 u> arg2)
            void* edi_8 = &edx_18[-7]
            int32_t* eax_42
            
            while (true)
                char* eax_37 = *(*ebx_1 + 8)
                char* esi_16 = eax_37
                void* ecx_19 = *(*edi_8 + 8)
                void* edx_23 = ecx_19
                int32_t edx_25
                
                while (true)
                    ebx_1.b = *edx_23
                    char temp10_1 = *esi_16
                    bool c_7 = ebx_1.b u< temp10_1
                    bool z_13 = ebx_1.b == temp10_1
                    arg5:3.b = ebx_1.b
                    ebx_1 = var_8
                    
                    if (z_13)
                        if (arg5:3.b == 0)
                            edx_25 = 0
                            break
                        
                        ebx_1.b = *(edx_23 + 1)
                        char temp17_1 = esi_16[1]
                        c_7 = ebx_1.b u< temp17_1
                        bool z_14 = ebx_1.b == temp17_1
                        arg5:3.b = ebx_1.b
                        ebx_1 = var_8
                        
                        if (z_14)
                            edx_23 += 2
                            esi_16 = &esi_16[2]
                            
                            if (arg5:3.b != 0)
                                continue
                            
                            edx_25 = 0
                            break
                    
                    edx_25 = sbb.d(edx_23, edx_23, c_7) | 1
                    break
                
                if (edx_25 s>= 0)
                    int32_t esi_17
                    
                    if (edx_25 s> 0)
                        esi_17 = *ebx_1
                    label_680e46:
                        int32_t eax_39
                        
                        while (true)
                            edx_25.b = *eax_37
                            char temp25_1 = *ecx_19
                            bool c_8 = edx_25.b u< temp25_1
                            
                            if (edx_25.b == temp25_1)
                                if (edx_25.b == 0)
                                    eax_39 = 0
                                    break
                                
                                edx_25.b = eax_37[1]
                                char temp29_1 = *(ecx_19 + 1)
                                c_8 = edx_25.b u< temp29_1
                                
                                if (edx_25.b == temp29_1)
                                    eax_37 = &eax_37[2]
                                    ecx_19 += 2
                                    
                                    if (edx_25.b != 0)
                                        continue
                                    
                                    eax_39 = 0
                                    break
                            
                            eax_39 = sbb.d(eax_37, eax_37, c_8) | 1
                            break
                        
                        if (eax_39 s< 0)
                        label_680ece:
                            edx_18 = var_14_2
                            eax_42 = arg2
                            break
                        
                        if (eax_39 s<= 0)
                            int32_t eax_40 = ebx_1[1]
                            int32_t temp31_1 = *(edi_8 + 4)
                            
                            if (eax_40 s< temp31_1)
                                goto label_680ece
                            
                            if (eax_40 s<= temp31_1 && esi_17 u< *edi_8)
                                goto label_680ece
                        
                        ebx_1 -= 0x1c
                        var_8 = ebx_1
                        
                        if (ebx_1 != edi_8)
                            int32_t ecx_20 = ebx_1[6]
                            int128_t xmm1_2 = *ebx_1
                            int64_t xmm2_2 = *(ebx_1 + 0x10)
                            *ebx_1 = *edi_8
                            *(ebx_1 + 0x10) = *(edi_8 + 0x10)
                            ebx_1[6] = *(edi_8 + 0x18)
                            *edi_8 = xmm1_2
                            *(edi_8 + 0x10) = xmm2_2
                            *(edi_8 + 0x18) = ecx_20
                    else
                        edx_25 = *(edi_8 + 4)
                        int32_t temp23_1 = ebx_1[1]
                        
                        if (edx_25 s>= temp23_1)
                            esi_17 = *ebx_1
                            
                            if (edx_25 s> temp23_1 || *edi_8 u>= esi_17)
                                goto label_680e46
                
                edi_8 -= 0x1c
                eax_42 = arg2
                edx_18 = var_14_2 - 0x1c
                var_14_2 = edx_18
                
                if (eax_42 u>= edx_18)
                    break
            
            edi_7 = var_18_4
            cond:1_1 = edx_18 != eax_42
        
        if (not(cond:1_1))
            if (edi_7 == arg4)
                *arg3 = ebx_1
                arg3[1] = var_10
                return arg3
            
            if (var_10 != edi_7)
                int32_t ecx_21 = ebx_1[6]
                int128_t xmm1_3 = *ebx_1
                int64_t xmm2_3 = *(ebx_1 + 0x10)
                *ebx_1 = *var_10
                *(ebx_1 + 0x10) = *(var_10 + 0x10)
                ebx_1[6] = *(var_10 + 0x18)
                *var_10 = xmm1_3
                *(var_10 + 0x10) = xmm2_3
                *(var_10 + 0x18) = ecx_21
            
            int32_t ecx_22 = ebx_1[6]
            int128_t xmm1_4 = *ebx_1
            var_10 += 0x1c
            int64_t xmm2_4 = *(ebx_1 + 0x10)
            *ebx_1 = *edi_7
            *(ebx_1 + 0x10) = *(edi_7 + 0x10)
            ebx_1[6] = *(edi_7 + 0x18)
            ebx_1 = &ebx_1[7]
            eax_27 = arg4
            *edi_7 = xmm1_4
            var_8 = ebx_1
            *(edi_7 + 0x10) = xmm2_4
            *(edi_7 + 0x18) = ecx_22
            edi_7 += 0x1c
            break
        
        edx_18 = &edx_18[-7]
        var_14_2 = edx_18
        
        if (edi_7 != arg4)
            int32_t ecx_25 = *(edi_7 + 0x18)
            int128_t xmm1_7 = *edi_7
            int64_t xmm2_7 = *(edi_7 + 0x10)
            *edi_7 = *edx_18
            *(edi_7 + 0x10) = *(edx_18 + 0x10)
            *(edi_7 + 0x18) = edx_18[6]
            edi_7 += 0x1c
            eax_27 = arg4
            *edx_18 = xmm1_7
            *(edx_18 + 0x10) = xmm2_7
            edx_18[6] = ecx_25
            goto label_680ce2
        
        ebx_1 -= 0x1c
        var_8 = ebx_1
        
        if (edx_18 != ebx_1)
            int32_t ecx_23 = edx_18[6]
            int128_t xmm1_5 = *edx_18
            int64_t xmm2_5 = *(edx_18 + 0x10)
            *edx_18 = *ebx_1
            *(edx_18 + 0x10) = *(ebx_1 + 0x10)
            edx_18[6] = ebx_1[6]
            *ebx_1 = xmm1_5
            *(ebx_1 + 0x10) = xmm2_5
            ebx_1[6] = ecx_23
        
        int128_t xmm1_6 = *ebx_1
        void* esi_21 = var_10 - 0x1c
        int32_t ecx_24 = ebx_1[6]
        int64_t xmm2_6 = *(ebx_1 + 0x10)
        var_10 = esi_21
        *ebx_1 = *esi_21
        *(ebx_1 + 0x10) = *(esi_21 + 0x10)
        ebx_1[6] = *(esi_21 + 0x18)
        eax_27 = arg4
        *esi_21 = xmm1_6
        *(esi_21 + 0x10) = xmm2_6
        *(esi_21 + 0x18) = ecx_24
