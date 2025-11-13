// 函数: _ZN5Botan16mceliece_encryptERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEES5_RKS4_RKNS_18McEliece_PublicKeyERNS_21RandomNumberGeneratorE
// 地址: 0xd9dc14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = zx.q(*(arg4 + 0x28))
int64_t x19 = *(arg4 + 0x20)
uint64_t x26 = (x23 + 7) u>> 3
void* var_208
void* x24

if (x26 == 0)
    x24 = nullptr
    var_208 = nullptr
    
    if (x19 != 0)
    label_d9dc94:
        int64_t x20_2 = 0
        
        do
            int64_t x0_3 = Botan::random_code_element(x23.w, arg5)
            uint64_t x8_1 = x0_3 u>> 3 & 0x1fff
            uint32_t x9_1 = zx.d(*(x24 + x8_1))
            int32_t x10_2 = 1 << (x0_3.d & 7)
            
            if ((x10_2 & x9_1) == 0)
                x20_2 += 1
                *(x24 + x8_1) = x9_1.b | x10_2.b
        while (x20_2 u< x19)
else
    void* x0_1 = Botan::allocate_memory(x26, 1)
    x24 = x0_1
    memset(x0_1, 0, x26)
    var_208 = x0_1 + x26
    
    if (x19 != 0)
        goto label_d9dc94

int64_t x20_3 = *(arg4 + 0x28)
int32_t x9_3

if ((x20_3 & 0xffffffff80000000) != 0)
    x9_3 = 0x40
else if (x20_3 u< 2)
    x9_3 = 0
else
    x9_3 = 0
    int64_t x10_3 = 1
    
    do
        x10_3 <<= 1
        x9_3 += 1
    while (x10_3 u< x20_3)

int64_t x21 = *(arg4 + 0x20) * zx.q(x9_3.b)
uint64_t x8_3 = (x21 - 1) u>> 3
void* i_70 = x8_3 & 0x1ffffffffffffffc
int64_t* x0_5 = Botan::allocate_memory(i_70 + 4, 1)
int64_t x23_1 = x20_3 - x21
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5
int128_t v6
int128_t v7
v0, v1, v2, v3, v4, v5, v6, v7 = memset(x0_5, 0, i_70 + 4)
int64_t* x11 = *(arg4 + 8)
uint64_t x8_4 = x23_1 u>> 3
int64_t* x8_25

if (x8_4 == 0)
    x8_25 = x11
else
    int64_t x12_1 = 0
    void* i_81 = (i_70 + 4) & 0x3fffffffffffffe0
    void* x8_6 = *arg3
    
    if (i_81 == 0)
        uint64_t x9_128 = (x21 - 1) u>> 5
        int64_t x1_8 = (x21 + 0x1f) & 0xffffffffffffffe0
        int64_t x8_34 = x9_128 * 0x1c
        uint64_t x14_13 = x9_128 * 3
        int64_t i_176 = (i_70 + 4) & 0x3ffffffffffffff8
        uint64_t x20_10 = x9_128 << 4
        uint64_t x9_129 = x9_128 << 3
        uint64_t x23_21 = x14_13 << 3
        uint64_t x27_2 = x9_128 * 0x14
        uint64_t x14_14 = x14_13 << 2
        int64_t i_139 = (i_70 + 4) & 0x3fffffffffffffe0
        int64_t x15_9 = (i_70 + 4) & 0x18
        int64_t x2_5 = neg.q(i_176)
        x8_25 = x11
        
        while (true)
            if (i_81 != i_70 + 4)
                uint32_t x11_3 = zx.d(*(x8_6 + x12_1))
                
                if ((x11_3 & 1) != 0)
                    int64_t i_159
                    
                    if (i_70 == 0 || (x0_5 u< x8_25 + i_70 + 4 && x8_25 u< x0_5 + i_70 + 4))
                        i_159 = 0
                    label_d9f298:
                        void* i_79 = -4 - i_70 + i_159
                        void* x11_4 = x0_5 + i_159
                        void* lr_3 = x8_25 + i_159
                        void* i
                        
                        do
                            char x14_15 = *lr_3
                            lr_3 += 1
                            i = i_79
                            i_79 += 1
                            *x11_4 ^= x14_15
                            x11_4 += 1
                        while (i u< -1)
                    else
                        int64_t i_151
                        
                        if (i_70 u>= 0x1c)
                            void* x9_148 = &x8_25[2]
                            int64_t i_89 = i_139
                            void* lr_11 = &x0_5[2]
                            int64_t i_1
                            
                            do
                                v0 = *(x9_148 - 0x10)
                                v1 = *x9_148
                                x9_148 += 0x20
                                i_1 = i_89
                                i_89 -= 0x20
                                v1 ^= *lr_11
                                *(lr_11 - 0x10) ^= v0
                                *lr_11 = v1
                                lr_11 += 0x20
                            while (i_1 != 0x20)
                            
                            if (i_70 + 4 != i_139)
                                i_151 = i_139
                                i_159 = i_139
                                
                                if (x15_9 == 0)
                                    goto label_d9f298
                                
                                goto label_d9f608
                        else
                            i_151 = 0
                        label_d9f608:
                            void* x9_149 = x8_25 + i_151
                            void* x11_30 = x0_5 + i_151
                            int64_t i_105 = x2_5 + i_151
                            int64_t i_2
                            
                            do
                                v0.q = *x9_149
                                x9_149 += 8
                                v1.q = *x11_30
                                i_2 = i_105
                                i_105 += 8
                                *x11_30 = (v1 ^ v0).q
                                x11_30 += 8
                            while (i_2 != -8)
                            i_159 = i_176
                            
                            if (i_70 + 4 != i_176)
                                goto label_d9f298
                    x11_3 = zx.d(*(x8_6 + x12_1))
                    
                    if ((x11_3 & 2) == 0)
                        goto label_d9f244
                    
                    goto label_d9f2e0
                
                void* x9_141
                
                if ((x11_3 & 2) != 0)
                label_d9f2e0:
                    int64_t i_160
                    
                    if (i_70 == 0 || (x0_5 u< x8_25 + ((x21 - 1) u>> 2 & 0x3ffffffffffffff8) + 8
                            && x8_25 u< x0_5))
                        i_160 = 0
                    label_d9f2ec:
                        void* i_80 = -4 - i_70 + i_160
                        void* x11_5 = x0_5 + i_160
                        void* lr_4 = x8_25 + i_70 + 4 + i_160
                        void* i_3
                        
                        do
                            char x14_18 = *lr_4
                            lr_4 += 1
                            i_3 = i_80
                            i_80 += 1
                            *x11_5 ^= x14_18
                            x11_5 += 1
                        while (i_3 u< -1)
                    else
                        int64_t i_175
                        
                        if (i_70 u>= 0x1c)
                            int64_t i_90 = i_139
                            void* lr_12 = &x0_5[2]
                            int128_t* x9_151 = x8_25 + i_70 + 0x14
                            int64_t i_4
                            
                            do
                                v0 = x9_151[-1]
                                v1 = *x9_151
                                x9_151 = &x9_151[2]
                                i_4 = i_90
                                i_90 -= 0x20
                                v1 ^= *lr_12
                                *(lr_12 - 0x10) ^= v0
                                *lr_12 = v1
                                lr_12 += 0x20
                            while (i_4 != 0x20)
                            
                            if (i_70 + 4 != i_139)
                                i_175 = i_139
                                i_160 = i_139
                                
                                if (x15_9 == 0)
                                    goto label_d9f2ec
                                
                                goto label_d9f688
                        else
                            i_175 = 0
                        label_d9f688:
                            void* x9_152 = x0_5 + i_175
                            void* x11_32 = x8_25 + i_70 + 4 + i_175
                            int64_t i_106 = x2_5 + i_175
                            int64_t i_5
                            
                            do
                                v0.q = *x11_32
                                x11_32 += 8
                                v1.q = *x9_152
                                i_5 = i_106
                                i_106 += 8
                                *x9_152 = (v1 ^ v0).q
                                x9_152 += 8
                            while (i_5 != -8)
                            i_160 = i_176
                            
                            if (i_70 + 4 != i_176)
                                goto label_d9f2ec
                    x11_3 = zx.d(*(x8_6 + x12_1))
                    x9_141 = x8_25 + i_70 + 4
                    
                    if ((x11_3 & 4) == 0)
                        goto label_d9f24c
                    
                    goto label_d9f338
                
            label_d9f244:
                x9_141 = x8_25 + i_70 + 4
                void* x9_142
                
                if ((x11_3 & 4) != 0)
                label_d9f338:
                    int64_t i_161
                    
                    if (i_70 == 0 || (x0_5 u< x8_25 + x14_14 + 0xc && x9_141 u< x0_5))
                        i_161 = 0
                    label_d9f344:
                        void* i_83 = -4 - i_70 + i_161
                        void* lr_5 = x0_5 + i_161
                        void* x17_52 = x8_25 + x9_129 + 8 + i_161
                        void* i_6
                        
                        do
                            char x14_21 = *x17_52
                            x17_52 += 1
                            i_6 = i_83
                            i_83 += 1
                            *lr_5 ^= x14_21
                            lr_5 += 1
                        while (i_6 u< -1)
                    else
                        int64_t i_152
                        
                        if (i_70 u>= 0x1c)
                            int64_t i_131 = i_139
                            void* x17_58 = &x0_5[2]
                            void* x11_34 = x8_25 + x9_129 + 0x18
                            int64_t i_7
                            
                            do
                                v0 = *(x11_34 - 0x10)
                                v1 = *x11_34
                                x11_34 += 0x20
                                i_7 = i_131
                                i_131 -= 0x20
                                v1 ^= *x17_58
                                *(x17_58 - 0x10) ^= v0
                                *x17_58 = v1
                                x17_58 += 0x20
                            while (i_7 != 0x20)
                            
                            if (i_70 + 4 != i_139)
                                i_152 = i_139
                                i_161 = i_139
                                
                                if (x15_9 == 0)
                                    goto label_d9f344
                                
                                goto label_d9f708
                        else
                            i_152 = 0
                        label_d9f708:
                            void* x11_35 = x0_5 + i_152
                            void* lr_13 = x8_25 + x9_129 + 8 + i_152
                            int64_t i_107 = x2_5 + i_152
                            int64_t i_8
                            
                            do
                                v0.q = *lr_13
                                lr_13 += 8
                                v1.q = *x11_35
                                i_8 = i_107
                                i_107 += 8
                                *x11_35 = (v1 ^ v0).q
                                x11_35 += 8
                            while (i_8 != -8)
                            i_161 = i_176
                            
                            if (i_70 + 4 != i_176)
                                goto label_d9f344
                    x11_3 = zx.d(*(x8_6 + x12_1))
                    x9_142 = x9_141 + i_70 + 4
                    
                    if ((x11_3 & 8) == 0)
                        goto label_d9f254
                    
                    goto label_d9f390
                
            label_d9f24c:
                x9_142 = x9_141 + i_70 + 4
                void* x9_143
                
                if ((x11_3 & 8) != 0)
                label_d9f390:
                    int64_t i_162
                    
                    if (i_70 == 0 || (x0_5 u< x8_25 + x20_10 + 0x10 && x9_142 u< x0_5))
                        i_162 = 0
                    label_d9f39c:
                        void* i_84 = -4 - i_70 + i_162
                        void* lr_6 = x0_5 + i_162
                        void* x17_53 = x8_25 + x14_14 + 0xc + i_162
                        void* i_9
                        
                        do
                            char x14_24 = *x17_53
                            x17_53 += 1
                            i_9 = i_84
                            i_84 += 1
                            *lr_6 ^= x14_24
                            lr_6 += 1
                        while (i_9 u< -1)
                    else
                        int64_t i_153
                        
                        if (i_70 u>= 0x1c)
                            void* x11_36 = x8_25 + x14_14 + 0x1c
                            int64_t i_132 = i_139
                            void* x17_60 = &x0_5[2]
                            int64_t i_10
                            
                            do
                                v0 = *(x11_36 - 0x10)
                                v1 = *x11_36
                                x11_36 += 0x20
                                i_10 = i_132
                                i_132 -= 0x20
                                v1 ^= *x17_60
                                *(x17_60 - 0x10) ^= v0
                                *x17_60 = v1
                                x17_60 += 0x20
                            while (i_10 != 0x20)
                            
                            if (i_70 + 4 != i_139)
                                i_153 = i_139
                                i_162 = i_139
                                
                                if (x15_9 == 0)
                                    goto label_d9f39c
                                
                                goto label_d9f784
                        else
                            i_153 = 0
                        label_d9f784:
                            void* x11_37 = x0_5 + i_153
                            void* lr_14 = x8_25 + x14_14 + 0xc + i_153
                            int64_t i_108 = x2_5 + i_153
                            int64_t i_11
                            
                            do
                                v0.q = *lr_14
                                lr_14 += 8
                                v1.q = *x11_37
                                i_11 = i_108
                                i_108 += 8
                                *x11_37 = (v1 ^ v0).q
                                x11_37 += 8
                            while (i_11 != -8)
                            i_162 = i_176
                            
                            if (i_70 + 4 != i_176)
                                goto label_d9f39c
                    x11_3 = zx.d(*(x8_6 + x12_1))
                    x9_143 = x9_142 + i_70 + 4
                    
                    if ((x11_3 & 0x10) == 0)
                        goto label_d9f25c
                    
                    goto label_d9f3e8
                
            label_d9f254:
                x9_143 = x9_142 + i_70 + 4
                void* x9_144
                
                if ((x11_3 & 0x10) != 0)
                label_d9f3e8:
                    int64_t i_163
                    
                    if (i_70 == 0 || (x0_5 u< x8_25 + x27_2 + 0x14 && x9_143 u< x0_5))
                        i_163 = 0
                    label_d9f3f4:
                        void* i_85 = -4 - i_70 + i_163
                        void* lr_7 = x0_5 + i_163
                        void* x17_54 = x8_25 + x20_10 + 0x10 + i_163
                        void* i_12
                        
                        do
                            char x14_27 = *x17_54
                            x17_54 += 1
                            i_12 = i_85
                            i_85 += 1
                            *lr_7 ^= x14_27
                            lr_7 += 1
                        while (i_12 u< -1)
                    else
                        int64_t i_154
                        
                        if (i_70 u>= 0x1c)
                            int64_t i_133 = i_139
                            void* x17_62 = &x0_5[2]
                            void* x11_39 = x8_25 + x20_10 + 0x20
                            int64_t i_13
                            
                            do
                                v0 = *(x11_39 - 0x10)
                                v1 = *x11_39
                                x11_39 += 0x20
                                i_13 = i_133
                                i_133 -= 0x20
                                v1 ^= *x17_62
                                *(x17_62 - 0x10) ^= v0
                                *x17_62 = v1
                                x17_62 += 0x20
                            while (i_13 != 0x20)
                            
                            if (i_70 + 4 != i_139)
                                i_154 = i_139
                                i_163 = i_139
                                
                                if (x15_9 == 0)
                                    goto label_d9f3f4
                                
                                goto label_d9f804
                        else
                            i_154 = 0
                        label_d9f804:
                            void* x11_40 = x0_5 + i_154
                            void* lr_15 = x8_25 + x20_10 + 0x10 + i_154
                            int64_t i_109 = x2_5 + i_154
                            int64_t i_14
                            
                            do
                                v0.q = *lr_15
                                lr_15 += 8
                                v1.q = *x11_40
                                i_14 = i_109
                                i_109 += 8
                                *x11_40 = (v1 ^ v0).q
                                x11_40 += 8
                            while (i_14 != -8)
                            i_163 = i_176
                            
                            if (i_70 + 4 != i_176)
                                goto label_d9f3f4
                    x11_3 = zx.d(*(x8_6 + x12_1))
                    x9_144 = x9_143 + i_70 + 4
                    
                    if ((x11_3 & 0x20) == 0)
                        goto label_d9f264
                    
                    goto label_d9f440
                
            label_d9f25c:
                x9_144 = x9_143 + i_70 + 4
                void* x9_145
                
                if ((x11_3 & 0x20) != 0)
                label_d9f440:
                    int64_t i_164
                    
                    if (i_70 == 0 || (x0_5 u< x8_25 + x23_21 + 0x18 && x9_144 u< x0_5))
                        i_164 = 0
                    label_d9f44c:
                        void* i_86 = -4 - i_70 + i_164
                        void* lr_8 = x0_5 + i_164
                        void* x17_55 = x8_25 + x27_2 + 0x14 + i_164
                        void* i_15
                        
                        do
                            char x14_30 = *x17_55
                            x17_55 += 1
                            i_15 = i_86
                            i_86 += 1
                            *lr_8 ^= x14_30
                            lr_8 += 1
                        while (i_15 u< -1)
                    else
                        int64_t i_155
                        
                        if (i_70 u>= 0x1c)
                            void* x11_41 = x8_25 + x27_2 + 0x24
                            int64_t i_134 = i_139
                            void* x17_64 = &x0_5[2]
                            int64_t i_16
                            
                            do
                                v0 = *(x11_41 - 0x10)
                                v1 = *x11_41
                                x11_41 += 0x20
                                i_16 = i_134
                                i_134 -= 0x20
                                v1 ^= *x17_64
                                *(x17_64 - 0x10) ^= v0
                                *x17_64 = v1
                                x17_64 += 0x20
                            while (i_16 != 0x20)
                            
                            if (i_70 + 4 != i_139)
                                i_155 = i_139
                                i_164 = i_139
                                
                                if (x15_9 == 0)
                                    goto label_d9f44c
                                
                                goto label_d9f880
                        else
                            i_155 = 0
                        label_d9f880:
                            void* x11_42 = x0_5 + i_155
                            void* lr_16 = x8_25 + x27_2 + 0x14 + i_155
                            int64_t i_110 = x2_5 + i_155
                            int64_t i_17
                            
                            do
                                v0.q = *lr_16
                                lr_16 += 8
                                v1.q = *x11_42
                                i_17 = i_110
                                i_110 += 8
                                *x11_42 = (v1 ^ v0).q
                                x11_42 += 8
                            while (i_17 != -8)
                            i_164 = i_176
                            
                            if (i_70 + 4 != i_176)
                                goto label_d9f44c
                    x11_3 = zx.d(*(x8_6 + x12_1))
                    x9_145 = x9_144 + i_70 + 4
                    
                    if ((x11_3 & 0x40) == 0)
                        goto label_d9f26c
                    
                    goto label_d9f498
                
            label_d9f264:
                x9_145 = x9_144 + i_70 + 4
                void* x9_131
                
                if ((x11_3 & 0x40) != 0)
                label_d9f498:
                    int64_t i_165
                    
                    if (i_70 == 0 || (x0_5 u< x8_25 + x8_34 + 0x1c && x9_145 u< x0_5))
                        i_165 = 0
                    label_d9f4a4:
                        void* i_87 = -4 - i_70 + i_165
                        void* lr_9 = x0_5 + i_165
                        void* x17_56 = x8_25 + x23_21 + 0x18 + i_165
                        void* i_18
                        
                        do
                            char x14_33 = *x17_56
                            x17_56 += 1
                            i_18 = i_87
                            i_87 += 1
                            *lr_9 ^= x14_33
                            lr_9 += 1
                        while (i_18 u< -1)
                    else
                        int64_t i_156
                        
                        if (i_70 u>= 0x1c)
                            void* x11_43 = x8_25 + x23_21 + 0x28
                            int64_t i_135 = i_139
                            void* x17_66 = &x0_5[2]
                            int64_t i_19
                            
                            do
                                v0 = *(x11_43 - 0x10)
                                v1 = *x11_43
                                x11_43 += 0x20
                                i_19 = i_135
                                i_135 -= 0x20
                                v1 ^= *x17_66
                                *(x17_66 - 0x10) ^= v0
                                *x17_66 = v1
                                x17_66 += 0x20
                            while (i_19 != 0x20)
                            
                            if (i_70 + 4 != i_139)
                                i_156 = i_139
                                i_165 = i_139
                                
                                if (x15_9 == 0)
                                    goto label_d9f4a4
                                
                                goto label_d9f8fc
                        else
                            i_156 = 0
                        label_d9f8fc:
                            void* x11_44 = x0_5 + i_156
                            void* lr_17 = x8_25 + x23_21 + 0x18 + i_156
                            int64_t i_111 = x2_5 + i_156
                            int64_t i_20
                            
                            do
                                v0.q = *lr_17
                                lr_17 += 8
                                v1.q = *x11_44
                                i_20 = i_111
                                i_111 += 8
                                *x11_44 = (v1 ^ v0).q
                                x11_44 += 8
                            while (i_20 != -8)
                            i_165 = i_176
                            
                            if (i_70 + 4 != i_176)
                                goto label_d9f4a4
                    x9_131 = x9_145 + i_70 + 4
                    
                    if ((zx.d(*(x8_6 + x12_1)) & 0x80) != 0)
                        goto label_d9f4dc
                else
                label_d9f26c:
                    x9_131 = x9_145 + i_70 + 4
                    
                    if ((x11_3 & 0x80) != 0)
                    label_d9f4dc:
                        int64_t i_166
                        
                        if (i_70 == 0 || (x0_5 u< x8_25 + x1_8 && x9_131 u< x0_5))
                            i_166 = 0
                        label_d9f4fc:
                            void* i_88 = -4 - i_70 + i_166
                            void* lr_10 = x0_5 + i_166
                            void* x8_37 = x8_25 + x8_34 + 0x1c + i_166
                            void* i_21
                            
                            do
                                char x14_35 = *x8_37
                                x8_37 += 1
                                i_21 = i_88
                                i_88 += 1
                                *lr_10 ^= x14_35
                                lr_10 += 1
                            while (i_21 u< -1)
                        else
                            int64_t i_157
                            
                            if (i_70 u>= 0x1c)
                                void* x11_45 = x8_25 + x8_34 + 0x2c
                                int64_t i_136 = i_139
                                void* x17_68 = &x0_5[2]
                                int64_t i_22
                                
                                do
                                    v0 = *(x11_45 - 0x10)
                                    v1 = *x11_45
                                    x11_45 += 0x20
                                    i_22 = i_136
                                    i_136 -= 0x20
                                    v1 ^= *x17_68
                                    *(x17_68 - 0x10) ^= v0
                                    *x17_68 = v1
                                    x17_68 += 0x20
                                while (i_22 != 0x20)
                                
                                if (i_70 + 4 != i_139)
                                    i_157 = i_139
                                    i_166 = i_139
                                    
                                    if (x15_9 == 0)
                                        goto label_d9f4fc
                                    
                                    goto label_d9f978
                            else
                                i_157 = 0
                            label_d9f978:
                                void* x11_46 = x0_5 + i_157
                                void* lr_18 = x8_25 + x8_34 + 0x1c + i_157
                                int64_t i_112 = x2_5 + i_157
                                int64_t i_23
                                
                                do
                                    v0.q = *lr_18
                                    lr_18 += 8
                                    v1.q = *x11_46
                                    i_23 = i_112
                                    i_112 += 8
                                    *x11_46 = (v1 ^ v0).q
                                    x11_46 += 8
                                while (i_23 != -8)
                                i_166 = i_176
                                
                                if (i_70 + 4 != i_176)
                                    goto label_d9f4fc
                
                x8_25 = (i_70 + 4) * 2 + x9_131
                x12_1 += 1
                
                if (x12_1 == x8_4)
                    break
            else
                x8_25 += x1_8
                x12_1 += 1
                
                if (x12_1 == x8_4)
                    break
    else
        void* x2_2 = i_81 + i_70
        uint64_t x8_7 = (x21 - 1) u>> 5
        int64_t x17_2 = (x21 - 1) u>> 1 & 0x7ffffffffffffff0
        int64_t x16_2 = neg.q((i_70 + 4) & 0x3fffffffffffffe0)
        void* x21_1 = i_81 - 0x20 + x17_2
        int64_t x9_6 = x8_7 * 0x1c
        int64_t x14_1 = (x21 + 0x1f) & 0xffffffffffffffe0
        int32_t x17_6 = (&x0_5[3] + i_81 - 0x20 u< &x0_5[3] ? 1 : 0)
            | (&x0_5[2] + i_81 - 0x20 u< &x0_5[2] ? 1 : 0)
            | (&x0_5[1] + i_81 - 0x20 u< &x0_5[1] ? 1 : 0)
        int64_t x0_7 = (x21 - 1) u>> 2 & 0x3ffffffffffffff8
        int32_t x17_7 = x17_6 | (x0_5 + i_81 - 0x20 u< x0_5 ? 1 : 0)
        uint64_t x15_2 = x8_7 * 3
        uint64_t x6_1 = x8_7 << 4
        void* x16_4 = i_81 - 0x20 + x9_6
        void* x20_9 = x11 + x9_6
        uint64_t x4 = x8_7 * 0x14
        void* x1_2 = i_70 + x11 + 0x14
        uint64_t x14_5 = x15_2 << 3
        uint64_t x15_3 = x15_2 << 2
        void* x13_2 = i_81 + (x8_7 << 3)
        void* var_d0_1 = x2_2 + x11 + 0x14
        void* x8_10 = &x11[x8_7]
        void* x27_1 = &x11[x8_7 * 2]
        void* x26_2 = x8_10 + 8
        void* x7_2 = x8_10 + 0x18
        void* x17_10 = i_81 - 0x20 + x4
        void* x21_2 = x11 + x4
        void* x4_1 = i_81 + x14_5
        void* lr_1 = &x11[x15_2]
        void* x9_14 = i_81 + x15_3
        void* var_d8_1 = x13_2 + x11 + 0x18
        void* x5_4 = x15_3 + x11 + 0x1c
        void* var_e0_1 = x9_14 + x11 + 0x1c
        void* x8_15 = x0_5 + i_81
        void* x8_16 = x0_5 + i_70 + 4
        int128_t* x8_18 = x0_5 + i_81 + 0x10
        void* x9_15 = (i_70 - i_81 + 4) & 0x18
        void* i_140 = (i_70 - i_81 + 4) & 0xffffffffffffffe0
        void* x9_16 = (i_70 - i_81 + 4) & 0xfffffffffffffff8
        void* var_b8_1 = x11 + x2_2 + 4
        void* i_71 = i_81 + i_140
        void* i_72 = i_81 + x9_16
        int64_t x8_19 = neg.q(x9_16)
        int64_t i_146 = (((i_81 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
        int64_t x8_21 = i_146 << 5
        void* var_c0_1 = x11 + x13_2 + 8
        void* var_c8_1 = x11 + x9_14 + 0xc
        char* x16_6 = x11 + i_70 + 4
        char* x0_11 = x11 + x6_1 + 0x10
        char* x15_8 = x11 + x15_3 + 0xc
        char* x3_3 = x11 + x4 + 0x14
        void* fp_2 = x11 + x14_5 + 0x18
        void* x14_12 = x11 + x9_6 + 0x1c
        x8_25 = x11
        
        do
            void* x6_9 = x8_6
            int64_t x25_2 = x14_1 * x12_1
            void* x17_12 = x11 + i_70 + 4 + x25_2
            
            if ((zx.d(*(x6_9 + x12_1)) & 1) != 0)
                void* x9_32 = x11 + i_81 + x25_2
                int64_t x19_9
                
                if ((((i_81 == 0x20 ? 1 : 0) | x17_7) & 1) != 0
                        || (x0_5 u< x9_32 && x11 + x25_2 u< x8_15))
                    x19_9 = 0
                label_d9e16c:
                    
                    do
                        int128_t* x13_8 = x0_5 + x19_9
                        int128_t* x4_2 = x8_25 + x19_9
                        x19_9 += 0x20
                        v1 = x4_2[1] ^ x13_8[1]
                        *x13_8 ^= *x4_2
                        x13_8[1] = v1
                    while (i_81 != x19_9)
                else
                    int64_t i_123 = i_146
                    int64_t x19_13 = 0
                    int64_t i_24
                    
                    do
                        void* x13_26 = x0_5 + x19_13
                        void* x4_11 = x8_25 + x19_13
                        v0.q = *x13_26
                        v1.q = *(x13_26 + 8)
                        v2.q = *(x13_26 + 0x10)
                        v3.q = *(x13_26 + 0x18)
                        v0:8.q = *(x13_26 + 0x20)
                        v1:8.q = *(x13_26 + 0x28)
                        v2:8.q = *(x13_26 + 0x30)
                        v3:8.q = *(x13_26 + 0x38)
                        v4.q = *x4_11
                        v5.q = *(x4_11 + 8)
                        v6.q = *(x4_11 + 0x10)
                        v7.q = *(x4_11 + 0x18)
                        v4:8.q = *(x4_11 + 0x20)
                        v5:8.q = *(x4_11 + 0x28)
                        v6:8.q = *(x4_11 + 0x30)
                        v7:8.q = *(x4_11 + 0x38)
                        i_24 = i_123
                        i_123 -= 2
                        x19_13 += 0x40
                        int128_t v16_2 = v4 ^ v0
                        int128_t v17_2 = v5 ^ v1
                        int128_t v18_2 = v6 ^ v2
                        int128_t v19_2 = v7 ^ v3
                        *x13_26 = v16_2.q
                        *(x13_26 + 8) = v17_2.q
                        *(x13_26 + 0x10) = v18_2.q
                        *(x13_26 + 0x18) = v19_2.q
                        *(x13_26 + 0x20) = v16_2:8.q
                        *(x13_26 + 0x28) = v17_2:8.q
                        *(x13_26 + 0x30) = v18_2:8.q
                        *(x13_26 + 0x38) = v19_2:8.q
                    while (i_24 != 2)
                    x19_9 = x8_21
                    
                    if (((i_81 - 0x20) u>> 5) + 1 != i_146)
                        goto label_d9e16c
                
                if (i_81 != i_70 + 4)
                    void* i_25 = i_81
                    
                    if (i_70 - i_81 + 4 u< 8)
                    label_d9e40c:
                        
                        do
                            *(x0_5 + i_25) ^= *(x8_25 + i_25)
                            i_25 += 1
                        while (i_70 + 4 != i_25)
                    else
                        if (x8_15 u< x17_12)
                            i_25 = i_81
                        
                        if (x8_15 u< x17_12 && x9_32 u< x8_16)
                            goto label_d9e40c
                        
                        void* i_171
                        
                        if (i_70 - i_81 + 4 u>= 0x20)
                            void* x9_47 = i_81 + 0x10
                            void* i_113 = i_140
                            void* i_26
                            
                            do
                                int128_t* x13_28 = x8_25 + x9_47
                                int128_t* x4_13 = x0_5 + x9_47
                                i_26 = i_113
                                i_113 -= 0x20
                                x9_47 += 0x20
                                v1 = *x4_13 ^ *x13_28
                                x4_13[-1] ^= x13_28[-1]
                                *x4_13 = v1
                            while (i_26 != 0x20)
                            
                            if (i_70 - i_81 + 4 != i_140)
                                i_171 = i_140
                                i_25 = i_71
                                
                                if (x9_15 == 0)
                                    goto label_d9e40c
                                
                                goto label_d9e3c0
                        else
                            i_171 = nullptr
                        label_d9e3c0:
                            void* x9_50 = i_81 + i_171
                            void* i_114 = x8_19 + i_171
                            void* i_27
                            
                            do
                                v0.q = *(x8_25 + x9_50)
                                v1.q = *(x0_5 + x9_50)
                                i_27 = i_114
                                i_114 += 8
                                *(x0_5 + x9_50) = (v1 ^ v0).q
                                x9_50 += 8
                            while (i_27 != -8)
                            i_25 = i_72
                            
                            if (i_70 - i_81 + 4 != x9_16)
                                goto label_d9e40c
            
            void* x9_56 = x11 + x0_7 + 8 + x25_2
            
            if ((zx.d(*(x6_9 + x12_1)) & 2) != 0)
                int64_t x23_5
                
                if ((((i_81 == 0x20 ? 1 : 0) | x17_7) & 1) != 0
                        || (x0_5 u< x11 + i_81 - 0x20 + i_70 + 0x24 + x25_2 && x17_12 u< x8_15))
                    x23_5 = 0
                label_d9e464:
                    int64_t i_99 = x16_2 + x23_5
                    int128_t* x19_14 = &x0_5[2] + x23_5
                    int128_t* x23_6 = x1_2 + x23_5
                    int64_t i_28
                    
                    do
                        v2 = x23_6[-1]
                        v3 = *x23_6
                        i_28 = i_99
                        i_99 += 0x20
                        x23_6 = &x23_6[2]
                        v1 = v3 ^ *x19_14
                        x19_14[-1] ^= v2
                        *x19_14 = v1
                        x19_14 = &x19_14[2]
                    while (i_28 != -0x20)
                else
                    int64_t i_100 = i_146
                    char* x19_15 = x16_6
                    int64_t* x23_7 = x0_5
                    int64_t i_29
                    
                    do
                        v0.q = *x23_7
                        v1.q = x23_7[1]
                        v2.q = x23_7[2]
                        v3.q = x23_7[3]
                        v0:8.q = x23_7[4]
                        v1:8.q = x23_7[5]
                        v2:8.q = x23_7[6]
                        v3:8.q = x23_7[7]
                        v4.q = *x19_15
                        v5.q = *(x19_15 + 8)
                        v6.q = *(x19_15 + 0x10)
                        v7.q = *(x19_15 + 0x18)
                        v4:8.q = *(x19_15 + 0x20)
                        v5:8.q = *(x19_15 + 0x28)
                        v6:8.q = *(x19_15 + 0x30)
                        v7:8.q = *(x19_15 + 0x38)
                        x19_15 = &x19_15[0x40]
                        i_29 = i_100
                        i_100 -= 2
                        int128_t v16_3 = v4 ^ v0
                        int128_t v17_3 = v5 ^ v1
                        int128_t v18_3 = v6 ^ v2
                        int128_t v19_3 = v7 ^ v3
                        *x23_7 = v16_3.q
                        x23_7[1] = v17_3.q
                        x23_7[2] = v18_3.q
                        x23_7[3] = v19_3.q
                        x23_7[4] = v16_3:8.q
                        x23_7[5] = v17_3:8.q
                        x23_7[6] = v18_3:8.q
                        x23_7[7] = v19_3:8.q
                        x23_7 = &x23_7[8]
                    while (i_29 != 2)
                    x23_5 = x8_21
                    
                    if (((i_81 - 0x20) u>> 5) + 1 != i_146)
                        goto label_d9e464
                
                if (i_81 != i_70 + 4)
                    void* i_147 = i_81
                    
                    if (i_70 - i_81 + 4 u< 8)
                    label_d9e5d8:
                        
                        do
                            *(x0_5 + i_147) ^= *(x16_6 + i_147)
                            i_147 += 1
                        while (-4 - i_70 != neg.q(i_147))
                    else
                        if (x8_15 u< x9_56)
                            i_147 = i_81
                        
                        if (x8_15 u< x9_56 && x11 + x2_2 + 4 + x25_2 u< x8_16)
                            goto label_d9e5d8
                        
                        void* i_172
                        
                        if (i_70 - i_81 + 4 u>= 0x20)
                            int128_t* x17_18 = x8_18
                            void* x19_16 = var_d0_1
                            void* i_124 = i_140
                            void* i_30
                            
                            do
                                v0 = *(x19_16 - 0x10)
                                v1 = *x19_16
                                i_30 = i_124
                                i_124 -= 0x20
                                x19_16 += 0x20
                                v1 ^= *x17_18
                                x17_18[-1] ^= v0
                                *x17_18 = v1
                                x17_18 = &x17_18[2]
                            while (i_30 != 0x20)
                            
                            if (i_70 - i_81 + 4 != i_140)
                                i_172 = i_140
                                i_147 = i_71
                                
                                if (x9_15 == 0)
                                    goto label_d9e5d8
                                
                                goto label_d9e580
                        else
                            i_172 = nullptr
                        label_d9e580:
                            int64_t* x17_20 = var_b8_1 + i_172
                            int64_t* x19_17 = x8_15 + i_172
                            void* i_125 = x8_19 + i_172
                            void* i_31
                            
                            do
                                v0.q = *x17_20
                                x17_20 = &x17_20[1]
                                v1.q = *x19_17
                                i_31 = i_125
                                i_125 += 8
                                *x19_17 = (v1 ^ v0).q
                                x19_17 = &x19_17[1]
                            while (i_31 != -8)
                            i_147 = i_72
                            
                            if (i_70 - i_81 + 4 != x9_16)
                                goto label_d9e5d8
            
            void* x17_24 = x11 + x15_3 + 0xc + x25_2
            
            if ((zx.d(*(x6_9 + x12_1)) & 4) != 0)
                int64_t x23_8
                
                if ((((i_81 == 0x20 ? 1 : 0) | x17_7) & 1) != 0
                        || (x0_5 u< x11 + i_81 - 0x20 + x0_7 + 0x28 + x25_2 && x9_56 u< x8_15))
                    x23_8 = 0
                label_d9e634:
                    int64_t i_74 = x16_2 + x23_8
                    int128_t* x19_18 = &x0_5[2] + x23_8
                    int128_t* x23_9 = x7_2 + x23_8
                    int64_t i_32
                    
                    do
                        v2 = x23_9[-1]
                        v3 = *x23_9
                        i_32 = i_74
                        i_74 += 0x20
                        x23_9 = &x23_9[2]
                        v1 = v3 ^ *x19_18
                        x19_18[-1] ^= v2
                        *x19_18 = v1
                        x19_18 = &x19_18[2]
                    while (i_32 != -0x20)
                else
                    int64_t i_75 = i_146
                    void* x19_19 = x26_2
                    int64_t* x23_10 = x0_5
                    int64_t i_33
                    
                    do
                        v0.q = *x23_10
                        v1.q = x23_10[1]
                        v2.q = x23_10[2]
                        v3.q = x23_10[3]
                        v0:8.q = x23_10[4]
                        v1:8.q = x23_10[5]
                        v2:8.q = x23_10[6]
                        v3:8.q = x23_10[7]
                        v4.q = *x19_19
                        v5.q = *(x19_19 + 8)
                        v6.q = *(x19_19 + 0x10)
                        v7.q = *(x19_19 + 0x18)
                        v4:8.q = *(x19_19 + 0x20)
                        v5:8.q = *(x19_19 + 0x28)
                        v6:8.q = *(x19_19 + 0x30)
                        v7:8.q = *(x19_19 + 0x38)
                        x19_19 += 0x40
                        i_33 = i_75
                        i_75 -= 2
                        int128_t v16_4 = v4 ^ v0
                        int128_t v17_4 = v5 ^ v1
                        int128_t v18_4 = v6 ^ v2
                        int128_t v19_4 = v7 ^ v3
                        *x23_10 = v16_4.q
                        x23_10[1] = v17_4.q
                        x23_10[2] = v18_4.q
                        x23_10[3] = v19_4.q
                        x23_10[4] = v16_4:8.q
                        x23_10[5] = v17_4:8.q
                        x23_10[6] = v18_4:8.q
                        x23_10[7] = v19_4:8.q
                        x23_10 = &x23_10[8]
                    while (i_33 != 2)
                    x23_8 = x8_21
                    
                    if (((i_81 - 0x20) u>> 5) + 1 != i_146)
                        goto label_d9e634
                
                if (i_81 != i_70 + 4)
                    void* i_34 = i_81
                    
                    if (i_70 - i_81 + 4 u< 8)
                    label_d9e7a4:
                        
                        do
                            *(x0_5 + i_34) ^= *(x26_2 + i_34)
                            i_34 += 1
                        while (i_70 + 4 != i_34)
                    else
                        if (x8_15 u< x17_24)
                            i_34 = i_81
                        
                        if (x8_15 u< x17_24 && x11 + x13_2 + 8 + x25_2 u< x8_16)
                            goto label_d9e7a4
                        
                        void* i_173
                        
                        if (i_70 - i_81 + 4 u>= 0x20)
                            int128_t* x9_65 = x8_18
                            void* x19_20 = var_d8_1
                            void* i_126 = i_140
                            void* i_35
                            
                            do
                                v0 = *(x19_20 - 0x10)
                                v1 = *x19_20
                                i_35 = i_126
                                i_126 -= 0x20
                                x19_20 += 0x20
                                v1 ^= *x9_65
                                x9_65[-1] ^= v0
                                *x9_65 = v1
                                x9_65 = &x9_65[2]
                            while (i_35 != 0x20)
                            
                            if (i_70 - i_81 + 4 != i_140)
                                i_173 = i_140
                                i_34 = i_71
                                
                                if (x9_15 == 0)
                                    goto label_d9e7a4
                                
                                goto label_d9e750
                        else
                            i_173 = nullptr
                        label_d9e750:
                            void* x19_21 = x8_15 + i_173
                            int64_t* x9_68 = var_c0_1 + i_173
                            void* i_127 = x8_19 + i_173
                            void* i_36
                            
                            do
                                v0.q = *x9_68
                                x9_68 = &x9_68[1]
                                v1.q = *x19_21
                                i_36 = i_127
                                i_127 += 8
                                *x19_21 = (v1 ^ v0).q
                                x19_21 += 8
                            while (i_36 != -8)
                            i_34 = i_72
                            
                            if (i_70 - i_81 + 4 != x9_16)
                                goto label_d9e7a4
            
            void* x23_4 = &x0_5[2]
            
            if ((zx.d(*(x6_9 + x12_1)) & 8) != 0)
                int64_t x19_22
                
                if ((((i_81 == 0x20 ? 1 : 0) | x17_7) & 1) != 0
                        || (x0_5 u< x11 + i_81 - 0x20 + x15_3 + 0x2c + x25_2 && x17_24 u< x8_15))
                    x19_22 = 0
                label_d9e7f4:
                    int128_t* x17_25 = x23_4 + x19_22
                    int64_t i_76 = x16_2 + x19_22
                    int128_t* x19_23 = x5_4 + x19_22
                    int64_t i_37
                    
                    do
                        v2 = x19_23[-1]
                        v3 = *x19_23
                        i_37 = i_76
                        i_76 += 0x20
                        x19_23 = &x19_23[2]
                        v1 = v3 ^ *x17_25
                        x17_25[-1] ^= v2
                        *x17_25 = v1
                        x17_25 = &x17_25[2]
                    while (i_37 != -0x20)
                else
                    int64_t i_77 = i_146
                    char* x17_26 = x15_8
                    int64_t* x19_24 = x0_5
                    int64_t i_38
                    
                    do
                        v0.q = *x19_24
                        v1.q = x19_24[1]
                        v2.q = x19_24[2]
                        v3.q = x19_24[3]
                        v0:8.q = x19_24[4]
                        v1:8.q = x19_24[5]
                        v2:8.q = x19_24[6]
                        v3:8.q = x19_24[7]
                        v4.q = *x17_26
                        v5.q = *(x17_26 + 8)
                        v6.q = *(x17_26 + 0x10)
                        v7.q = *(x17_26 + 0x18)
                        v4:8.q = *(x17_26 + 0x20)
                        v5:8.q = *(x17_26 + 0x28)
                        v6:8.q = *(x17_26 + 0x30)
                        v7:8.q = *(x17_26 + 0x38)
                        x17_26 = &x17_26[0x40]
                        i_38 = i_77
                        i_77 -= 2
                        int128_t v16_5 = v4 ^ v0
                        int128_t v17_5 = v5 ^ v1
                        int128_t v18_5 = v6 ^ v2
                        int128_t v19_5 = v7 ^ v3
                        *x19_24 = v16_5.q
                        x19_24[1] = v17_5.q
                        x19_24[2] = v18_5.q
                        x19_24[3] = v19_5.q
                        x19_24[4] = v16_5:8.q
                        x19_24[5] = v17_5:8.q
                        x19_24[6] = v18_5:8.q
                        x19_24[7] = v19_5:8.q
                        x19_24 = &x19_24[8]
                    while (i_38 != 2)
                    x19_22 = x8_21
                    
                    if (((i_81 - 0x20) u>> 5) + 1 != i_146)
                        goto label_d9e7f4
                
                if (i_81 != i_70 + 4)
                    void* i_39 = i_81
                    
                    if (i_70 - i_81 + 4 u< 8)
                    label_d9e970:
                        
                        do
                            *(x0_5 + i_39) ^= *(x15_8 + i_39)
                            i_39 += 1
                        while (i_70 + 4 != i_39)
                    else
                        if (x8_15 u< x11 + x6_1 + 0x10 + x25_2)
                            i_39 = i_81
                        
                        if (x8_15 u< x11 + x6_1 + 0x10 + x25_2
                                && x11 + x9_14 + 0xc + x25_2 u< x8_16)
                            goto label_d9e970
                        
                        void* i_167
                        
                        if (i_70 - i_81 + 4 u>= 0x20)
                            int128_t* x9_88 = x8_18
                            void* x17_27 = var_e0_1
                            void* i_115 = i_140
                            void* i_40
                            
                            do
                                v0 = *(x17_27 - 0x10)
                                v1 = *x17_27
                                i_40 = i_115
                                i_115 -= 0x20
                                x17_27 += 0x20
                                v1 ^= *x9_88
                                x9_88[-1] ^= v0
                                *x9_88 = v1
                                x9_88 = &x9_88[2]
                            while (i_40 != 0x20)
                            
                            if (i_70 - i_81 + 4 != i_140)
                                i_167 = i_140
                                i_39 = i_71
                                
                                if (x9_15 == 0)
                                    goto label_d9e970
                                
                                goto label_d9e91c
                        else
                            i_167 = nullptr
                        label_d9e91c:
                            void* x17_28 = x8_15 + i_167
                            int64_t* x9_91 = var_c8_1 + i_167
                            void* i_116 = x8_19 + i_167
                            void* i_41
                            
                            do
                                v0.q = *x9_91
                                x9_91 = &x9_91[1]
                                v1.q = *x17_28
                                i_41 = i_116
                                i_116 += 8
                                *x17_28 = (v1 ^ v0).q
                                x17_28 += 8
                            while (i_41 != -8)
                            i_39 = i_72
                            
                            if (i_70 - i_81 + 4 != x9_16)
                                goto label_d9e970
            
            void* x9_95 = x11 + x4 + 0x14 + x25_2
            
            if ((zx.d(*(x6_9 + x12_1)) & 0x10) != 0)
                int64_t x17_31
                
                if ((((i_81 == 0x20 ? 1 : 0) | x17_7) & 1) == 0)
                    x17_31 = 0
                    
                    if (((x0_5 u< x11 + x21_1 + 0x18 + x25_2 ? 1 : 0)
                            & (x11 + x17_2 + 0x10 + x25_2 u< x8_15 ? 1 : 0) & 1) != 0 || ((
                            x0_5 u< x11 + x21_1 + 0x30 + x25_2 ? 1 : 0)
                            & (x11 + x17_2 + 0x18 + x25_2 u< x8_15 ? 1 : 0) & 1) != 0)
                        goto label_d9e9e8
                    
                    int64_t i_101 = i_146
                    char* x19_30 = x0_11
                    int64_t* x23_14 = x0_5
                    int64_t i_42
                    
                    do
                        v0.q = *x23_14
                        v1.q = x23_14[1]
                        v2.q = x23_14[2]
                        v3.q = x23_14[3]
                        v0:8.q = x23_14[4]
                        v1:8.q = x23_14[5]
                        v2:8.q = x23_14[6]
                        v3:8.q = x23_14[7]
                        v4.q = *x19_30
                        v5.q = *(x19_30 + 8)
                        v6.q = *(x19_30 + 0x10)
                        v7.q = *(x19_30 + 0x18)
                        v4:8.q = *(x19_30 + 0x20)
                        v5:8.q = *(x19_30 + 0x28)
                        v6:8.q = *(x19_30 + 0x30)
                        v7:8.q = *(x19_30 + 0x38)
                        x19_30 = &x19_30[0x40]
                        i_42 = i_101
                        i_101 -= 2
                        int128_t v16_6 = v4 ^ v0
                        int128_t v17_6 = v5 ^ v1
                        int128_t v18_6 = v6 ^ v2
                        int128_t v19_6 = v7 ^ v3
                        *x23_14 = v16_6.q
                        x23_14[1] = v17_6.q
                        x23_14[2] = v18_6.q
                        x23_14[3] = v19_6.q
                        x23_14[4] = v16_6:8.q
                        x23_14[5] = v17_6:8.q
                        x23_14[6] = v18_6:8.q
                        x23_14[7] = v19_6:8.q
                        x23_14 = &x23_14[8]
                    while (i_42 != 2)
                    x17_31 = x8_21
                    
                    if (((i_81 - 0x20) u>> 5) + 1 != i_146)
                        goto label_d9e9e8
                else
                    x17_31 = 0
                label_d9e9e8:
                    
                    do
                        void* x13_91 = x0_5 + x17_31
                        void* x4_18 = x27_1 + x17_31
                        x17_31 += 0x20
                        v0 = *(x4_18 + 0x18) ^ *(x13_91 + 8)
                        int64_t x4_20 = *(x4_18 + 0x28) ^ *(x13_91 + 0x18)
                        *x13_91 ^= *(x4_18 + 0x10)
                        *(x13_91 + 8) = v0
                        *(x13_91 + 0x18) = x4_20
                    while (i_81 != x17_31)
                x6_9 = x8_6
                x23_4 = &x0_5[2]
                
                if (i_81 != i_70 + 4)
                    void* i_43 = i_81
                    
                    if (i_70 - i_81 + 4 u< 8)
                    label_d9ebc4:
                        
                        do
                            *(x0_5 + i_43) ^= *(x0_11 + i_43)
                            i_43 += 1
                        while (i_70 + 4 != i_43)
                    else
                        if (x8_15 u< x9_95)
                            i_43 = i_81
                        
                        if (x8_15 u< x9_95 && x11 + i_81 + x6_1 + 0x10 + x25_2 u< x8_16)
                            goto label_d9ebc4
                        
                        void* i_168
                        
                        if (i_70 - i_81 + 4 u>= 0x20)
                            void* i_117 = i_140
                            void* i_148 = i_81
                            void* i_44
                            
                            do
                                void* x13_105 = x27_1 + i_148
                                void* x4_25 = x23_4 + i_148
                                i_44 = i_117
                                i_117 -= 0x20
                                i_148 += 0x20
                                v1 = *x4_25 ^ *(x13_105 + 0x20)
                                *(x4_25 - 0x10) ^= *(x13_105 + 0x10)
                                *x4_25 = v1
                            while (i_44 != 0x20)
                            
                            if (i_70 - i_81 + 4 != i_140)
                                i_168 = i_140
                                i_43 = i_71
                                
                                if (x9_15 == 0)
                                    goto label_d9ebc4
                                
                                goto label_d9eb74
                        else
                            i_168 = nullptr
                        label_d9eb74:
                            void* x17_32 = i_81 + i_168
                            void* i_118 = x8_19 + i_168
                            void* i_45
                            
                            do
                                v0.q = *(x0_5 + x17_32)
                                v1.q = *(x27_1 + x17_32 + 0x10)
                                i_45 = i_118
                                i_118 += 8
                                *(x0_5 + x17_32) = (v0 ^ v1).q
                                x17_32 += 8
                            while (i_45 != -8)
                            i_43 = i_72
                            
                            if (i_70 - i_81 + 4 != x9_16)
                                goto label_d9ebc4
            
            void* x17_35 = x11 + x14_5 + 0x18 + x25_2
            
            if ((zx.d(*(x6_9 + x12_1)) & 0x20) != 0)
                int64_t x19_31
                
                if ((((i_81 == 0x20 ? 1 : 0) | x17_7) & 1) == 0)
                    x19_31 = 0
                    
                    if (((x0_5 u< x11 + x17_10 + 0x1c + x25_2 ? 1 : 0) & (x9_95 u< x8_15 ? 1 : 0)
                            & 1) != 0 || ((x0_5 u< x11 + x17_10 + 0x34 + x25_2 ? 1 : 0)
                            & (x11 + x4 + 0x1c + x25_2 u< x8_15 ? 1 : 0) & 1) != 0)
                        goto label_d9ec38
                    
                    int64_t i_78 = i_146
                    char* x19_32 = x3_3
                    int64_t* x23_17 = x0_5
                    int64_t i_46
                    
                    do
                        v0.q = *x23_17
                        v1.q = x23_17[1]
                        v2.q = x23_17[2]
                        v3.q = x23_17[3]
                        v0:8.q = x23_17[4]
                        v1:8.q = x23_17[5]
                        v2:8.q = x23_17[6]
                        v3:8.q = x23_17[7]
                        v4.q = *x19_32
                        v5.q = *(x19_32 + 8)
                        v6.q = *(x19_32 + 0x10)
                        v7.q = *(x19_32 + 0x18)
                        v4:8.q = *(x19_32 + 0x20)
                        v5:8.q = *(x19_32 + 0x28)
                        v6:8.q = *(x19_32 + 0x30)
                        v7:8.q = *(x19_32 + 0x38)
                        x19_32 = &x19_32[0x40]
                        i_46 = i_78
                        i_78 -= 2
                        int128_t v16_7 = v4 ^ v0
                        int128_t v17_7 = v5 ^ v1
                        int128_t v18_7 = v6 ^ v2
                        int128_t v19_7 = v7 ^ v3
                        *x23_17 = v16_7.q
                        x23_17[1] = v17_7.q
                        x23_17[2] = v18_7.q
                        x23_17[3] = v19_7.q
                        x23_17[4] = v16_7:8.q
                        x23_17[5] = v17_7:8.q
                        x23_17[6] = v18_7:8.q
                        x23_17[7] = v19_7:8.q
                        x23_17 = &x23_17[8]
                    while (i_46 != 2)
                    x19_31 = x8_21
                    
                    if (((i_81 - 0x20) u>> 5) + 1 != i_146)
                        goto label_d9ec38
                else
                    x19_31 = 0
                label_d9ec38:
                    
                    do
                        void* x9_104 = x0_5 + x19_31
                        void* x13_115 = x21_2 + x19_31
                        x19_31 += 0x20
                        v0 = *(x13_115 + 0x1c) ^ *(x9_104 + 8)
                        int64_t x13_117 = *(x13_115 + 0x2c) ^ *(x9_104 + 0x18)
                        *x9_104 ^= *(x13_115 + 0x14)
                        *(x9_104 + 8) = v0
                        *(x9_104 + 0x18) = x13_117
                    while (i_81 != x19_31)
                x6_9 = x8_6
                x23_4 = &x0_5[2]
                
                if (i_81 != i_70 + 4)
                    void* i_47 = i_81
                    
                    if (i_70 - i_81 + 4 u< 8)
                    label_d9edf0:
                        
                        do
                            *(x0_5 + i_47) ^= *(x3_3 + i_47)
                            i_47 += 1
                        while (i_70 + 4 != i_47)
                    else
                        if (x8_15 u< x17_35)
                            i_47 = i_81
                        
                        if (x8_15 u< x17_35 && x11 + i_81 + x4 + 0x14 + x25_2 u< x8_16)
                            goto label_d9edf0
                        
                        void* i_169
                        
                        if (i_70 - i_81 + 4 u>= 0x20)
                            void* i_119 = i_140
                            void* i_141 = i_81
                            void* i_48
                            
                            do
                                void* x13_125 = x21_2 + i_141
                                void* x4_36 = x23_4 + i_141
                                i_48 = i_119
                                i_119 -= 0x20
                                i_141 += 0x20
                                v1 = *x4_36 ^ *(x13_125 + 0x24)
                                *(x4_36 - 0x10) ^= *(x13_125 + 0x14)
                                *x4_36 = v1
                            while (i_48 != 0x20)
                            
                            if (i_70 - i_81 + 4 != i_140)
                                i_169 = i_140
                                i_47 = i_71
                                
                                if (x9_15 == 0)
                                    goto label_d9edf0
                                
                                goto label_d9ed9c
                        else
                            i_169 = nullptr
                        label_d9ed9c:
                            void* x9_117 = i_81 + i_169
                            void* i_120 = x8_19 + i_169
                            void* i_49
                            
                            do
                                v0.q = *(x0_5 + x9_117)
                                v1.q = *(x21_2 + x9_117 + 0x14)
                                i_49 = i_120
                                i_120 += 8
                                *(x0_5 + x9_117) = (v0 ^ v1).q
                                x9_117 += 8
                            while (i_49 != -8)
                            i_47 = i_72
                            
                            if (i_70 - i_81 + 4 != x9_16)
                                goto label_d9edf0
            
            uint32_t x19_5 = zx.d(*(x6_9 + x12_1))
            void* x9_121 = x11 + x9_6 + 0x1c + x25_2
            
            if ((x19_5 & 0x40) != 0)
                int64_t x19_33
                
                if ((((i_81 == 0x20 ? 1 : 0) | x17_7) & 1) == 0)
                    x19_33 = 0
                    
                    if (((x0_5 u< x11 + x4_1 + x25_2 ? 1 : 0) & (x17_35 u< x8_15 ? 1 : 0) & 1) != 0
                            || ((x0_5 u< x11 + i_81 - 0x20 + x14_5 + 0x38 + x25_2 ? 1 : 0)
                            & (x11 + x14_5 + 0x20 + x25_2 u< x8_15 ? 1 : 0) & 1) != 0)
                        goto label_d9ee64
                    
                    int64_t i_102 = i_146
                    void* x19_34 = fp_2
                    int64_t* x23_20 = x0_5
                    int64_t i_50
                    
                    do
                        v0.q = *x23_20
                        v1.q = x23_20[1]
                        v2.q = x23_20[2]
                        v3.q = x23_20[3]
                        v0:8.q = x23_20[4]
                        v1:8.q = x23_20[5]
                        v2:8.q = x23_20[6]
                        v3:8.q = x23_20[7]
                        v4.q = *x19_34
                        v5.q = *(x19_34 + 8)
                        v6.q = *(x19_34 + 0x10)
                        v7.q = *(x19_34 + 0x18)
                        v4:8.q = *(x19_34 + 0x20)
                        v5:8.q = *(x19_34 + 0x28)
                        v6:8.q = *(x19_34 + 0x30)
                        v7:8.q = *(x19_34 + 0x38)
                        x19_34 += 0x40
                        i_50 = i_102
                        i_102 -= 2
                        int128_t v16_8 = v4 ^ v0
                        int128_t v17_8 = v5 ^ v1
                        int128_t v18_8 = v6 ^ v2
                        int128_t v19_8 = v7 ^ v3
                        *x23_20 = v16_8.q
                        x23_20[1] = v17_8.q
                        x23_20[2] = v18_8.q
                        x23_20[3] = v19_8.q
                        x23_20[4] = v16_8:8.q
                        x23_20[5] = v17_8:8.q
                        x23_20[6] = v18_8:8.q
                        x23_20[7] = v19_8:8.q
                        x23_20 = &x23_20[8]
                    while (i_50 != 2)
                    x19_33 = x8_21
                    
                    if (((i_81 - 0x20) u>> 5) + 1 != i_146)
                        goto label_d9ee64
                else
                    x19_33 = 0
                label_d9ee64:
                    
                    do
                        void* x13_136 = x0_5 + x19_33
                        void* x17_36 = lr_1 + x19_33
                        x19_33 += 0x20
                        v0 = *(x17_36 + 0x20) ^ *(x13_136 + 8)
                        int64_t x17_38 = *(x17_36 + 0x30) ^ *(x13_136 + 0x18)
                        *x13_136 ^= *(x17_36 + 0x18)
                        *(x13_136 + 8) = v0
                        *(x13_136 + 0x18) = x17_38
                    while (i_81 != x19_33)
                x23_4 = &x0_5[2]
                
                if (i_81 != i_70 + 4)
                    void* i_51 = i_81
                    
                    if (i_70 - i_81 + 4 u< 8)
                    label_d9f01c:
                        
                        do
                            *(x0_5 + i_51) ^= *(fp_2 + i_51)
                            i_51 += 1
                        while (i_70 + 4 != i_51)
                    else
                        if (x8_15 u< x9_121)
                            i_51 = i_81
                        
                        if (x8_15 u< x9_121 && x11 + x4_1 + 0x18 + x25_2 u< x8_16)
                            goto label_d9f01c
                        
                        void* i_170
                        
                        if (i_70 - i_81 + 4 u>= 0x20)
                            void* i_121 = i_140
                            void* i_149 = i_81
                            void* i_52
                            
                            do
                                void* x13_150 = lr_1 + i_149
                                void* x4_47 = x23_4 + i_149
                                i_52 = i_121
                                i_121 -= 0x20
                                i_149 += 0x20
                                v1 = *x4_47 ^ *(x13_150 + 0x28)
                                *(x4_47 - 0x10) ^= *(x13_150 + 0x18)
                                *x4_47 = v1
                            while (i_52 != 0x20)
                            
                            if (i_70 - i_81 + 4 != i_140)
                                i_170 = i_140
                                i_51 = i_71
                                
                                if (x9_15 == 0)
                                    goto label_d9f01c
                                
                                goto label_d9efc8
                        else
                            i_170 = nullptr
                        label_d9efc8:
                            void* x17_44 = i_81 + i_170
                            void* i_122 = x8_19 + i_170
                            void* i_53
                            
                            do
                                v0.q = *(x0_5 + x17_44)
                                v1.q = *(lr_1 + x17_44 + 0x18)
                                i_53 = i_122
                                i_122 += 8
                                *(x0_5 + x17_44) = (v0 ^ v1).q
                                x17_44 += 8
                            while (i_53 != -8)
                            i_51 = i_72
                            
                            if (i_70 - i_81 + 4 != x9_16)
                                goto label_d9f01c
                
                x19_5 = zx.d(*(x8_6 + x12_1))
            
            if ((x19_5 & 0x80) != 0)
                int64_t x17_14
                
                if ((((i_81 == 0x20 ? 1 : 0) | x17_7) & 1) == 0)
                    x17_14 = 0
                    
                    if (((x0_5 u< x11 + x16_4 + 0x24 + x25_2 ? 1 : 0) & (x9_121 u< x8_15 ? 1 : 0)
                            & 1) != 0 || ((x0_5 u< x11 + x16_4 + 0x3c + x25_2 ? 1 : 0)
                            & (x11 + x9_6 + 0x24 + x25_2 u< x8_15 ? 1 : 0) & 1) != 0)
                        goto label_d9e214
                    
                    int64_t i_73 = i_146
                    void* x17_15 = x14_12
                    int64_t* x19_12 = x0_5
                    int64_t i_54
                    
                    do
                        v0.q = *x19_12
                        v1.q = x19_12[1]
                        v2.q = x19_12[2]
                        v3.q = x19_12[3]
                        v0:8.q = x19_12[4]
                        v1:8.q = x19_12[5]
                        v2:8.q = x19_12[6]
                        v3:8.q = x19_12[7]
                        v4.q = *x17_15
                        v5.q = *(x17_15 + 8)
                        v6.q = *(x17_15 + 0x10)
                        v7.q = *(x17_15 + 0x18)
                        v4:8.q = *(x17_15 + 0x20)
                        v5:8.q = *(x17_15 + 0x28)
                        v6:8.q = *(x17_15 + 0x30)
                        v7:8.q = *(x17_15 + 0x38)
                        x17_15 += 0x40
                        i_54 = i_73
                        i_73 -= 2
                        int128_t v16_1 = v4 ^ v0
                        int128_t v17_1 = v5 ^ v1
                        int128_t v18_1 = v6 ^ v2
                        int128_t v19_1 = v7 ^ v3
                        *x19_12 = v16_1.q
                        x19_12[1] = v17_1.q
                        x19_12[2] = v18_1.q
                        x19_12[3] = v19_1.q
                        x19_12[4] = v16_1:8.q
                        x19_12[5] = v17_1:8.q
                        x19_12[6] = v18_1:8.q
                        x19_12[7] = v19_1:8.q
                        x19_12 = &x19_12[8]
                    while (i_54 != 2)
                    x17_14 = x8_21
                    
                    if (((i_81 - 0x20) u>> 5) + 1 != i_146)
                        goto label_d9e214
                else
                    x17_14 = 0
                label_d9e214:
                    
                    do
                        void* x9_34 = x0_5 + x17_14
                        void* x13_15 = x20_9 + x17_14
                        x17_14 += 0x20
                        v0 = *(x13_15 + 0x24) ^ *(x9_34 + 8)
                        int64_t x13_17 = *(x13_15 + 0x34) ^ *(x9_34 + 0x18)
                        *x9_34 ^= *(x13_15 + 0x1c)
                        *(x9_34 + 8) = v0
                        *(x9_34 + 0x18) = x13_17
                    while (i_81 != x17_14)
                
                if (i_81 != i_70 + 4)
                    void* i_55 = i_81
                    
                    if (i_70 - i_81 + 4 u< 8)
                    label_d9f0cc:
                        
                        do
                            *(x0_5 + i_55) ^= *(x14_12 + i_55)
                            i_55 += 1
                        while (i_70 + 4 != i_55)
                    else
                        if (x8_15 u< x11 + x14_1 + x25_2)
                            i_55 = i_81
                        
                        if (x8_15 u< x11 + x14_1 + x25_2
                                && x11 + i_81 + x9_6 + 0x1c + x25_2 u< x8_16)
                            goto label_d9f0cc
                        
                        void* i_158
                        
                        if (i_70 - i_81 + 4 u>= 0x20)
                            void* i_103 = i_140
                            void* i_142 = i_81
                            void* i_56
                            
                            do
                                void* x13_158 = x20_9 + i_142
                                void* x4_49 = x23_4 + i_142
                                i_56 = i_103
                                i_103 -= 0x20
                                i_142 += 0x20
                                v1 = *x4_49 ^ *(x13_158 + 0x2c)
                                *(x4_49 - 0x10) ^= *(x13_158 + 0x1c)
                                *x4_49 = v1
                            while (i_56 != 0x20)
                            
                            if (i_70 - i_81 + 4 != i_140)
                                i_158 = i_140
                                i_55 = i_71
                                
                                if (x9_15 == 0)
                                    goto label_d9f0cc
                                
                                goto label_d9f078
                        else
                            i_158 = nullptr
                        label_d9f078:
                            void* x9_123 = i_81 + i_158
                            void* i_104 = x8_19 + i_158
                            void* i_57
                            
                            do
                                v0.q = *(x0_5 + x9_123)
                                v1.q = *(x20_9 + x9_123 + 0x1c)
                                i_57 = i_104
                                i_104 += 8
                                *(x0_5 + x9_123) = (v0 ^ v1).q
                                x9_123 += 8
                            while (i_57 != -8)
                            i_55 = i_72
                            
                            if (i_70 - i_81 + 4 != x9_16)
                                goto label_d9f0cc
            
            var_d0_1 += (x8_7 << 5) + 0x20
            var_b8_1 += (x8_7 << 5) + 0x20
            x12_1 += 1
            x16_6 = &x16_6[(x8_7 << 5) + 0x20]
            var_d8_1 += (x8_7 << 5) + 0x20
            x1_2 += (x8_7 << 5) + 0x20
            x26_2 += (x8_7 << 5) + 0x20
            x7_2 += (x8_7 << 5) + 0x20
            var_c0_1 += (x8_7 << 5) + 0x20
            x15_8 = &x15_8[(x8_7 << 5) + 0x20]
            x5_4 += (x8_7 << 5) + 0x20
            x0_11 = &x0_11[(x8_7 << 5) + 0x20]
            var_e0_1 += (x8_7 << 5) + 0x20
            x27_1 += (x8_7 << 5) + 0x20
            x3_3 = &x3_3[(x8_7 << 5) + 0x20]
            x21_2 += (x8_7 << 5) + 0x20
            var_c8_1 += (x8_7 << 5) + 0x20
            fp_2 += (x8_7 << 5) + 0x20
            lr_1 += (x8_7 << 5) + 0x20
            x14_12 += (x8_7 << 5) + 0x20
            x8_25 = &x8_25[i_70 + 4]
            x20_9 += (x8_7 << 5) + 0x20
        while (x12_1 != x8_4)

int64_t x19_35 = x23_1 & 7

if (x19_35 != 0)
    void* i_82 = (i_70 + 4) & 0x3fffffffffffffe0
    int64_t x9_127 = *arg3
    
    if (i_82 == 0)
        if (i_82 != i_70 + 4)
            int64_t x10_9 = 0
            void* i_95 = (i_70 + 4) & 0x3fffffffffffffe0
            void* i_97 = (i_70 + 4) & 0x3ffffffffffffff8
            int64_t* x15_14 = x8_25
            
            do
                if ((zx.d(*(x9_127 + x8_4)) u>> x10_9.d & 1) != 0)
                    void* i_58 = i_70
                    
                    if (i_58 == 0)
                        goto label_d9fec0
                    
                    int64_t x16_12 = (i_70 + 4) * x10_9
                    
                    if (x0_5 u< x8_25 + i_70 + 4 + x16_12 && x8_25 + x16_12 u< x0_5 + i_70 + 4)
                        i_58 = nullptr
                    label_d9fec0:
                        
                        do
                            *(x0_5 + i_58) ^= *(x15_14 + i_58)
                            i_58 += 1
                        while (i_70 + 4 != i_58)
                    else
                        void* i_150
                        
                        if (i_70 u>= 0x1c)
                            int64_t x16_15 = 0
                            
                            do
                                void* x17_74 = x15_14 + x16_15
                                void* x0_21 = x0_5 + x16_15
                                x16_15 += 0x20
                                v1 = *(x0_21 + 0x10) ^ *(x17_74 + 0x10)
                                *x0_21 ^= *x17_74
                                *(x0_21 + 0x10) = v1
                            while (i_95 != x16_15)
                            
                            if (i_70 + 4 != i_95)
                                i_150 = i_95
                                i_58 = i_95
                                
                                if (((i_70 + 4) & 0x18) == 0)
                                    goto label_d9fec0
                                
                                goto label_d9fe98
                        else
                            i_150 = nullptr
                        label_d9fe98:
                            
                            do
                                v0.q = *(x15_14 + i_150)
                                v1.q = *(x0_5 + i_150)
                                *(x0_5 + i_150) = (v1 ^ v0).q
                                i_150 += 8
                            while (i_97 != i_150)
                            
                            i_58 = i_97
                            
                            if (i_70 + 4 != i_97)
                                goto label_d9fec0
                
                x10_9 += 1
                x15_14 += i_70 + 4
            while (x10_9 != x19_35)
    else if (i_82 != i_70 + 4)
        void* i_137 = (i_70 - i_82 + 4) & 0xffffffffffffffe0
        void* x2_10 = (i_70 - i_82 + 4) & 0xfffffffffffffff8
        int64_t i_138 = (((i_82 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
        int32_t x7_6 = (&x0_5[3] + i_82 - 0x20 u< &x0_5[3] ? 1 : 0)
            | (&x0_5[2] + i_82 - 0x20 u< &x0_5[2] ? 1 : 0)
            | (&x0_5[1] + i_82 - 0x20 u< &x0_5[1] ? 1 : 0)
        int64_t x11_49 = 0
        void* x12_6 = x0_5 + i_82
        int64_t* x21_6 = x8_25
        
        do
            if ((zx.d(*(x9_127 + x8_4)) u>> x11_49.d & 1) != 0)
                int64_t x25_4 = (i_70 + 4) * x11_49
                void* x24_6 = x8_25 + i_82 + x25_4
                int64_t x23_27
                
                if ((((i_82 == 0x20 ? 1 : 0) | x7_6 | (x0_5 + i_82 - 0x20 u< x0_5 ? 1 : 0)) & 1)
                        == 0)
                    if (x0_5 u< x24_6 && x8_25 + x25_4 u< x12_6)
                        x23_27 = 0
                        goto label_d9fcf4
                    
                    int64_t x26_6 = 0
                    int64_t i_128 = i_138
                    int64_t i_59
                    
                    do
                        void* x27_5 = x0_5 + x26_6
                        void* fp_5 = x21_6 + x26_6
                        v0.q = *x27_5
                        v1.q = *(x27_5 + 8)
                        v2.q = *(x27_5 + 0x10)
                        v3.q = *(x27_5 + 0x18)
                        v0:8.q = *(x27_5 + 0x20)
                        v1:8.q = *(x27_5 + 0x28)
                        v2:8.q = *(x27_5 + 0x30)
                        v3:8.q = *(x27_5 + 0x38)
                        v4.q = *fp_5
                        v5.q = *(fp_5 + 8)
                        v6.q = *(fp_5 + 0x10)
                        v7.q = *(fp_5 + 0x18)
                        v4:8.q = *(fp_5 + 0x20)
                        v5:8.q = *(fp_5 + 0x28)
                        v6:8.q = *(fp_5 + 0x30)
                        v7:8.q = *(fp_5 + 0x38)
                        i_59 = i_128
                        i_128 -= 2
                        x26_6 += 0x40
                        int128_t v16_9 = v4 ^ v0
                        int128_t v17_9 = v5 ^ v1
                        int128_t v18_9 = v6 ^ v2
                        int128_t v19_9 = v7 ^ v3
                        *x27_5 = v16_9.q
                        *(x27_5 + 8) = v17_9.q
                        *(x27_5 + 0x10) = v18_9.q
                        *(x27_5 + 0x18) = v19_9.q
                        *(x27_5 + 0x20) = v16_9:8.q
                        *(x27_5 + 0x28) = v17_9:8.q
                        *(x27_5 + 0x30) = v18_9:8.q
                        *(x27_5 + 0x38) = v19_9:8.q
                    while (i_59 != 2)
                    x23_27 = i_138 << 5
                    
                    if (((i_82 - 0x20) u>> 5) + 1 != i_138)
                        goto label_d9fcf4
                else
                    x23_27 = 0
                label_d9fcf4:
                    
                    do
                        void* x26_7 = x0_5 + x23_27
                        void* x27_6 = x21_6 + x23_27
                        x23_27 += 0x20
                        v1 = *(x27_6 + 0x10) ^ *(x26_7 + 0x10)
                        *x26_7 ^= *x27_6
                        *(x26_7 + 0x10) = v1
                    while (i_82 != x23_27)
                void* i_60 = i_82
                
                if (i_70 - i_82 + 4 u< 8)
                label_d9fdbc:
                    
                    do
                        *(x0_5 + i_60) ^= *(x21_6 + i_60)
                        i_60 += 1
                    while (i_70 + 4 != i_60)
                else
                    if (x12_6 u< x8_25 + i_70 + 4 + x25_4)
                        i_60 = i_82
                    
                    if (x12_6 u< x8_25 + i_70 + 4 + x25_4 && x24_6 u< x0_5 + i_70 + 4)
                        goto label_d9fdbc
                    
                    void* i_174
                    
                    if (i_70 - i_82 + 4 u>= 0x20)
                        void* x23_31 = i_82 + 0x10
                        void* i_129 = i_137
                        void* i_61
                        
                        do
                            void* x25_5 = x21_6 + x23_31
                            void* x26_8 = x0_5 + x23_31
                            i_61 = i_129
                            i_129 -= 0x20
                            x23_31 += 0x20
                            v1 = *x26_8 ^ *x25_5
                            *(x26_8 - 0x10) ^= *(x25_5 - 0x10)
                            *x26_8 = v1
                        while (i_61 != 0x20)
                        
                        if (i_70 - i_82 + 4 != i_137)
                            i_174 = i_137
                            i_60 = i_82 + i_137
                            
                            if (((i_70 - i_82 + 4) & 0x18) == 0)
                                goto label_d9fdbc
                            
                            goto label_d9fd74
                    else
                        i_174 = nullptr
                    label_d9fd74:
                        void* x23_32 = i_82 + i_174
                        void* i_130 = neg.q(x2_10) + i_174
                        void* i_62
                        
                        do
                            v0.q = *(x21_6 + x23_32)
                            v1.q = *(x0_5 + x23_32)
                            i_62 = i_130
                            i_130 += 8
                            *(x0_5 + x23_32) = (v1 ^ v0).q
                            x23_32 += 8
                        while (i_62 != -8)
                        i_60 = i_82 + x2_10
                        
                        if (i_70 - i_82 + 4 != x2_10)
                            goto label_d9fdbc
            
            x11_49 += 1
            x21_6 += i_70 + 4
        while (x11_49 != x19_35)
    else
        int64_t x10_4 = 0
        
        do
            if ((zx.d(*(x9_127 + x8_4)) u>> x10_4.d & 1) != 0)
                int64_t i_63 = 0
                
                do
                    void* x12_2 = x0_5 + i_63
                    void* x13_166 = x8_25 + i_63
                    i_63 += 0x20
                    v1 = *(x13_166 + 0x10) ^ *(x12_2 + 0x10)
                    *x12_2 ^= *x13_166
                    *(x12_2 + 0x10) = v1
                while (i_70 + 4 != i_63)
            
            x10_4 += 1
            x8_25 += i_70 + 4
        while (x10_4 != x19_35)

void* result_1
__builtin_memset(&result_1, 0, 0x18)
uint64_t x26_4 = ((x23_1 - 1) u>> 3) + 1 + x8_3 + 1
void* result_3 = Botan::allocate_memory(x26_4, 1)
void* x21_4 = result_3 + x26_4
result_1 = result_3
memset(result_3, 0, x26_4)
void* var_78 = x21_4
int64_t x24_4 = *arg3
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >& x21_5

if (x19_35 != 0)
    x21_5 = arg1
    uint64_t x2_7 = x8_4
    
    if (x2_7 != 0)
        if (x24_4 == 0)
            Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                "If n > 0 then args are not null", "copy_mem", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        label_da00f4:
            Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                "If n > 0 then args are not null", "copy_mem", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        label_da011c:
            int64_t* x0_24 = Botan::assertion_failure(
                "n > 0 implies in != nullptr && out != nullptr", "If n > 0 then args are not null", 
                "copy_mem", "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
            
            if (result_3 != 0)
                void* result_5 = result_3
                Botan::deallocate_memory(result_3, x26_4, 1)
            
            if (x0_5 != 0)
                Botan::deallocate_memory(x0_5, i_70 + 4, 1)
            
            if (x24 != 0)
                Botan::deallocate_memory(x24, var_208 - x24, 1)
            
            sub_1101e04(x0_24)
            noreturn
        
        memmove(result_3, x24_4, x2_7)
        x2_7 = x8_4
    
    uint8_t x8_43 = *(x24_4 + x2_7) & (not.d(0xffffffff << x19_35.d)).b
    *(result_3 + x2_7) = x8_43
    uint64_t i_143 = x21 u>> 3
    
    if (i_143 != 0)
        int64_t* x11_47 = x0_5
        uint64_t i_94 = i_143
        uint64_t i_64
        
        do
            uint32_t x13_168 = zx.d(*x11_47)
            x11_47 += 1
            void* x14_37 = result_3 + x2_7
            x2_7 += 1
            i_64 = i_94
            i_94 -= 1
            uint8_t x15_11 = x8_43 ^ (x13_168 << x19_35.d).b
            x8_43 = (x13_168 u>> (8 - x19_35.d)).b
            *x14_37 = x15_11
            *(x14_37 + 1) = x8_43
        while (i_64 != 1)
    
    *(result_3 + x2_7) = x8_43 ^ (zx.d(*(x0_5 + i_143)) << x19_35.d).b
    goto label_d9fad8

if (result_3 == 0 || x24_4 == 0)
    goto label_da00f4

memmove(result_3, x24_4, ((x23_1 - 1) u>> 3) + 1)

if (x0_5 == 0)
    goto label_da011c

memcpy(result_3 + ((x23_1 - 1) u>> 3) + 1, x0_5, x8_3 + 1)
x21_5 = arg1
label_d9fad8:
uint64_t x8_47 = (x20_3 + 7) u>> 3

if (x8_47 u> x26_4)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&result_1)
else if (x8_47 u< x26_4)
    var_78 = result_3 + x8_47

int128_t v0_1
int128_t v1_1
int128_t v2_1
int128_t v3_1
int128_t v4_1
int128_t v5_1
int128_t v6_1
int128_t v7_1
v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = Botan::deallocate_memory(x0_5, i_70 + 4, 1)
void* result_4 = result_1
void* x19_37 = var_208 - x24

if (x19_37 u> var_78 - result_4)
    v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&result_1)
    result_4 = result_1

void* x9_160 = x19_37 & 0xffffffffffffffe0

if (x9_160 != 0)
    int64_t x10_6 = 0
    
    if (x9_160 == 0x20 || result_4 + 0x18 + x9_160 - 0x20 u< result_4 + 0x18
            || result_4 + 0x10 + x9_160 - 0x20 u< result_4 + 0x10
            || result_4 + 8 + x9_160 - 0x20 u< result_4 + 8
            || result_4 + x9_160 - 0x20 u< result_4)
        goto label_d9ff14
    
    if (result_4 u>= x24 + x9_160 || x24 u>= result_4 + x9_160)
        int64_t i_145 = (((x9_160 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
        x10_6 = i_145 << 5
        int64_t i_96 = i_145
        void* x14_40 = x24
        void* result_6 = result_4
        int64_t i_65
        
        do
            v0_1.q = *result_6
            v1_1.q = *(result_6 + 8)
            v2_1.q = *(result_6 + 0x10)
            v3_1.q = *(result_6 + 0x18)
            v0_1:8.q = *(result_6 + 0x20)
            v1_1:8.q = *(result_6 + 0x28)
            v2_1:8.q = *(result_6 + 0x30)
            v3_1:8.q = *(result_6 + 0x38)
            v4_1.q = *x14_40
            v5_1.q = *(x14_40 + 8)
            v6_1.q = *(x14_40 + 0x10)
            v7_1.q = *(x14_40 + 0x18)
            v4_1:8.q = *(x14_40 + 0x20)
            v5_1:8.q = *(x14_40 + 0x28)
            v6_1:8.q = *(x14_40 + 0x30)
            v7_1:8.q = *(x14_40 + 0x38)
            x14_40 += 0x40
            i_65 = i_96
            i_96 -= 2
            int128_t v16_10 = v4_1 ^ v0_1
            int128_t v17_10 = v5_1 ^ v1_1
            int128_t v18_10 = v6_1 ^ v2_1
            int128_t v19_10 = v7_1 ^ v3_1
            *result_6 = v16_10.q
            *(result_6 + 8) = v17_10.q
            *(result_6 + 0x10) = v18_10.q
            *(result_6 + 0x18) = v19_10.q
            *(result_6 + 0x20) = v16_10:8.q
            *(result_6 + 0x28) = v17_10:8.q
            *(result_6 + 0x30) = v18_10:8.q
            *(result_6 + 0x38) = v19_10:8.q
            result_6 += 0x40
        while (i_65 != 2)
        
        if (((x9_160 - 0x20) u>> 5) + 1 != i_145)
            goto label_d9ff14
    else
        x10_6 = 0
    label_d9ff14:
        void* i_91 = x10_6 - x9_160
        void* x10_11 = x24 + x10_6 + 0x10
        void* x12_8 = result_4 + x10_6 + 0x10
        void* i_66
        
        do
            v2_1 = *(x10_11 - 0x10)
            v3_1 = *x10_11
            i_66 = i_91
            i_91 += 0x20
            x10_11 += 0x20
            v1_1 = v3_1 ^ *x12_8
            *(x12_8 - 0x10) ^= v2_1
            *x12_8 = v1_1
            x12_8 += 0x20
        while (i_66 != -0x20)

if (x9_160 != x19_37)
    void* x10_12 = x19_37 - x9_160
    
    if (x10_12 u< 8 || (result_4 + x9_160 u< var_208 && x24 + x9_160 u< result_4 + x19_37))
        goto label_da000c
    
    void* i_144
    
    if (x10_12 u>= 0x20)
        i_144 = x10_12 & 0xffffffffffffffe0
        void* x12_10 = x24 + x9_160 + 0x10
        void* x13_174 = result_4 + x9_160 + 0x10
        void* i_98 = i_144
        void* i_67
        
        do
            v0_1 = *(x12_10 - 0x10)
            v1_1 = *x12_10
            x12_10 += 0x20
            i_67 = i_98
            i_98 -= 0x20
            v1_1 ^= *x13_174
            *(x13_174 - 0x10) ^= v0_1
            *x13_174 = v1_1
            x13_174 += 0x20
        while (i_67 != 0x20)
        
        if (x10_12 != i_144)
            if ((x10_12 & 0x18) != 0)
                goto label_d9ffcc
            
            x9_160 += i_144
        label_da000c:
            void* x10_13 = x9_160 + x24
            void* i_93 = x10_13 - var_208
            void* x8_49 = result_4 + x9_160
            void* i_68
            
            do
                char x9_161 = *x10_13
                x10_13 += 1
                i_68 = i_93
                i_93 += 1
                *x8_49 ^= x9_161
                x8_49 += 1
            while (i_68 u< -1)
    else
        i_144 = nullptr
    label_d9ffcc:
        void* x12_11 = x10_12 & 0xfffffffffffffff8
        void* x14_41 = i_144 + x9_160
        x9_160 += x12_11
        void* x13_175 = x24 + x14_41
        void* x14_42 = result_4 + x14_41
        void* i_92 = i_144 - x12_11
        void* i_69
        
        do
            v0_1.q = *x13_175
            x13_175 += 8
            v1_1.q = *x14_42
            i_69 = i_92
            i_92 += 8
            *x14_42 = (v1_1 ^ v0_1).q
            x14_42 += 8
        while (i_69 != -8)
        
        if (x10_12 != x12_11)
            goto label_da000c

void* result = *x21_5
v0_1 = result_1.o
result_1 = result
*x21_5 = v0_1
int64_t x8_50 = *(x21_5 + 0x10)
*(x21_5 + 0x10) = x21_4
int64_t var_70_1 = x8_50
void* x21_7 = *arg2
int64_t x19_38 = *(arg2 + 0x10)
*arg2 = x24
*(arg2 + 8) = var_208
*(arg2 + 0x10) = var_208

if (result != 0)
    void* result_2 = result
    result = Botan::deallocate_memory(result, x8_50 - result, 1)

if (x21_7 == 0)
    return result

return Botan::deallocate_memory(x21_7, x19_38 - x21_7, 1)
