// 函数: sub_7252d0
// 地址: 0x7252d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
__security_cookie
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t* ebx = arg3
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_2
int32_t __saved_edi_1 = __saved_edi_2
int32_t* var_cc = ebx
*(*ebx + 8) = 0
int32_t* eax_5 = sub_724680(arg3)
int32_t edx_1 = *(*ebx + 8)

if (eax_5 != 0)
    int32_t ecx
    ecx.b = edx_1 s>= 3
    void* ecx_1 = (ecx << 1) + 1
    void* var_a8_1 = ecx_1
    int32_t var_c8_1
    int32_t var_c4_1
    int32_t eax_6
    
    if (edx_1 != 3 || (ebx[0x11fb] != 3 && (ebx[0x11fa] != 0 || ebx[0x11f9] != 0)))
        var_c8_1 = 0
        
        if (edx_1 != 3 || edx_1 s>= 3)
            eax_6 = edx_1
            var_c4_1 = edx_1
        else
            eax_6 = 1
            var_c4_1 = 1
    else
        var_c8_1 = 1
        eax_6 = edx_1
        var_c4_1 = edx_1
    
    int32_t var_a4_1 = 0
    void* (* const var_b0_1)(uint32_t _Size) = malloc
    
    if (eax_6 s> 0)
        void* esi = &ebx[0x11a8]
        void var_90
        void* edi = &var_90
        void* var_ac_1 = esi
        int32_t eax_24
        
        do
            eax_5 = malloc(**ebx + 3)
            *(esi + 0x34) = eax_5
            
            if (eax_5 == 0)
                edx_1 = *(*ebx + 8)
                goto label_725b3a
            
            int32_t temp0_1 = divs.dp.d(sx.q(ebx[0x11a1]), *esi)
            *(edi + 0xc) = 0
            *(edi - 4) = temp0_1
            int32_t temp0_2 = divs.dp.d(sx.q(ebx[0x11a2]), *(esi + 4))
            *edi = temp0_2
            *(edi + 8) = temp0_2 s>> 1
            *(edi + 4) = divu.dp.d(0:(temp0_1 - 1 + **ebx), temp0_1)
            int32_t eax_21 = *(var_ac_1 + 0x28)
            *(edi - 8) = eax_21
            *(edi - 0xc) = eax_21
            int32_t (* eax_22)(int32_t arg1)
            
            if (temp0_1 != 1)
                if (temp0_1 != 2)
                    eax_22 = sub_724ec0
                else if (temp0_2 == 1)
                    eax_22 = sub_724ba0
                else if (temp0_2 != 2)
                    eax_22 = sub_724ec0
                else
                    eax_22 = ebx[0x1205]
            else if (temp0_2 == temp0_1)
                eax_22 = Platform::Details::Heap::Allocate
            else if (temp0_2 != 2)
                eax_22 = sub_724ec0
            else
                eax_22 = sub_7249c0
            
            esi = var_ac_1 + 0x48
            *(edi - 0x10) = eax_22
            edi += 0x20
            eax_24 = var_a4_1 + 1
            var_ac_1 = esi
            var_a4_1 = eax_24
        while (eax_24 s< var_c4_1)
        ecx_1 = var_a8_1
    
    int32_t* eax_25 = *ebx
    int32_t esi_3 = *eax_25
    int32_t edi_1 = eax_25[1]
    
    if (esi_3 s< 0)
        eax_5 = *ebx
    else
        int32_t eax_26
        int32_t edx_6
        
        if (esi_3 != 0)
            edx_6:eax_26 = 0x7fffffff
        
        if (esi_3 != 0 && ecx_1 s> divs.dp.d(edx_6:eax_26, esi_3))
            eax_5 = *ebx
        else
            int32_t eax_29 = esi_3 * ecx_1
            
            if (eax_29 s< 0 || edi_1 s< 0)
                eax_5 = *ebx
            else if (edi_1 == 0)
                if (esi_3 * edi_1 * ecx_1 s<= 0x7ffffffe)
                    goto label_725527
                
                eax_5 = *ebx
            else if (eax_29 s> divs.dp.d(0x7fffffff, edi_1) || esi_3 * edi_1 * ecx_1 s> 0x7ffffffe)
                eax_5 = *ebx
            else
            label_725527:
                uint32_t result = malloc(esi_3 * edi_1 * ecx_1 + 1)
                int32_t __saved_edi
                int32_t* esp_1 = &__saved_edi
                eax_5 = *ebx
                
                if (result != 0)
                    int32_t i = 0
                    int32_t i_1 = 0
                    
                    if (eax_5[1] u> 0)
                        void* edx_10 = var_a8_1
                        uint32_t result_1 = result
                        
                        do
                            int32_t var_b8_2 = 0
                            char* esi_10 = *eax_5 * i * edx_10 + result
                            char* var_1c
                            
                            if (var_c4_1 s> 0)
                                void* var_b0_2 = &ebx[0x11af]
                                void var_88
                                void* edi_2 = &var_88
                                void* ebx_1 = &ebx[0x11af]
                                int32_t ecx_8
                                
                                do
                                    void* ecx_6 = edi_2 - 0x10
                                    void* var_bc_2 = edi_2 - 0x14
                                    void* var_b0_3
                                    void* var_ac_2
                                    int32_t eax_39
                                    
                                    if (*edi_2 s< *(edi_2 - 8) s>> 1)
                                        int32_t eax_40 = *ecx_6
                                        void* eax_41 = ecx_6
                                        ecx_6 = edi_2 - 0x14
                                        var_ac_2 = eax_41
                                        var_b0_3 = eax_41
                                        eax_39 = eax_40
                                        var_bc_2 = ecx_6
                                    else
                                        eax_39 = *(edi_2 - 0x14)
                                        var_ac_2 = ecx_6
                                        var_b0_3 = ecx_6
                                    
                                    *(esp_1 - 4) = *(edi_2 - 0xc)
                                    *(esp_1 - 8) = *(edi_2 - 4)
                                    *(esp_1 - 0xc) = eax_39
                                    *(esp_1 - 0x10) = *ecx_6
                                    *(esp_1 - 0x14) = *(ebx_1 + 0x18)
                                    (&var_1c)[var_b8_2] = (*(edi_2 - 0x18))()
                                    int32_t eax_44 = *edi_2 + 1
                                    *edi_2 = eax_44
                                    
                                    if (eax_44 s>= *(edi_2 - 8))
                                        *(edi_2 + 4) += 1
                                        *edi_2 = 0
                                        int32_t edx_14 = *var_b0_3
                                        *var_bc_2 = edx_14
                                        
                                        if (*(edi_2 + 4) s< *ebx_1)
                                            *var_ac_2 = *(ebx_1 + 4) + edx_14
                                    
                                    ecx_8 = var_b8_2 + 1
                                    edi_2 += 0x20
                                    ebx_1 += 0x48
                                    var_b8_2 = ecx_8
                                while (ecx_8 s< var_c4_1)
                                ebx = var_cc
                                edx_10 = var_a8_1
                                i = i_1
                            
                            int32_t* eax_49 = *ebx
                            char* var_18
                            int32_t var_14
                            void* var_10
                            
                            if (edx_1 s>= 3)
                                int32_t ecx_9 = eax_49[2]
                                void* esp_13
                                
                                if (ecx_9 != 3)
                                    if (ecx_9 != 4)
                                        int32_t j = 0
                                        
                                        if (*eax_49 u> 0)
                                            void* esi_16 = &esi_10[1]
                                            
                                            do
                                                char* eax_100
                                                eax_100.b = var_1c[j]
                                                j += 1
                                                *(esi_16 + 1) = eax_100.b
                                                *esi_16 = eax_100.b
                                                *(esi_16 - 1) = eax_100.b
                                                *(esi_16 + 2) = 0xff
                                                esi_16 += edx_10
                                            while (j u< **ebx)
                                        
                                        i = i_1
                                    else
                                        int32_t j_10 = ebx[0x11fa]
                                        
                                        if (j_10 != 0)
                                            int32_t eax_81 = *eax_49
                                            int32_t edi_8 = ebx[0x1204]
                                            *(esp_1 - 4) = edx_10
                                            *(esp_1 - 8) = eax_81
                                            *(esp_1 - 0xc) = var_14
                                            *(esp_1 - 0x10) = var_18
                                            *(esp_1 - 0x14) = var_1c
                                            *(esp_1 - 0x18) = esi_10
                                            esp_13 = esp_1 - 0x18
                                            
                                            if (j_10 != 2)
                                                edi_8()
                                                goto label_725718
                                            
                                            edi_8()
                                            int32_t j_1 = 0
                                            esp_1 = esp_13 + 0x18
                                            
                                            if (**ebx u<= 0)
                                                edx_10 = var_a8_1
                                                i = i_1
                                            else
                                                void* esi_15 = &esi_10[2]
                                                
                                                do
                                                    uint32_t edx_20 = zx.d(*(var_10 + j_1))
                                                    j_1 += 1
                                                    int32_t ecx_33 =
                                                        zx.d(not.b(*(esi_15 - 2))) * edx_20 + 0x80
                                                    *(esi_15 - 2) =
                                                        (((ecx_33 u>> 8) + ecx_33) u>> 8).b
                                                    int32_t ecx_36 =
                                                        zx.d(not.b(*(esi_15 - 1))) * edx_20 + 0x80
                                                    *(esi_15 - 1) =
                                                        (((ecx_36 u>> 8) + ecx_36) u>> 8).b
                                                    edx_10 = var_a8_1
                                                    int32_t ecx_39 =
                                                        zx.d(not.b(*esi_15)) * edx_20 + 0x80
                                                    *esi_15 = (((ecx_39 u>> 8) + ecx_39) u>> 8).b
                                                    esi_15 += edx_10
                                                while (j_1 u< **ebx)
                                                
                                                i = i_1
                                        else
                                            int32_t j_8 = j_10
                                            
                                            if (*eax_49 u> j_10)
                                                void* edi_7 = &esi_10[2]
                                                void* esi_14 = var_10
                                                void* ecx_18 = var_18 - esi_14
                                                void* eax_65 = var_1c - esi_14
                                                void* ecx_20 = var_14 - esi_14
                                                void* var_b0_4 = eax_65
                                                int32_t j_2
                                                
                                                do
                                                    uint32_t ecx_21 = zx.d(*(eax_65 + esi_14))
                                                    esi_14 += 1
                                                    uint32_t edx_19 = zx.d(*(esi_14 - 1))
                                                    *(edi_7 - 2) = ((((ecx_21 * edx_19 + 0x80)
                                                        u>> 8) + ecx_21 * edx_19 + 0x80) u>> 8).b
                                                    int32_t ecx_26 =
                                                        zx.d(*(ecx_18 + esi_14 - 1)) * edx_19 + 0x80
                                                    *(edi_7 - 1) =
                                                        (((ecx_26 u>> 8) + ecx_26) u>> 8).b
                                                    int32_t ecx_28 =
                                                        zx.d(*(ecx_20 + esi_14 - 1)) * edx_19
                                                    edx_10 = var_a8_1
                                                    *(edi_7 + 1) = 0xff
                                                    j_2 = j_8 + 1
                                                    *edi_7 = ((((ecx_28 + 0x80) u>> 8) + ecx_28
                                                        + 0x80) u>> 8).b
                                                    edi_7 += edx_10
                                                    j_8 = j_2
                                                    eax_65 = var_b0_4
                                                while (j_2 u< **ebx)
                                            
                                            i = i_1
                                else if (var_c8_1 == 0)
                                    *(esp_1 - 4) = edx_10
                                    *(esp_1 - 8) = *eax_49
                                    int32_t eax_57 = ebx[0x1204]
                                    *(esp_1 - 0xc) = var_14
                                    *(esp_1 - 0x10) = var_18
                                    *(esp_1 - 0x14) = var_1c
                                    *(esp_1 - 0x18) = esi_10
                                    eax_57()
                                    esp_13 = esp_1
                                label_725718:
                                    esp_1 = esp_13 + 0x18
                                    edx_10 = var_a8_1
                                    i = i_1
                                else
                                    int32_t j_3 = 0
                                    
                                    if (*eax_49 u> 0)
                                        char* ecx_10 = var_18
                                        void* esi_12 = &esi_10[2]
                                        void* eax_51 = var_1c - ecx_10
                                        void* edi_4 = var_14 - ecx_10
                                        void* var_c0_2 = eax_51
                                        
                                        do
                                            char eax_52 = *(ecx_10 + eax_51)
                                            ecx_10 = &ecx_10[1]
                                            *(esi_12 - 2) = eax_52
                                            j_3 += 1
                                            *(esi_12 - 1) = ecx_10[0xffffffff]
                                            *esi_12 = *(ecx_10 + edi_4 - 1)
                                            *(esi_12 + 1) = 0xff
                                            esi_12 += var_a8_1
                                            eax_51 = var_c0_2
                                        while (j_3 u< **ebx)
                                    
                                    edx_10 = var_a8_1
                                    i = i_1
                            else if (var_c8_1 != 0)
                                int32_t j_4 = 0
                                
                                if (*eax_49 u> 0)
                                    char* edx_21 = var_18
                                    void* eax_103 = var_14 - edx_21
                                    void* eax_105 = var_1c - edx_21
                                    int32_t esi_17 = esi_10 - edx_21
                                    void* var_c0_4 = eax_105
                                    
                                    do
                                        uint32_t eax_106 = zx.d(*(eax_105 + edx_21))
                                        edx_21 = &edx_21[1]
                                        j_4 += 1
                                        edx_21[esi_17 - 1] = ((eax_106 * 0x4d
                                            + zx.d(*(eax_103 + edx_21 - 1)) * 0x1d
                                            + zx.d(edx_21[0xffffffff]) * 0x96) u>> 8).b
                                        eax_105 = var_c0_4
                                    while (j_4 u< **ebx)
                                    
                                    edx_10 = var_a8_1
                                    i = i_1
                            else if (eax_49[2] != 4)
                            label_725b0f:
                                int32_t j_5 = 0
                                
                                if (*eax_49 != 0)
                                    char* edi_16 = var_1c - esi_10
                                    
                                    do
                                        int32_t* eax_144
                                        eax_144.b = *(edi_16 + esi_10)
                                        esi_10 = &esi_10[1]
                                        esi_10[0xffffffff] = eax_144.b
                                        j_5 += 1
                                    while (j_5 u< **ebx)
                                
                                i = i_1
                            else
                                int32_t j_11 = ebx[0x11fa]
                                
                                if (j_11 != 0)
                                    if (j_11 != 2)
                                        goto label_725b0f
                                    
                                    int32_t j_6 = 0
                                    
                                    if (*eax_49 u<= 0)
                                        i = i_1
                                    else
                                        void* edx_27 = var_10
                                        char* eax_137 = var_1c - edx_27
                                        char* var_b4_6 = eax_137
                                        
                                        do
                                            eax_137.b = *(eax_137 + edx_27)
                                            edx_27 += 1
                                            eax_137.b = not.b(eax_137.b)
                                            j_6 += 1
                                            int32_t ecx_54 = zx.d(eax_137.b) * zx.d(*(edx_27 - 1))
                                            esi_10[1] = 0xff
                                            *esi_10 =
                                                ((((ecx_54 + 0x80) u>> 8) + ecx_54 + 0x80) u>> 8).b
                                            esi_10 += var_a8_1
                                            eax_137 = var_b4_6
                                        while (j_6 u< **ebx)
                                        
                                        edx_10 = var_a8_1
                                        i = i_1
                                else
                                    int32_t j_9 = j_11
                                    
                                    if (*eax_49 u> j_11)
                                        void* ecx_44 = var_10
                                        void* eax_114 = var_18 - ecx_44
                                        void* edi_10 = var_1c - ecx_44
                                        void* eax_116 = var_14 - ecx_44
                                        void* var_bc_3 = ecx_44
                                        void* var_b0_5 = edi_10
                                        int32_t j_7
                                        
                                        do
                                            uint32_t eax_117 = zx.d(*ecx_44)
                                            int32_t edi_13 =
                                                zx.d(*(edi_10 + ecx_44)) * eax_117 + 0x80
                                            int32_t edx_25 = zx.d(*(eax_116 + var_bc_3)) * eax_117
                                            int32_t ecx_47 =
                                                zx.d(*(eax_114 + ecx_44)) * eax_117 + 0x80
                                            ebx = var_cc
                                            esi_10[1] = 0xff
                                            edx_10 = var_a8_1
                                            j_7 = j_9 + 1
                                            j_9 = j_7
                                            int32_t ecx_50 =
                                                zx.d((((ecx_47 u>> 8) + ecx_47) u>> 8).b) * 0x96 +
                                                zx.d(((((edx_25 + 0x80) u>> 8) + edx_25 + 0x80)
                                                u>> 8).b) * 0x1d
                                                + zx.d((((edi_13 u>> 8) + edi_13) u>> 8).b) * 0x4d
                                            *esi_10 = (ecx_50 u>> 8).b
                                            esi_10 += edx_10
                                            ecx_44 = var_bc_3 + 1
                                            var_bc_3 = ecx_44
                                            edi_10 = var_b0_5
                                        while (j_7 u< **ebx)
                                    
                                    i = i_1
                            eax_5 = *ebx
                            i += 1
                            result = result_1
                            i_1 = i
                        while (i u< eax_5[1])
                    
                    int32_t edx_16 = eax_5[2]
                    *(esp_1 - 4) = 0
                    sub_723f50(eax_5, edx_16, ebx)
                    *arg2 = **ebx
                    *arg4 = *(*ebx + 4)
                    
                    if (arg5 != 0)
                        int32_t edx_17
                        edx_17.b = *(*ebx + 8) s>= 3
                        *arg5 = (edx_17 << 1) + 1
                    
                    *esp_1
                    esp_1[1]
                    esp_1[2]
                    CookieCheckFunction(result)
                    return result
    
    edx_1 = eax_5[2]

label_725b3a:
int32_t var_ec_3 = 0
sub_723f50(eax_5, edx_1, ebx, 0)
CookieCheckFunction(0)
return 0
