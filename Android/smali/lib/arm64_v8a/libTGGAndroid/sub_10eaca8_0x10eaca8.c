// 函数: sub_10eaca8
// 地址: 0x10eaca8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x24 + 0x28)
void** x19 = arg1
char* x8_1 = *arg1
int64_t x9 = arg1[1]
uint32_t x10_1

if (x9 != x8_1)
    x10_1 = zx.d(*x8_1)

void* result

if (x9 != x8_1 && (x10_1 == 0x54 || x10_1 == 0x47))
    void* x11_1 = x9 - x8_1
    
    if (x9 == x8_1)
    labelid_b:
        result = nullptr
    else
        char const* const x8_14
        char const* const x11_10
        void* x21_4
        
        if (x10_1 == 0x47)
            if (x11_1 u< 2)
            labelid_b:
                result = nullptr
            else
                uint32_t x9_6 = zx.d(x8_1[1])
                
                if (x9_6 == 0x52)
                    *x19 = &x8_1[2]
                    void* x0_26 = sub_10ed160(x19, nullptr)
                    
                    if (x0_26 == 0)
                    labelid_b:
                        result = nullptr
                    else
                        void* x9_20 = *x19
                        int64_t x8_37 = x19[1]
                        x21_4 = x0_26
                        
                        if (x8_37 == x9_20)
                            goto label_10eb788
                        
                        uint32_t x10_23 = zx.d(*x9_20)
                        int32_t x10_24
                        
                        if (x10_23 u< 0x30 || (x10_23 u>= 0x3a && zx.d(x10_23.b - 0x41) u> 0x19))
                            x10_24 = 1
                            
                            if (x9_20 != x8_37 && zx.d(*x9_20) == 0x5f)
                            label_10eb360:
                                *x19 = x9_20 + 1
                            label_10eb788:
                                void** x22_15 = x19[0x266]
                                int64_t x8_54 = x22_15[1]
                                
                                if (x8_54 + 0x30 u< 0xff0)
                                    goto label_10eb7d0
                                
                                void** x0_53 = malloc(0x1000)
                                
                                if (x0_53 == 0)
                                    goto label_10eb954
                                
                                x8_54 = 0
                                *x0_53 = x22_15
                                x0_53[1] = 0
                                x22_15 = x0_53
                                x19[0x266] = x0_53
                            label_10eb7d0:
                                x11_10 = "reference temporary for "
                                x22_15[1] = x8_54 + 0x30
                                result = x22_15 + x8_54 + 0x10
                                *result = &_vtable_for_(anonymous namespace)::itanium_demangle::SpecialName{for `(anonymous namespace)::itanium_demangle::Node'}
                                x8_14 = &data_73a3e1[0x18]
                                goto label_10eb7e4
                        else
                            void* x9_36 = x9_20 + 1
                            
                            while ((x10_23 & 0xff) u< 0x3a || zx.d(x10_23.b - 0x41) u<= 0x19)
                                *x19 = x9_36
                                
                                if (x8_37 == x9_36)
                                    goto label_10eb88c_2
                                
                                x10_23 = zx.d(*x9_36)
                                x9_36 += 1
                                
                                if (x10_23 u<= 0x2f)
                                    break
                            
                            x10_24 = 0
                            x9_20 = x9_36 - 1
                            
                            if (x9_20 != x8_37 && zx.d(*x9_20) == 0x5f)
                                goto label_10eb360
                        
                        if (x10_24 != 0)
                            goto label_10eb788
                        
                    labelid_b:
                        result = nullptr
                else if (x9_6 != 0x56)
                labelid_b:
                    result = nullptr
                else
                    *x19 = &x8_1[2]
                    void* x0_9 = sub_10ed160(x19, nullptr)
                    
                    if (x0_9 == 0)
                    labelid_b:
                        result = nullptr
                    else
                        void** x22_2 = x19[0x266]
                        x21_4 = x0_9
                        int64_t x8_13 = x22_2[1]
                        
                        if (x8_13 + 0x30 u< 0xff0)
                            goto label_10eb06c
                        
                        void** x0_10 = malloc(0x1000)
                        
                        if (x0_10 == 0)
                        label_10eb954:
                            std::terminate()
                            noreturn
                        
                        x8_13 = 0
                        *x0_10 = x22_2
                        x0_10[1] = 0
                        x22_2 = x0_10
                        x19[0x266] = x0_10
                    label_10eb06c:
                        x11_10 = "guard variable for "
                        x22_2[1] = x8_13 + 0x30
                        result = x22_2 + x8_13 + 0x10
                        *result = &_vtable_for_(anonymous namespace)::itanium_demangle::SpecialName{for `(anonymous namespace)::itanium_demangle::Node'}
                        x8_14 = &data_765feb[0x13]
                    label_10eb7e4:
                        *(result + 8) = 0x1010114
                        *(result + 0x10) = x11_10
                        *(result + 0x18) = x8_14
                        *(result + 0x20) = x21_4
        else if (x10_1 != 0x54)
        labelid_b:
            result = nullptr
        else if (x11_1 u< 2)
        label_10eb084:
            SystemHintOp_BTI()
            *x19 = &x8_1[1]
            int32_t x20_2
            
            if (x9 == &x8_1[1])
                x20_2 = 0
            else
                x20_2 = zx.d(x8_1[1]) == 0x76 ? 1 : 0
            
            if ((sub_10edf5c(x19) & 1) != 0)
            labelid_b:
                result = nullptr
            else
                void* x0_14 = sub_10eaca8(x19)
                
                if (x0_14 != 0)
                    void** x22_3 = x19[0x266]
                    x21_4 = x0_14
                    int64_t x8_18 = x22_3[1]
                    
                    if (x20_2 == 0)
                        if (x8_18 + 0x30 u>= 0xff0)
                            void*** x0_27 = malloc(0x1000)
                            
                            if (x0_27 == 0)
                                goto label_10eb954
                            
                            x8_18 = 0
                            *x0_27 = x22_3
                            x0_27[1] = 0
                            x22_3 = x0_27
                            x19[0x266] = x0_27
                        
                        x11_10 = "non-virtual thunk to "
                        x22_3[1] = x8_18 + 0x30
                        result = x22_3 + x8_18 + 0x10
                        *result = &_vtable_for_(anonymous namespace)::itanium_demangle::SpecialName{for `(anonymous namespace)::itanium_demangle::Node'}
                        x8_14 = &data_779aa3[0x15]
                        goto label_10eb7e4
                    
                    if (x8_18 + 0x30 u>= 0xff0)
                        void** x0_15 = malloc(0x1000)
                        
                        if (x0_15 == 0)
                            goto label_10eb954
                        
                        x8_18 = 0
                        *x0_15 = x22_3
                        x0_15[1] = 0
                        x22_3 = x0_15
                        x19[0x266] = x0_15
                    
                    x11_10 = "virtual thunk to "
                    x22_3[1] = x8_18 + 0x30
                    result = x22_3 + x8_18 + 0x10
                    *result = &_vtable_for_(anonymous namespace)::itanium_demangle::SpecialName{for `(anonymous namespace)::itanium_demangle::Node'}
                    x8_14 = &data_76a56c[0x11]
                    goto label_10eb7e4
                
            labelid_b:
                result = nullptr
        else
            uint64_t x10_3 = zx.q(zx.d(x8_1[1]) - 0x43)
            
            if (x10_3.d u> 0x20)
                goto label_10eb084
            
            switch (x10_3)
                case 0
                    SystemHintOp_BTI()
                    *x19 = &x8_1[2]
                    void* x0_1 = sub_10eb95c(x19)
                    
                    if (x0_1 == 0)
                    labelid_b:
                        result = nullptr
                    else
                        void* x9_1 = *x19
                        void* x8_3 = x19[1]
                        
                        if (x9_1 == x8_3)
                        labelid_b:
                            result = nullptr
                        else
                            void* x10_5 = x9_1
                            
                            if (zx.d(*x9_1) == 0x6e)
                                x10_5 = x9_1 + 1
                                *x19 = x10_5
                            
                            if (x8_3 == x10_5 || zx.d(*x10_5) - 0x30 u> 9)
                            labelid_b:
                                result = nullptr
                            else
                                void* x11_4 = x10_5 + 1
                                void* x10_6
                                void* x11_6
                                
                                while (true)
                                    x10_6 = x11_4
                                    *x19 = x11_4
                                    
                                    if (x8_3 == x11_4)
                                        x11_6 = x8_3
                                        break
                                    
                                    x11_4 = x10_6 + 1
                                    
                                    if (zx.d(*x10_6) - 0x30 u>= 0xa)
                                        x11_6 = x11_4 - 1
                                        break
                                
                                result = nullptr
                                
                                if (x9_1 != x11_6 && x8_3 != x10_6)
                                    if (zx.d(*x10_6) != 0x5f)
                                    labelid_b:
                                        result = nullptr
                                    else
                                        *x19 = x10_6 + 1
                                        void* x0_55 = sub_10eb95c(x19)
                                        
                                        if (x0_55 == 0)
                                        labelid_b:
                                            result = nullptr
                                        else
                                            void** x23_4 = x19[0x266]
                                            int64_t x8_57 = x23_4[1]
                                            
                                            if (x8_57 + 0x20 u>= 0xff0)
                                                void** x0_56 = malloc(0x1000)
                                                
                                                if (x0_56 == 0)
                                                    goto label_10eb954
                                                
                                                x8_57 = 0
                                                *x0_56 = x23_4
                                                x0_56[1] = 0
                                                x23_4 = x0_56
                                                x19[0x266] = x0_56
                                            
                                            x23_4[1] = x8_57 + 0x20
                                            result = x23_4 + x8_57 + 0x10
                                            *result = &_vtable_for_(anonymous namespace)::itanium_demangle::CtorVtableSpecialName{for `(anonymous namespace)::itanium_demangle::Node'}
                                            *(result + 8) = 0x1010115
                                            *(result + 0x10) = x0_55
                                            *(result + 0x18) = x0_1
                case 1, 2, 3, 4, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x12, 0x15, 0x16, 0x17, 
                        0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f
                    goto label_10eb084
                case 5
                    SystemHintOp_BTI()
                    *x19 = &x8_1[2]
                    void* x0_29 = sub_10ed160(x19, nullptr)
                    
                    if (x0_29 != 0)
                        void** x22_8 = x19[0x266]
                        x21_4 = x0_29
                        int64_t x8_41 = x22_8[1]
                        
                        if (x8_41 + 0x30 u>= 0xff0)
                            void** x0_30 = malloc(0x1000)
                            
                            if (x0_30 == 0)
                                goto label_10eb954
                            
                            x8_41 = 0
                            *x0_30 = x22_8
                            x0_30[1] = 0
                            x22_8 = x0_30
                            x19[0x266] = x0_30
                        
                        x11_10 = "thread-local initialization routine for "
                        x22_8[1] = x8_41 + 0x30
                        result = x22_8 + x8_41 + 0x10
                        *result = &_vtable_for_(anonymous namespace)::itanium_demangle::SpecialName{for `(anonymous namespace)::itanium_demangle::Node'}
                        x8_14 = &data_79f92b[0x28]
                        goto label_10eb7e4
                    
                labelid_b:
                    result = nullptr
                case 6
                    SystemHintOp_BTI()
                    *x19 = &x8_1[2]
                    void* x0_32 = sub_10eb95c(x19)
                    
                    if (x0_32 != 0)
                        void** x22_9 = x19[0x266]
                        x21_4 = x0_32
                        int64_t x8_43 = x22_9[1]
                        
                        if (x8_43 + 0x30 u>= 0xff0)
                            void** x0_33 = malloc(0x1000)
                            
                            if (x0_33 == 0)
                                goto label_10eb954
                            
                            x8_43 = 0
                            *x0_33 = x22_9
                            x0_33[1] = 0
                            x22_9 = x0_33
                            x19[0x266] = x0_33
                        
                        x11_10 = "typeinfo for "
                        x22_9[1] = x8_43 + 0x30
                        result = x22_9 + x8_43 + 0x10
                        *result = &_vtable_for_(anonymous namespace)::itanium_demangle::SpecialName{for `(anonymous namespace)::itanium_demangle::Node'}
                        x8_14 = &data_73a3d3[0xd]
                        goto label_10eb7e4
                    
                labelid_b:
                    result = nullptr
                case 0x10
                    SystemHintOp_BTI()
                    *x19 = &x8_1[2]
                    void* x0_35 = sub_10eb95c(x19)
                    
                    if (x0_35 != 0)
                        void** x22_10 = x19[0x266]
                        x21_4 = x0_35
                        int64_t x8_45 = x22_10[1]
                        
                        if (x8_45 + 0x30 u>= 0xff0)
                            void** x0_36 = malloc(0x1000)
                            
                            if (x0_36 == 0)
                                goto label_10eb954
                            
                            x8_45 = 0
                            *x0_36 = x22_10
                            x0_36[1] = 0
                            x22_10 = x0_36
                            x19[0x266] = x0_36
                        
                        x11_10 = "typeinfo name for "
                        x22_10[1] = x8_45 + 0x30
                        result = x22_10 + x8_45 + 0x10
                        *result = &_vtable_for_(anonymous namespace)::itanium_demangle::SpecialName{for `(anonymous namespace)::itanium_demangle::Node'}
                        x8_14 = &data_73612d[0x12]
                        goto label_10eb7e4
                    
                labelid_b:
                    result = nullptr
                case 0x11
                    SystemHintOp_BTI()
                    *x19 = &x8_1[2]
                    void* x0_38 = sub_10eb95c(x19)
                    
                    if (x0_38 != 0)
                        void** x22_11 = x19[0x266]
                        x21_4 = x0_38
                        int64_t x8_47 = x22_11[1]
                        
                        if (x8_47 + 0x30 u>= 0xff0)
                            void** x0_39 = malloc(0x1000)
                            
                            if (x0_39 == 0)
                                goto label_10eb954
                            
                            x8_47 = 0
                            *x0_39 = x22_11
                            x0_39[1] = 0
                            x22_11 = x0_39
                            x19[0x266] = x0_39
                        
                        x11_10 = "VTT for "
                        x22_11[1] = x8_47 + 0x30
                        result = x22_11 + x8_47 + 0x10
                        *result = &_vtable_for_(anonymous namespace)::itanium_demangle::SpecialName{for `(anonymous namespace)::itanium_demangle::Node'}
                        x8_14 = &data_75d884[8]
                        goto label_10eb7e4
                    
                labelid_b:
                    result = nullptr
                case 0x13
                    SystemHintOp_BTI()
                    *x19 = &x8_1[2]
                    void* x0_41 = sub_10eb95c(x19)
                    
                    if (x0_41 != 0)
                        void** x22_12 = x19[0x266]
                        x21_4 = x0_41
                        int64_t x8_49 = x22_12[1]
                        
                        if (x8_49 + 0x30 u>= 0xff0)
                            void** x0_42 = malloc(0x1000)
                            
                            if (x0_42 == 0)
                                goto label_10eb954
                            
                            x8_49 = 0
                            *x0_42 = x22_12
                            x0_42[1] = 0
                            x22_12 = x0_42
                            x19[0x266] = x0_42
                        
                        x11_10 = "vtable for "
                        x22_12[1] = x8_49 + 0x30
                        result = x22_12 + x8_49 + 0x10
                        *result = &_vtable_for_(anonymous namespace)::itanium_demangle::SpecialName{for `(anonymous namespace)::itanium_demangle::Node'}
                        x8_14 = &data_75d878[0xb]
                        goto label_10eb7e4
                    
                labelid_b:
                    result = nullptr
                case 0x14
                    SystemHintOp_BTI()
                    *x19 = &x8_1[2]
                    void* x0_44 = sub_10ed160(x19, nullptr)
                    
                    if (x0_44 != 0)
                        void** x22_13 = x19[0x266]
                        x21_4 = x0_44
                        int64_t x8_51 = x22_13[1]
                        
                        if (x8_51 + 0x30 u>= 0xff0)
                            void** x0_45 = malloc(0x1000)
                            
                            if (x0_45 == 0)
                                goto label_10eb954
                            
                            x8_51 = 0
                            *x0_45 = x22_13
                            x0_45[1] = 0
                            x22_13 = x0_45
                            x19[0x266] = x0_45
                        
                        x11_10 = "thread-local wrapper routine for "
                        x22_13[1] = x8_51 + 0x30
                        result = x22_13 + x8_51 + 0x10
                        *result = &_vtable_for_(anonymous namespace)::itanium_demangle::SpecialName{for `(anonymous namespace)::itanium_demangle::Node'}
                        x8_14 = &data_79f909[0x21]
                        goto label_10eb7e4
                    
                labelid_b:
                    result = nullptr
                case 0x20
                    SystemHintOp_BTI()
                    *x19 = &x8_1[2]
                    
                    if ((sub_10edf5c(x19) & 1) != 0)
                    labelid_b:
                        result = nullptr
                    else if ((sub_10edf5c(x19) & 1) != 0)
                    labelid_b:
                        result = nullptr
                    else
                        void* x0_51 = sub_10eaca8(x19)
                        
                        if (x0_51 != 0)
                            void** x22_14 = x19[0x266]
                            x21_4 = x0_51
                            int64_t x8_53 = x22_14[1]
                            
                            if (x8_53 + 0x30 u>= 0xff0)
                                void** x0_52 = malloc(0x1000)
                                
                                if (x0_52 == 0)
                                    goto label_10eb954
                                
                                x8_53 = 0
                                *x0_52 = x22_14
                                x0_52[1] = 0
                                x22_14 = x0_52
                                x19[0x266] = x0_52
                            
                            x11_10 = "covariant return thunk to "
                            x22_14[1] = x8_53 + 0x30
                            result = x22_14 + x8_53 + 0x10
                            *result = &_vtable_for_(anonymous namespace)::itanium_demangle::SpecialName{for `(anonymous namespace)::itanium_demangle::Node'}
                            x8_14 = &data_7218a5[0x1a]
                            goto label_10eb7e4
                        
                    labelid_b:
                        result = nullptr
else
    int16_t var_80 = 0
    int32_t var_7c_1 = 0
    char var_78_1 = 0
    int64_t x8_6 = (x19[0x5b] - x19[0x5a]) s>> 3
    void* result_1 = sub_10ed160(x19, &var_80)
    result = result_1
    
    if (result_1 != 0)
        int64_t x13_2 = x19[0x5b]
        int64_t x8_7 = x19[0x5a]
        int64_t x12_4 = x13_2 - x8_7
        int64_t x10_7 = x12_4 s>> 3
        
        if (x8_6 u>= x10_7)
            x19[0x5b] = x8_7 + (x8_6 << 3)
        label_10eaeb4:
            char* x9_4 = *x19
            int64_t x8_9 = x19[1]
            
            if (x8_9 != x9_4)
                uint32_t x11_8 = zx.d(*x9_4)
                uint64_t x12_9 = zx.q(x11_8 - 0x2e)
                
                if (x12_9.d u> 0x31 || (1 << x12_9 & 0x2000000800001) == 0)
                    struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::EnableIfAttr::VTable
                        ** x25_1 = nullptr
                    struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NewExpr::VTable
                        ** var_88
                    
                    if (x8_9 - x9_4 u>= 0xd && x11_8 == 0x55)
                        if (zx.d(x9_4[1]) != 0x61 || zx.d(x9_4[2]) != 0x39 || zx.d(x9_4[3]) != 0x65
                                || zx.d(x9_4[4]) != 0x6e || zx.d(x9_4[5]) != 0x61
                                || zx.d(x9_4[6]) != 0x62 || zx.d(x9_4[7]) != 0x6c
                                || zx.d(x9_4[8]) != 0x65 || zx.d(x9_4[9]) != 0x5f
                                || zx.d(x9_4[0xa]) != 0x69 || zx.d(x9_4[0xb]) != 0x66
                                || zx.d(x9_4[0xc]) != 0x49)
                            x25_1 = nullptr
                        else
                            char* x9_5 = &x9_4[0xd]
                            *x19 = x9_5
                            int64_t x22_1 = (x19[3] - x19[2]) s>> 3
                            
                            if (x9_5 == x8_9)
                                goto label_10eafc4
                            
                            while (true)
                                if (zx.d(*x9_5) == 0x45)
                                    int64_t x9_42 = x19[2]
                                    int64_t x2_2 = x19[3]
                                    int64_t x22_17 = x22_1 << 3
                                    *x19 = &x9_5[1]
                                    void* x0_59
                                    int64_t x1_7
                                    x0_59, x1_7 = sub_10f7304(x19, x9_42 + x22_17, x2_2)
                                    void** x23_5 = x19[0x266]
                                    x19[3] = x19[2] + x22_17
                                    int64_t x8_62 = x23_5[1]
                                    
                                    if (x8_62 + 0x20 u>= 0xff0)
                                        void** x0_60 = malloc(0x1000)
                                        
                                        if (x0_60 == 0)
                                            goto label_10eb954
                                        
                                        x8_62 = 0
                                        *x0_60 = x23_5
                                        x0_60[1] = 0
                                        x23_5 = x0_60
                                        x19[0x266] = x0_60
                                    
                                    x23_5[1] = x8_62 + 0x20
                                    x25_1 = x23_5 + x8_62 + 0x10
                                    *x25_1 = &_vtable_for_(anonymous namespace)::itanium_demangle::EnableIfAttr{for `(anonymous namespace)::itanium_demangle::Node'}
                                    x25_1[1].d = 0x1010109
                                    x25_1[2] = x0_59
                                    x25_1[3] = x1_7
                                    break
                                
                            label_10eafc4:
                                struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NewExpr::VTable
                                    ** x0_6 = sub_10edca8(x19)
                                var_88 = x0_6
                                
                                if (x0_6 == 0)
                                    goto label_10eb88c_2
                                
                                sub_10ede98(&x19[2], &var_88)
                                x9_5 = *x19
                                
                                if (x9_5 == x19[1])
                                    goto label_10eafc4
                    
                    void* x21_5 = nullptr
                    
                    if (zx.d(var_80.b) != 0 || zx.d(var_80:1.b) == 0)
                    label_10eb168:
                        char* x8_21 = *x19
                        struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::FunctionEncoding::VTable
                            ** result_2
                        int32_t x9_15
                        char x11_11
                        
                        if (x8_21 == x19[1] || zx.d(*x8_21) != 0x76)
                            int64_t x23_1 = (x19[3] - x19[2]) s>> 3
                            
                            while (true)
                                struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NewExpr::VTable
                                    ** x0_20 = sub_10eb95c(x19)
                                var_88 = x0_20
                                
                                if (x0_20 == 0)
                                    goto label_10eb88c_2
                                
                                sub_10ede98(&x19[2], &var_88)
                                void* x8_27 = *x19
                                
                                if (x19[1] == x8_27)
                                    break
                                
                                uint64_t x8_29 = zx.q(zx.d(*x8_27) - 0x2e)
                                
                                if (x8_29.d u<= 0x31)
                                    if ((1 << x8_29 & 0x2000000800001) != 0)
                                        break
                            
                            int64_t x23_2 = x23_1 << 3
                            void* x0_23
                            int64_t x1_5
                            x0_23, x1_5 = sub_10f7304(x19, x19[2] + x23_2, x19[3])
                            void** x26_1 = x19[0x266]
                            x19[3] = x19[2] + x23_2
                            int64_t x8_34 = x26_1[1]
                            
                            if (x8_34 + 0x40 u>= 0xff0)
                                void** x0_24 = malloc(0x1000)
                                
                                if (x0_24 == 0)
                                    goto label_10eb954
                                
                                x8_34 = 0
                                *x0_24 = x26_1
                                x0_24[1] = 0
                                x26_1 = x0_24
                                x19[0x266] = x0_24
                            
                            x26_1[1] = x8_34 + 0x40
                            x9_15 = var_7c_1
                            x11_11 = var_78_1
                            result_2 = x26_1 + x8_34 + 0x10
                            *result_2 = &_vtable_for_(anonymous namespace)::itanium_demangle::FunctionEncoding{for `(anonymous namespace)::itanium_demangle::Node'}
                            result_2[1].d = 0x10012
                            result_2[2] = x21_5
                            result_2[3] = result
                            result_2[4] = x0_23
                            result_2[5] = x1_5
                        else
                            void** x22_4 = x19[0x266]
                            *x19 = &x8_21[1]
                            int64_t x8_23 = x22_4[1]
                            
                            if (x8_23 + 0x40 u>= 0xff0)
                                void** x0_18 = malloc(0x1000)
                                
                                if (x0_18 == 0)
                                    goto label_10eb954
                                
                                x8_23 = 0
                                *x0_18 = x22_4
                                x0_18[1] = 0
                                x22_4 = x0_18
                                x19[0x266] = x0_18
                            
                            x22_4[1] = x8_23 + 0x40
                            x9_15 = var_7c_1
                            x11_11 = var_78_1
                            result_2 = x22_4 + x8_23 + 0x10
                            *result_2 = &_vtable_for_(anonymous namespace)::itanium_demangle::FunctionEncoding{for `(anonymous namespace)::itanium_demangle::Node'}
                            result_2[1].d = 0x10012
                            result_2[2] = x21_5
                            result_2[3] = result
                            result_2[4] = 0
                            result_2[5] = 0
                        
                        result_2[6] = x25_1
                        result_2[7].d = x9_15
                        *(result_2 + 0x3c) = x11_11
                        result = result_2
                    else
                        void* x0_17 = sub_10eb95c(x19)
                        x21_5 = x0_17
                        
                        if (x0_17 != 0)
                            goto label_10eb168
                        
                    labelid_b:
                        result = nullptr
        else
            int64_t* x11_7 = x19[0x53]
            int64_t x15_1 = x8_7 - x13_2
            int64_t x13_3
            
            x13_3 = x12_4 s>= 0 ? x12_4 : -1
            
            int64_t x13_4
            
            x13_4 = x13_3 s< 1 ? x13_3 : 1
            
            int64_t x12_5
            
            x12_5 = x15_1 s> x12_4 ? x15_1 : x12_4
            
            if (x11_7 == x19[0x54])
            label_10eb88c:
                result = nullptr
            else
                int64_t* i = *x11_7
                
                if (i == 0)
                label_10eb88c_1:
                    result = nullptr
                else
                    int32_t x13_5 = 1
                    int64_t x15_2 = x8_6
                    
                    do
                        void* x16_1 = *(x8_7 + (x15_2 << 3))
                        int64_t x14_2 = *i
                        int64_t x17_1 = *(x16_1 + 0x10)
                        
                        if (x17_1 u>= (i[1] - x14_2) s>> 3)
                            break
                        
                        x13_5 = x15_2 + 1 u< x10_7 ? 1 : 0
                        *(x16_1 + 0x18) = *(x14_2 + (x17_1 << 3))
                        
                        if (x13_4 * (x12_5 u>> 3) - 1 == x15_2)
                            x19[0x5b] = x8_7 + (x8_6 << 3)
                            
                            if (x15_2 + 1 u>= x10_7)
                                goto label_10eaeb4
                            
                            goto label_10eb88c_2
                        
                        i = *x11_7
                        x15_2 += 1
                    while (i != 0)
                    
                    if ((x13_5 & 1) == 0)
                        goto label_10eaeb4
                    
                label_10eb88c_2:
                    result = nullptr

if (*(x24 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
