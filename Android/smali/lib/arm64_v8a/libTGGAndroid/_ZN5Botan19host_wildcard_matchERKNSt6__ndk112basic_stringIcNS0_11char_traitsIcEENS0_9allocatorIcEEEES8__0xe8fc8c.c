// 函数: _ZN5Botan19host_wildcard_matchERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_
// 地址: 0xe8fc8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_78[0x8]
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_78)
int64_t x8 = 0
void* i_35 = &var_78 | 1
uint64_t i_45
void* i_24

while (true)
    uint64_t x9_1 = zx.q(var_78[0])
    void* i_41
    
    if ((x9_1.d & 1) != 0)
        if (x8 == i_45)
            break
        
        i_41 = i_24
    else
        i_41 = i_35
        
        if (x8 == x9_1 u>> 1)
            break
    
    uint32_t x10_2 = zx.d(*(i_41 + x8))
    
    if ((x10_2 & 0xffffffdf) - 0x41 u<= 0x19)
        char x10_3
        
        if (x10_2 - 0x41 u< 0x1a)
            x10_3 = x10_2.b | 0x20
        else
            x10_3 = x10_2.b
        
        void* i_38
        
        if ((x9_1.d & 1) == 0)
            i_38 = i_35
        else
            i_38 = i_24
        
        *(i_38 + x8) = x10_3
    
    x8 += 1

char var_90[0x8]
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_90)
int64_t x8_1 = 0
void* i_34 = &var_90 | 1
void* var_88
void* i_36
uint64_t x23_1

while (true)
    x23_1 = zx.q(var_90[0])
    void* i_39
    
    if ((x23_1.d & 1) != 0)
        if (x8_1 == var_88)
            break
        
        i_39 = i_36
    else
        i_39 = i_34
        
        if (x8_1 == x23_1 u>> 1)
            break
    
    uint32_t x9_3 = zx.d(*(i_39 + x8_1))
    
    if ((x9_3 & 0xffffffdf) - 0x41 u<= 0x19)
        char x9_4
        
        if (x9_3 - 0x41 u< 0x1a)
            x9_4 = x9_3.b | 0x20
        else
            x9_4 = x9_3.b
        
        void* i_42
        
        if ((x23_1.d & 1) == 0)
            i_42 = i_34
        else
            i_42 = i_36
        
        *(i_42 + x8_1) = x9_4
    
    x8_1 += 1

int32_t x22_1
void* i_33

if (x8_1 == 0)
label_e8fe50:
    x22_1 = 0
label_e8fe54:
    
    if ((x23_1.d & 1) != 0)
        i_33 = i_36
    label_e8fe60:
        operator delete(i_33)
    
    if ((zx.d(var_78[0]) & 1) != 0)
        operator delete(i_24)
else
    uint64_t x28_1 = zx.q(var_78[0])
    uint64_t i_48
    void* i_16
    
    if ((x28_1.d & 1) == 0)
        if (x28_1.d u< 2)
            goto label_e8fe50
        
        i_48 = x28_1 u>> 1
        i_16 = i_35
        
        if (i_48 u< 2)
            goto label_e8fe2c
        
        goto label_e8fdd0
    
    i_48 = i_45
    
    if (i_48 == 0)
        goto label_e8fe50
    
    i_16 = i_24
    int64_t x11_6
    void* i_1
    
    if (i_48 u>= 2)
    label_e8fdd0:
        int64_t i_32 = i_48 & 0xfffffffffffffffe
        int64_t x11_5 = 0
        int64_t x12_3 = 0
        i_1 = i_16 + i_32
        char* x14_1 = i_16 + 1
        int64_t i_21 = i_32
        int64_t i
        
        do
            uint32_t x16_1 = zx.d(x14_1[-1])
            uint32_t x17_1 = zx.d(*x14_1)
            x14_1 = &x14_1[2]
            
            if (x16_1 == 0)
                x11_5 += 1
            
            if (x17_1 == 0)
                x12_3 += 1
            
            i = i_21
            i_21 -= 2
        while (i != 2)
        x11_6 = x12_3 + x11_5
        
        if (i_48 != i_32)
            goto label_e8fe48
    else
    label_e8fe2c:
        x11_6 = 0
        i_1 = i_16
    label_e8fe48:
        
        do
            uint32_t x9_5 = zx.d(*i_1)
            i_1 += 1
            
            if (x9_5 == 0)
                x11_6 += 1
        while (i_16 + i_48 != i_1)
    
    if (x11_6 != 0)
        goto label_e8fe50
    
    uint64_t i_25 = x28_1 u>> 1
    int32_t temp1_1 = x28_1.d & 1
    uint64_t i_44
    
    i_44 = temp1_1 == 0 ? i_25 : i_45
    
    void* i_23
    
    i_23 = temp1_1 == 0 ? i_35 : i_24
    
    uint64_t i_47 = i_44
    
    if (i_44 != 0)
        void* i_3
        
        if (i_44 != 1)
            int64_t i_27 = i_44 & 0xfffffffffffffffe
            int64_t x9_6 = 0
            int64_t x10_7 = 0
            i_3 = i_23 + i_27
            void* x12_4 = i_23 + 1
            int64_t i_18 = i_27
            int64_t i_2
            
            do
                uint32_t x14_2 = zx.d(*(x12_4 - 1))
                uint32_t x15_1 = zx.d(*x12_4)
                x12_4 += 2
                
                if (x14_2 == 0x2a)
                    x9_6 += 1
                
                if (x15_1 == 0x2a)
                    x10_7 += 1
                
                i_2 = i_18
                i_18 -= 2
            while (i_2 != 2)
            i_47 = x10_7 + x9_6
            
            if (i_44 != i_27)
                goto label_e8ff20
        else
            i_47 = 0
            i_3 = i_23
        label_e8ff20:
            
            do
                uint32_t x10_8 = zx.d(*i_3)
                i_3 += 1
                
                if (x10_8 == 0x2a)
                    i_47 += 1
            while (i_23 + i_44 != i_3)
        
        if (i_47 u> 1)
            goto label_e8fe50
    
    i_33 = i_36
    uint64_t x2_1 = x23_1 u>> 1
    int32_t temp2_1 = x23_1.d & 1
    void* x25_1
    
    x25_1 = temp2_1 == 0 ? x2_1 : var_88
    
    void* i_22
    
    i_22 = temp2_1 == 0 ? i_34 : i_33
    
    if (x25_1 != 0)
        int64_t x9_8
        void* i_5
        
        if (x25_1 != 1)
            void* i_28 = x25_1 & 0xfffffffffffffffe
            int64_t x9_9 = 0
            int64_t x10_9 = 0
            i_5 = i_22 + i_28
            void* x12_5 = i_22 + 1
            void* i_19 = i_28
            void* i_4
            
            do
                uint32_t x14_3 = zx.d(*(x12_5 - 1))
                uint32_t x15_2 = zx.d(*x12_5)
                x12_5 += 2
                
                if (x14_3 == 0x2a)
                    x9_9 += 1
                
                if (x15_2 == 0x2a)
                    x10_9 += 1
                
                i_4 = i_19
                i_19 -= 2
            while (i_4 != 2)
            x9_8 = x10_9 + x9_9
            
            if (x25_1 != i_28)
                goto label_e8ffb0
        else
            x9_8 = 0
            i_5 = i_22
        label_e8ffb0:
            
            do
                uint32_t x11_7 = zx.d(*i_5)
                i_5 += 1
                
                if (x11_7 == 0x2a)
                    x9_8 += 1
            while (i_22 + x25_1 != i_5)
        
        if (x9_8 != 0)
            goto label_e8fe50
    
    void* x8_5
    void* i_40
    
    if ((x23_1.d & 1) != 0)
        i_40 = i_33
        x8_5 = var_88
        
        if (zx.d(*(var_88 + i_33 - 1)) == 0x2e)
            x22_1 = 0
            goto label_e8fe60
        
    label_e90018:
        
        if (x8_5 s>= 2)
            void* i_46 = i_40
            int64_t __saved_x1_1 = i_46 + x8_5
            
            while (true)
                int16_t* x0_6 = memchr(i_46, 0x2e, x8_5 - 1)
                
                if (x0_6 == 0)
                    goto label_e90074
                
                if (zx.d(*x0_6) == 0x2e2e)
                    if (x0_6 == __saved_x1_1)
                        break
                    
                    if (x0_6 - i_40 != -1)
                        goto label_e8fe50
                    
                    break
                
                i_46 = x0_6 + 1
                x8_5 = __saved_x1_1 - i_46
                
                if (x8_5 s< 2)
                    goto label_e90074
        
    label_e90074:
        void* i_37 = i_24
        void* x7_1 = x25_1 - i_44
        void* x8_13
        int32_t x8_15
        void* x9_10
        
        if (x25_1 != i_44)
        label_e900bc:
            x22_1 = 0
            
            if (i_47 == 1 && i_44 u<= x25_1 + 1)
                x8_13 = x7_1 + 1
                
                if ((x28_1.d & 1) != 0)
                    goto label_e9022c
                
                if (i_25.d == 0)
                label_e90420:
                    x9_10 = nullptr
                label_e90424:
                    x8_15 = 1
                label_e90430:
                    
                    if (x9_10 u<= 1)
                        x22_1 = 0
                    else
                        x22_1 = x8_15 & 1
                else
                    x9_10 = nullptr
                    int64_t x10_12 = 0
                    void* x14_4 = nullptr
                    void* i_29 = x8_13 & 0xfffffffffffffffe
                    
                    while (true)
                        uint32_t x13_3 = zx.d(var_78[x10_12 + 1])
                        
                        if (x13_3 == 0x2e)
                            x9_10 += 1
                        
                        if (x13_3 != 0x2a)
                            if (x13_3 != zx.d(*(i_22 + x14_4)))
                                goto label_e9042c
                            
                            x10_12 += 1
                            x14_4 += 1
                            
                            if (x10_12 == i_25)
                                goto label_e90424
                        else
                            if (x9_10 != 0)
                                goto label_e9042c
                            
                            void* x13_4 = x14_4 + x8_13
                            void* i_43
                            
                            if ((x23_1.d & 1) != 0)
                                i_43 = i_33
                                
                                if (x13_4 u> var_88)
                                    break
                            else
                                i_43 = i_34
                                
                                if (x13_4 u> x2_1)
                                    break
                            
                            if (x8_13 != 0)
                                void* x0_7 = i_43 + x14_4
                                int64_t x16_2 = 0
                                void* x9_11
                                
                                if (x7_1 == 0)
                                    x9_11 = x0_7
                                label_e901d4:
                                    void* i_20 = i_43 + x8_13 + x14_4 - x9_11
                                    void* i_6
                                    
                                    do
                                        uint32_t x15_5 = zx.d(*x9_11)
                                        x9_11 += 1
                                        
                                        if (x15_5 == 0x2e)
                                            x16_2 += 1
                                        
                                        i_6 = i_20
                                        i_20 -= 1
                                    while (i_6 != 1)
                                else
                                    int64_t x17_3 = 0
                                    x9_11 = x0_7 + i_29
                                    void* x0_8 = x0_7 + 1
                                    void* i_13 = i_29
                                    void* i_7
                                    
                                    do
                                        uint32_t x2_3 = zx.d(*(x0_8 - 1))
                                        uint32_t x3_1 = zx.d(*x0_8)
                                        x0_8 += 2
                                        
                                        if (x2_3 == 0x2e)
                                            x16_2 += 1
                                        
                                        if (x3_1 == 0x2e)
                                            x17_3 += 1
                                        
                                        i_7 = i_13
                                        i_13 -= 2
                                    while (i_7 != 2)
                                    x16_2 += x17_3
                                    
                                    if (x8_13 != i_29)
                                        goto label_e901d4
                                
                                if (x16_2 != 0)
                                    break
                            
                            x9_10 = nullptr
                            x10_12 += 1
                            x14_4 = x13_4
                            
                            if (x10_12 == i_25)
                                goto label_e90424
                    
                label_e90440:
                    x22_1 = 0
        else if ((x28_1.d & 1) != 0)
            if (i_44 == 0)
                x22_1 = 1
            else if (memcmp(i_23, i_22, i_44) == 0)
                x22_1 = 1
            else
                x22_1 = 0
                
                if (i_47 == 1)
                    i_37 = i_24
                    
                    if (i_45 u<= x25_1 + 1)
                        x8_13 = x7_1 + 1
                    label_e9022c:
                        
                        if ((x23_1.d & 1) == 0)
                            if (i_45 == 0)
                                goto label_e90420
                            
                            x9_10 = nullptr
                            int64_t x10_13 = 0
                            void* x16_3 = nullptr
                            void* i_30 = x8_13 & 0xfffffffffffffffe
                            
                            while (true)
                                uint32_t x15_7 = zx.d(*(i_37 + x10_13))
                                
                                if (x15_7 == 0x2e)
                                    x9_10 += 1
                                
                                void* x15_6
                                
                                if (x15_7 != 0x2a)
                                    if (x15_7 != zx.d(*(i_22 + x16_3)))
                                    label_e9042c:
                                        x8_15 = 0
                                        break
                                    
                                    x15_6 = x16_3 + 1
                                else
                                    if (x9_10 != 0)
                                        goto label_e9042c
                                    
                                    x15_6 = x16_3 + x8_13
                                    
                                    if (x15_6 u> x2_1)
                                        goto label_e90440
                                    
                                    if (x8_13 == 0)
                                        x9_10 = x8_13
                                    else
                                        void* x9_14 = &var_90 + x16_3 + 1
                                        int64_t x17_4 = 0
                                        
                                        if (x8_13 != 1)
                                            int64_t x0_11 = 0
                                            x9_14 += i_30
                                            void* x1_3 = (&var_90 | 2) + x16_3
                                            void* i_15 = i_30
                                            void* i_8
                                            
                                            do
                                                uint32_t x3_2 = zx.d(*(x1_3 - 1))
                                                uint32_t x4_2 = zx.d(*x1_3)
                                                x1_3 += 2
                                                
                                                if (x3_2 == 0x2e)
                                                    x17_4 += 1
                                                
                                                if (x4_2 == 0x2e)
                                                    x0_11 += 1
                                                
                                                i_8 = i_15
                                                i_15 -= 2
                                            while (i_8 != 2)
                                            x17_4 += x0_11
                                        
                                        if (x8_13 == 1 || x8_13 != i_30)
                                            void* i_9 = x9_14 - 1
                                            
                                            do
                                                i_9 += 1
                                                
                                                if (zx.d(*i_9) == 0x2e)
                                                    x17_4 += 1
                                            while (&var_90 + x8_13 + x16_3 != i_9)
                                        
                                        if (x17_4 != 0)
                                            goto label_e90440
                                        
                                        i_37 = i_24
                                        x9_10 = nullptr
                                
                                x10_13 += 1
                                x16_3 = x15_6
                                
                                if (x10_13 == i_45)
                                    goto label_e90424
                            
                            goto label_e90430
                        
                        if (i_45 == 0)
                            goto label_e90420
                        
                        x9_10 = nullptr
                        int64_t x10_14 = 0
                        void* x15_8 = nullptr
                        void* i_31 = x8_13 & 0xfffffffffffffffe
                        
                        while (true)
                            uint32_t x14_7 = zx.d(*(i_37 + x10_14))
                            
                            if (x14_7 == 0x2e)
                                x9_10 += 1
                            
                            if (x14_7 != 0x2a)
                                if (x14_7 != zx.d(*(i_22 + x15_8)))
                                    goto label_e9042c
                                
                                x10_14 += 1
                                x15_8 += 1
                                
                                if (x10_14 == i_45)
                                    goto label_e90424
                            else
                                if (x9_10 != 0)
                                    goto label_e9042c
                                
                                void* x14_8 = x15_8 + x8_13
                                
                                if (x14_8 u> var_88)
                                    break
                                
                                if (x8_13 != 0)
                                    void* i_11 = i_33 + x15_8
                                    int64_t x16_5 = 0
                                    
                                    if (x8_13 != 1)
                                        int64_t x17_6 = 0
                                        i_11 += i_31
                                        void* x0_13 = i_33 + 1 + x15_8
                                        void* i_14 = i_31
                                        void* i_10
                                        
                                        do
                                            uint32_t x2_5 = zx.d(*(x0_13 - 1))
                                            uint32_t x3_3 = zx.d(*x0_13)
                                            x0_13 += 2
                                            
                                            if (x2_5 == 0x2e)
                                                x16_5 += 1
                                            
                                            if (x3_3 == 0x2e)
                                                x17_6 += 1
                                            
                                            i_10 = i_14
                                            i_14 -= 2
                                        while (i_10 != 2)
                                        i_37 = i_24
                                        x16_5 += x17_6
                                    
                                    if (x8_13 == 1 || x8_13 != i_31)
                                        do
                                            uint32_t x17_7 = zx.d(*i_11)
                                            i_11 += 1
                                            
                                            if (x17_7 == 0x2e)
                                                x16_5 += 1
                                        while (i_33 + x8_13 + x15_8 != i_11)
                                    
                                    if (x16_5 != 0)
                                        break
                                
                                x9_10 = nullptr
                                x10_14 += 1
                                x15_8 = x14_8
                                
                                if (x10_14 == i_45)
                                    goto label_e90424
                        
                        goto label_e90440
        else if (i_44 == 0)
            x22_1 = 1
        else
            uint64_t i_17 = i_25
            void* i_26 = i_22
            x22_1 = 1
            uint64_t i_12
            
            do
                if (zx.d(*i_35) != zx.d(*i_26))
                    goto label_e900bc
                
                i_12 = i_17
                i_17 -= 1
                i_35 += 1
                i_26 += 1
            while (i_12 != 1)
        goto label_e8fe54
    
    i_40 = i_34
    x8_5 = x2_1
    
    if (zx.d(var_90[x2_1]) != 0x2e)
        goto label_e90018
    
    x22_1 = 0
    
    if ((zx.d(var_78[0]) & 1) != 0)
        operator delete(i_24)
return zx.q(x22_1)
