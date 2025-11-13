// 函数: sub_72b850
// 地址: 0x72b850
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t i_2 = arg2
int32_t var_44 = 0
int32_t ecx = 0
void var_28
void* eax_4 = &var_28
int32_t ecx_1

while (true)
    if (ecx != 0xa)
        void* edi_1 = eax_4
        int32_t* esi_1 = arg3 + 0xa8
        ecx_1 = ecx + 1
        void* var_30_1 = edi_1
        char* ecx_2 = *esi_1
        void* eax_6 = *(arg3 + 0xac)
        char var_31_1
        char var_29_1
        void* ecx_3
        void* ecx_5
        void* ecx_6
        
        if (ecx_2 u>= eax_6)
            if (*(arg3 + 0x20) != 0)
                void* eax_8 = (*(arg3 + 0x10))(*(arg3 + 0x1c), arg3 + 0x28, *(arg3 + 0x24))
                
                if (eax_8 != 0)
                    eax_6 = eax_8 + 0x28 + arg3
                    *(arg3 + 0xac) = eax_6
                else
                    *(arg3 + 0x20) = eax_8
                    eax_6 = arg3 + 0x29
                    *(arg3 + 0xac) = eax_6
                    *(arg3 + 0x28) = 0
                
                var_29_1 = *(arg3 + 0x28)
                ecx_3 = arg3 + 0x29
                goto label_72b8f6
            
            var_29_1 = 0
        label_72b908:
            
            if (*(arg3 + 0x20) != 0)
                void* eax_11
                eax_11, arg2 = (*(arg3 + 0x10))(*(arg3 + 0x1c), arg3 + 0x28, *(arg3 + 0x24))
                
                if (eax_11 != 0)
                    eax_6 = eax_11 + 0x28 + arg3
                    *(arg3 + 0xac) = eax_6
                else
                    *(arg3 + 0x20) = eax_11
                    eax_6 = arg3 + 0x29
                    *(arg3 + 0xac) = eax_6
                    *(arg3 + 0x28) = 0
                
                arg2.b = *(arg3 + 0x28)
                ecx_5 = arg3 + 0x29
                esi_1 = arg3 + 0xa8
                goto label_72b94b
            
            var_31_1 = 0
            *edi_1 = 0
        label_72b967:
            
            if (*(arg3 + 0x20) != 0)
                void* eax_14
                eax_14, arg2 = (*(arg3 + 0x10))(*(arg3 + 0x1c), arg3 + 0x28, *(arg3 + 0x24))
                
                if (eax_14 != 0)
                    eax_6 = eax_14 + 0x28 + arg3
                    *(arg3 + 0xac) = eax_6
                else
                    *(arg3 + 0x20) = eax_14
                    eax_6 = arg3 + 0x29
                    *(arg3 + 0xac) = eax_6
                    *(arg3 + 0x28) = 0
                
                arg2.b = *(arg3 + 0x28)
                ecx_6 = arg3 + 0x29
                goto label_72b9a6
            
            *(edi_1 + 1) = 0
        label_72b9c4:
            
            if (*(arg3 + 0x20) == 0)
                arg2.b = 0
            else
                void* eax_18
                eax_18, arg2 = (*(arg3 + 0x10))(*(arg3 + 0x1c), arg3 + 0x28, *(arg3 + 0x24))
                
                if (eax_18 != 0)
                    *(arg3 + 0xac) = eax_18 + 0x28 + arg3
                    arg2.b = *(arg3 + 0x28)
                    *(arg3 + 0xa8) = arg3 + 0x29
                else
                    *(arg3 + 0x20) = eax_18
                    *(arg3 + 0xac) = arg3 + 0x29
                    *(arg3 + 0x28) = 0
                    arg2.b = *(arg3 + 0x28)
                    *(arg3 + 0xa8) = arg3 + 0x29
        else
            arg2.b = *ecx_2
            ecx_3 = &ecx_2[1]
            var_29_1 = arg2.b
        label_72b8f6:
            *esi_1 = ecx_3
            edi_1 = var_30_1
            
            if (ecx_3 u>= eax_6)
                goto label_72b908
            
            arg2.b = *ecx_3
            ecx_5 = ecx_3 + 1
        label_72b94b:
            var_31_1 = arg2.b
            *esi_1 = ecx_5
            edi_1 = var_30_1
            *edi_1 = arg2.b
            
            if (ecx_5 u>= eax_6)
                goto label_72b967
            
            arg2.b = *ecx_5
            ecx_6 = ecx_5 + 1
        label_72b9a6:
            *(arg3 + 0xa8) = ecx_6
            *(edi_1 + 1) = arg2.b
            
            if (ecx_6 u>= eax_6)
                goto label_72b9c4
            
            arg2.b = *ecx_6
            *(arg3 + 0xa8) = ecx_6 + 1
        var_44 |= zx.d(arg2.b)
        bool cond:0_1 = *(arg3 + 0x10) == 0
        *(edi_1 + 2) = arg2.b
        
        if (cond:0_1)
        label_72ba44:
            
            if (*(arg3 + 0xa8) u< *(arg3 + 0xac))
                goto label_72ba50
        else
            int32_t eax_26
            eax_26, arg2 = (*(arg3 + 0x18))(*(arg3 + 0x1c))
            
            if (eax_26 == 0)
            label_72ba50:
                
                if (var_31_1 == 8)
                    eax_4 += 3
                    ecx = ecx_1
                    
                    if (var_29_1 == 0)
                        break
                    
                    continue
            else if (*(arg3 + 0x20) != 0)
                goto label_72ba44
    
label_72be38:
    CookieCheckFunction(0)
    return 0

int32_t eax_29
eax_29.b = (var_44.b & 0x10) != 0
int32_t esi_6 = 0
int32_t var_58_2 = 0
*arg5 = eax_29 + 3

if (arg4 s> 0)
    int32_t i = i_2
    char* edx = arg6
    int32_t eax_31 = ecx_1
    char* var_44_1 = edx
    int32_t edi_5 = i << 2
    
    do
        int32_t var_54_1 = 0
        
        if (eax_31 s> 0)
            void var_26
            void* edi_6 = &var_26
            void* var_3c_1 = &var_26
            int32_t eax_79
            
            do
                uint32_t eax_32 = zx.d(*(edi_6 - 1))
                char* esi_7 = edx
                
                if (eax_32 == 0)
                    int32_t edi_14 = 0
                    
                    if (i s<= 0)
                        edi_6 = var_3c_1
                    else
                        uint32_t eax_76 = zx.d(*var_3c_1)
                        uint32_t var_40_3 = eax_76
                        
                        do
                            if (sub_72b700(eax_76, eax_76, arg3, esi_7) == 0)
                                goto label_72be38
                            
                            i = i_2
                            edi_14 += 1
                            eax_76 = var_40_3
                            esi_7 = &esi_7[4]
                        while (edi_14 s< i)
                        
                        edx = var_44_1
                        edi_6 = var_3c_1
                else if (eax_32 == 1)
                    int32_t i_4 = i
                    
                    if (i s> 0)
                        do
                            char* eax_56 = *(arg3 + 0xa8)
                            char j_9
                            
                            if (eax_56 u< *(arg3 + 0xac))
                                i.b = *eax_56
                                j_9 = i.b
                                *(arg3 + 0xa8) = &eax_56[1]
                            else if (*(arg3 + 0x20) == 0)
                                j_9 = 0
                            else
                                void* eax_59 =
                                    (*(arg3 + 0x10))(*(arg3 + 0x1c), arg3 + 0x28, *(arg3 + 0x24))
                                
                                if (eax_59 != 0)
                                    *(arg3 + 0xac) = eax_59 + 0x28 + arg3
                                else
                                    *(arg3 + 0x20) = eax_59
                                    *(arg3 + 0xac) = arg3 + 0x29
                                    *(arg3 + 0x28) = 0
                                
                                edi_6 = var_3c_1
                                j_9 = *(arg3 + 0x28)
                                *(arg3 + 0xa8) = arg3 + 0x29
                            
                            if (*(arg3 + 0x10) == 0)
                            label_72bd10:
                                
                                if (*(arg3 + 0xa8) u>= *(arg3 + 0xac))
                                    goto label_72be38
                            else if ((*(arg3 + 0x18))(*(arg3 + 0x1c)) != 0)
                                if (*(arg3 + 0x20) == 0)
                                    goto label_72be38
                                
                                goto label_72bd10
                            
                            char j_7 = j_9
                            
                            if (zx.d(j_9) u> i_4)
                                j_7 = i_4.b
                            
                            uint32_t eax_69 = zx.d(*edi_6)
                            void var_64
                            
                            if (sub_72b700(eax_69, eax_69, arg3, &var_64) == 0)
                                goto label_72be38
                            
                            uint32_t j_5 = zx.d(j_7)
                            uint32_t j_2 = j_5
                            
                            if (j_5 != 0)
                                int32_t edi_13 = &var_64 - esi_7
                                uint32_t j
                                
                                do
                                    uint32_t eax_72 = eax_69
                                    int32_t ecx_14 = 0x80
                                    int32_t k_3 = 4
                                    int32_t k
                                    
                                    do
                                        if ((eax_72 & ecx_14) != 0)
                                            eax_72.b = esi_7[edi_13]
                                            *esi_7 = eax_72.b
                                            eax_72 = eax_69
                                        
                                        esi_7 = &esi_7[1]
                                        ecx_14 s>>= 1
                                        k = k_3
                                        k_3 -= 1
                                    while (k != 1)
                                    edi_13 -= 4
                                    j = j_2
                                    j_2 -= 1
                                while (j != 1)
                                edi_6 = var_3c_1
                            
                            i = i_4 - zx.d(j_7)
                            i_4 = i
                        while (i s> 0)
                        
                        i = i_2
                        edx = var_44_1
                else
                    if (eax_32 != 2)
                        goto label_72be38
                    
                    int32_t i_3 = i
                    
                    if (i s> 0)
                        int32_t i_1
                        
                        do
                            char* eax_36 = *(arg3 + 0xa8)
                            
                            if (eax_36 u< *(arg3 + 0xac))
                                i.b = *eax_36
                                *(arg3 + 0xa8) = &eax_36[1]
                            else if (*(arg3 + 0x20) == 0)
                                i.b = 0
                            else
                                void* eax_39
                                eax_39, i =
                                    (*(arg3 + 0x10))(*(arg3 + 0x1c), arg3 + 0x28, *(arg3 + 0x24))
                                
                                if (eax_39 != 0)
                                    *(arg3 + 0xac) = eax_39 + 0x28 + arg3
                                    i.b = *(arg3 + 0x28)
                                    *(arg3 + 0xa8) = arg3 + 0x29
                                else
                                    *(arg3 + 0x20) = eax_39
                                    *(arg3 + 0xac) = arg3 + 0x29
                                    *(arg3 + 0x28) = 0
                                    i.b = *(arg3 + 0x28)
                                    *(arg3 + 0xa8) = arg3 + 0x29
                            
                            uint32_t edi_8 = zx.d(i.b)
                            
                            if (*(arg3 + 0x10) == 0)
                            label_72bb74:
                                
                                if (*(arg3 + 0xa8) u>= *(arg3 + 0xac))
                                    goto label_72be38
                            else
                                int32_t eax_46
                                eax_46, i = (*(arg3 + 0x18))(*(arg3 + 0x1c))
                                
                                if (eax_46 != 0)
                                    if (*(arg3 + 0x20) == 0)
                                        goto label_72be38
                                    
                                    goto label_72bb74
                            
                            int32_t i_5
                            uint32_t j_8
                            uint32_t j_4
                            
                            if (edi_8 u< 0x80)
                                i_5 = i_3
                                j_4 = edi_8 + 1
                                
                                if (edi_8 + 1 u> i_5)
                                    goto label_72be38
                                
                                int32_t edi_11 = 0
                                
                                if (j_4 u<= 0)
                                    j_8 = j_4
                                else
                                    uint32_t eax_54 = zx.d(*var_3c_1)
                                    uint32_t var_40_1 = eax_54
                                    
                                    do
                                        int32_t eax_55
                                        eax_55, i = sub_72b700(eax_54, eax_54, arg3, esi_7)
                                        
                                        if (eax_55 == 0)
                                            goto label_72be38
                                        
                                        eax_54 = var_40_1
                                        edi_11 += 1
                                        esi_7 = &esi_7[4]
                                    while (edi_11 s< j_4)
                                    
                                    j_8 = j_4
                                    i_5 = i_3
                            else
                                if (edi_8 != 0x80)
                                    j_8 = edi_8 - 0x7f
                                    j_4 = j_8
                                else
                                    uint32_t j_6 = sub_7202a0(arg3)
                                    j_8 = j_6
                                    j_4 = j_6
                                
                                if (j_8 s> i_3)
                                    goto label_72be38
                                
                                uint32_t eax_49 = zx.d(*var_3c_1)
                                void var_60
                                int32_t eax_50
                                eax_50, i = sub_72b700(eax_49, eax_49, arg3, &var_60)
                                
                                if (eax_50 == 0)
                                    goto label_72be38
                                
                                if (j_8 s<= 0)
                                    i_5 = i_3
                                else
                                    int32_t edi_9 = &var_60 - esi_7
                                    uint32_t j_3 = j_4
                                    uint32_t j_1
                                    
                                    do
                                        uint32_t eax_52 = eax_49
                                        i = 0x80
                                        int32_t k_2 = 4
                                        int32_t k_1
                                        
                                        do
                                            if ((eax_52 & i) != 0)
                                                eax_52.b = esi_7[edi_9]
                                                *esi_7 = eax_52.b
                                                eax_52 = eax_49
                                            
                                            esi_7 = &esi_7[1]
                                            i s>>= 1
                                            k_1 = k_2
                                            k_2 -= 1
                                        while (k_1 != 1)
                                        edi_9 -= 4
                                        j_1 = j_3
                                        j_3 -= 1
                                    while (j_1 != 1)
                                    j_8 = j_4
                                    i_5 = i_3
                            i_1 = i_5 - j_8
                            i_3 = i_1
                        while (i_1 s> 0)
                        i = i_2
                        edx = var_44_1
                        edi_6 = var_3c_1
                
                edi_6 += 3
                eax_79 = var_54_1 + 1
                var_3c_1 = edi_6
                var_54_1 = eax_79
            while (eax_79 s< ecx_1)
            eax_31 = ecx_1
            edi_5 = i << 2
            esi_6 = var_58_2
        
        esi_6 += 1
        edx = &edx[edi_5]
        var_58_2 = esi_6
        var_44_1 = edx
    while (esi_6 s< arg4)

CookieCheckFunction(arg6)
return arg6
