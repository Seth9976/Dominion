// 函数: spAtlas_create
// 地址: 0xfbefa8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
char* nptr_21 = arg1
char* nptr_11 = arg1
int32_t x0_1 = strlen(arg3)
int32_t x24

if (x0_1 s< 1)
    x24 = 0
else
    uint32_t x8_2 = zx.d(arg3[zx.q(x0_1 - 1)])
    x24 = (x8_2 != 0x2f ? 1 : 0) & (x8_2 != 0x5c ? 1 : 0)

void* result = _spCalloc(1, 0x18, "..\..\ExternalCode\spine-c\src\spine\Atlas.c", 0xb4)
*(result + 0x10) = arg4

if (arg2 != 0)
    uint64_t x10_1 = zx.q(x24)
    void var_a0
    void* endptr_2 = &var_a0
    char* nptr_14
    int64_t* endptr = &nptr_14
    void var_90
    void* endptr_1 = &var_90
    void** x25_1 = nullptr
    char** x22_1 = nullptr
    char* nptr_20 = &nptr_21[sx.q(arg2)]
    char* nptr_23 = nptr_21
    void** var_d0_1 = nullptr
    size_t var_e0_1 = sx.q(x0_1)
    
    while (true)
        void* nptr_6 = nptr_21
        
        while (zx.d(*nptr_23) != 0xa)
            nptr_23 = &nptr_23[1]
            nptr_11 = nptr_23
            
            if (nptr_20 == nptr_23)
                nptr_23 = nptr_20
                break
        
        nptr_14 = nptr_23
        uint32_t x8_8 = zx.d(*nptr_21)
        
        if (x8_8 == 0x20 || x8_8 - 9 u<= 4)
            void* nptr_15 = &nptr_21[1]
            
            while (true)
                nptr_21 = nptr_15 - 1
                
                if (nptr_21 u>= nptr_23)
                    break
                
                nptr_6 = nptr_15
                uint32_t x9_2 = zx.d(*nptr_15)
                nptr_15 += 1
                
                if (x9_2 != 0x20)
                    if (x9_2 - 9 u>= 5)
                        nptr_21 = nptr_15 - 1
                        break
        
        char* nptr_35 = nptr_23
        
        if (nptr_21 != nptr_23)
            void* nptr_26 = nptr_23 - 1
            uint32_t i
            
            do
                nptr_14 = nptr_26
                bool cond:3_1 = nptr_26 u< nptr_21
                i = zx.d(*nptr_26)
                nptr_26 -= 1
                
                if (cond:3_1)
                    break
            while (i == 0xd)
            nptr_35 = nptr_26 + 2
            nptr_14 = nptr_35
        
        if (nptr_23 != nptr_20)
            nptr_23 = &nptr_23[1]
            nptr_11 = nptr_23
        
        int32_t x28_1 = nptr_35.d - nptr_21.d
        
        if (nptr_35 != nptr_21)
            void* nptr
            char* endptr_3
            char* nptr_1
            char* endptr_4
            
            if (x25_1 == 0)
                char* x0_4 =
                    _spMalloc(sx.q(x28_1 + 1), "..\..\ExternalCode\spine-c\src\spine\Atlas.c", 0x87)
                int64_t x25_2 = sx.q(x28_1)
                memcpy(x0_4, nptr_21, x25_2)
                x0_4[x25_2] = 0
                int64_t x0_8 = _spMalloc(sx.q(x0_1 + x10_1.d) + 1 + strlen(x0_4), 
                    "..\..\ExternalCode\spine-c\src\spine\Atlas.c", 0xbc)
                memcpy(x0_8, arg3, var_e0_1)
                
                if (x10_1 != 0)
                    *(x0_8 + var_e0_1) = 0x2f
                
                strcpy(x0_8 + x10_1 + var_e0_1, x0_4)
                void** x0_10 =
                    _spCalloc(1, 0x40, "..\..\ExternalCode\spine-c\src\spine\Atlas.c", 0x23)
                x25_1 = x0_10
                *x0_10 = result
                int64_t x0_14 = _spMalloc(strlen(x0_4) + 1, 
                    "..\..\ExternalCode\spine-c\src\spine\Atlas.c", 0x25)
                x25_1[1] = x0_14
                strcpy(x0_14, x0_4)
                _spFree(x0_4)
                void* result_1
                
                if (var_d0_1 == 0)
                    result_1 = result
                else
                    result_1 = &var_d0_1[7]
                
                *result_1 = x25_1
                int32_t x0_17 = sub_fbfb68(&nptr_11, nptr_20, &nptr)
                
                if (x0_17 == 2)
                    x25_1[6].d = strtol(nptr, &endptr_3, 0xa)
                    *(x25_1 + 0x34) = strtol(nptr_1, &endptr_4, 0xa)
                    
                    if (sub_fbfb68(&nptr_11, nptr_20, &nptr) != 0)
                    label_fbf4bc:
                        x25_1[2].d = sub_fbff18(&data_11bbe30, nptr, endptr_3.d)
                        
                        if (sub_fbfb68(&nptr_11, nptr_20, &nptr) != 0)
                            *(x25_1 + 0x14) = sub_fbff18(&data_11bbe70, nptr, endptr_3.d)
                            x25_1[3].d = sub_fbff18(&data_11bbe70, nptr_1, endptr_4.d)
                            void* nptr_22 = nptr_11
                            void* nptr_29
                            
                            if (nptr_22 == nptr_20)
                                nptr_22 = nptr_6
                                nptr_29 = nptr_14
                                nptr_23 = nptr_20
                            else
                                void* nptr_19 = nptr_22
                                void* nptr_24 = nptr_22
                                
                                while (zx.d(*nptr_19) != 0xa)
                                    nptr_19 += 1
                                    nptr_11 = nptr_19
                                    
                                    if (nptr_20 == nptr_19)
                                        nptr_19 = nptr_20
                                        break
                                
                                nptr_14 = nptr_19
                                uint32_t x8_21 = zx.d(*nptr_22)
                                
                                if (x8_21 == 0x20 || x8_21 - 9 u<= 4)
                                    void* x8_23 = nptr_22 + 1
                                    
                                    while (true)
                                        nptr_22 = x8_23 - 1
                                        
                                        if (nptr_22 u>= nptr_19)
                                            break
                                        
                                        void* var_88_2 = x8_23
                                        uint32_t x10_8 = zx.d(*x8_23)
                                        x8_23 += 1
                                        
                                        if (x10_8 != 0x20)
                                            if (x10_8 - 9 u>= 5)
                                                nptr_22 = x8_23 - 1
                                                break
                                
                                nptr_29 = nptr_19
                                
                                if (nptr_22 != nptr_19)
                                    void* nptr_30 = nptr_19 - 1
                                    uint32_t i_1
                                    
                                    do
                                        nptr_14 = nptr_30
                                        bool cond:14_1 = nptr_30 u< nptr_22
                                        i_1 = zx.d(*nptr_30)
                                        nptr_30 -= 1
                                        
                                        if (cond:14_1)
                                            break
                                    while (i_1 == 0xd)
                                    nptr_29 = nptr_30 + 2
                                    nptr_14 = nptr_29
                                
                                if (nptr_19 == nptr_20)
                                    nptr_23 = nptr_20
                                else
                                    nptr_23 = nptr_19 + 1
                                    nptr_11 = nptr_23
                            
                            void* x10_10 = nptr_22 + 2
                            void* x9_6
                            uint32_t i_2
                            
                            do
                                if (nptr_29 == nptr_22)
                                    goto label_fbfb38
                                
                                x9_6 = x10_10
                                i_2 = zx.d(*nptr_22)
                                nptr_22 += 1
                                x10_10 = x9_6 + 1
                            while (i_2 != 0x3a)
                            void* nptr_25 = nptr_22
                            uint32_t x10_11 = zx.d(*nptr_22)
                            
                            if (x10_11 == 0x20 || x10_11 - 9 u<= 4)
                                while (true)
                                    nptr_22 = x9_6 - 1
                                    
                                    if (nptr_22 u>= nptr_29)
                                        break
                                    
                                    void* var_88_3 = x9_6
                                    uint32_t x10_13 = zx.d(*x9_6)
                                    x9_6 += 1
                                    
                                    if (x10_13 != 0x20)
                                        if (x10_13 - 9 u>= 5)
                                            nptr_22 = x9_6 - 1
                                            break
                            
                            if (nptr_22 != nptr_29)
                                void* nptr_31 = nptr_29 - 1
                                uint32_t i_3
                                
                                do
                                    nptr_14 = nptr_31
                                    bool cond:15_1 = nptr_31 u< nptr_22
                                    i_3 = zx.d(*nptr_31)
                                    nptr_31 -= 1
                                    
                                    if (cond:15_1)
                                        break
                                while (i_3 == 0xd)
                                nptr_29 = nptr_31 + 2
                                nptr_14 = nptr_29
                            
                            void* fp_4 = nptr_29 - nptr_22
                            *(x25_1 + 0x1c) = 0x100000001
                            
                            if (strncmp("none", nptr_22, fp_4) != 0)
                                if (fp_4 != 1)
                                    if (strncmp(0x74decd, nptr_22, fp_4) == 0)
                                        *(x25_1 + 0x1c) = 0x200000002
                                else
                                    uint32_t x8_24 = zx.d(*nptr_22)
                                    
                                    if (x8_24 == 0x79)
                                        x25_1[4].d = 2
                                    else if (x8_24 == 0x78)
                                        *(x25_1 + 0x1c) = 2
                            
                            _spAtlasPage_createTexture(x25_1, x0_8)
                            _spFree(x0_8)
                            var_d0_1 = x25_1
                            nptr_21 = nptr_23
                            
                            if (nptr_23 == nptr_20)
                                break
                            
                            continue
                else if (x0_17 != 0)
                    goto label_fbf4bc
            else
                char** x0_2 =
                    _spCalloc(1, 0x68, "..\..\ExternalCode\spine-c\src\spine\Atlas.c", 0x32)
                
                if (x22_1 == 0)
                    *(result + 8) = x0_2
                    nptr_35 = nptr_14
                else
                    x22_1[0xc] = x0_2
                
                int32_t x22_2 = nptr_35.d - nptr_21.d
                x0_2[0xb] = x25_1
                char* x0_19 =
                    _spMalloc(sx.q(x22_2 + 1), "..\..\ExternalCode\spine-c\src\spine\Atlas.c", 0x87)
                int64_t x22_3 = sx.q(x22_2)
                memcpy(x0_19, nptr_21, x22_3)
                x0_19[x22_3] = 0
                *x0_2 = x0_19
                char* nptr_5 = nptr_11
                void* nptr_16
                
                if (nptr_5 == nptr_20)
                    nptr_5 = nptr_6
                    nptr_16 = nptr_14
                else
                    char* nptr_12 = nptr_5
                    char* nptr_7 = nptr_5
                    
                    while (zx.d(*nptr_12) != 0xa)
                        nptr_12 = &nptr_12[1]
                        nptr_11 = nptr_12
                        
                        if (nptr_20 == nptr_12)
                            nptr_12 = nptr_20
                            break
                    
                    nptr_14 = nptr_12
                    uint32_t x8_17 = zx.d(*nptr_5)
                    
                    if (x8_17 == 0x20 || x8_17 - 9 u<= 4)
                        void* x8_19 = &nptr_5[1]
                        
                        while (true)
                            nptr_5 = x8_19 - 1
                            
                            if (nptr_5 u>= nptr_12)
                                break
                            
                            void* var_88_1 = x8_19
                            uint32_t x10_2 = zx.d(*x8_19)
                            x8_19 += 1
                            
                            if (x10_2 != 0x20)
                                if (x10_2 - 9 u>= 5)
                                    nptr_5 = x8_19 - 1
                                    break
                    
                    nptr_16 = nptr_12
                    
                    if (nptr_5 != nptr_12)
                        void* nptr_27 = nptr_12 - 1
                        uint32_t i_4
                        
                        do
                            nptr_14 = nptr_27
                            bool cond:10_1 = nptr_27 u< nptr_5
                            i_4 = zx.d(*nptr_27)
                            nptr_27 -= 1
                            
                            if (cond:10_1)
                                break
                        while (i_4 == 0xd)
                        nptr_16 = nptr_27 + 2
                        nptr_14 = nptr_16
                    
                    if (nptr_12 != nptr_20)
                        nptr_11 = &nptr_12[1]
                
                void* nptr_34 = &nptr_5[2]
                void* nptr_18
                uint32_t i_5
                
                do
                    if (nptr_16 == nptr_5)
                        goto label_fbfb38
                    
                    nptr_18 = nptr_34
                    i_5 = zx.d(*nptr_5)
                    nptr_5 = &nptr_5[1]
                    nptr_34 = nptr_18 + 1
                while (i_5 != 0x3a)
                void* nptr_8 = nptr_5
                uint32_t x10_4 = zx.d(*nptr_5)
                
                if (x10_4 == 0x20 || x10_4 - 9 u<= 4)
                    while (true)
                        nptr_5 = nptr_18 - 1
                        
                        if (nptr_5 u>= nptr_16)
                            break
                        
                        nptr_8 = nptr_18
                        uint32_t x10_6 = zx.d(*nptr_18)
                        nptr_18 += 1
                        
                        if (x10_6 != 0x20)
                            if (x10_6 - 9 u>= 5)
                                nptr_5 = nptr_18 - 1
                                break
                
                if (nptr_5 != nptr_16)
                    void* nptr_28 = nptr_16 - 1
                    uint32_t i_6
                    
                    do
                        nptr_14 = nptr_28
                        bool cond:12_1 = nptr_28 u< nptr_5
                        i_6 = zx.d(*nptr_28)
                        nptr_28 -= 1
                        
                        if (cond:12_1)
                            break
                    while (i_6 == 0xd)
                    nptr_16 = nptr_28 + 2
                    nptr_14 = nptr_16
                
                int64_t fp_3 = nptr_16 - nptr_5
                int32_t x0_21
                
                if (strncmp("true", nptr_5, fp_3) == 0)
                    x0_21 = 0x5a
                else
                    x0_21 = strncmp("false", nptr_5, fp_3)
                    
                    if (x0_21 != 0)
                        x0_21 = strtol(nptr_5, endptr, 0xa)
                
                *(x0_2 + 0x3c) = x0_21 == 0x5a ? 1 : 0
                x0_2[8].d = x0_21
                
                if (sub_fbfb68(&nptr_11, nptr_20, &nptr) == 2)
                    x0_2[1].d = strtol(nptr, &endptr_3, 0xa)
                    *(x0_2 + 0xc) = strtol(nptr_1, &endptr_4, 0xa)
                    
                    if (sub_fbfb68(&nptr_11, nptr_20, &nptr) == 2)
                        x0_2[2].d = strtol(nptr, &endptr_3, 0xa)
                        int32_t x0_46 = strtol(nptr_1, &endptr_4, 0xa)
                        *(x0_2 + 0x14) = x0_46
                        int32_t x9_7 = x0_2[1].d
                        int32_t x8_26 = *(x0_2 + 0xc)
                        int32_t x10_15 = *(x0_2 + 0x3c)
                        x0_2[3].d = float.s(x9_7) / float.s(x25_1[6].d)
                        *(x0_2 + 0x1c) = float.s(x8_26) / float.s(*(x25_1 + 0x34))
                        int32_t x8_27
                        
                        if (x10_15 == 0)
                            x8_27 = x8_26 + x0_46
                            x0_2[4].d = float.s(&x0_2[2].d[x9_7]) / float.s(x25_1[6].d)
                        else
                            x0_2[4].d = float.s(x9_7 + x0_46) / float.s(x25_1[6].d)
                            x8_27 = x0_2[2].d + x8_26
                        
                        *(x0_2 + 0x24) = float.s(x8_27) / float.s(*(x25_1 + 0x34))
                        int32_t x0_48 = sub_fbfb68(&nptr_11, nptr_20, &nptr)
                        
                        if (x0_48 != 4)
                        label_fbf870:
                            
                            if (x0_48 != 0)
                            label_fbf910:
                                x0_2[6].d = strtol(nptr, &endptr_3, 0xa)
                                *(x0_2 + 0x34) = strtol(nptr_1, &endptr_4, 0xa)
                                sub_fbfb68(&nptr_11, nptr_20, &nptr)
                                x0_2[5].d = strtol(nptr, &endptr_3, 0xa)
                                *(x0_2 + 0x2c) = strtol(nptr_1, &endptr_4, 0xa)
                                char* nptr_4 = nptr_11
                                char* nptr_17
                                
                                if (nptr_4 == nptr_20)
                                    nptr_4 = nptr_8
                                    nptr_17 = nptr_14
                                else
                                    char* nptr_13 = nptr_4
                                    char* nptr_9 = nptr_4
                                    
                                    while (zx.d(*nptr_13) != 0xa)
                                        nptr_13 = &nptr_13[1]
                                        nptr_11 = nptr_13
                                        
                                        if (nptr_20 == nptr_13)
                                            nptr_13 = nptr_20
                                            break
                                    
                                    nptr_14 = nptr_13
                                    uint32_t x8_37 = zx.d(*nptr_4)
                                    
                                    if (x8_37 == 0x20 || x8_37 - 9 u<= 4)
                                        void* x8_39 = &nptr_4[1]
                                        
                                        while (true)
                                            nptr_4 = x8_39 - 1
                                            
                                            if (nptr_4 u>= nptr_13)
                                                break
                                            
                                            void* var_88_4 = x8_39
                                            uint32_t x10_18 = zx.d(*x8_39)
                                            x8_39 += 1
                                            
                                            if (x10_18 != 0x20)
                                                if (x10_18 - 9 u>= 5)
                                                    nptr_4 = x8_39 - 1
                                                    break
                                    
                                    nptr_17 = nptr_13
                                    
                                    if (nptr_4 != nptr_13)
                                        void* nptr_32 = nptr_13 - 1
                                        uint32_t i_7
                                        
                                        do
                                            nptr_14 = nptr_32
                                            bool cond:20_1 = nptr_32 u< nptr_4
                                            i_7 = zx.d(*nptr_32)
                                            nptr_32 -= 1
                                            
                                            if (cond:20_1)
                                                break
                                        while (i_7 == 0xd)
                                        nptr_17 = nptr_32 + 2
                                        nptr_14 = nptr_17
                                    
                                    if (nptr_13 != nptr_20)
                                        nptr_11 = &nptr_13[1]
                                
                                void* x10_20 = &nptr_4[2]
                                void* x9_11
                                uint32_t i_8
                                
                                do
                                    if (nptr_17 == nptr_4)
                                        goto label_fbfb38
                                    
                                    x9_11 = x10_20
                                    i_8 = zx.d(*nptr_4)
                                    nptr_4 = &nptr_4[1]
                                    x10_20 = x9_11 + 1
                                while (i_8 != 0x3a)
                                char* nptr_10 = nptr_4
                                uint32_t x10_21 = zx.d(*nptr_4)
                                
                                if (x10_21 == 0x20 || x10_21 - 9 u<= 4)
                                    while (true)
                                        nptr_4 = x9_11 - 1
                                        
                                        if (nptr_4 u>= nptr_17)
                                            break
                                        
                                        void* var_88_5 = x9_11
                                        uint32_t x10_23 = zx.d(*x9_11)
                                        x9_11 += 1
                                        
                                        if (x10_23 != 0x20)
                                            if (x10_23 - 9 u>= 5)
                                                nptr_4 = x9_11 - 1
                                                break
                                
                                if (nptr_4 != nptr_17)
                                    void* nptr_33 = nptr_17 - 1
                                    uint32_t i_9
                                    
                                    do
                                        nptr_14 = nptr_33
                                        bool cond:21_1 = nptr_33 u< nptr_4
                                        i_9 = zx.d(*nptr_33)
                                        nptr_33 -= 1
                                        
                                        if (cond:21_1)
                                            break
                                    while (i_9 == 0xd)
                                    nptr_14 = nptr_33 + 2
                                
                                x0_2[7].d = strtol(nptr_4, endptr, 0xa)
                                nptr_23 = nptr_11
                                x22_1 = x0_2
                                nptr_21 = nptr_23
                                
                                if (nptr_23 == nptr_20)
                                    break
                                
                                continue
                        else
                            x0_2[9] = _spMalloc(0x10, 
                                "..\..\ExternalCode\spine-c\src\spine\Atlas.c", 0x113)
                            *x0_2[9] = strtol(nptr, &endptr_3, 0xa)
                            *(x0_2[9] + 4) = strtol(nptr_1, &endptr_4, 0xa)
                            char* nptr_2
                            *(x0_2[9] + 8) = strtol(nptr_2, endptr_2, 0xa)
                            char* nptr_3
                            *(x0_2[9] + 0xc) = strtol(nptr_3, endptr_1, 0xa)
                            x0_48 = sub_fbfb68(&nptr_11, nptr_20, &nptr)
                            
                            if (x0_48 != 4)
                                goto label_fbf870
                            
                            x0_2[0xa] = _spMalloc(0x10, 
                                "..\..\ExternalCode\spine-c\src\spine\Atlas.c", 0x11c)
                            *x0_2[0xa] = strtol(nptr, &endptr_3, 0xa)
                            *(x0_2[0xa] + 4) = strtol(nptr_1, &endptr_4, 0xa)
                            *(x0_2[0xa] + 8) = strtol(nptr_2, endptr_2, 0xa)
                            *(x0_2[0xa] + 0xc) = strtol(nptr_3, endptr_1, 0xa)
                            
                            if (sub_fbfb68(&nptr_11, nptr_20, &nptr) != 0)
                                goto label_fbf910
        label_fbfb38:
            spAtlas_dispose(result)
            return nullptr
        
        x25_1 = nullptr
        nptr_21 = nptr_23
        
        if (nptr_23 == nptr_20)
            break

return result
