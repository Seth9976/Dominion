// 函数: sub_618ce0
// 地址: 0x618ce0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_cf4 = arg12
int32_t edx = arg3
int32_t var_cbc = arg13
void* i_9 = data_cc8dc0
uint32_t i_2 = arg5
char const* const var_da4_1
int32_t var_da0_1
char const* const var_d9c_1
char* ecx

if (i_9 != 0)
    int32_t i_17 = *(i_9 + 8)
    i_9 = i_17
    
    if (i_17 == 0)
        void* ecx_1 = data_cc8d5c
        
        if (ecx_1 != 0)
            if (*(ecx_1 + 0x5068) == 1)
                i_9 = sub_617cf0(sub_4b9480())
            label_618da2:
                ecx_1 = data_cc8d5c
            
            int128_t* var_dac_1
            int32_t* var_da8_2
            int32_t* var_da4_4
            uint32_t var_da0_15
            int32_t var_d9c_18
            int32_t var_d60
            void var_d44
            int128_t var_d40
            int128_t var_d30
            int128_t var_d20
            int128_t var_d10
            void* i_14
            uint32_t i_4
            int32_t* i_5
            void* i_6
            int128_t var_cb0
            int128_t var_ca0
            int128_t var_70
            void* eax_9
            void* ecx_12
            void* i_7
            void* ecx_69
            uint32_t ecx_160
            uint32_t ecx_173
            int32_t ecx_174
            int32_t edx_29
            uint32_t ebx
            void* i_35
            void* i_21
            void* i_22
            void* i_23
            void* i_27
            int128_t xmm0_8
            
            switch (edx)
                case 0
                    uint32_t var_cbc_1 = arg6
                    int32_t var_cc0_1
                    
                    if (arg6 == 0)
                        var_cc0_1 = 0
                        var_cbc_1 = 0
                    else if (arg6 != 0xffffffff)
                        var_cc0_1 = 0xfffffffe
                    else
                        var_cc0_1 = 0xffffffff
                        var_cbc_1 = 0
                    
                    void* eax_31 = sub_5ce6d0(sub_6068a0(*(*(arg4 * 0x64 + 0xb82520) + 0x8c)), i_2, 
                        arg2, 0, 0, 0)
                    void* i_39
                    int32_t edx_18
                    i_39, edx_18 = sub_637730(&data_b809e0)
                    i_35 = i_39
                    *(i_35 + 0x2c) = 0
                    *(i_35 + 0x98) = arg4
                    *(i_35 + 0xa0) = *(eax_31 + 0x58)
                    int32_t eax_32 = *(eax_31 + 0x5c)
                    *(i_35 + 0xa4) = eax_32
                    *(i_35 + 0xc0) = 1
                    *(i_35 + 0xbc) = 1
                    *(i_35 + 0x9c) = 0
                    
                    if (*(eax_31 + 0x5c) == 6)
                        uint32_t esi_2 = zx.d(arg4.w)
                        
                        if (esi_2 u>= 0x320)
                            sub_591930()
                        
                        i_22 = sub_5cc6c0(*(esi_2 * 0x64 + &data_b82524))
                        i_27 = sub_5cd7d0(i_35, i_22)
                        *(i_35 + 0xb0) = i_27
                        *(i_35 + 0x9c) = *(i_22 + 0x1c28)
                        goto label_619433
                    
                    uint32_t eax_37 = zx.d(sub_5cbaa0(eax_32, edx_18, i_35, 0x800, 0x200)) ^ 1
                    i_9 = sub_5ce300(eax_37, eax_31, i_35, eax_37.b, var_cc0_1, var_cbc_1)
                    int32_t ecx_67 = *(i_35 + 0x9c)
                    *(i_35 + 0xb0) = i_9
                    
                    if (ecx_67 == *(eax_31 + 0x1c28))
                        int32_t* eax_39 = sub_5cc540(&var_d60, *(i_35 + 0xa4), *(eax_31 + 0x378), 
                            &var_d60, 0, 0, *(i_35 + 0xa0), i_9, i_35)
                        var_70 = *eax_39
                        int128_t var_60_2 = *(eax_39 + 0x10)
                        int128_t var_50_2 = *(eax_39 + 0x20)
                        int128_t var_40_2 = *(eax_39 + 0x30)
                        int128_t var_30_2 = *(eax_39 + 0x40)
                        xmm0_8 = *(eax_39 + 0x50)
                        ecx_69 = i_35 + 0x258
                        goto label_619579
                    
                    var_d9c_1 = "DomCreateCard"
                    var_da0_1 = 0xc3bb
                    ecx = "gfx.card.pile == GetId(pile)"
                labelid_4:
                    var_da4_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                case 1
                    uint32_t eax_25 = sub_5ce550(i_2, arg6)
                    CookieCheckFunction(eax_25)
                    return eax_25
                case 2
                    uint32_t eax_23 = sub_5cc4b0(0, 0)
                    *(eax_23 + 0x34) = arg6
                    *(eax_23 + 0x38) = arg7
                    *(eax_23 + 0x3c) = arg8
                    *(eax_23 + 0x40) = arg9
                    CookieCheckFunction(eax_23)
                    return eax_23
                case 3
                    uint32_t eax_24 = sub_5cc4b0(0, 0)
                    *(eax_24 + 0x44) = arg6
                    *(eax_24 + 0x48) = arg7
                    *(eax_24 + 0x4c) = arg8
                    *(eax_24 + 0x50) = arg9
                    CookieCheckFunction(eax_24)
                    return eax_24
                case 4
                    data_b809c8 = arg6
                    data_b809cc = arg2
                    data_b809d0 = i_2
                    void* eax_100 = sub_5cc5e0(arg2)
                    
                    if (arg7 == 0)
                        *(eax_100 + 0x30) += 1
                    else
                        void* eax_101 = sub_5cc5e0(data_b809d0)
                        *(eax_101 + 0x2c) += 1
                    
                    i_9 = data_cc8d5c
                    *(eax_100 + 0x1934) = 0
                    
                    if (i_9 == 0)
                        goto label_618d71
                    
                    int32_t ecx_158 = *(i_9 + 0x7590)
                    
                    if (i_2 == ecx_158)
                        if (arg14.b == 0)
                            int32_t* edx_66
                            
                            if (arg2 != ecx_158)
                                edx_66 = data_171e770
                                int32_t var_d9c_44 = 0
                            else
                                edx_66 = data_171e76c
                                int32_t var_d9c_43 = 1
                            
                            int32_t var_da0_34 = ecx_158
                            sub_5af930(i_9, edx_66, ecx_158.b)
                            i_9 = data_cc8d5c
                        
                        if (i_2 != arg2)
                            if (i_9 == 0)
                                goto label_618d71
                            
                            if (i_2 == *(i_9 + 0x7590))
                                data_b604cc = 1
                    
                    int32_t* eax_102
                    char* edx_67
                    eax_102, edx_67 = sub_5e3120(arg2, 1)
                    *edx_67 = 0
                    
                    if (*eax_102 != 0)
                        uint32_t var_d9c_45 = arg2
                        sub_5e2d10(eax_102, 0, 1, arg2)
                    
                    ecx_160 = arg2
                    char* edx_68
                    i_9, edx_68 = sub_5e3120(ecx_160, 9)
                    *edx_68 = 0
                    
                    if (*i_9 == 0)
                        goto label_619325
                    
                    goto label_61a0ff
                case 5
                    if (arg14.b != 0 || i_2 != 4)
                        goto label_619325
                    
                    int32_t var_d9c_42 = 0
                    void* var_da0_33 = ecx_1
                    uint32_t eax_98 = sub_5af930(i_9, data_171e6dc, ecx_1.b)
                    CookieCheckFunction(eax_98)
                    return eax_98
                case 6
                    data_b7fcf8.w = 0
                    data_b7fcfa = 0
                    
                    if (arg14.b == 0 && i_2 != 0)
                        if (ecx_1 == 0)
                            goto label_618d71
                        
                        if (data_b809d0 == *(ecx_1 + 0x7590))
                            data_b604cc = 3
                    
                    void* eax_105 = data_b809e4 * 0x1c30
                    void* i = data_b809e0
                    data_b809cc = 0xffffffff
                    data_b809d0 = 0xffffffff
                    i_5 = &data_b809e0
                    void* eax_106 = eax_105 + i
                    
                    if (i u>= eax_106)
                    label_61a1a6:
                        i = 0xffffffff
                    else
                        while ((*(i + 0x1c28) & 0xffff0000) == 0)
                            i += 0x1c30
                            
                            if (i u>= eax_106)
                                goto label_61a1a6
                    
                    i_6 = i
                    
                    for (; i != 0xffffffff; i = i_6)
                        if (*(i + 0x2c) == 0)
                            int32_t eax_107 = *(i + 0xa4)
                            
                            if (eax_107 != 0x3e9 && eax_107 != 0x451)
                                *(i + 0x10c) = 0
                            
                            uint32_t edi_9 = zx.d((*(i + 0x98)).w)
                            
                            if (edi_9 u>= 0x320)
                                edx = sub_591930()
                            
                            int32_t eax_108 = edi_9 * 0x64
                            
                            if (*(eax_108 + &data_b82524) == 0x130a)
                                *(i + 0x10c) = 0
                            
                            if (*(i + 0xa4) == 0x3e9)
                                int32_t edx_69
                                i_9, edx_69 = sub_5cbaa0(eax_108, edx, i, &data_1000000, 0)
                                
                                if (i_9.b != 0)
                                label_61a254:
                                    
                                    if (*(i + 0x168) == 0)
                                        int32_t ecx_168 = *(i + 0xa8)
                                        
                                        if (ecx_168 == 0x3ec)
                                            var_d9c_1 = "ResolveEffect"
                                            var_da0_1 = 0xd32e
                                            ecx = "whereFate != CW_PLAYER_DISCARD"
                                            goto label_61af4b_2
                                        
                                        if (ecx_168 == 0)
                                            var_d9c_1 = "ResolveEffect"
                                            var_da0_1 = 0xd32f
                                            ecx = "whereFate != CW_NONE"
                                            goto label_61af4b_2
                                        
                                        int32_t var_d9c_50 = 0
                                        int128_t* var_da0_40 = 8
                                        char var_da4_22 = arg14.b
                                        uint32_t var_da8_17 = 1
                                        uint32_t var_dac_14 = &data_7feed4
                                        uint32_t eax_110 = sub_5cc4b0(0, 0)
                                        sub_5f2290(eax_110, i, arg2, eax_110, var_dac_14, 
                                            var_da8_17, var_da4_22, var_da0_40)
                                    else
                                        uint32_t eax_109 = sub_5cba00(*(i + 0x9c))
                                        sub_5ce1b0(eax_109, eax_109, i, arg14.b, 0)
                                        sub_5cb5a0(i)
                                else
                                    i_9 = sub_5cbaa0(i_9, edx_69, i, 0x2000000, 0)
                                    
                                    if (i_9.b != 0)
                                        goto label_61a254
                        
                        edx = sub_6376d0(i_5, &i_6)
                    
                    uint32_t var_d9c_52 = arg2
                    *sub_5e3120(arg2, 1) = 0
                    sub_5e2c70(1, arg2)
                    uint32_t var_d9c_53 = arg2
                    *sub_5e3120(arg2, 9) = 0
                    sub_5e2c70(9, arg2)
                    ecx_173 = arg2
                    *sub_5e3120(ecx_173, 0xe) = 0
                    goto label_61a334
                case 7, 0xf, 0x1d, 0x1e
                    goto label_619325
                case 8
                    char ebx_2 = arg14.b
                    
                    if (ebx_2 == 0)
                        uint32_t eax_52 = zx.d(arg4.w)
                        uint32_t var_cc4_2 = eax_52
                        
                        if (eax_52 u>= 0x320)
                            sub_591930()
                        
                        eax_52.b = i_2 != 0
                        uint32_t eax_53 = zx.d(eax_52.b)
                        uint32_t var_d9c_19 = eax_53
                        sub_5afa40(eax_53, *(var_cc4_2 * 0x64 + &data_b82524), ecx_1.b)
                    
                    int32_t edx_32
                    i_9, edx_32 = sub_5de8b0(arg4)
                    i_23 = i_9
                    
                    if (i_23 != 0)
                        if (ebx_2 != 0)
                            goto label_619325
                        
                        i_9, edx_29 = sub_5cbaa0(i_9, edx_32, i_23, 0x400, 0)
                        
                        if (i_9.b == 0)
                            var_d9c_18 = 0
                            var_da0_15 = 0x8000000
                            goto label_619728
                        
                    label_61973e:
                        i_9 = sub_5cba00(*(i_23 + 0x9c))
                        
                        if (*(i_9 + 0x1a18) s> 0 && *(i_9 + 0x4a0) == 9)
                            goto label_619325
                        
                        i_14 = i_9
                        var_da4_4 = data_171cb64
                        var_da8_2 = i_9 + 0x1a30
                        var_dac_1 = &var_cb0:8
                        eax_9 = i_9 + 0x370
                        ecx_12 = i_9 + 0x258
                        goto label_618ee8
                    
                    var_d9c_1 = "LookupCard"
                    var_da0_1 = 0x3d96
                    ecx = &data_871964
                labelid_4:
                    var_da4_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                case 9
                    i_5 = arg6
                    i_6 = arg7
                    i_9 = sub_5de8b0(arg4)
                    void* i_15 = i_9
                    int32_t var_da0_19
                    char const* const var_d9c_23
                    char* ecx_100
                    
                    if (i_9 == 0)
                        var_d9c_23 = "LookupCard"
                        var_da0_19 = 0x3d96
                        ecx_100 = &data_871964
                    label_61af85:
                        sub_63b870(i_9, &data_801800, ecx_100, 
                            "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_da0_19, var_d9c_23)
                        
                        if (sub_63bc30() == 0)
                            sub_63bb00()
                            noreturn
                        
                        breakpoint
                    
                    if (*(i_9 + 0xa4) == 3)
                        var_d9c_23 = "ResolveEffect"
                        var_da0_19 = 0xd114
                    label_61af76:
                        ecx_100 = "Halt"
                        goto label_61af85
                    
                    int64_t var_cf0
                    
                    if (sub_59dc70(&var_cf0:4, i_2, 0xb80ad8, &var_cf0:4) != 0 && arg8 != 0x17)
                        i_9 = i_15
                        *(i_9 + 0xa8) = i_2
                        
                        if (i_2 != 0x3ec)
                            if (i_2 != 0)
                                goto label_619325
                            
                            var_d9c_23 = "ResolveEffect"
                            var_da0_19 = 0xd11d
                            ecx_100 = "where != CW_NONE"
                            goto label_61af85
                        
                        var_d9c_23 = "ResolveEffect"
                        var_da0_19 = 0xd11c
                        ecx_100 = "where != CW_PLAYER_DISCARD"
                        goto label_61af85
                    
                    if (i_2 == 0x3ee || i_2 == 0x3ef || i_2 == 0x3f0)
                        i_9.b = 1
                    else
                        i_9.b = 0
                        var_cf0 = 0
                        int32_t var_cec
                        var_cbc = var_cec
                        var_cf4 = var_cf0.d
                    
                    int32_t edx_40 = arg9
                    
                    if (i_9.b == 0)
                        edx_40 = 0
                    
                    if (i_2 == 5)
                        var_d9c_23 = "ResolveEffect"
                        var_da0_19 = 0xd131
                        ecx_100 = "where != CW_BOARD_MOUSE"
                        goto label_61af85
                    
                    i_9 = i_15
                    
                    if (i_2 != 0x451 && i_2 != 0x3e9)
                        *(i_9 + 0x10c) = 0
                    
                    int32_t ecx_103 = *(i_9 + 0xa4)
                    int32_t ecx_104 = *(i_9 + 0xa0)
                    
                    if (*(i_9 + 0x2c) != 0)
                        var_d9c_23 = "ResolveEffect"
                        var_da0_19 = 0xd153
                        ecx_100 = "gfx.type == DOMGFX_CARD"
                        goto label_61af85
                    
                    uint32_t ecx_105 = 0xffffffff
                    
                    if (i_2 - 1 u> 0x47)
                        ecx_105 = arg2
                    
                    if (i_2 == 6)
                        i_35 = i_15
                        uint32_t esi_6 = zx.d((*(i_35 + 0x98)).w)
                        
                        if (esi_6 u>= 0x320)
                            sub_591930()
                        
                        int32_t ecx_106 = *(i_35 + 0x9c)
                        i_9 = esi_6 * 0x64
                        int32_t esi_7 = *(i_9 + &data_b82524)
                        
                        if (ecx_106 == 0)
                            goto label_619325
                        
                        i_9 = zx.d(ecx_106.w)
                        
                        if (i_9 u>= data_b809e4)
                            goto label_619325
                        
                        i_9 = i_9 * 0x1c30 + data_b809e0
                        
                        if (*(i_9 + 0x1c28) != ecx_106)
                            goto label_619325
                        
                        uint32_t eax_69 = sub_5cba00(ecx_106)
                        i_9 = sub_5cc6c0(esi_7)
                        i_22 = i_9
                        
                        if (eax_69 == i_22)
                            goto label_619325
                        
                        if (*(eax_69 + 0x5c) != 0x3f1)
                            sub_5cd880(i_35, eax_69)
                        else
                            sub_5cd3e0(i_35)
                        
                        i_9 = sub_5cd7d0(i_35, i_22)
                        bool cond:15_1 = *(i_35 + 0x2c) == 0
                        i_27 = i_9
                        *(i_35 + 0xb0) = i_27
                        *(i_35 + 0x9c) = *(i_22 + 0x1c28)
                        
                        if (cond:15_1)
                        label_619433:
                            int32_t esi_3 = *(i_22 + 0x5c)
                            memset(&var_d44, 0, 0x40)
                            var_d60 = 7
                            int64_t var_d50_1 = 0
                            int32_t var_d5c_1 = esi_3
                            int32_t var_d58_1 = 0xffffffff
                            void* i_30 = i_27
                            int32_t var_d48_1 = 0
                            void* i_38 = i_35
                            var_70 = var_d60.o
                            int128_t var_60_1 = var_d50_1.o
                            int128_t var_50_1 = var_d40
                            int128_t var_40_1 = var_d30
                            int128_t var_30_1 = var_d20
                            xmm0_8 = var_d10
                            ecx_69 = i_35 + 0x258
                            goto label_619579
                        
                        var_d9c_23 = "ResolveEffect"
                        var_da0_19 = 0xd17d
                        ecx_100 = "gfx.type == DOMGFX_CARD"
                        goto label_61af85
                    
                    i_9 = sub_5ce6d0(i_2 - 1, i_2, ecx_105, var_cf4, var_cbc, edx_40)
                    void* i_34 = i_15
                    uint32_t i_20 = i_9
                    *(i_34 + 0x118) = 0
                    
                    if (i_2 != 0x3e9)
                        *(i_34 + 0x104) = 0
                    
                    if (arg8 u> 0x18)
                        var_d9c_23 = "ResolveEffect"
                        var_da0_19 = 0xd230
                        goto label_61af76
                    
                    uint32_t eax_72
                    
                    switch (arg8)
                        case nullptr
                            char ebx_3 = arg14.b
                            int32_t ecx_115
                            i_9, ecx_115 =
                                sub_5f2d80(&i_5, arg4, arg2, i_20, &i_5, 1, ebx_3, arg8, 0)
                            
                            if (ebx_3 == 0)
                                int32_t var_d9c_31 = 0
                                int32_t var_da0_24 = ecx_115
                                i_9 = sub_5af930(i_9, data_171e6ec, ecx_115.b)
                        case 1, 7, 0xb, 0xc, 0xd, 0xe, 0x14, 0x16
                            i_9 = sub_5f2d80(&i_5, arg4, arg2, i_20, &i_5, 1, arg14.b, arg8, 0)
                        case 2, 3
                            if (arg2 != 0xffffffff)
                                void* eax_71 = sub_5cc5e0(arg2)
                                i_34 = *(eax_71 + 0x1934)
                                *(eax_71 + (i_34 << 3) + 0x34) = 0
                                *(eax_71 + (i_34 << 3) + 0x38) = arg4
                                *(eax_71 + 0x1934) += 1
                            
                            eax_72 = arg14
                            
                            if (eax_72.b != 0)
                                goto label_619c18
                            
                            if (arg4.w u>= 0x320)
                                eax_72 = sub_591930()
                            
                            int32_t var_d9c_26 = 0
                            void* i_36 = i_34
                            sub_5af930(eax_72, data_171e728, i_34.b)
                            goto label_619c15
                        case 4, 5, 6
                            char eax_80 = arg14.b
                            
                            if (eax_80 == 0)
                                uint32_t eax_81 = zx.d(arg4.w)
                                
                                if (eax_81 u>= 0x320)
                                    sub_591930()
                                
                                sub_5afbd0(arg2, *(eax_81 * 0x64 + &data_b82524))
                                eax_80 = arg14.b
                            
                            sub_5f2d80(&i_5, arg4, arg2, i_20, &i_5, 1, eax_80, arg8, 0)
                            i_9 = sub_5cc5e0(arg2)
                            int32_t ecx_124 = *(i_9 + 0x1934)
                            *(i_9 + (ecx_124 << 3) + 0x34) = 1
                            *(i_9 + (ecx_124 << 3) + 0x38) = arg4
                            *(i_9 + 0x1934) += 1
                        case 8, 0x17
                            int32_t var_d9c_29 = 0
                            char var_da4_15 = arg14.b
                            *(i_34 + 0x104) = 0
                            i_9 = sub_5f2d80(&i_5, arg4, arg2, i_20, &i_5, 1, var_da4_15, arg8, 
                                var_d9c_29)
                        case 9, 0x10, 0x12, 0x13, 0x15
                            int32_t ecx_116 = *(i_34 + 0xa0)
                            
                            if (ecx_116 != 0xffffffff)
                                void* eax_77 = sub_5cc5e0(ecx_116)
                                int32_t ecx_117 = *(eax_77 + 0x1934)
                                *(eax_77 + (ecx_117 << 3) + 0x34) = 2
                                *(eax_77 + (ecx_117 << 3) + 0x38) = arg4
                                *(eax_77 + 0x1934) += 1
                            
                            i_9 = sub_5f2d80(&i_5, arg4, arg2, i_20, &i_5, 1, arg14.b, arg8, 0)
                        case 0xa
                            void* eax_79 = sub_5cc5e0(arg2)
                            int32_t var_d9c_27 = 0
                            char var_da4_14 = arg14.b
                            int32_t ecx_120 = *(eax_79 + 0x1934)
                            uint32_t var_da8_9 = 1
                            *(eax_79 + (ecx_120 << 3) + 0x34) = 1
                            *(eax_79 + (ecx_120 << 3) + 0x38) = arg4
                            *(eax_79 + 0x1934) += 1
                            i_9 = sub_5f2d80(&i_5, arg4, arg2, i_20, &i_5, var_da8_9, var_da4_14, 
                                arg8, var_d9c_27)
                        case 0xf
                            uint32_t eax_74 = arg14
                            
                            if (eax_74.b == 0)
                                int32_t var_d9c_28 = 0
                                void* i_37 = i_34
                                sub_5af930(eax_74, data_171e75c, i_34.b)
                                eax_74 = arg14
                            
                            i_9 = sub_5f2d80(&i_5, arg4, arg2, i_20, &i_5, 3, eax_74.b, arg8, 0)
                        case 0x11
                        label_619c15:
                            eax_72 = arg14
                        label_619c18:
                            i_9 = sub_5f2d80(&i_5, arg4, arg2, i_20, &i_5, 2, eax_72.b, arg8, 0)
                        case 0x18
                            i_9 = sub_5f2d80(&i_5, arg4, arg2, i_20, &i_5, 0, 1, arg8, 0)
                    
                    if (ecx_103 == 0x3ea)
                        i_9 = sub_5d1210(i_9, 0x3ea, ecx_104, 0, 0)
                        
                        if (i_9 == 0)
                            *(sub_5cc5e0(ecx_104) + 0x4d0c) = 0
                            int32_t edi_7 = data_8db5c4
                            void* i_24 = data_8db5d8
                            int32_t edx_56 = data_8db5d4
                            i_9 = data_8db5c8
                            void* i_18
                            
                            if (edi_7 == 0x27)
                                i_18 = i_9
                            label_619e30:
                                
                                if (i_18 != 0)
                                    if (edi_7 != 0x27)
                                        i_9 = nullptr
                                        
                                        if (edx_56 == 0x27)
                                            i_9 = i_24
                                    
                                    uint32_t eax_85 =
                                        sub_64e7a0(sub_4bb9f0(0x1a8a114, i_9, "tbl_player_hand"))
                                    *(eax_85 + 0x138c) = 0
                                    *(eax_85 + 0x1390) = 0
                                    sub_67a770(eax_85, nullptr)
                                    uint32_t eax_86 = sub_65bf00(eax_85)
                                    CookieCheckFunction(eax_86)
                                    return eax_86
                            else if (edx_56 == 0x27)
                                i_18 = i_24
                                goto label_619e30
                    
                    goto label_619325
                case 0xa
                    if (arg8 == 4 || arg8 == 5 || arg8 == 6)
                        if (arg14.b == 0)
                            uint32_t eax_58 = zx.d(arg4.w)
                            
                            if (eax_58 u>= 0x320)
                                sub_591930()
                            
                            sub_5afbd0(arg2, *(eax_58 * 0x64 + &data_b82524))
                        
                        void* eax_59 = sub_5cc5e0(arg2)
                        int32_t ecx_93 = *(eax_59 + 0x1934)
                        *(eax_59 + (ecx_93 << 3) + 0x34) = 1
                        *(eax_59 + (ecx_93 << 3) + 0x38) = arg4
                        *(eax_59 + 0x1934) += 1
                    
                    void* i_16
                    i_9 = sub_590990(&i_16, 0xffffffff, 0xb80ad8, 5, &i_16)
                    
                    if (i_9 != 0)
                        if (i_9 != 1)
                            sub_591930()
                        
                        i_9 = i_16
                    
                    if (i_9 != i_2)
                        int32_t var_d9c_22 = 0
                        char var_da4_12 = arg14.b
                        uint32_t var_da8_8 = 1
                        uint32_t var_dac_6 = &data_7feed4
                        int32_t var_db0_7 = 0xb80ad8
                        void* eax_61 = sub_5f1b90(arg2, i_2)
                        sub_5f2d80(eax_61, arg4, arg2, eax_61, var_dac_6, var_da8_8, var_da4_12, 
                            arg8, var_d9c_22)
                        i_9 = sub_5de8b0(arg4)
                        
                        if (i_9 != 0)
                            *(i_9 + 0xc8) = var_cf4
                            *(i_9 + 0xcc) = var_cbc
                            *(i_9 + 0xac) = i_2
                            CookieCheckFunction(i_9)
                            return i_9
                        
                        var_d9c_1 = "LookupCard"
                        var_da0_1 = 0x3d96
                        ecx = &data_871964
                    else
                        var_d9c_1 = "ResolveEffect"
                        var_da0_1 = 0xd0ea
                        ecx = "MouseCard(gDomClient.domState.g) != toWhich"
                    
                labelid_4:
                    var_da4_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                case 0xb
                    i_9 = sub_5de8b0(arg4)
                    
                    if (i_9 != 0)
                        if (*(i_9 + 0xa4) != 3)
                            int32_t var_d9c_16 = 0
                            int128_t* var_da0_14 = 2
                            char var_da4_11 = arg14.b
                            uint32_t var_da8_7 = 1
                            uint32_t var_dac_5 = &data_7feed4
                            int32_t var_db0_5 = arg4
                            uint32_t eax_48 = sub_5ce6d0(i_9, 0x3e9, arg2, 0, 0, 0)
                            uint32_t eax_49 = sub_5f2d80(eax_48, arg4, arg2, eax_48, var_dac_5, 
                                var_da8_7, var_da4_11, var_da0_14, var_d9c_16)
                            CookieCheckFunction(eax_49)
                            return eax_49
                        
                        i_9 = sub_5de8b0(arg4)
                        
                        if (i_9 != 0)
                            void* eax_41
                            int32_t edx_23
                            eax_41, edx_23 = sub_637730(&data_b809e0)
                            *(eax_41 + 0x98) = arg4
                            void var_ce8
                            int128_t* var_d9c_14 = &var_ce8
                            *(eax_41 + 0x2c) = 0
                            *(eax_41 + 0x168) = 1
                            int128_t* eax_44 = sub_5de520(&var_ce8, edx_23, i_9, var_d9c_14)
                            var_cb0 = *eax_44
                            int128_t var_ca0_1 = eax_44[1]
                            int32_t eax_45
                            int32_t ecx_75
                            eax_45, ecx_75 = sub_5cb6e0(eax_41 + 0x258, &var_cb0)
                            int32_t var_d9c_15 = 0
                            int128_t* var_da0_13 = 2
                            char var_da4_10 = arg14.b
                            uint32_t var_da8_6 = 1
                            uint32_t var_dac_4 = &data_7feed4
                            int32_t var_db0_3 = ecx_75
                            uint32_t eax_46 = sub_5ce6d0(eax_45, 0x3e9, arg2, 0, 0, 0)
                            int32_t* eax_47 = sub_5f2290(eax_46, eax_41, arg2, eax_46, var_dac_4, 
                                var_da8_6, var_da4_10, var_da0_13)
                            CookieCheckFunction(eax_47)
                            return eax_47
                        
                        var_d9c_1 = "LookupCard"
                        var_da0_1 = 0x3d96
                        ecx = &data_871964
                    else
                        var_d9c_1 = "LookupCard"
                        var_da0_1 = 0x3d96
                        ecx = &data_871964
                    
                labelid_4:
                    var_da4_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                case 0xc
                    if (arg14.b != 0)
                        goto label_619325
                    
                    uint32_t eax_95 = sub_5b0320(i_9, i_2, arg2, 2)
                    CookieCheckFunction(eax_95)
                    return eax_95
                case 0xd
                    if (arg14.b != 0)
                        goto label_619325
                    
                    i_9 = sub_5de8b0(arg4)
                    void* i_25 = i_9
                    
                    if (i_25 != 0)
                        switch (*(i_25 + 0xa4) - 0x3ea)
                            case 1, 0x63, 0x64
                                int32_t ecx_241
                                ecx_241.b = arg7.b
                                ecx_241.b &= 1
                                i_9.b = (arg7 u>> 1).b & 1
                                char var_cc5_1 = ecx_241.b
                                char var_cfc_2 = i_9.b
                                
                                if (arg2 != 0xffffffff)
                                    memset(&var_d44, 0, 0x40)
                                    int64_t var_d50_2 = 0
                                    int32_t var_cd4
                                    var_cd4.q = 0
                                    int32_t var_cd8_2 = *(i_25 + 0xa4)
                                    i_4 = 1
                                    int32_t var_ccc_2 = 0x20000
                                    var_d60 = 0xe
                                    var_cb0 = i_25.o
                                    int32_t var_d5c_2 = 0
                                    int32_t var_cd0
                                    var_ca0:8.q = var_cd0.q
                                    uint32_t var_d58_2 = arg2
                                    int32_t var_d54_1 = 0
                                    int32_t var_d48_2 = 0
                                    void* i_31 = i_25
                                    int128_t var_90_1 = var_d60.o
                                    int32_t var_98 = 1
                                    int32_t* var_d9c_80 = &var_cb0:8
                                    int32_t var_da0_53 = 0
                                    int128_t var_80_1 = var_d50_2.o
                                    int32_t var_da4_27 = 6
                                    int32_t var_d88[0xa]
                                    int32_t* var_da8_21 = &var_d88
                                    var_70 = var_d40
                                    int128_t var_60_5 = var_d30
                                    int128_t var_50_5 = var_d20
                                    int128_t var_40_5 = var_d10
                                    __builtin_memcpy(&var_d88, &var_98, 0x88)
                                    sub_6371b0(i_25 + 0x258, var_da8_21, var_da4_27, var_da0_53, 
                                        var_d9c_80)
                                    var_cd8_2.q = 0
                                    int32_t* var_d9c_81 = &var_cb0:8
                                    i_4 = 4
                                    int32_t eax_157 = 0x3e8
                                    
                                    if (var_cfc_2 != 0)
                                        eax_157 = 0xc8
                                    
                                    int32_t var_cd0_3 = 0
                                    int32_t var_ccc_3 = 0
                                    var_cb0 = i_25.o
                                    var_ca0:8.q = var_cd0_3.q
                                    i_9 = sub_637100(i_25 + 0x258, eax_157, var_d9c_81)
                                    
                                    if (var_cc5_1 == 0)
                                        goto label_619325
                                    
                                    memset(&var_d44, 0, 0x40)
                                    int32_t var_cd8_3 = *(i_25 + 0xa4)
                                    int64_t var_d50_3 = 0
                                    var_cd4.q = 0
                                    i_4 = 1
                                    int32_t var_ccc_4 = 0
                                    var_d60 = 6
                                    var_cb0 = i_25.o
                                    int32_t var_d5c_3 = 0x3eb
                                    var_ca0:8.q = var_cd0_3.q
                                    uint32_t var_d58_3 = arg2
                                    int32_t var_d54_2 = 0
                                    int32_t var_d48_3 = 0
                                    void* i_32 = i_25
                                    int128_t var_90_2 = var_d60.o
                                    int32_t* var_d9c_83 = &var_cb0:8
                                    int32_t var_da0_56 = 0
                                    var_98 = 1
                                    int128_t var_80_2 = var_d50_3.o
                                    int32_t var_da4_29 = 6
                                    int32_t* var_da8_22 = &var_d88
                                    var_70 = var_d40
                                    int128_t var_60_6 = var_d30
                                    int128_t var_50_6 = var_d20
                                    int128_t var_40_6 = var_d10
                                    __builtin_memcpy(&var_d88, &var_98, 0x88)
                                    int32_t* eax_159 = sub_6371b0(i_25 + 0x258, var_da8_22, 
                                        var_da4_29, var_da0_56, var_d9c_83)
                                    CookieCheckFunction(eax_159)
                                    return eax_159
                                
                                var_d9c_1 = "ResolveEffect"
                                var_da0_1 = 0xd459
                                ecx = "who != PLAYER_NONE"
                            labelid_4:
                                var_da4_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                            default
                                *(i_25 + 0x130) = i_2
                                *(i_25 + 0x128) = 1
                                *(i_25 + 0x134) = arg6
                                CookieCheckFunction(arg6)
                                return arg6
                    else
                        var_d9c_1 = "LookupCard"
                        var_da0_1 = 0x3d96
                        ecx = &data_871964
                    labelid_4:
                        var_da4_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                case 0x10
                    i_9.b = arg7 != 0
                    uint32_t eax_96 = zx.d(i_9.b)
                    uint32_t var_d9c_41 = eax_96
                    uint32_t eax_97 = sub_615bc0(eax_96, arg2, i_2, ecx_1, arg6.b, arg14.b)
                    CookieCheckFunction(eax_97)
                    return eax_97
                case 0x12
                    if (i_2 == 0xb02)
                        goto label_619325
                    
                    int32_t eax_92
                    void* edx_60
                    edx_60:eax_92 = sx.q(arg9)
                    void* eax_93 = sub_615360(eax_92, i_2, arg4, arg6, arg2, arg7, arg8, arg14.b, 
                        eax_92, edx_60)
                    CookieCheckFunction(eax_93)
                    return eax_93
                case 0x13
                    uint32_t var_d9c_39 = arg14
                    uint32_t eax_94 = sub_6159d0(i_9, i_2, arg4.b)
                    CookieCheckFunction(eax_94)
                    return eax_94
                case 0x14
                    int32_t eax_89
                    void* edx_58
                    edx_58:eax_89 = sx.q(arg10)
                    uint32_t eax_90 = sub_615860(eax_89, i_2, arg4, arg6, arg7, arg8, arg9, arg2, 
                        arg14.b, eax_89, edx_58)
                    CookieCheckFunction(eax_90)
                    return eax_90
                case 0x15
                    ebx.b = i_2 != 0
                    i_9 = sub_6157b0(arg4)
                    *(i_9 + 0x1d0) = ebx.b
                    
                    if (arg14.b != 0)
                        goto label_619325
                    
                    int32_t var_d9c_36 = 0
                    int32_t var_da0_29 = arg4
                    uint32_t eax_87 = sub_5af930(i_9, data_171e6f0, arg4.b)
                    CookieCheckFunction(eax_87)
                    return eax_87
                case 0x16
                    uint32_t var_d9c_9 = arg14
                    i_9 = sub_618560(i_9, arg4, ecx_1, i_2, arg6, arg7.b)
                label_619325:
                    CookieCheckFunction(i_9)
                    return i_9
                case 0x17
                    i_9 = sub_5de8b0(arg4)
                    
                    if (i_9 != 0)
                        if (i_2 != 0)
                            var_d9c_1 = "DomAddCardParam"
                            var_da0_1 = 0xcd4c
                            goto label_61af46
                        
                        *(i_9 + 0xfc) += arg6
                        *(i_9 + 0x100) += arg7
                        CookieCheckFunction(arg7)
                        return arg7
                    
                    var_d9c_1 = "LookupCard"
                    var_da0_1 = 0x3d96
                    ecx = &data_871964
                labelid_4:
                    var_da4_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                case 0x18
                    void* var_cd8_1 = arg7
                    int128_t* var_cd4_1 = arg8
                    int32_t var_cd0_2 = arg9
                    i_4 = i_2
                    int32_t var_ccc_1 = arg10
                    
                    if (arg14.b == 0)
                        int32_t eax_121 = data_b604e0
                        
                        if (eax_121 == 0xffffffff)
                            eax_121 = 0
                        
                        if (arg2 == eax_121)
                            int32_t var_d9c_57 = 0
                            int32_t var_da0_41 = 0
                            sub_5af930(eax_121, data_171e6d8, ecx_1.b)
                    
                    i_6 = arg6
                    i_5 = i_2
                    void* eax_124 = sub_615070(&i_5, arg2, &data_b604b8, arg4, &i_5, &i_4, arg11)
                    CookieCheckFunction(eax_124)
                    return eax_124
                case 0x19
                    void* i_10 = sub_5de970(arg4)
                    int32_t i_1 = *(i_10 + 0x218)
                    
                    while (i_1 != 0)
                        uint32_t eax_128 = sub_5cba00(i_1)
                        i_1 = *(eax_128 + 0xd0)
                        *(eax_128 + 0xd0) = 0
                    
                    i_7 = i_10
                    goto label_61a5ab
                case 0x1a
                    void* eax_125 = sub_5de970(arg4)
                    i_9 = sub_5de8b0(i_2)
                    
                    if (i_9 != 0)
                        *(i_9 + 0xd0) = *(eax_125 + 0x218)
                        uint32_t eax_127 = *(i_9 + 0x1c28)
                        *(eax_125 + 0x218) = eax_127
                        CookieCheckFunction(eax_127)
                        return eax_127
                    
                    var_d9c_1 = "LookupCard"
                    var_da0_1 = 0x3d96
                    ecx = &data_871964
                labelid_4:
                    var_da4_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                case 0x1b
                    if (arg4 - 8 u> 0x14)
                        goto label_619325
                    
                    i_9 = zx.d(*(arg4 + &jump_table_61b0bc[9]))
                    uint32_t i_8
                    
                    switch (i_9)
                        case nullptr
                            uint32_t eax_130 = sub_5cc5e0(arg2)
                            *(eax_130 + (*(eax_130 + 0x4d08) << 2) + 0x4088) = i_2
                            *(eax_130 + 0x4d08) += 1
                            CookieCheckFunction(eax_130)
                            return eax_130
                        case 1
                            void* var_d9c_63 = ecx_1
                            uint32_t eax_133 = sub_5e2d10(i_9, 0, 5, arg2)
                            CookieCheckFunction(eax_133)
                            return eax_133
                        case 2
                            char* edx_82
                            i_9, edx_82 = sub_5e3120(arg2, 1)
                            *i_9 += 1
                            
                            if (*i_9 != 1 || *edx_82 != 0)
                                goto label_619325
                            
                            uint32_t var_d9c_61 = arg2
                            uint32_t eax_131 = sub_5e2d10(i_9, 0, 1, arg2)
                            CookieCheckFunction(eax_131)
                            return eax_131
                        case 3
                            uint32_t var_d9c_62 = arg2
                            *sub_5e3120(arg2, 1) = 1
                            uint32_t eax_132 = sub_5e2c70(1, arg2)
                            CookieCheckFunction(eax_132)
                            return eax_132
                        case 4
                            uint32_t var_d9c_64 = arg2
                            *sub_5e3120(arg2, 9) = 1
                            uint32_t eax_134 = sub_5e2c70(9, arg2)
                            CookieCheckFunction(eax_134)
                            return eax_134
                        case 5
                            if (i_2 != 0xe)
                                void* var_d9c_68 = ecx_1
                                uint32_t eax_135 = sub_5e2d10(i_9, arg6, i_2, arg2)
                                CookieCheckFunction(eax_135)
                                return eax_135
                            
                            char* edx_90
                            i_9, edx_90 = sub_5e3120(arg2, i_2)
                            *i_9 += 1
                            
                            if (*i_9 != 1 || *edx_90 != 0)
                                goto label_619325
                            
                            uint32_t var_d9c_67 = arg2
                            i_8 = i_2
                            goto label_61a108
                        case 6
                            ecx_160 = arg2
                            char* edx_85
                            i_9, edx_85 = sub_5e3120(ecx_160, 9)
                            *i_9 += 1
                            
                            if (*i_9 != 1 || *edx_85 != 0)
                                goto label_619325
                            
                        label_61a0ff:
                            uint32_t var_d9c_46 = ecx_160
                            i_8 = 9
                            goto label_61a108
                        case 7
                            void* var_d9c_65 = ecx_1
                            i_8 = 0xa
                        label_61a108:
                            uint32_t eax_103 = sub_5e2d10(i_9, 0, i_8, arg2)
                            CookieCheckFunction(eax_103)
                            return eax_103
                        case 8
                            void* var_d9c_66 = ecx_1
                            i_8 = 0xc
                            goto label_61a108
                        case 9
                            ecx_173 = arg2
                            *sub_5e3120(ecx_173, 0xe) = 1
                        label_61a334:
                            uint32_t var_d9c_54 = ecx_173
                            ecx_174 = 0xe
                        label_61a33c:
                            uint32_t eax_111 = sub_5e2c70(ecx_174, arg2)
                            CookieCheckFunction(eax_111)
                            return eax_111
                        case 0xa
                            goto label_619325
                case 0x1c
                    if (arg4 - 8 u> 0x11)
                        goto label_619325
                    
                    i_9 = zx.d(*(arg4 + &jump_table_61b100[6]))
                    
                    switch (i_9)
                        case nullptr
                            void* eax_136 = sub_5cc5e0(arg2)
                            int32_t ecx_214 = 0
                            i_9 = *(eax_136 + 0x4d08)
                            
                            if (i_9 s> 0)
                                do
                                    if (*(eax_136 + (ecx_214 << 2) + 0x4088) == i_2)
                                        *(eax_136 + 0x4d08) = i_9 - 1
                                        uint32_t eax_138 = *(eax_136 + ((i_9 - 1) << 2) + 0x4088)
                                        *(eax_136 + (ecx_214 << 2) + 0x4088) = eax_138
                                        CookieCheckFunction(eax_138)
                                        return eax_138
                                    
                                    ecx_214 += 1
                                while (ecx_214 s< i_9)
                            
                            var_d9c_1 = "ElemRemoveUnordered"
                            var_da0_1 = 0x14c
                            var_da4_1 = "C:\x\ax2017\Engine\xArray.h"
                            ecx = "Halt"
                        case 1
                            void* var_d9c_70 = ecx_1
                            uint32_t eax_139 = sub_5e2fe0(i_9, 0, 5, arg2)
                            CookieCheckFunction(eax_139)
                            return eax_139
                        case 2
                            i_9 = sub_5e3120(arg2, 1)
                            int32_t temp6_1 = *i_9
                            *i_9 -= 1
                            
                            if (temp6_1 != 1)
                                goto label_619325
                            
                            uint32_t var_d9c_69 = arg2
                            ecx_174 = 1
                            goto label_61a33c
                        case 3
                            if (i_2 != 0xe)
                                void* var_d9c_74 = ecx_1
                                uint32_t eax_142 = sub_5e2fe0(i_9, arg6, i_2, arg2)
                                CookieCheckFunction(eax_142)
                                return eax_142
                            
                            ecx_173 = arg2
                            i_9 = sub_5e3120(ecx_173, i_2)
                            int32_t temp9_1 = *i_9
                            *i_9 -= 1
                            
                            if (temp9_1 != 1)
                                goto label_619325
                            
                            goto label_61a334
                        case 4
                            i_9 = sub_5e3120(arg2, 9)
                            int32_t temp7_1 = *i_9
                            *i_9 -= 1
                            
                            if (temp7_1 != 1)
                                goto label_619325
                            
                            uint32_t var_d9c_71 = arg2
                            ecx_174 = 9
                            goto label_61a33c
                        case 5
                            void* var_d9c_72 = ecx_1
                            uint32_t eax_140 = sub_5e2fe0(i_9, 0, 0xa, arg2)
                            CookieCheckFunction(eax_140)
                            return eax_140
                        case 6
                            void* var_d9c_73 = ecx_1
                            uint32_t eax_141 = sub_5e2fe0(i_9, 0, 0xc, arg2)
                            CookieCheckFunction(eax_141)
                            return eax_141
                        case 7
                            goto label_619325
                case 0x1f
                    while (data_b7d424 != 0)
                        sub_614a50()
                    
                    data_b809c0 = i_2
                    sub_4b9480()
                    sub_4c3a40()
                    
                    if (arg14.b != 0)
                        int32_t* eax_113 = sub_4c44f0()
                        CookieCheckFunction(eax_113)
                        return eax_113
                    
                    TEB* fsbase
                    
                    if (data_1a96610 s> *(*fsbase->ThreadLocalStoragePointer + 8))
                        sub_75970e(&data_1a96610)
                        
                        if (data_1a96610 == 0xffffffff)
                            data_cb44d0 = sub_618920
                            int32_t* var_d9c_56 = &data_1a96610
                            data_cb44d8 = 1
                            data_cb44dc = 2
                            data_cb44e0 = 0x12c
                            data_cb44e4 = 0
                            data_cb44e8 = sub_6189c0
                            data_cb44f0 = 2
                            data_cb44f4 = 0xffffffff
                            data_cb44f8 = 0
                            data_cb4500 = sub_618a10
                            __Init_thread_footer(var_d9c_56)
                    
                    int32_t edx_79 = data_cb44c0
                    data_b809b0 = &data_cb44c0
                    uint32_t eax_116 = sub_618760(&data_b809b0, edx_79)
                    CookieCheckFunction(eax_116)
                    return eax_116
                case 0x20
                    i_9 = sub_5cc5e0(arg2)
                    *(i_9 + 0x28) = arg7
                    *(i_9 + 0x24) = i_2
                    *(i_9 + 0x20) = arg6 + 1
                    
                    if (arg6 + 1 s>= 1)
                        goto label_619325
                    
                    var_d9c_1 = "ResolveEffect"
                    var_da0_1 = 0xd2c0
                    ecx = "pgui.rank >= RANK_FIRST"
                labelid_4:
                    var_da4_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                case 0x21
                    i_9 = sub_5de8b0(arg4)
                    void* i_19 = i_9
                    
                    if (i_19 != 0)
                        i_9.b = i_2 != 0
                        *(i_19 + 0x117) = i_9.b
                        CookieCheckFunction(i_9)
                        return i_9
                    
                    var_d9c_1 = "LookupCard"
                    var_da0_1 = 0x3d96
                    ecx = &data_871964
                labelid_4:
                    var_da4_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                case 0x22
                    if (i_2 != 0)
                        i_9 = zx.d(i_2.w)
                        
                        if (i_9 u< data_b809e4)
                            void* ecx_23 = i_9 * 0x1c30 + data_b809e0
                            
                            if (*(ecx_23 + 0x1c28) == i_2 && ecx_23 != 0)
                                edx.b = 0
                                void* eax_15 = sub_5cbfe0(ecx_23, edx.b)
                                CookieCheckFunction(eax_15)
                                return eax_15
                    
                    goto label_619325
                case 0x23
                    if (arg14.b != 0)
                        goto label_619325
                    
                    uint32_t esi_1 = zx.d(arg4.w)
                    
                    if (esi_1 u>= 0x320)
                        sub_591930()
                    
                    uint32_t eax_14 = sub_5b00e0(ecx_1, *(esi_1 * 0x64 + &data_b82524))
                    CookieCheckFunction(eax_14)
                    return eax_14
                case 0x24
                    if (arg14.b == 0)
                        uint32_t eax_50 = zx.d(arg4.w)
                        
                        if (eax_50 u>= 0x320)
                            sub_591930()
                        
                        sub_5b0320(eax_50, *(eax_50 * 0x64 + &data_b82524), arg2, i_2)
                    
                    i_9, edx_29 = sub_5de8b0(arg4)
                    i_23 = i_9
                    
                    if (i_23 != 0)
                        if (arg14.b != 0)
                            goto label_619325
                        
                        var_d9c_18 = 0
                        var_da0_15 = 0x20000000
                    label_619728:
                        i_9 = sub_5cbaa0(i_9, edx_29, i_23, var_da0_15, var_d9c_18)
                        
                        if (i_9.b == 0)
                            goto label_619325
                        
                        goto label_61973e
                    
                    var_d9c_1 = "LookupCard"
                    var_da0_1 = 0x3d96
                    ecx = &data_871964
                labelid_4:
                    var_da4_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                case 0x25
                    if (arg14.b != 0)
                        goto label_619325
                    
                    uint32_t edi = zx.d(arg4.w)
                    ebx.b = arg6 != 0
                    
                    if (edi u>= 0x320)
                        sub_591930()
                    
                    void* edi_1 = *(edi * 0x64 + &data_b82524)
                    
                    if (edi_1 - 0x1038 u> 0x11)
                        i_9.b = 0
                    else
                        switch (edi_1)
                            case 0x1038, 0x1042, 0x1048, 0x1049
                                i_9.b = 1
                            case 0x1039, 0x103a, 0x103b, 0x103c, 0x103d, 0x103e, 0x103f, 0x1040, 
                                    0x1041, 0x1043, 0x1044, 0x1045, 0x1046, 0x1047
                                i_9.b = 0
                    
                    if (i_9.b != ebx.b)
                        goto label_619325
                    
                    void* eax_13
                    int32_t ecx_16
                    eax_13, ecx_16 = sub_571b30(edi_1, sub_5cf7e0())
                    int32_t** edx_5 = *(eax_13 + 0x64)
                    
                    if (edx_5 != 0)
                        int32_t var_d9c_4 = 0
                        int32_t var_da0_4 = ecx_16
                        sub_5af930(eax_13, *edx_5, ecx_16.b)
                    
                    i_9 = sub_5de8b0(arg4)
                    
                    if (i_9 != 0)
                        void* i_33
                        int32_t edx_7
                        i_33, edx_7 = sub_5cba00(*(i_9 + 0x9c))
                        i_21 = i_33
                        i_9 = sub_5cbaa0(i_33, edx_7, i_9, 0, 0x40)
                        
                        if (i_9.b != 0)
                            goto label_618ea6
                        
                        var_d9c_1 = "ResolveEffect"
                        var_da0_1 = 0xcfc6
                        ecx = "CardIsType(gfx, ALLY)"
                    labelid_4:
                        var_da4_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                    else
                        var_d9c_1 = "LookupCard"
                        var_da0_1 = 0x3d96
                        ecx = &data_871964
                    labelid_4:
                        var_da4_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                case 0x26
                    uint32_t var_d9c_2 = arg14
                    i_9.b = i_2 != 0
                    uint32_t eax_5 = zx.d(i_9.b)
                    void* eax_6 = sub_618ae0(eax_5, arg4, arg2, eax_5.b, ecx_1.b)
                    CookieCheckFunction(eax_6)
                    return eax_6
                case 0x27
                    i_9 = sub_5de8b0(arg4)
                    void* i_26 = i_9
                    
                    if (i_26 != 0)
                        int32_t ecx_10 = *(i_26 + 0x9c)
                        i_9 = sub_5cba00(ecx_10)
                        i_21 = i_9
                        *(i_21 + 0x78) = 1
                        
                        if (arg14.b != 0)
                            goto label_619325
                        
                        int32_t var_d9c_3 = 0
                        int32_t var_da0_3 = ecx_10
                        uint32_t eax_7
                        int32_t edx_3
                        eax_7, edx_3 = sub_5af930(i_9, data_171e748, ecx_10.b)
                        i_9 = sub_5cbaa0(eax_7, edx_3, i_26, 0, 0x800)
                        
                        if (i_9.b != 0)
                        label_618ea6:
                            
                            if (*(i_21 + 0x1a18) s> 0 && *(i_21 + 0x4a0) == 9)
                                goto label_619325
                            
                            i_14 = i_21
                            ecx_12 = i_21 + 0x258
                            var_da4_4 = data_171cb64
                            var_da8_2 = i_21 + 0x1a30
                            var_dac_1 = &var_cb0:8
                            eax_9 = i_21 + 0x370
                        label_618ee8:
                            __builtin_memset(&i_4, 0, 0x14)
                            var_cb0 = i_14.o
                            int32_t var_cd0_1
                            var_ca0:8.q = var_cd0_1.q
                            uint32_t eax_10 =
                                sub_6374e0(ecx_12, eax_9, var_dac_1, var_da8_2, var_da4_4)
                            CookieCheckFunction(eax_10)
                            return eax_10
                        
                        var_d9c_1 = "ResolveEffect"
                        var_da0_1 = 0xcf9e
                        ecx = "CardIsType(gfx, PROPHECY)"
                    labelid_4:
                        var_da4_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                    else
                        var_d9c_1 = "LookupCard"
                        var_da0_1 = 0x3d96
                        ecx = &data_871964
                    labelid_4:
                        var_da4_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                case 0x28
                    i_9 = sub_5de8b0(arg4)
                    
                    if (i_9 != 0)
                        if (*(i_9 + 0x2c) == 0)
                            *(i_9 + (arg2 << 2) + 0xe4) = i_2
                            CookieCheckFunction(i_9)
                            return i_9
                        
                        var_d9c_1 = "GfxCardSetReveal"
                        var_da0_1 = 0xcf5c
                        ecx = "gfx.type == DOMGFX_CARD"
                    else
                        var_d9c_1 = "LookupCard"
                        var_da0_1 = 0x3d96
                        ecx = &data_871964
                    
                labelid_4:
                    var_da4_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                case 0x29
                    data_b809a4 = i_2
                    CookieCheckFunction(i_9)
                    return i_9
                case 0x2a
                    i_9 = sub_5de8b0(arg4)
                    
                    if (i_9 != 0)
                        bool cond:10_1 = *(i_9 + 0x1a18) == 0
                        *(i_9 + 0xa4) = i_2
                        
                        if (cond:10_1)
                            int32_t* eax_147 = sub_5cc540(&var_d60, i_2, *(i_9 + 0x378), &var_d60, 
                                0, 0, *(i_9 + 0xa0), *(i_9 + 0xb0), i_9)
                            ecx_69 = i_9 + 0x258
                            var_70 = *eax_147
                            int128_t var_60_3 = *(eax_147 + 0x10)
                            int128_t var_50_3 = *(eax_147 + 0x20)
                            int128_t var_40_3 = *(eax_147 + 0x30)
                            int128_t var_30_3 = *(eax_147 + 0x40)
                            xmm0_8 = *(eax_147 + 0x50)
                        label_619579:
                            int128_t var_20_1 = xmm0_8
                            uint32_t eax_40 = sub_5cb630(ecx_69, &var_70)
                            CookieCheckFunction(eax_40)
                            return eax_40
                        
                        var_d9c_1 = "ResolveEffect"
                        var_da0_1 = 0xd41f
                        ecx = "gfx.move.numTargets == 0"
                    labelid_4:
                        var_da4_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                    else
                        var_d9c_1 = "LookupCard"
                        var_da0_1 = 0x3d96
                        ecx = &data_871964
                    label_61af4b:
                        var_da4_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                case 0x2b
                    void* eax_148 = data_b809e4 * 0x1c30
                    int32_t* i_11 = &data_b809e0
                    void* i_13 = data_b809e0
                    i_5 = &data_b809e0
                    void* eax_149 = eax_148 + i_13
                    
                    if (i_13 u>= eax_149)
                    label_61aa56:
                        i_13 = 0xffffffff
                    else
                        while ((*(i_13 + 0x1c28) & 0xffff0000) == 0)
                            i_13 += 0x1c30
                            
                            if (i_13 u>= eax_149)
                                goto label_61aa56
                    
                    i_6 = i_13
                    
                    if (i_13 == 0xffffffff)
                        goto label_61ab31
                    
                    while (true)
                        i_9 = *(i_13 + 0x2c)
                        
                        if (i_9 != 0)
                            if (i_9 == 3 && *(i_13 + 0x5c) == i_2)
                                break
                        else if (*(i_13 + 0xa4) == i_2)
                            *(i_13 + 0xa4) = arg6
                        
                        sub_6376d0(i_11, &i_6)
                        i_13 = i_6
                        
                        if (i_13 == 0xffffffff)
                            goto label_61ab31
                        
                        i_11 = i_5
                    
                    bool cond:11_1 = *(i_13 + 0x1a18) == 0
                    *(i_13 + 0x5c) = arg6
                    
                    if (cond:11_1)
                        int32_t* eax_151 = sub_5cc540(&var_d60, arg6, *(i_13 + 0x378), &var_d60, 0, 
                            0, 0xffffffff, 0, i_13)
                        var_70 = *eax_151
                        int128_t var_60_4 = *(eax_151 + 0x10)
                        int128_t var_50_4 = *(eax_151 + 0x20)
                        int128_t var_40_4 = *(eax_151 + 0x30)
                        int128_t var_30_4 = *(eax_151 + 0x40)
                        int128_t var_20_2 = *(eax_151 + 0x50)
                        sub_5cb630(i_13 + 0x258, &var_70)
                    label_61ab31:
                        void* edx_98 = data_b809e4 * 0x1c30
                        int32_t* i_12 = &data_b809e0
                        i_9 = data_b809e0
                        i_5 = &data_b809e0
                        void* edx_99 = edx_98 + i_9
                        
                        if (i_9 u>= edx_99)
                        label_61ab66:
                            i_9 = 0xffffffff
                        else
                            while ((*(i_9 + 0x1c28) & 0xffff0000) == 0)
                                i_9 += 0x1c30
                                
                                if (i_9 u>= edx_99)
                                    goto label_61ab66
                        
                        i_6 = i_9
                        
                        if (i_9 != 0xffffffff)
                            while (true)
                                if (*(i_9 + 0x2c) == 0 && *(i_9 + 0xa4) == 6
                                        && *(i_9 + 0x37c) == i_2)
                                    *(i_9 + 0x37c) = arg6
                                
                                sub_6376d0(i_12, &i_6)
                                i_9 = i_6
                                
                                if (i_9 == 0xffffffff)
                                    break
                                
                                i_12 = i_5
                        
                        goto label_619325
                    
                    var_d9c_1 = "ResolveEffect"
                    var_da0_1 = 0xd436
                    ecx = "gfx.move.numTargets == 0"
                label_61af4b_1:
                    var_da4_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                case 0x2c
                    if (i_2 != 0)
                        uint32_t eax_144 = sub_5cc5e0(arg2)
                        *(eax_144 + 0x4d24) = i_2
                        *(eax_144 + 0x4d28) = arg6
                        CookieCheckFunction(eax_144)
                        return eax_144
                    
                    i_9 = sub_4b9480()
                    
                    if (*(i_9 + 0x11a8) s<= i_2)
                        goto label_619325
                    
                    void* esi_16 = &data_b65214
                    int32_t* eax_143
                    
                    do
                        *esi_16 = 0
                        esi_16 += 0x4d30
                        i_2 += 1
                        eax_143 = sub_4b9480()
                    while (i_2 s< eax_143[0x46a])
                    
                    CookieCheckFunction(eax_143)
                    return eax_143
                case 0x2d
                    uint32_t eax_145 = sub_6068a0(i_2)
                    CookieCheckFunction(eax_145)
                    return eax_145
                case 0x2e
                    i_9 = sub_5e9c30(0xb80ad8)
                    data_b809a8 = i_9.b
                    
                    if (arg14.b == 0 && data_8db5c4 == 0x27)
                        int32_t ecx_26 = data_8db5c8
                        
                        if (ecx_26 != 0)
                            uint32_t eax_17 = sub_64e7a0(sub_67bd70(ecx_26, "tbl_center_holder"))
                            sub_65bf00(eax_17)
                            uint32_t eax_18 = sub_65bf40(eax_17)
                            CookieCheckFunction(eax_18)
                            return eax_18
                    
                    goto label_619325
                case 0x2f
                    i_7 = data_b809e0
                    int32_t edx_10 = data_b809e4
                    
                    if (arg6 != 0)
                        void* i_3 = i_7
                        
                        for (void* eax_20 = edx_10 * 0x1c30 + i_3; i_3 u< eax_20; i_3 += 0x1c30)
                            if ((*(i_3 + 0x1c28) & 0xffff0000) != 0)
                                while (i_3 != 0xffffffff)
                                    if (*(i_3 + 0x2c) == 6 && *(i_3 + 0x1ec) == arg6)
                                        sub_5cb5a0(i_3)
                                        edx_10 = data_b809e4
                                        i_7 = data_b809e0
                                    
                                    i_3 += 0x1c30
                                    void* eax_22 = edx_10 * 0x1c30 + i_7
                                    
                                    if (i_3 u>= eax_22)
                                        break
                                    
                                    while ((*(i_3 + 0x1c28) & 0xffff0000) == 0)
                                        i_3 += 0x1c30
                                        
                                        if (i_3 u>= eax_22)
                                            goto label_619196
                                
                                break
                    
                label_619196:
                    i_9 = &data_b809e0
                    i_5 = &data_b809e0
                    void* edx_12 = edx_10 * 0x1c30 + i_7
                    
                    if (i_7 u>= edx_12)
                    label_6191c6:
                        i_7 = 0xffffffff
                    else
                        while ((*(i_7 + 0x1c28) & 0xffff0000) == 0)
                            i_7 += 0x1c30
                            
                            if (i_7 u>= edx_12)
                                goto label_6191c6
                    
                    i_6 = i_7
                    
                    if (i_7 == 0xffffffff)
                        goto label_619325
                    
                    while (*(i_7 + 0x2c) != 3 || *(i_7 + 0x5c) != i_2)
                        i_9 = sub_6376d0(i_9, &i_6)
                        i_7 = i_6
                        
                        if (i_7 == 0xffffffff)
                            goto label_619325
                        
                        i_9 = i_5
                    
                label_61a5ab:
                    uint32_t eax_129 = sub_5cb5a0(i_7)
                    CookieCheckFunction(eax_129)
                    return eax_129
                default
                    var_d9c_1 = "ResolveEffect"
                    var_da0_1 = 0xd47d
                    goto label_61af46
        else
        label_618d71:
            var_d9c_1 = "GetClient"
            var_da0_1 = 0x7b
            var_da4_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
            ecx = "gClient"
    else
        void* i_28 = i_9
        i_9 -= 1
        
        if (i_28 == 1)
            goto label_618da2
        
        void* i_29 = i_9
        i_9 -= 2
        
        if (i_29 == 2)
            goto label_618da2
        
        var_d9c_1 = "ResolveEffect"
        var_da0_1 = 0xcf85
    label_61af46:
        ecx = "Halt"
    label_61af4b_2:
        var_da4_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
else
    var_d9c_1 = "GetLocalSettings"
    var_da0_1 = 0x5fb
    var_da4_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
    ecx = "gGameSettings.localSettings"

sub_63b870(i_9, &data_801800, ecx, var_da4_1, var_da0_1, var_d9c_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
