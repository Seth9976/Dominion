// 函数: sub_622940
// 地址: 0x622940
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
void* i_3 = __security_cookie ^ &__saved_ebp
void* i_5 = i_3
int32_t ecx = arg2[0x13]

if (arg2[0x14] == ecx)
    i_3 = *(arg1 + 0x19d0)
    
    if (i_3 != ecx || i_3 == *(arg1 + 0x19cc))
        int32_t* eax_1 = sub_4b9480()
        int32_t* var_24_1 = eax_1
        i_3 = sub_4b9680(&eax_1[2], arg2[0x14])
        
        if (*(i_3 + 0x14) != 3)
            int32_t edx_1 = arg2[0x14]
            i_3 = sub_4d5db0(eax_1, edx_1)
            
            if (*(i_3 + 0x14) s>= *(i_3 + 0x10))
                int32_t eax_2 = arg2[1]
                int32_t esi_2 = arg2[0x14]
                int32_t var_20_1 = esi_2
                
                if (eax_2 == 6)
                    char var_19_1 = 1
                    void* i_4 = nullptr
                    
                    if (arg2[0x1b] s<= 0)
                    label_622dd5:
                        arg2[0x1b] = 0
                        i_3 = sub_6228c0(arg2)
                    else
                        void* ecx_4 = &arg2[0x1c]
                        void* var_28_1 = ecx_4
                        
                        while (true)
                            uint32_t eax_3 = *ecx_4
                            uint32_t ThreadLocalStoragePointer_3 =
                                sub_5915b0(eax_3, edx_1, arg1, eax_3)
                            uint32_t ThreadLocalStoragePointer_2 = ThreadLocalStoragePointer_3
                            uint32_t ThreadLocalStoragePointer_1 = ThreadLocalStoragePointer_2
                            
                            if (ThreadLocalStoragePointer_2 == 0x202
                                    || ThreadLocalStoragePointer_2 == 0x1134)
                                ThreadLocalStoragePointer_3 =
                                    sub_622830(ThreadLocalStoragePointer_3, var_20_1, 9, 4)
                            
                            if ((ThreadLocalStoragePointer_2 != 0x202
                                    && ThreadLocalStoragePointer_2 != 0x1134)
                                    || ThreadLocalStoragePointer_3.b == 0)
                                if (ThreadLocalStoragePointer_2 == 0xe20)
                                    if (sub_622830(ThreadLocalStoragePointer_3, var_20_1, 0xd, 4)
                                            == 0)
                                        goto label_622c1a
                                    
                                    int32_t edx_4 = arg2[0x13]
                                    int32_t eax_5 = edx_4 * 0x5a30
                                    
                                    if (*(eax_5 + arg1 + 0x174f4) s<= 2
                                            && sub_590ce0(eax_5, edx_4, arg1, 0x461, 0xb1c) != 0)
                                        goto label_622c1a
                                else if (ThreadLocalStoragePointer_2 != 0xd01)
                                    if (ThreadLocalStoragePointer_2 == 0x202)
                                        char eax_14
                                        eax_14, edx_1 =
                                            sub_622830(ThreadLocalStoragePointer_3, var_20_1, 9, 5)
                                        
                                        if (eax_14 == 0)
                                            goto label_622c1a
                                        
                                    label_622aee:
                                        edx_1.b = var_19_1
                                    label_622af7:
                                        i_3 = i_4 + 1
                                        ecx_4 = var_28_1 + 4
                                        i_4 = i_3
                                        var_28_1 = ecx_4
                                        
                                        if (i_3 s>= arg2[0x1b])
                                            break
                                        
                                        continue
                                    
                                    int32_t var_48_3
                                    void* const eax_18
                                    int32_t ecx_12
                                    
                                    if (ThreadLocalStoragePointer_2 != 0xb00)
                                        if (ThreadLocalStoragePointer_2 != 0xf47)
                                            goto label_622c1a
                                        
                                        int32_t esi_7 = eax_3 u>> 6 & 0xfff
                                        
                                        if (esi_7 u>= 0x320)
                                            sub_591930()
                                        
                                        eax_18 = &data_86ebe0
                                        
                                        while (*eax_18 != *(esi_7 * 0x64 + arg1 + 0x1a4c))
                                            eax_18 += 4
                                            
                                            if (eax_18 s>= 0x86ec2c)
                                                goto label_622c0d
                                        
                                        var_48_3 = 5
                                        ecx_12 = 7
                                        goto label_622bfd
                                    
                                    int32_t esi_3 = arg2[0x13]
                                    
                                    if (*(arg1 + 0x19cc) == esi_3)
                                        if (*(arg1 + 0x19ec) != 1)
                                            ThreadLocalStoragePointer_3 = sub_590ce0(
                                                ThreadLocalStoragePointer_3, esi_3, arg1, 0x3ea, 
                                                0x70f)
                                        
                                        if (*(arg1 + 0x19ec) != 1
                                                && ThreadLocalStoragePointer_3 != 0)
                                            goto label_622c0d
                                        
                                        int32_t eax_16 = sub_590d50(ThreadLocalStoragePointer_3, 
                                            esi_3, arg1, 0x3ea, 4, 0)
                                        eax_18 = sub_590d50(eax_16, esi_3, arg1, 0x3eb, 0, 0x1000)
                                            + eax_16
                                        
                                        if (eax_18 s> 0)
                                            eax_18 = esi_3 * 0x5a30
                                            
                                            if (*(eax_18 + arg1 + 0x174f8) == 0)
                                                goto label_622c0d
                                        
                                        var_48_3 = 3
                                        ecx_12 = 4
                                    label_622bfd:
                                        char eax_20
                                        eax_20, edx_1 =
                                            sub_622830(eax_18, var_20_1, ecx_12, var_48_3)
                                        
                                        if (eax_20 != 0)
                                            goto label_622aee
                                        
                                        goto label_622c0d
                                    
                                label_622c0d:
                                    ThreadLocalStoragePointer_2 = ThreadLocalStoragePointer_1
                                label_622c1a:
                                    edx_1 = 0
                                    void* eax_22 = sub_61ce90(0x17) + 4
                                    
                                    while (true)
                                        int32_t ecx_14 = *eax_22
                                        
                                        if (ecx_14 == 0)
                                            goto label_622c33
                                        
                                        if (ecx_14 == ThreadLocalStoragePointer_2)
                                            int32_t ecx_17 = arg2[0x13]
                                            int32_t eax_29 = eax_3 u>> 6 & 0xfff
                                            
                                            if (eax_29 u>= 0x320)
                                                sub_591930()
                                            
                                            int32_t eax_30 = eax_29 * 0x64
                                            int32_t i = *(eax_30 + arg1 + 0x1a4c)
                                            int32_t eax_31
                                            
                                            if (i == 0x101)
                                                eax_31, edx_1 =
                                                    sub_590c70(eax_30, ecx_17, arg1, 0x454)
                                            
                                            int32_t esi_8
                                            
                                            if (i == 0x101 && eax_31 != 0)
                                            label_622c33:
                                                esi_8 = var_20_1
                                            else
                                                void* const eax_32 = &data_7feac0
                                                
                                                while (*eax_32 != i)
                                                    eax_32 += 4
                                                    
                                                    if (eax_32 s>= &data_7feaf8)
                                                        goto label_622c33
                                                
                                                esi_8 = var_20_1
                                                char eax_33
                                                eax_33, edx_1 = sub_622830(eax_32, esi_8, 0x17, 5)
                                                
                                                if (eax_33 != 0)
                                                    goto label_622aee
                                            
                                            uint32_t ThreadLocalStoragePointer =
                                                ThreadLocalStoragePointer_1
                                            int32_t ecx_16
                                            int32_t edx_12
                                            
                                            if (ThreadLocalStoragePointer != 0xd06)
                                                if (ThreadLocalStoragePointer == 0x909)
                                                    edx_12 = esi_8
                                                    ecx_16 = 0x12
                                                label_622d28:
                                                    char eax_34
                                                    eax_34, edx_1 = sub_622830(
                                                        ThreadLocalStoragePointer, edx_12, ecx_16, 
                                                        5)
                                                    
                                                    if (eax_34 != 0)
                                                        goto label_622aee
                                                
                                            label_622d38:
                                                edx_1.b = 0
                                                var_19_1 = 0
                                                break
                                            
                                            TEB* fsbase
                                            ThreadLocalStoragePointer =
                                                fsbase->ThreadLocalStoragePointer
                                            int32_t ecx_15 = 0
                                            void* esi_10 = *ThreadLocalStoragePointer + 0x10
                                            edx_1 = *(esi_10 + 0xf000)
                                            
                                            if (edx_1 s> 0)
                                                ThreadLocalStoragePointer =
                                                    edx_1 * 0x78 + 0xffffff94 + esi_10
                                                
                                                do
                                                    if (*ThreadLocalStoragePointer != arg2[0x13])
                                                        goto label_622d38
                                                    
                                                    ecx_15 += 1
                                                    ThreadLocalStoragePointer -= 0x78
                                                while (ecx_15 s< edx_1)
                                            
                                            edx_12 = var_20_1
                                            ecx_16 = 3
                                            goto label_622d28
                                        
                                        edx_1 += 1
                                        eax_22 += 4
                                        
                                        if (edx_1 s>= 0x20)
                                            goto label_622c33
                                    
                                    goto label_622af7
                                else
                                    char eax_9
                                    int32_t edx_6
                                    eax_9, edx_6 =
                                        sub_622830(ThreadLocalStoragePointer_3, var_20_1, 8, 4)
                                    
                                    if (eax_9 == 0)
                                        goto label_622c1a
                                    
                                    int32_t eax_12
                                    
                                    if ((eax_3.b & 0x30) != 0)
                                        eax_12 = *(sub_5769e0(eax_3, edx_6, arg1, eax_3) + 0xb0)
                                    else
                                        eax_12 = *(sub_576940(eax_3, edx_6, arg1, eax_3) + 0x84)
                                    
                                    if (eax_12 != 0xa)
                                        goto label_622c1a
                            
                            arg2[0x1c] = arg2[i_4 + 0x1c]
                            goto label_6232d7
                        
                        if (edx_1.b != 0)
                            arg2[0x1b] = 0
                            i_3 = sub_6228c0(arg2)
                else if (eax_2 != 5 || arg2[4] != 7)
                label_622d79:
                    
                    if (arg2[1] == 1 && arg2[4] == 1)
                        int32_t eax_36 = sub_622830(eax_2, esi_2, 5, 6)
                        
                        if (eax_36.b == 0)
                            eax_2 = sub_622830(eax_36, esi_2, 5, 8)
                            
                            if (eax_2.b != 0)
                                int32_t esi_13 = 0
                                
                                if (arg2[0x1b] s<= 0)
                                label_622e37:
                                    eax_2 = sub_5e4ca0()
                                    
                                    if (eax_2 == 0)
                                        goto label_622dd5
                                    
                                    esi_2 = var_20_1
                                else
                                    void* ecx_21 = &arg2[0x1c]
                                    void* var_28_3 = ecx_21
                                    
                                    while (true)
                                        uint32_t eax_38 = zx.d(*ecx_21)
                                        
                                        if (eax_38 u>= 0x320)
                                            sub_591930()
                                            ecx_21 = var_28_3
                                        
                                        eax_2 = eax_38 * 0x64
                                        
                                        if (*(eax_2 + arg1 + 0x1a4c) != 0xc18)
                                            break
                                        
                                        esi_13 += 1
                                        ecx_21 += 4
                                        var_28_3 = ecx_21
                                        
                                        if (esi_13 s>= arg2[0x1b])
                                            goto label_622e37
                                    
                                    esi_2 = var_20_1
                        else
                            int32_t esi_12 = 0
                            
                            if (arg2[0x1b] s<= 0)
                                goto label_622dd5
                            
                            void* ecx_20 = &arg2[0x1c]
                            void* var_28_2 = ecx_20
                            
                            while (true)
                                uint32_t eax_37 = zx.d(*ecx_20)
                                
                                if (eax_37 u>= 0x320)
                                    sub_591930()
                                    ecx_20 = var_28_2
                                
                                eax_2 = eax_37 * 0x64
                                
                                if (*(eax_2 + arg1 + 0x1a4c) != 0xc18)
                                    break
                                
                                esi_12 += 1
                                ecx_20 += 4
                                var_28_2 = ecx_20
                                
                                if (esi_12 s>= arg2[0x1b])
                                    goto label_622dd5
                            
                            esi_2 = var_20_1
                    
                    if (arg2[4] == 0x94)
                        eax_2 = sub_622830(eax_2, esi_2, 0x18, 4)
                    
                    if (arg2[4] == 0x94 && eax_2.b != 0)
                        goto label_6232d7
                    
                    if (arg2[4] == 0x99)
                        eax_2 = sub_622830(eax_2, esi_2, 0x19, 4)
                    
                    if (arg2[4] == 0x99 && eax_2.b != 0)
                        int32_t eax_39 = arg2[0x13]
                        int32_t i_1 = 0
                        int32_t var_28_4 = eax_39
                        
                        if (*(arg1 + 0xd38) s<= 0)
                            goto label_622dd5
                        
                        do
                            if (i_1 != eax_39)
                                if (sub_590c70(eax_39, i_1, arg1, 0x3ea) s> 3)
                                    goto label_6232d7
                                
                                eax_39 = var_28_4
                            
                            i_1 += 1
                        while (i_1 s< *(arg1 + 0xd38))
                        
                        arg2[0x1b] = 0
                        i_3 = sub_6228c0(arg2)
                    else
                        int32_t esi_15
                        
                        if (arg2[4] != 0x9e)
                            esi_15 = var_20_1
                        label_622f6d:
                            char eax_44
                            
                            if (arg2[4] == 0x21)
                                eax_44 = sub_622830(eax_2, esi_15, 0xa, 4)
                            
                            if (arg2[4] == 0x21 && eax_44 != 0)
                                goto label_6232d7
                            
                            i_3 = arg2[4]
                            
                            if (i_3 == 0x126 || i_3 == 0x125)
                                i_3 = sub_622830(i_3, esi_15, 0x1b, 5)
                                
                                if (i_3.b == 0)
                                    goto label_622fb9
                                
                                i_3 = sub_6228c0(arg2)
                            else
                            label_622fb9:
                                
                                if (arg2[4] == 0xcb)
                                    i_3 = sub_622830(i_3, esi_15, 6, 4)
                                
                                if (arg2[4] == 0xcb && i_3.b != 0)
                                    goto label_6232d7
                                
                                if (arg2[4] == 0x90)
                                    i_3 = sub_622830(i_3, esi_15, 0x15, 4)
                                
                                if (arg2[4] == 0x90 && i_3.b != 0)
                                    goto label_6232d7
                                
                                int32_t esi_18
                                
                                if (arg2[4] == 0xbc)
                                    int32_t eax_45 = arg2[0x13]
                                    int32_t esi_16 = 0
                                    void* ebx_1 = arg1 + 0x174c
                                    int32_t var_18[0x4]
                                    
                                    for (int32_t i_2 = 0x22; i_2 s< 0x26; )
                                        int32_t ecx_25 = *ebx_1
                                        
                                        if (ecx_25 != 0)
                                            var_18[esi_16] = ecx_25
                                            esi_16 += 1
                                        
                                        i_2 += 1
                                        ebx_1 += 0x10
                                    
                                    int32_t ebx_2 = 0
                                    uint32_t esi_17
                                    
                                    if (esi_16 s<= 0)
                                    label_623066:
                                        esi_17 = 0
                                    else
                                        void* ecx_26 = arg1
                                        
                                        while (true)
                                            int16_t edx_27 = (var_18[ebx_2]).w
                                            uint32_t eax_46 = zx.d(edx_27)
                                            
                                            if (eax_46 u>= 0x320)
                                                sub_591930()
                                                ecx_26 = arg1
                                                edx_27 = (var_18[ebx_2]).w
                                            
                                            if (*(eax_46 * 0x64 + ecx_26 + 0x1a4c) == 0xe26)
                                                esi_17 = zx.d(edx_27)
                                                
                                                if (esi_17 u>= 0x320)
                                                    sub_591930()
                                                
                                                break
                                            
                                            ebx_2 += 1
                                            
                                            if (ebx_2 s>= esi_16)
                                                goto label_623066
                                    
                                    int32_t eax_48 = esi_17 * 0x64
                                    esi_18 = var_20_1
                                    i_3 = sub_571f30(eax_48, eax_45, arg1, 0xe01, 
                                        *(eax_48 + arg1 + 0x1a50), 0) << 5
                                    
                                    if (*(i_3 + arg1 + 0x152dc) != 1)
                                        goto label_6230cf
                                    
                                    i_3 = sub_622830(i_3, esi_18, 0xf, 4)
                                    
                                    if (i_3.b == 0)
                                        goto label_6230cf
                                    
                                    goto label_6232d7
                                
                                esi_18 = var_20_1
                            label_6230cf:
                                
                                if (arg2[4] == 0x4a)
                                    i_3 = sub_622830(i_3, esi_18, 0xb, 4)
                                
                                if (arg2[4] == 0x4a && i_3.b != 0)
                                    goto label_6232d7
                                
                                if (arg2[4] == 0x91)
                                    i_3 = sub_622830(i_3, esi_18, 0xe, 4)
                                
                                if (arg2[4] == 0x91 && i_3.b != 0)
                                    goto label_6232d7
                                
                                if (arg2[4] == 0x92)
                                    i_3 = sub_622830(i_3, esi_18, 2, 4)
                                
                                if (arg2[4] == 0x92 && i_3.b != 0)
                                    goto label_6232d7
                                
                                if (arg2[4] == 0x50)
                                    i_3 = sub_622830(i_3, esi_18, 0x11, 4)
                                
                                if (arg2[4] == 0x50 && i_3.b != 0)
                                    goto label_6232d7
                                
                                if (arg2[4] == 0x52)
                                    i_3 = sub_622830(i_3, esi_18, 0x14, 4)
                                
                                if (arg2[4] == 0x52 && i_3.b != 0)
                                    goto label_6232d7
                                
                                if (arg2[4] != 0x36)
                                label_6231ec:
                                    void* esi_21
                                    
                                    if (arg2[4] == 0x133)
                                        esi_21 = 7
                                        i_3 = arg1 + 0x1594
                                        
                                        while (*i_3 != 0x100)
                                            if (*(i_3 + 4) == 0x100)
                                                break
                                            
                                            esi_21 += 1
                                            i_3 += 0x10
                                            
                                            if (esi_21 s>= 0x48)
                                                goto label_623243
                                        
                                        if (esi_21 != 0)
                                            i_3 = esi_21 - 7
                                            
                                            if (i_3 u> 0x41)
                                                i_3 = sub_591930()
                                            
                                            if (esi_21 s>= 0x48)
                                                i_3 = sub_591930()
                                    
                                    int32_t esi_23
                                    
                                    if (arg2[4] == 0x133
                                        && (esi_21 == 0 || *(arg1 + esi_21 * 0x10 + 0x152c) == 0))
                                    label_623243:
                                        esi_23 = var_20_1
                                        i_3 = sub_622830(i_3, esi_23, 0x10, 4)
                                        
                                        if (i_3.b == 0)
                                            goto label_62326e
                                        
                                        arg2[0x1c] = 0xd7
                                        goto label_6232d7
                                    
                                    esi_23 = var_20_1
                                label_62326e:
                                    
                                    if (arg2[4] == 0xb6)
                                        i_3 = sub_622830(i_3, esi_23, 0xc, 4)
                                    
                                    if (arg2[4] == 0xb6 && i_3.b != 0)
                                        goto label_6232d7
                                    
                                    if (arg2[4] == 0xc8)
                                        uint32_t esi_25 = zx.d((arg2[0x16]).w)
                                        
                                        if (esi_25 u>= 0x320)
                                            sub_591930()
                                        
                                        for (i_3 = &data_86ec30; i_3 s< &data_86ec80; i_3 += 4)
                                            if (*i_3 == *(esi_25 * 0x64 + arg1 + 0x1a4c))
                                                goto label_6232f2
                                        
                                        i_3 = sub_622830(i_3, var_20_1, 0x13, 4)
                                        
                                        if (i_3.b != 0)
                                            goto label_6232d7
                                else
                                    void* esi_19 = 7
                                    i_3 = arg1 + 0x1594
                                    
                                    while (*i_3 != 0x100)
                                        if (*(i_3 + 4) == 0x100)
                                            break
                                        
                                        esi_19 += 1
                                        i_3 += 0x10
                                        
                                        if (esi_19 s>= 0x48)
                                            goto label_6231cd
                                    
                                    if (esi_19 != 0)
                                        i_3 = esi_19 - 7
                                        
                                        if (i_3 u> 0x41)
                                            i_3 = sub_591930()
                                        
                                        if (esi_19 s>= 0x48)
                                            i_3 = sub_591930()
                                    
                                    if (esi_19 != 0 && *(arg1 + esi_19 * 0x10 + 0x152c) != 0)
                                        goto label_6231ec
                                    
                                label_6231cd:
                                    i_3 = sub_622830(i_3, var_20_1, 0x10, 4)
                                    
                                    if (i_3.b == 0)
                                        goto label_6231ec
                                    
                                    arg2[0x1c] = 0x29
                                label_6232d7:
                                    arg2[0x1b] = 1
                                    i_3 = sub_6228c0(arg2)
                        else
                            int32_t edx_21 = *(arg1 + 0x1520)
                            int32_t eax_41 = 0
                            uint32_t esi_14
                            
                            if (edx_21 s<= 0)
                            label_622f00:
                                esi_14 = 0
                            else
                                void* ecx_23 = arg1 + 0x1a4c
                                
                                while (*ecx_23 != 0xc33)
                                    eax_41 += 1
                                    ecx_23 += 0x64
                                    
                                    if (eax_41 s>= edx_21)
                                        goto label_622f00
                                
                                esi_14 = zx.d(eax_41.w)
                                
                                if (esi_14 u>= 0x320)
                                    sub_591930()
                            
                            int32_t eax_42 = esi_14 * 0x64
                            esi_15 = var_20_1
                            eax_2 = sub_571f30(eax_42, 0xffffffff, arg1, 0x601, 
                                *(eax_42 + arg1 + 0x1a50), 0) << 5
                            
                            if (*(eax_2 + arg1 + 0x152dc) != 0)
                                goto label_622f6d
                            
                            eax_2 = sub_622830(eax_2, esi_15, 1, 5)
                            
                            if (eax_2.b == 0)
                                goto label_622f6d
                            
                            arg2[0x1b] = 0
                            i_3 = sub_6228c0(arg2)
                else
                    eax_2 = sub_622830(eax_2, esi_2, eax_2 + 0x17, 4)
                    
                    if (eax_2.b == 0)
                        goto label_622d79
                    
                    arg2[0x1b] = arg2[8]
                    i_3 = sub_6228c0(arg2)

label_6232f2:
CookieCheckFunction(i_3)
return i_3
