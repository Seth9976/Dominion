// 函数: sub_60ff40
// 地址: 0x60ff40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76b0e6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x3374)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
*(sub_64e7a0(arg1) + 0x18bc) = sub_60f1c0
uint32_t eax_4 = sub_64e7a0(arg1)
sub_665db0(eax_4, &data_cadf48, eax_4, 0x3f800000, 0xffffffff, 0)
int32_t eax_5 = data_ccf6a4
char const* const var_2c_9
int32_t var_28_1
char const* const var_24_1
void* eax_7
char* ecx_3
void** esi_1

if (eax_5 == 0)
    esi_1 = &data_be4960
label_60ffd9:
    uint32_t eax_8 = sub_64e7a0(arg1)
    sub_60de40(sub_665db0(eax_8, esi_1, eax_8, 0x3f800000, 0xffffffff, 0), 3, arg1, 0)
    int32_t var_d4[0x25]
    int32_t eax_10 = sub_60f100(&var_d4)
    int32_t eax_11 = sub_60ecc0(eax_10, data_ccf6a8, data_ccf6a4, eax_10, &var_d4)
    int32_t ecx_9 = data_ccf6ac
    
    if (ecx_9 == 0)
        uint32_t eax_12 = sub_64e7a0(arg1)
        sub_665db0(eax_12, &data_be5d80, eax_12, 0x3f800000, 0xffffffff, 0)
        ecx_9 = data_ccf6ac
    
    void* eax_14 = eax_11 - 1
    
    if (ecx_9 == eax_14 || eax_11 == 0)
        uint32_t eax_13 = sub_64e7a0(arg1)
        eax_14 = sub_665db0(eax_13, &data_be5d8c, eax_13, 0x3f800000, 0xffffffff, 0)
    
    int32_t var_24_5 = 0xffffffff
    int32_t* ecx_14 = arg1
    sub_666120(eax_14, &data_be61ac, ecx_14, eax_11)
    int32_t eax_15 = 8
    
    if (eax_11 s< 8)
        eax_15 = eax_11
    
    int32_t esi_2 = 0
    char* var_19c8
    int32_t var_34[0x2]
    
    if (eax_15 s> 0)
        int32_t ebx_1 = 0
        
        if (eax_11 - 8 s> 0)
            ebx_1 = eax_11 - 8
        
        do
            int32_t eax_17 = data_ccf6ac
            int32_t eax_18 = eax_17 - 4
            
            if (eax_17 - 4 s< 0)
                eax_18 = 0
            else if (eax_18 s> ebx_1)
                eax_18 = ebx_1
            
            int32_t edi_2 = eax_18 + esi_2
            int32_t var_24_6 = edi_2 + 1
            sub_63df30(&var_19c8, "%d")
            var_34[1] = esi_2
            var_34[0] = &var_19c8
            int32_t var_8_1 = 0
            ecx_14 = sub_666380(&var_19c8, &data_be61b8, arg1, var_34[0])
            int32_t var_8_2 = 1
            
            if (data_cf65bc != 0)
                char* eax_21 = var_19c8
                
                if (eax_21 != 0 && *eax_21 != 0)
                    int32_t* eax_22 = sub_63d4e0(&var_19c8)
                    int32_t temp6_1 = eax_22[1]
                    eax_22[1] -= 1
                    ecx_14 = eax_22[1]
                    
                    if (temp6_1 == 1)
                        ecx_14 = sub_64c080(eax_22, eax_22[3] + 0x10)
                        var_19c8 = &data_801800
            
            int32_t var_8_3 = 0xffffffff
            
            if (edi_2 == data_ccf6ac)
                uint32_t eax_23 = sub_64e7a0(arg1)
                ecx_14 = sub_665db0(eax_23, &data_be61c4, eax_23, 0x3f800000, esi_2, 0)
            
            esi_2 += 1
        while (esi_2 s< eax_15)
    
    int32_t edx_5 = data_ccf6ac
    int32_t* var_24_8 = ecx_14
    int32_t ecx_20 = data_ccf6a4
    int32_t (* var_28_9)[0x2] = &var_34
    int32_t (* var_2c_4)[0x25] = &var_d4
    var_34[1] = eax_10
    var_34[0] = data_ccf6a8
    int32_t eax_25 = sub_60ee00(&var_d4, edx_5, ecx_20, var_34[0], var_34[1], var_2c_4, var_28_9)
    int32_t* esi_3 = arg1
    int32_t var_38_1 = 0xffffffff
    void* i = sub_666120(eax_25, &data_be4900, esi_3, eax_25)
    void* ebx_2 = nullptr
    void* var_19d0_1 = nullptr
    
    if (eax_25 s<= 0)
    label_6108d1:
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(i)
        return i
    
    while (true)
        int32_t eax_27 = (&var_34)[ebx_2][0]
        var_30
        
        if (eax_27 == 0)
            void* ecx_28 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x6edc
            eax_7 = *(&var_30 + (ebx_2 << 3))
            
            if (eax_7 s< 0)
                var_24_1 = "SetGalleryUpdate"
                var_28_1 = 0xb4bc
                ecx_3 = "sets[n].setIdx >= 0"
                goto label_610b8f
            
            if (eax_7 s>= *(ecx_28 + 0x300))
                var_24_1 = "SetGalleryUpdate"
                var_28_1 = 0xb4bd
                ecx_3 = "sets[n].setIdx < saveSets.numSets"
                goto label_610b8f
            
            void* eax_34 = ecx_28 + eax_7 * 0xc
            void* var_24_10 = ebx_2
            sub_666380(eax_34, &data_be490c, esi_3, eax_34)
            goto label_6102e6
        
        eax_7 = eax_27 - 1
        
        if (eax_27 != 1)
            var_24_1 = "SetGalleryUpdate"
            var_28_1 = 0xb4c3
            ecx_3 = "Halt"
            goto label_610b8f
        
        eax_7 = *(&var_30 + (ebx_2 << 3))
        char* edx_6 = *(eax_7 + 8)
        
        if (edx_6 != 0)
            char* const var_19e0
            sub_63d720(&var_19e0, edx_6)
            int32_t var_8_4 = 2
            void* var_24_9 = ebx_2
            sub_666380(&var_19e0, &data_be490c, esi_3, &var_19e0)
            int32_t var_8_5 = 3
            
            if (data_cf65bc != 0)
                char* eax_30 = var_19e0
                
                if (eax_30 != 0 && *eax_30 != 0)
                    char* eax_31 = sub_63d4e0(&var_19e0)
                    int32_t temp5_1 = *(eax_31 + 4)
                    *(eax_31 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)
                        var_19e0 = &data_801800
            
            int32_t var_8_6 = 0xffffffff
        label_6102e6:
            int32_t* ecx_34 = arg1
            void* esi_4 = ebx_2 * 9
            int32_t var_19cc_1
            int32_t ebx_3
            int32_t edi_4
            
            if (*((esi_4 << 2) + &data_1a95884) == "tbl_sets"
                    && *((esi_4 << 2) + &data_1a95880) == ecx_34
                    && *((esi_4 << 2) + &data_1a95888) == ebx_2
                    && *((esi_4 << 2) + &data_1a9588c) == 0)
                edi_4 = *((esi_4 << 2) + &data_1a958a0)
                var_19cc_1 = edi_4
                
                if (edi_4 == 0)
                    goto label_610352
                
                uint32_t eax_35 = zx.d(edi_4.w)
                
                if (eax_35 u>= data_c23bac || *(eax_35 * 0x18d0 + data_c23ba8 + 0x18c8) != edi_4)
                    goto label_610352
                
                ebx_3 = edi_4
                goto label_6103e1
            
        label_610352:
            int32_t eax_38 = sub_67be20(ebx_2)
            edi_4 = eax_38
            var_19cc_1 = edi_4
            *((esi_4 << 2) + &data_1a958a0) = edi_4
            
            if (edi_4 != 0)
                ecx_34 = arg1
                *((esi_4 << 2) + &data_1a95888) = ebx_2
                ebx_3 = eax_38
                *((esi_4 << 2) + &data_1a95884) = "tbl_sets"
                *((esi_4 << 2) + &data_1a95880) = ecx_34
                *((esi_4 << 2) + &data_1a9588c) = 0
            label_6103e1:
                int64_t var_19f0
                void* esi_9
                
                if (eax_27 == 0)
                    uint32_t eax_55 = sub_64e7a0(ecx_34)
                    esi_9 = var_19d0_1
                    sub_665db0(eax_55, &data_be4918, eax_55, 0x3f800000, esi_9, 0)
                label_6105c1:
                    void var_3384
                    void var_19c4
                    memcpy(&var_19c4, sub_60ef80(&var_3384), 0x1990)
                    void var_19c0
                    void* eax_57 = &var_19c0
                    int32_t ecx_53 = 0
                    var_19c8 = &var_19c0
                    void* ebx_4 = nullptr
                    
                    while (true)
                        if (*(eax_57 - 4) == 1)
                            void* esi_10 = (ebx_4 + esi_9 * 0xe) * 9
                            int32_t* edi_5
                            
                            if (*((esi_10 << 2) + &data_1a95914) == "tbl_cards"
                                    && *((esi_10 << 2) + &data_1a95910) == edi_4
                                    && *((esi_10 << 2) + &data_1a95918) == ebx_4
                                    && *((esi_10 << 2) + &data_1a9591c) == 0)
                                edi_5 = *((esi_10 << 2) + &data_1a95930)
                                
                                if (edi_5 == 0)
                                    goto label_61066c
                                
                                uint32_t eax_63 = zx.d(edi_5.w)
                                
                                if (eax_63 u>= data_c23bac
                                        || *(eax_63 * 0x18d0 + data_c23ba8 + 0x18c8) != edi_5)
                                    goto label_61066c
                                
                                goto label_6106b7
                            
                        label_61066c:
                            edi_5 = sub_67be20(ebx_4)
                            *((esi_10 << 2) + &data_1a95930) = edi_5
                            
                            if (edi_5 != 0)
                                *((esi_10 << 2) + &data_1a95914) = "tbl_cards"
                                *((esi_10 << 2) + &data_1a95910) = var_19cc_1
                                *((esi_10 << 2) + &data_1a95918) = ebx_4
                                *((esi_10 << 2) + &data_1a9591c) = 0
                            label_6106b7:
                                void* eax_68 = sub_571b30(*var_19c8, 0x18)
                                int32_t** edx_17 = *(eax_68 + 0x60)
                                
                                if (edx_17 != 0)
                                    sub_618270(eax_68, *edx_17, &data_be15bc, 0)
                                
                                uint32_t eax_69 = sub_64e7a0(edi_5)
                                sub_665db0(eax_69, eax_68 + 0x74, eax_69, 0x3f800000, 0xffffffff, 0)
                                uint32_t eax_70 = sub_64e7a0(edi_5)
                                char var_2c_7 = 0
                                var_34[1] = 0xffffffff
                                void* eax_71 = sub_665db0(eax_70, &data_be3d98, eax_70, 0x3f800000, 
                                    var_34[1], var_2c_7)
                                var_34[0] = 0
                                sub_5e0df0(
                                    sub_5e01b0(eax_71, eax_68, edi_5, nullptr, 0, var_34[0]), 
                                    eax_68, edi_5, nullptr)
                                sub_5defb0(edi_5, eax_68)
                                sub_4d3b70(edi_5)
                            
                            esi_9 = var_19d0_1
                            ecx_53 += 1
                        
                        ebx_4 += 1
                        eax_57 = &var_19c8[0x10]
                        var_19c8 = eax_57
                        
                        if (ebx_4 s>= 0xa)
                            break
                        
                        edi_4 = var_19cc_1
                    
                    int32_t var_24_22 = 0xffffffff
                    sub_666120(eax_57, &data_be61d0, var_19cc_1, ecx_53)
                    
                    if (eax_27 != 0)
                        eax_7 = eax_27 - 1
                        
                        if (eax_27 != 1)
                            var_24_1 = "SetGalleryUpdate"
                            var_28_1 = 0xb564
                            ecx_3 = "Halt"
                            goto label_610b8f
                        
                        i = &data_86ec94
                        char const (** const i_3)[0x9] = &data_86ec94
                        var_19c8 = *(&var_30 + (esi_9 << 3)) + 0x48
                        void* edi_7 = esi_9 * 0x6c + &data_1a960f4
                        
                        do
                            char* esi_12 = *i
                            int32_t ebx_5
                            
                            if (*edi_7 == esi_12 && *(edi_7 - 4) == var_19cc_1
                                    && *(edi_7 + 4) == 0xffffffff)
                                ebx_5 = *(edi_7 + 0x1c)
                                
                                if (ebx_5 == 0)
                                    goto label_6107f7
                                
                                uint32_t eax_76 = zx.d(ebx_5.w)
                                
                                if (eax_76 u>= data_c23bac
                                        || *(eax_76 * 0x18d0 + data_c23ba8 + 0x18c8) != ebx_5)
                                    goto label_6107f7
                                
                                goto label_61081c
                            
                        label_6107f7:
                            ebx_5 = sub_67bd70(var_19cc_1, esi_12)
                            *(edi_7 + 0x1c) = ebx_5
                            
                            if (ebx_5 != 0)
                                *edi_7 = esi_12
                                *(edi_7 - 4) = var_19cc_1
                                *(edi_7 + 4) = 0xffffffff
                            label_61081c:
                                int32_t ecx_71 = *var_19c8
                                uint32_t eax_84
                                
                                if (ecx_71 == 0)
                                    eax_84 = sub_64e7a0(ebx_5)
                                    sub_665db0(eax_84, &data_be4948, eax_84, 0x3f800000, 
                                        0xffffffff, 0)
                                else
                                    char var_19d6
                                    int32_t eax_82 = sub_5f8b10(sub_60eb90(ecx_71, &var_19d6))
                                    uint32_t eax_83 = sub_64e7a0(ebx_5)
                                    sub_665db0(eax_83, eax_82, eax_83, 0x3f800000, 0xffffffff, 0)
                                    
                                    if (var_19d6 != 0)
                                        eax_84 = sub_64e7a0(ebx_5)
                                        sub_665db0(eax_84, &data_be61dc, eax_84, 0x3f800000, 
                                            0xffffffff, 0)
                            
                            edi_7 += 0x24
                            var_19c8 = &var_19c8[4]
                            i = &i_3[1]
                            i_3 = i
                        while (i s< &data_86eca0)
                        
                    label_6108b2:
                        esi_3 = arg1
                        ebx_2 = var_19d0_1
                        goto label_6108bb
                    
                    void* eax_86 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
                    eax_7 = *(&var_30 + (esi_9 << 3))
                    
                    if (eax_7 s< 0)
                        var_24_1 = "SetGalleryUpdate"
                        var_28_1 = 0xb532
                        ecx_3 = "sets[n].setIdx >= 0"
                        goto label_610b8f
                    
                    if (eax_7 s>= *(eax_86 + 0x71dc))
                        var_24_1 = "SetGalleryUpdate"
                        var_28_1 = 0xb533
                        ecx_3 = "sets[n].setIdx < saveSets.numSets"
                        goto label_610b8f
                    
                    char* edx_27 = nullptr
                    int32_t edi_8 = *(eax_86 + eax_7 * 0xc + 0x6ee4)
                    int32_t esi_14 = 1
                    ebx_4.b = 0
                    
                    for (int128_t* const i_1 = &data_77fea0; i_1 != &data_77fee8; )
                        int32_t ecx_84 = *i_1
                        
                        if ((edi_8 & esi_14) != 0)
                            if (ecx_84 != 0x13)
                                var_d4[edx_27] = ecx_84
                                edx_27 = &edx_27[1]
                            else
                                ebx_4.b = 1
                        
                        i_1 += 4
                        esi_14 *= 2
                    
                    var_19c8 = edx_27
                    
                    if (ebx_4.b != 0)
                        var_d4[edx_27] = 0x13
                        edx_27 = &edx_27[1]
                        var_19c8 = edx_27
                    
                    int32_t edi_9 = 0
                    void* eax_89 = var_19d0_1 * 3
                    var_19f0:4.d = eax_89
                    
                    while (true)
                        int32_t ecx_85
                        
                        if (edx_27 == 1)
                            ecx_85 = edi_9
                        else if (edx_27 != 2)
                            ecx_85 = 2 - edi_9
                        else
                            ecx_85 = 1 - edi_9
                            
                            if (edi_9 u> 1)
                                ecx_85 = edi_9
                        
                        void* esi_15 = (eax_89 + edi_9) * 9
                        char* eax_91 = (&data_86ec94)[ecx_85]
                        char* var_19d4_3 = eax_91
                        
                        if (*((esi_15 << 2) + &data_1a960f4) != eax_91
                                || *((esi_15 << 2) + &data_1a960f0) != var_19cc_1
                                || *((esi_15 << 2) + &data_1a960f8) != 0xffffffff)
                            goto label_610a1a
                        
                        void* i_4 = *((esi_15 << 2) + &data_1a96110)
                        
                        if (i_4 == 0)
                            goto label_610a1a
                        
                        uint32_t edx_28 = zx.d(i_4.w)
                        char* edx_29 = var_19c8
                        
                        if (edx_28 u>= data_c23bac)
                            goto label_610a1a
                        
                        if (*(edx_28 * 0x18d0 + data_c23ba8 + 0x18c8) == i_4)
                            goto label_610a59
                        
                        eax_91 = var_19d4_3
                    label_610a1a:
                        i = sub_67bd70(var_19cc_1, eax_91)
                        i_4 = i
                        *((esi_15 << 2) + &data_1a96110) = i_4
                        
                        if (i_4 != 0)
                            edx_29 = var_19c8
                            *((esi_15 << 2) + &data_1a960f4) = var_19d4_3
                            *((esi_15 << 2) + &data_1a960f0) = var_19cc_1
                            *((esi_15 << 2) + &data_1a960f8) = 0xffffffff
                        label_610a59:
                            uint32_t eax_96
                            void** edx_31
                            
                            if (edi_9 s< edx_29)
                                if (edi_9 == 2 && edx_29 s> 3)
                                    uint32_t eax_98 = sub_64e7a0(i_4)
                                    sub_665db0(eax_98, &data_be4948, eax_98, 0x3f800000, 
                                        0xffffffff, 0)
                                    esi_3 = arg1
                                    uint32_t eax_99 = sub_64e7a0(esi_3)
                                    ebx_2 = var_19d0_1
                                    char var_2c_8 = 0
                                    var_34[1] = ebx_2
                                    i = sub_665db0(eax_99, &data_be4954, eax_99, 0x3f800000, 
                                        var_34[1], var_2c_8)
                                    break
                                
                                void** eax_97 = sub_5f8b10(var_d4[edi_9])
                                eax_96 = sub_64e7a0(i_4)
                                edx_31 = eax_97
                            else
                                eax_96 = sub_64e7a0(i_4)
                                edx_31 = &data_be4948
                            
                            i = sub_665db0(eax_96, edx_31, eax_96, 0x3f800000, 0xffffffff, 0)
                        
                        edi_9 += 1
                        
                        if (edi_9 s>= 3)
                            goto label_6108b2
                        
                        edx_27 = var_19c8
                        eax_89 = var_19f0:4.d
                    
                    goto label_6108bb
                
                eax_7 = eax_27 - 1
                
                if (eax_27 != 1)
                    var_24_1 = "SetGalleryUpdate"
                    var_28_1 = 0xb4f3
                    ecx_3 = "Halt"
                    goto label_610b8f
                
                void* esi_6 = *(&var_30 + (var_19d0_1 << 3))
                char* edx_10 = *(esi_6 + 8)
                
                if (edx_10 != 0)
                    char* const var_19e4
                    sub_63d720(&var_19e4, edx_10)
                    void* var_24_13 = var_19d0_1
                    int32_t var_8_7 = 4
                    sub_666380(&var_19e4, &data_be490c, arg1, &var_19e4)
                    int32_t var_8_8 = 5
                    
                    if (data_cf65bc != 0)
                        char* eax_44 = var_19e4
                        
                        if (eax_44 != 0 && *eax_44 != 0)
                            char* eax_45 = sub_63d4e0(&var_19e4)
                            int32_t temp12_1 = *(eax_45 + 4)
                            *(eax_45 + 4) -= 1
                            
                            if (temp12_1 == 1)
                                sub_64c080(eax_45, *(eax_45 + 0xc) + 0x10)
                                var_19e4 = &data_801800
                    
                    int32_t var_8_9 = 0xffffffff
                    int32_t i_2 = *(esi_6 + 4) + 0x10c8e0
                    void* eax_46 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
                    int32_t* eax_48 =
                        *(*(eax_46 + 0x429c) + (((i_2 s>> 4 | i_2) & *(eax_46 + 0x42a0)) << 2))
                    int32_t ecx_45
                    
                    if (eax_48 == 0)
                    label_6104ce:
                        var_19f0 = 0
                        ecx_45 = 0
                    else
                        while (i_2 != *eax_48)
                            eax_48 = eax_48[6]
                            
                            if (eax_48 == 0)
                                goto label_6104ce
                        
                        if (eax_48 == 0xfffffff8)
                            goto label_6104ce
                        
                        ecx_45 = eax_48[4]
                        var_19f0:4.d = eax_48[5]
                    
                    int32_t var_19f4
                    bool var_19d5
                    
                    if (sub_4c3830(&var_19f4, &var_19d5, ecx_45, &var_19f4) == 0)
                        uint32_t eax_54 = sub_64e7a0(edi_4)
                        sub_665db0(eax_54, &data_be4918, eax_54, 0x3f800000, 0xffffffff, 0)
                        esi_9 = var_19d0_1
                    else
                        void** esi_8 = &data_be4930
                        
                        if (var_19d5 == 0)
                            esi_8 = &data_be493c
                        
                        uint32_t eax_51 = sub_64e7a0(ebx_3)
                        sub_665db0(eax_51, esi_8, eax_51, 0x3f800000, 0xffffffff, 0)
                        sub_5fa230(edi_4, var_19f4)
                        esi_9 = var_19d0_1
                    
                    goto label_6105c1
            else
                esi_3 = arg1
                uint32_t eax_39 = sub_64e7a0(esi_3)
                sub_665db0(eax_39, &data_be4924, eax_39, 0x3f800000, ebx_2, edi_4.b)
                uint32_t eax_40 = sub_64e7a0(esi_3)
                char var_2c_5 = edi_4.b
                var_34[1] = ebx_2
                i = sub_665db0(eax_40, &data_be4918, eax_40, 0x3f800000, var_34[1], var_2c_5)
            label_6108bb:
                ebx_2 += 1
                var_19d0_1 = ebx_2
                
                if (ebx_2 s>= eax_25)
                    goto label_6108d1
                
                continue
        
        var_24_1 = "XString::XString"
        var_28_1 = 0x94
        var_2c_9 = "C:\x\ax2017\Engine\xString.cpp"
        ecx_3 = &data_871e0c
        break
else
    eax_7 = eax_5 - 1
    
    if (eax_5 == 1)
        esi_1 = &data_be496c
        goto label_60ffd9
    
    var_24_1 = "SetGalleryUpdate"
    var_28_1 = 0xb48c
    ecx_3 = "Halt"
label_610b8f:
    var_2c_9 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
sub_63b870(eax_7, &data_801800, ecx_3, var_2c_9, var_28_1, var_24_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
