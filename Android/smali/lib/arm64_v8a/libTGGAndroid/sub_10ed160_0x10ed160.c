// 函数: sub_10ed160
// 地址: 0x10ed160
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x24 + 0x28)
void** x19 = arg1
char* x10 = *arg1
void* x8_1 = arg1[1]

if (x10 != x8_1 && zx.d(*x10) == 0x4c)
    x10 = &x10[1]
    *x19 = x10

void* x9_2 = x8_1 - x10
void* result
void* result_1

if (x8_1 == x10)
label_10ed46c:
    void* result_2 = sub_10ef4c8(x19, arg2)
    result = result_2
    result_1 = result_2
    
    if (result_2 != 0)
        goto label_10ed47c
else
    uint32_t x11_1 = zx.d(*x10)
    
    if (x11_1 == 0x5a)
        if (x10 == x8_1)
        labelid_6:
            result = nullptr
        else
            *x19 = &x10[1]
            void* x0_1 = sub_10eaca8(x19)
            
            if (x0_1 == 0)
            labelid_6:
                result = nullptr
            else
                char* x10_2 = *x19
                void* x8_4 = x19[1]
                
                if (x10_2 == x8_4 || zx.d(*x10_2) != 0x45)
                labelid_6:
                    result = nullptr
                else
                    *x19 = &x10_2[1]
                    void* x20_3
                    void** x23_4
                    
                    if (&x10_2[1] == x8_4)
                    label_10eda9c:
                        void* x0_32 = sub_10ed160(x19, arg2)
                        
                        if (x0_32 != 0)
                            void* x8_50 = *x19
                            void* x9_32 = x19[1]
                            x20_3 = x0_32
                            
                            if (x8_50 != x9_32)
                                uint32_t x10_15 = zx.d(*x8_50)
                                
                                if (x10_15 != 0x5f)
                                    if (x10_15 - 0x30 u<= 9)
                                        void* x10_20 = x8_50 + 1
                                        uint32_t x11_16
                                        
                                        do
                                            if (x9_32 == x10_20)
                                                x8_50 = x9_32
                                                break
                                            
                                            x11_16 = zx.d(*x10_20)
                                            x10_20 += 1
                                        while (x11_16 - 0x30 u< 0xa)
                                else if (x8_50 + 1 != x9_32)
                                    uint32_t x11_14 = zx.d(*(x8_50 + 1))
                                    
                                    if (x11_14 - 0x30 u<= 9)
                                        x8_50 += 2
                                    else
                                        void* x10_18 = x8_50 + 2
                                        
                                        if (x10_18 != x9_32 && x11_14 == 0x5f)
                                            do
                                                uint32_t x11_15 = zx.d(*x10_18)
                                                
                                                if (x11_15 - 0x30 u> 9)
                                                    if (x11_15 == 0x5f)
                                                        x8_50 = x10_18 + 1
                                                    
                                                    break
                                                
                                                x10_18 += 1
                                            while (x9_32 != x10_18)
                            
                            x23_4 = x19[0x266]
                            *x19 = x8_50
                            goto label_10edc3c
                        
                    labelid_6:
                        result = nullptr
                    else if (zx.d(x10_2[1]) != 0x73)
                        if (zx.d(x10_2[1]) != 0x64)
                            goto label_10eda9c
                        
                        void* x9_31 = &x10_2[2]
                        *x19 = x9_31
                        
                        if (x9_31 == x8_4)
                        labelid_6:
                            result = nullptr
                        else
                            if (zx.d(*x9_31) == 0x6e)
                                x9_31 = &x10_2[3]
                                *x19 = x9_31
                            
                            if (x8_4 == x9_31)
                            labelid_6:
                                result = nullptr
                            else
                                if (zx.d(*x9_31) - 0x30 u<= 9)
                                    void* x10_13 = x9_31 + 1
                                    
                                    do
                                        x9_31 = x10_13
                                        *x19 = x10_13
                                        
                                        if (x8_4 == x10_13)
                                            break
                                        
                                        x10_13 = x9_31 + 1
                                    while (zx.d(*x9_31) - 0x30 u< 0xa)
                                
                                if (x9_31 == x8_4 || zx.d(*x9_31) != 0x5f)
                                labelid_6:
                                    result = nullptr
                                else
                                    *x19 = x9_31 + 1
                                    void* x0_30 = sub_10ed160(x19, arg2)
                                    
                                    if (x0_30 != 0)
                                        x20_3 = x0_30
                                        goto label_10edc0c
                                    
                                labelid_6:
                                    result = nullptr
                    else
                        *x19 = &x10_2[2]
                        
                        if (&x10_2[2] != x8_4)
                            uint32_t x11_4 = zx.d(x10_2[2])
                            
                            if (x11_4 != 0x5f)
                                if (x11_4 - 0x30 u<= 9)
                                    void* x10_21 = &x10_2[3]
                                    uint32_t x11_19
                                    
                                    do
                                        if (x8_4 == x10_21)
                                            goto label_10edba4
                                        
                                        x11_19 = zx.d(*x10_21)
                                        x10_21 += 1
                                    while (x11_19 - 0x30 u< 0xa)
                                
                            label_10edba0:
                                x8_4 = &x10_2[2]
                            else if (&x10_2[3] == x8_4)
                            label_10edba0_1:
                                x8_4 = &x10_2[2]
                            else
                                uint32_t x11_6 = zx.d(x10_2[3])
                                
                                if (x11_6 - 0x30 u<= 9)
                                    x8_4 = &x10_2[4]
                                else
                                    void* x10_3 = &x10_2[4]
                                    
                                    if (x10_3 == x8_4 || x11_6 != 0x5f)
                                    label_10edba0_2:
                                        x8_4 = &x10_2[2]
                                    else
                                        while (true)
                                            uint32_t x11_7 = zx.d(*x10_3)
                                            
                                            if (x11_7 - 0x30 u> 9)
                                                if (x11_7 != 0x5f)
                                                    x8_4 = &x10_2[2]
                                                else
                                                    x8_4 = x10_3 + 1
                                                
                                                break
                                            
                                            x10_3 += 1
                                            
                                            if (x8_4 == x10_3)
                                                goto label_10edba0_2
                        
                    label_10edba4:
                        void** x22_4 = x19[0x266]
                        *x19 = x8_4
                        int64_t x8_52 = x22_4[1]
                        
                        if (x8_52 + 0x20 u>= 0xff0)
                            void** x0_34 = malloc(0x1000)
                            
                            if (x0_34 == 0)
                                goto label_10edca0
                            
                            x8_52 = 0
                            *x0_34 = x22_4
                            x0_34[1] = 0
                            x22_4 = x0_34
                            x19[0x266] = x0_34
                        
                        x22_4[1] = x8_52 + 0x20
                        x20_3 = x22_4 + x8_52 + 0x10
                        *x20_3 = &_vtable_for_(anonymous namespace)::itanium_demangle::NameType{for `(anonymous namespace)::itanium_demangle::Node'}
                        *(x20_3 + 8) = 0x1010107
                        *(x20_3 + 0x10) = "string literal"
                        *(x20_3 + 0x18) = &data_76eb9f[0xe]
                    label_10edc0c:
                        x23_4 = x19[0x266]
                    label_10edc3c:
                        int64_t x8_53 = x23_4[1]
                        
                        if (x8_53 + 0x20 u>= 0xff0)
                            void** x0_35 = malloc(0x1000)
                            
                            if (x0_35 == 0)
                                goto label_10edca0
                            
                            x8_53 = 0
                            *x0_35 = x23_4
                            x0_35[1] = 0
                            x23_4 = x0_35
                            x19[0x266] = x0_35
                        
                        x23_4[1] = x8_53 + 0x20
                        result = x23_4 + x8_53 + 0x10
                        *result = &_vtable_for_(anonymous namespace)::itanium_demangle::LocalName{for `(anonymous namespace)::itanium_demangle::Node'}
                        *(result + 8) = 0x1010118
                        *(result + 0x10) = x0_1
                        *(result + 0x18) = x20_3
    else if (x11_1 != 0x53)
        if (x11_1 != 0x4e)
            goto label_10ed228
        
        if (x10 == x8_1)
        labelid_6:
            result = nullptr
        else
            void* x9_3 = &x10[1]
            *x19 = x9_3
            int32_t x10_1
            
            if (x9_3 == x8_1)
                x10_1 = 0
                x9_3 = x8_1
            else
                if (zx.d(*x9_3) != 0x72)
                    x10_1 = 0
                else
                    x9_3 = &x10[2]
                    x10_1 = 4
                    *x19 = x9_3
                
                if (x9_3 != x8_1)
                    if (zx.d(*x9_3) == 0x56)
                        x9_3 += 1
                        x10_1 |= 2
                        *x19 = x9_3
                    
                    if (x9_3 != x8_1 && zx.d(*x9_3) == 0x4b)
                        x9_3 += 1
                        x10_1 |= 1
                        *x19 = x9_3
            
            if (arg2 != 0)
                *(arg2 + 4) = x10_1
            
            if (x9_3 == x8_1)
            label_10ed5cc:
                
                if (arg2 != 0)
                    arg2[8] = 0
            else if (zx.d(*x9_3) != 0x4f)
                if (zx.d(*x9_3) != 0x52)
                    goto label_10ed5cc
                
                x9_3 += 1
                *x19 = x9_3
                
                if (arg2 != 0)
                    arg2[8] = 1
            else
                x9_3 += 1
                *x19 = x9_3
                
                if (arg2 != 0)
                    arg2[8] = 2
            
            result_1 = nullptr
            
            if (x8_1 - x9_3 u>= 2 && zx.d(*x9_3) == 0x53 && zx.d(*(x9_3 + 1)) == 0x74)
                void** x21_5 = x19[0x266]
                *x19 = x9_3 + 2
                int64_t x8_25 = x21_5[1]
                
                if (x8_25 + 0x20 u> 0xfef)
                    void** x0_15 = malloc(0x1000)
                    
                    if (x0_15 == 0)
                        goto label_10edca0
                    
                    x8_25 = 0
                    *x0_15 = x21_5
                    x0_15[1] = 0
                    x21_5 = x0_15
                    x19[0x266] = x0_15
                
                x21_5[1] = x8_25 + 0x20
                *(x21_5 + x8_25 + 0x10) = &_vtable_for_(anonymous namespace)::itanium_demangle::NameType{for `(anonymous namespace)::itanium_demangle::Node'}
                *(x21_5 + x8_25 + 0x18) = 0x1010107
                *(x21_5 + x8_25 + 0x20) = &data_742914
                *(x21_5 + x8_25 + 0x28) = &data_742917
                result_1 = x21_5 + x8_25 + 0x10
            
            while (true)
                void* x8_30 = *x19
                int64_t x9_17 = x19[1]
                
                if (x8_30 != x9_17)
                    if (zx.d(*x8_30) == 0x45)
                        *x19 = x8_30 + 1
                        result = result_1
                        
                        if (result == 0)
                            break
                        
                        int64_t x8_46 = x19[0x26]
                        
                        if (x19[0x25] == x8_46)
                            goto label_10edb10_2
                        
                        x19[0x26] = x8_46 - 8
                        break
                    
                    if (zx.d(*x8_30) == 0x4c)
                        x8_30 += 1
                        *x19 = x8_30
                
                if (x8_30 != x9_17 && zx.d(*x8_30) == 0x4d)
                    *x19 = x8_30 + 1
                    
                    if (result_1 == 0)
                        goto label_10edb10_2
                    
                    continue
                
                void* x9_18 = x9_17 - x8_30
                int64_t* x1_6
                
                if (x9_17 == x8_30)
                label_10ed894:
                    SystemHintOp_BTI()
                    void* result_6 = sub_10ef4c8(x19, arg2)
                    result = result_6
                    
                    if (result_6 == 0)
                        break
                    
                label_10ed8ac:
                    void* result_12 = result_1
                    
                    if (result_12 == 0)
                        result_1 = result
                        
                        if (arg2 != 0)
                            arg2[1] = 0
                    else
                        void** x28_2 = x19[0x266]
                        int64_t x8_38 = x28_2[1]
                        
                        if (x8_38 + 0x20 u>= 0xff0)
                            void** x0_24 = malloc(0x1000)
                            
                            if (x0_24 == 0)
                                goto label_10edca0
                            
                            x8_38 = 0
                            *x0_24 = x28_2
                            x0_24[1] = 0
                            x28_2 = x0_24
                            x19[0x266] = x0_24
                        
                        x28_2[1] = x8_38 + 0x20
                        *(x28_2 + x8_38 + 0x10) = &_vtable_for_(anonymous namespace)::itanium_demangle::NestedName{for `(anonymous namespace)::itanium_demangle::Node'}
                        *(x28_2 + x8_38 + 0x18) = 0x1010117
                        *(x28_2 + x8_38 + 0x20) = result_12
                        *(x28_2 + x8_38 + 0x28) = result
                        result_1 = x28_2 + x8_38 + 0x10
                        
                        if (arg2 != 0)
                            arg2[1] = 0
                    
                    x1_6 = &result_1
                else
                    uint64_t x10_10 = zx.q(zx.d(*x8_30) - 0x43)
                    
                    if (x10_10.d u> 0x11)
                        goto label_10ed894
                    
                    switch (x10_10)
                        case 0
                        label_10ed918:
                            SystemHintOp_BTI()
                            
                            if (result_1 == 0)
                                goto label_10edb10_2
                            
                            void* result_7 = sub_10ef0e8(x19, &result_1, arg2)
                            result = result_7
                            
                            if (result_7 == 0)
                                break
                            
                            void* result_13 = result_1
                            
                            if (result_13 != 0)
                                void** x28_3 = x19[0x266]
                                int64_t x8_42 = x28_3[1]
                                
                                if (x8_42 + 0x20 u>= 0xff0)
                                    void** x0_26 = malloc(0x1000)
                                    
                                    if (x0_26 == 0)
                                        goto label_10edca0
                                    
                                    x8_42 = 0
                                    *x0_26 = x28_3
                                    x0_26[1] = 0
                                    x28_3 = x0_26
                                    x19[0x266] = x0_26
                                
                                x28_3[1] = x8_42 + 0x20
                                *(x28_3 + x8_42 + 0x10) = &_vtable_for_(anonymous namespace)::itanium_demangle::NestedName{for `(anonymous namespace)::itanium_demangle::Node'}
                                *(x28_3 + x8_42 + 0x20) = result_13
                                *(x28_3 + x8_42 + 0x28) = result
                                result = x28_3 + x8_42 + 0x10
                                *(x28_3 + x8_42 + 0x18) = 0x1010117
                            
                            if (arg2 != 0)
                                arg2[1] = 0
                            
                            void* result_10 = sub_10ef350(x19, result)
                            result_1 = result_10
                            
                            if (result_10 == 0)
                                goto label_10edb10_2
                            
                            x1_6 = &result_1
                        case 1
                            SystemHintOp_BTI()
                            
                            if (x9_18 u< 2)
                                goto label_10ed918
                            
                            if ((zx.d(*(x8_30 + 1)) | 0x20) != 0x74)
                                if (zx.d(*(x8_30 + 1)) != 0x43)
                                    goto label_10ed918
                                
                                goto label_10ed894
                            
                            void* result_3 = sub_10eefc0(x19)
                            result = result_3
                            
                            if (result_3 == 0)
                                break
                            
                            goto label_10ed8ac
                        case 2, 3, 4, 5, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf
                            goto label_10ed894
                        case 6
                            SystemHintOp_BTI()
                            void* x0_18 = sub_10ee7a8(x19, arg2 != 0 ? 1 : 0)
                            result = nullptr
                            
                            if (x0_18 == 0)
                                break
                            
                            void* result_14 = result_1
                            
                            if (result_14 == 0)
                                break
                            
                            void** x22_3 = x19[0x266]
                            int64_t x8_31 = x22_3[1]
                            
                            if (x8_31 + 0x20 u>= 0xff0)
                                void** x0_19 = malloc(0x1000)
                                
                                if (x0_19 == 0)
                                    goto label_10edca0
                                
                                x8_31 = 0
                                *x0_19 = x22_3
                                x0_19[1] = 0
                                x22_3 = x0_19
                                x19[0x266] = x0_19
                            
                            x22_3[1] = x8_31 + 0x20
                            *(x22_3 + x8_31 + 0x10) = &_vtable_for_(anonymous namespace)::itanium_demangle::NameWithTemplateArgs{for `(anonymous namespace)::itanium_demangle::Node'}
                            *(x22_3 + x8_31 + 0x18) = 0x1010125
                            *(x22_3 + x8_31 + 0x20) = result_14
                            *(x22_3 + x8_31 + 0x28) = x0_18
                            result_1 = x22_3 + x8_31 + 0x10
                            
                            if (arg2 != 0)
                                arg2[1] = 1
                            
                            x1_6 = &result_1
                        case 0x10
                            SystemHintOp_BTI()
                            
                            if (x9_18 u>= 2 && zx.d(*(x8_30 + 1)) == 0x74)
                                goto label_10ed894
                            
                            void* result_4 = sub_10ee40c(x19)
                            result = result_4
                            void* result_9 = result_4
                            
                            if (result_4 == 0)
                                break
                            
                            void* result_11 = result_1
                            void* result_8
                            
                            if (result_11 == 0)
                                result_8 = result
                                result_1 = result
                                
                                if (arg2 != 0)
                                    arg2[1] = 0
                            else
                                void** x28_1 = x19[0x266]
                                int64_t x8_35 = x28_1[1]
                                
                                if (x8_35 + 0x20 u>= 0xff0)
                                    void** x0_21 = malloc(0x1000)
                                    
                                    if (x0_21 == 0)
                                        goto label_10edca0
                                    
                                    x8_35 = 0
                                    *x0_21 = x28_1
                                    x0_21[1] = 0
                                    x28_1 = x0_21
                                    x19[0x266] = x0_21
                                
                                x28_1[1] = x8_35 + 0x20
                                result_8 = x28_1 + x8_35 + 0x10
                                *result_8 = &_vtable_for_(anonymous namespace)::itanium_demangle::NestedName{for `(anonymous namespace)::itanium_demangle::Node'}
                                *(result_8 + 8) = 0x1010117
                                *(result_8 + 0x10) = result_11
                                *(result_8 + 0x18) = result
                                result_1 = result_8
                                
                                if (arg2 != 0)
                                    arg2[1] = 0
                            
                            if (result_8 == result)
                                continue
                            else
                                x1_6 = &result_9
                        case 0x11
                            SystemHintOp_BTI()
                            void* result_5 = sub_10eec18(x19)
                            result = result_5
                            
                            if (result_5 == 0)
                                break
                            
                            goto label_10ed8ac
                
                sub_10ede98(&x19[0x25], x1_6)
    else if (x9_2 u< 2 || zx.d(x10[1]) != 0x74)
        void* x0_3 = sub_10ee40c(x19)
        
        if (x0_3 == 0)
        labelid_6:
            result = nullptr
        else
            void* x8_5 = *x19
            
            if (x19[1] == x8_5 || zx.d(*x8_5) != 0x49)
            label_10edb10:
                result = nullptr
            else
                void* x0_5 = sub_10ee7a8(x19, arg2 != 0 ? 1 : 0)
                
                if (x0_5 == 0)
                label_10edb10_1:
                    result = nullptr
                else
                    if (arg2 != 0)
                        arg2[1] = 1
                    
                    void** x20_1 = x19[0x266]
                    int64_t x8_7 = x20_1[1]
                    
                    if (x8_7 + 0x20 u>= 0xff0)
                        void** x0_6 = malloc(0x1000)
                        
                        if (x0_6 == 0)
                            goto label_10edca0
                        
                        x8_7 = 0
                        *x0_6 = x20_1
                        x0_6[1] = 0
                        x20_1 = x0_6
                        x19[0x266] = x0_6
                    
                    x20_1[1] = x8_7 + 0x20
                    result = x20_1 + x8_7 + 0x10
                    *result = &_vtable_for_(anonymous namespace)::itanium_demangle::NameWithTemplateArgs{for `(anonymous namespace)::itanium_demangle::Node'}
                    *(result + 8) = 0x1010125
                    *(result + 0x10) = x0_3
                    *(result + 0x18) = x0_5
    else
    label_10ed228:
        int64_t x8_11
        
        if (x9_2 u>= 3)
            if (zx.d(*x10) != 0x53)
                goto label_10ed46c
            
            if (zx.d(x10[1]) != 0x74 || zx.d(x10[2]) != 0x4c)
                if (zx.d(*x10) != 0x53 || zx.d(x10[1]) != 0x74)
                    goto label_10ed46c
                
                x8_11 = 2
            else
                x8_11 = 3
        else
            if (x9_2 != 2 || zx.d(*x10) != 0x53 || zx.d(x10[1]) != 0x74)
                goto label_10ed46c
            
            x8_11 = 2
        
        *x19 = &x10[x8_11]
        void* x0_8 = sub_10ef4c8(x19, arg2)
        
        if (x0_8 == 0)
            result = nullptr
            result_1 = nullptr
        else
            void** x23_2 = x19[0x266]
            int64_t x8_15 = x23_2[1]
            
            if (x8_15 + 0x20 u< 0xff0)
                goto label_10ed44c
            
            void** x0_9 = malloc(0x1000)
            
            if (x0_9 == 0)
                goto label_10edca0
            
            x8_15 = 0
            *x0_9 = x23_2
            x0_9[1] = 0
            x23_2 = x0_9
            x19[0x266] = x0_9
        label_10ed44c:
            x23_2[1] = x8_15 + 0x20
            result = x23_2 + x8_15 + 0x10
            *result = &_vtable_for_(anonymous namespace)::itanium_demangle::StdQualifiedName{for `(anonymous namespace)::itanium_demangle::Node'}
            *(result + 8) = 0x1010127
            *(result + 0x10) = x0_8
            result_1 = result
        label_10ed47c:
            void* x8_16 = *x19
            
            if (x19[1] != x8_16 && zx.d(*x8_16) == 0x49)
                sub_10ede98(&x19[0x25], &result_1)
                void* x0_13 = sub_10ee7a8(x19, arg2 != 0 ? 1 : 0)
                
                if (x0_13 == 0)
                label_10edb10_2:
                    result = nullptr
                else
                    if (arg2 != 0)
                        arg2[1] = 1
                    
                    void** x20_2 = x19[0x266]
                    int64_t x8_18 = x20_2[1]
                    
                    if (x8_18 + 0x20 u< 0xff0)
                        goto label_10ed508
                    
                    void** x0_14 = malloc(0x1000)
                    
                    if (x0_14 == 0)
                    label_10edca0:
                        std::terminate()
                        noreturn
                    
                    x8_18 = 0
                    *x0_14 = x20_2
                    x0_14[1] = 0
                    x20_2 = x0_14
                    x19[0x266] = x0_14
                label_10ed508:
                    x20_2[1] = x8_18 + 0x20
                    *(x20_2 + x8_18 + 0x10) = &_vtable_for_(anonymous namespace)::itanium_demangle::NameWithTemplateArgs{for `(anonymous namespace)::itanium_demangle::Node'}
                    *(x20_2 + x8_18 + 0x20) = result
                    *(x20_2 + x8_18 + 0x28) = x0_13
                    result = x20_2 + x8_18 + 0x10
                    *(x20_2 + x8_18 + 0x18) = 0x1010125

if (*(x24 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
