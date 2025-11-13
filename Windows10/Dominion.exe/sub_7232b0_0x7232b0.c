// 函数: sub_7232b0
// 地址: 0x7232b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* ebx = arg1
int32_t* var_4c = ebx

if (arg2 - 0xc4 u> 0x3b)
label_7237c0:
    
    if ((arg2 s< 0xe0 || arg2 s> 0xef) && arg2 != 0xfe)
        goto label_723af4
    
    uint32_t eax_77 = sub_7202a0(*ebx)
    
    if (eax_77 s< 2)
        goto label_723af4
    
    int32_t edi_11 = eax_77 - 2
    char ecx_32
    
    if (arg2 != 0xe0)
        if (arg2 == 0xee && edi_11 s>= 0xc)
            int32_t i = 0
            int32_t ebx_7 = 1
            int32_t i_7 = 0
            
            do
                void* esi_9 = *var_4c
                char* eax_88 = *(esi_9 + 0xa8)
                
                if (eax_88 u< *(esi_9 + 0xac))
                    ecx_32 = *eax_88
                    *(esi_9 + 0xa8) = &eax_88[1]
                else if (*(esi_9 + 0x20) == 0)
                    ecx_32 = 0
                else
                    void* eax_92 = (*(esi_9 + 0x10))(*(esi_9 + 0x1c), esi_9 + 0x28, *(esi_9 + 0x24))
                    
                    if (eax_92 != 0)
                        i = i_7
                        *(esi_9 + 0xac) = eax_92 + 0x28 + esi_9
                        ecx_32 = *(esi_9 + 0x28)
                        *(esi_9 + 0xa8) = esi_9 + 0x29
                    else
                        i = i_7
                        *(esi_9 + 0x20) = eax_92
                        *(esi_9 + 0xac) = esi_9 + 0x29
                        *(esi_9 + 0x28) = 0
                        ecx_32 = *(esi_9 + 0x28)
                        *(esi_9 + 0xa8) = esi_9 + 0x29
                
                if (ecx_32 != (*"Adobe")[i])
                    ebx_7 = 0
                
                i += 1
                i_7 = i
            while (i s< 6)
            
            edi_11 -= 6
            ebx = var_4c
            
            if (ebx_7 != 0)
                void* esi_10 = *ebx
                void* eax_98 = *(esi_10 + 0xa8)
                
                if (eax_98 u< *(esi_10 + 0xac))
                    *(esi_10 + 0xa8) = eax_98 + 1
                else if (*(esi_10 + 0x20) != 0)
                    void* eax_102 =
                        (*(esi_10 + 0x10))(*(esi_10 + 0x1c), esi_10 + 0x28, *(esi_10 + 0x24))
                    
                    if (eax_102 != 0)
                        *(esi_10 + 0xac) = eax_102 + 0x28 + esi_10
                    else
                        *(esi_10 + 0x20) = eax_102
                        *(esi_10 + 0xac) = esi_10 + 0x29
                        *(esi_10 + 0x28) = 0
                    
                    *(esi_10 + 0xa8) = esi_10 + 0x29
                
                sub_7202a0(*ebx)
                sub_7202a0(*ebx)
                void* esi_11 = *ebx
                char* eax_106 = *(esi_11 + 0xa8)
                char ecx_35
                
                if (eax_106 u< *(esi_11 + 0xac))
                    ecx_35 = *eax_106
                    *(esi_11 + 0xa8) = &eax_106[1]
                else if (*(esi_11 + 0x20) == 0)
                    ecx_35 = 0
                else
                    void* eax_110 =
                        (*(esi_11 + 0x10))(*(esi_11 + 0x1c), esi_11 + 0x28, *(esi_11 + 0x24))
                    
                    if (eax_110 != 0)
                        *(esi_11 + 0xac) = eax_110 + 0x28 + esi_11
                        ecx_35 = *(esi_11 + 0x28)
                        *(esi_11 + 0xa8) = esi_11 + 0x29
                    else
                        *(esi_11 + 0x20) = eax_110
                        *(esi_11 + 0xac) = esi_11 + 0x29
                        *(esi_11 + 0x28) = 0
                        ecx_35 = *(esi_11 + 0x28)
                        *(esi_11 + 0xa8) = esi_11 + 0x29
                
                edi_11 -= 6
                ebx[0x11fa] = zx.d(ecx_35)
    else if (edi_11 s>= 5)
        int32_t i_1 = 0
        int32_t ebx_6 = 1
        int32_t i_6 = 0
        
        do
            void* esi_8 = *var_4c
            char* eax_78 = *(esi_8 + 0xa8)
            
            if (eax_78 u< *(esi_8 + 0xac))
                ecx_32 = *eax_78
                *(esi_8 + 0xa8) = &eax_78[1]
            else if (*(esi_8 + 0x20) == 0)
                ecx_32 = 0
            else
                void* eax_82 = (*(esi_8 + 0x10))(*(esi_8 + 0x1c), esi_8 + 0x28, *(esi_8 + 0x24))
                
                if (eax_82 != 0)
                    i_1 = i_6
                    *(esi_8 + 0xac) = eax_82 + 0x28 + esi_8
                    ecx_32 = *(esi_8 + 0x28)
                    *(esi_8 + 0xa8) = esi_8 + 0x29
                else
                    i_1 = i_6
                    *(esi_8 + 0x20) = eax_82
                    *(esi_8 + 0xac) = esi_8 + 0x29
                    *(esi_8 + 0x28) = 0
                    ecx_32 = *(esi_8 + 0x28)
                    *(esi_8 + 0xa8) = esi_8 + 0x29
            
            if (ecx_32 != (*"JFIF")[i_1])
                ebx_6 = 0
            
            i_1 += 1
            i_6 = i_1
        while (i_1 s< 5)
        
        edi_11 -= 5
        ebx = var_4c
        
        if (ebx_6 != 0)
            ebx[0x11f9] = 1
    void* eax_117 = *ebx
    
    if (edi_11 s< 0)
        *(eax_117 + 0xa8) = *(eax_117 + 0xac)
        CookieCheckFunction(1)
        return 1
    
    if (*(eax_117 + 0x10) != 0)
        int32_t esi_12 = *(eax_117 + 0xac)
        int32_t edx_6 = esi_12 - *(eax_117 + 0xa8)
        
        if (edx_6 s< edi_11)
            *(eax_117 + 0xa8) = esi_12
            (*(eax_117 + 0x14))(*(eax_117 + 0x1c), edi_11 - edx_6)
            CookieCheckFunction(1)
            return 1
    
    *(eax_117 + 0xa8) += edi_11
    CookieCheckFunction(1)
    return 1

int32_t i_4

switch (arg2)
    case 0xc4
        i_4 = sub_7202a0(*ebx) - 2
        int32_t i_5 = i_4
        
        if (i_4 s<= 0)
        label_7234a2:
            uint32_t eax_31
            eax_31.b = i_4 == 0
            CookieCheckFunction(eax_31)
            return eax_31
        
        while (true)
            void* esi_3 = *ebx
            int32_t edx_1 = 0
            int32_t var_60_1 = 0
            char* eax_33 = *(esi_3 + 0xa8)
            
            if (eax_33 u< *(esi_3 + 0xac))
                i_4.b = *eax_33
                *(esi_3 + 0xa8) = &eax_33[1]
            else if (*(esi_3 + 0x20) == 0)
                i_4.b = 0
            else
                void* eax_36
                eax_36, i_4 = (*(esi_3 + 0x10))(*(esi_3 + 0x1c), esi_3 + 0x28, *(esi_3 + 0x24))
                
                if (eax_36 != 0)
                    edx_1 = 0
                    *(esi_3 + 0xac) = eax_36 + 0x28 + esi_3
                    i_4.b = *(esi_3 + 0x28)
                    *(esi_3 + 0xa8) = esi_3 + 0x29
                else
                    edx_1 = 0
                    *(esi_3 + 0x20) = eax_36
                    *(esi_3 + 0xac) = esi_3 + 0x29
                    *(esi_3 + 0x28) = 0
                    i_4.b = *(esi_3 + 0x28)
                    *(esi_3 + 0xa8) = esi_3 + 0x29
            
            uint32_t eax_42 = zx.d(i_4.b)
            int32_t eax_43 = eax_42 & 0xf
            uint32_t ecx_13 = eax_42 u>> 4
            uint32_t var_64_1 = ecx_13
            
            if (ecx_13 u> 1)
                break
            
            if (eax_43 u> 3)
                break
            
            int32_t var_48[0x10]
            
            for (int32_t i_2 = 0; i_2 s< 0x10; )
                void* esi_4 = *ebx
                char* eax_44 = *(esi_4 + 0xa8)
                
                if (eax_44 u< *(esi_4 + 0xac))
                    ecx_13.b = *eax_44
                    *(esi_4 + 0xa8) = &eax_44[1]
                else if (*(esi_4 + 0x20) == 0)
                    ecx_13.b = 0
                else
                    void* eax_47
                    eax_47, ecx_13 =
                        (*(esi_4 + 0x10))(*(esi_4 + 0x1c), esi_4 + 0x28, *(esi_4 + 0x24))
                    
                    if (eax_47 != 0)
                        *(esi_4 + 0xac) = eax_47 + 0x28 + esi_4
                    else
                        *(esi_4 + 0x20) = eax_47
                        *(esi_4 + 0xac) = esi_4 + 0x29
                        *(esi_4 + 0x28) = 0
                    
                    ecx_13.b = *(esi_4 + 0x28)
                    ebx = var_4c
                    edx_1 = var_60_1
                    *(esi_4 + 0xa8) = esi_4 + 0x29
                
                uint32_t eax_52 = zx.d(ecx_13.b)
                var_48[i_2] = eax_52
                edx_1 += eax_52
                i_2 += 1
                var_60_1 = edx_1
            
            int32_t (* edx_2)[0x10] = &var_48
            void* esi_6 = eax_43 * 0x690 + ebx
            void* var_5c_1
            void* eax_54
            void* ebx_2
            
            if (var_64_1 != 0)
                ebx_2 = esi_6 + 0x1a44
                var_5c_1 = ebx_2
                
                if (sub_720a90(ebx_2, edx_2) == 0)
                    break
                
                eax_54 = esi_6 + 0x1e44
            else
                if (sub_720a90(esi_6 + 4, edx_2) == 0)
                    break
                
                ebx_2 = esi_6 + 0x1a44
                eax_54 = esi_6 + 0x404
                var_5c_1 = ebx_2
            
            char* edi_7 = nullptr
            
            if (var_60_1 s> 0)
                do
                    void* esi_7 = *var_4c
                    char* eax_57 = *(esi_7 + 0xa8)
                    char ecx_15
                    
                    if (eax_57 u< *(esi_7 + 0xac))
                        ecx_15 = *eax_57
                        *(esi_7 + 0xa8) = &eax_57[1]
                    else if (*(esi_7 + 0x20) == 0)
                        ecx_15 = 0
                    else
                        void* eax_60 =
                            (*(esi_7 + 0x10))(*(esi_7 + 0x1c), esi_7 + 0x28, *(esi_7 + 0x24))
                        
                        if (eax_60 != 0)
                            *(esi_7 + 0xac) = eax_60 + 0x28 + esi_7
                            ecx_15 = *(esi_7 + 0x28)
                            *(esi_7 + 0xa8) = esi_7 + 0x29
                        else
                            *(esi_7 + 0x20) = eax_60
                            *(esi_7 + 0xac) = esi_7 + 0x29
                            *(esi_7 + 0x28) = 0
                            ecx_15 = *(esi_7 + 0x28)
                            *(esi_7 + 0xa8) = esi_7 + 0x29
                    
                    *(edi_7 + eax_54) = ecx_15
                    edi_7 = &edi_7[1]
                while (edi_7 s< var_60_1)
                
                ebx_2 = esi_6 + 0x1a44
                var_5c_1 = ebx_2
            
            if (var_64_1 != 0)
                int32_t ecx_19 = &var_4c[0xda1 + eax_43 * 0x100]
                int32_t i_3 = 0
                int32_t var_50_2 = ecx_19
                
                do
                    uint32_t eax_68
                    eax_68.b = *(ebx_2 + i_3)
                    *(ecx_19 + (i_3 << 1)) = 0
                    
                    if (eax_68.b u< 0xff)
                        eax_68 = zx.d(eax_68.b)
                        uint32_t edi_8 = zx.d(*(eax_68 + ebx_2 + 0x400))
                        uint32_t ebx_5 = zx.d(*(eax_68 + ebx_2 + 0x500))
                        int32_t edi_9 = edi_8 & 0xf
                        
                        if (edi_9 == 0 || ebx_5 + edi_9 u> 9)
                            ecx_19 = var_50_2
                        else
                            eax_68 = (i_3 << ebx_5.b & 0x1ff) s>> (9 - edi_9.b)
                            
                            if (eax_68 s< 1 << (edi_9.b - 1))
                                eax_68 += 1 - (1 << edi_9.b)
                            
                            ecx_19 = var_50_2
                            
                            if (eax_68 + 0x80 u<= 0xff)
                                *(ecx_19 + (i_3 << 1)) =
                                    ((((eax_68 << 4) + (edi_8 u>> 4)) << 4) + edi_9 + ebx_5).w
                        
                        ebx_2 = var_5c_1
                    
                    i_3 += 1
                while (i_3 s< 0x200)
            
            i_4 = i_5 - 0x11 - var_60_1
            ebx = var_4c
            i_5 = i_4
            
            if (i_4 s<= 0)
                uint32_t eax_76
                eax_76.b = i_4 == 0
                CookieCheckFunction(eax_76)
                return eax_76
        
        goto label_723af4
    case 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 
            0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xdc, 0xde, 0xdf, 0xe0, 0xe1, 0xe2, 0xe3, 
            0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 0xeb, 0xec, 0xed, 0xee, 0xef, 0xf0, 0xf1, 
            0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, 0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd, 0xfe
        goto label_7237c0
    case 0xdb
        i_4 = sub_7202a0(*ebx) - 2
        int32_t i_8 = i_4
        
        while (i_4 s> 0)
            void* esi_1 = *ebx
            char* eax_7 = *(esi_1 + 0xa8)
            
            if (eax_7 u< *(esi_1 + 0xac))
                i_4.b = *eax_7
                *(esi_1 + 0xa8) = &eax_7[1]
            else if (*(esi_1 + 0x20) == 0)
                i_4.b = 0
            else
                void* eax_10
                eax_10, i_4 = (*(esi_1 + 0x10))(*(esi_1 + 0x1c), esi_1 + 0x28, *(esi_1 + 0x24))
                
                if (eax_10 != 0)
                    *(esi_1 + 0xac) = eax_10 + 0x28 + esi_1
                    i_4.b = *(esi_1 + 0x28)
                    *(esi_1 + 0xa8) = esi_1 + 0x29
                else
                    *(esi_1 + 0x20) = eax_10
                    *(esi_1 + 0xac) = esi_1 + 0x29
                    *(esi_1 + 0x28) = 0
                    i_4.b = *(esi_1 + 0x28)
                    *(esi_1 + 0xa8) = esi_1 + 0x29
            
            uint32_t edi_2 = zx.d(i_4.b)
            int32_t edi_3 = edi_2 & 0xf
            uint32_t eax_17 = edi_2 u>> 4
            uint32_t var_58_1 = eax_17
            
            if (eax_17 != 0 && eax_17 != 1)
                goto label_723af4
            
            if (edi_3 u> 3)
                goto label_723af4
            
            void* j = nullptr
            int32_t edi_4 = edi_3 << 6
            int32_t var_54_1 = edi_4
            
            do
                void* esi_2 = *var_4c
                uint16_t ecx_6
                
                if (eax_17 == 0)
                    char* eax_19 = *(esi_2 + 0xa8)
                    int32_t* ecx_7
                    
                    if (eax_19 u< *(esi_2 + 0xac))
                        ecx_7.b = *eax_19
                        *(esi_2 + 0xa8) = &eax_19[1]
                    else if (*(esi_2 + 0x20) == 0)
                        ecx_7.b = 0
                    else
                        void* eax_22
                        eax_22, ecx_7 =
                            (*(esi_2 + 0x10))(*(esi_2 + 0x1c), esi_2 + 0x28, *(esi_2 + 0x24))
                        
                        if (eax_22 != 0)
                            *(esi_2 + 0xac) = eax_22 + 0x28 + esi_2
                            ecx_7.b = *(esi_2 + 0x28)
                            edi_4 = var_54_1
                            *(esi_2 + 0xa8) = esi_2 + 0x29
                        else
                            *(esi_2 + 0x20) = eax_22
                            *(esi_2 + 0xac) = esi_2 + 0x29
                            *(esi_2 + 0x28) = 0
                            ecx_7.b = *(esi_2 + 0x28)
                            edi_4 = var_54_1
                            *(esi_2 + 0xa8) = esi_2 + 0x29
                    
                    ecx_6 = zx.w(ecx_7.b)
                else
                    ecx_6 = sub_7202a0(esi_2)
                
                uint32_t eax_28 = zx.d(*(j + 0x801098))
                j += 1
                *(var_4c + ((eax_28 + edi_4) << 1) + 0x3484) = ecx_6
                eax_17 = var_58_1
            while (j s< 0x40)
            
            int32_t eax_30 = 0x41
            ebx = var_4c
            
            if (var_58_1 != 0)
                eax_30 = 0x81
            
            i_4 = i_8 - eax_30
            i_8 = i_4
        
        goto label_7234a2
    case 0xdd
        if (sub_7202a0(*ebx) != 4)
            goto label_723af4
        
        ebx[0x1201] = sub_7202a0(*ebx)
        CookieCheckFunction(1)
        return 1
    case 0xff
    label_723af4:
        CookieCheckFunction(0)
        return 0
