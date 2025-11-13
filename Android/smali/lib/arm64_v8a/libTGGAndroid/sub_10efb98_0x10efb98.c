// 函数: sub_10efb98
// 地址: 0x10efb98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
char* x9 = *arg1
int64_t x10 = arg1[1]
void* x8_1 = x10 - x9
struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NewExpr::VTable
    ** x8_2

if (x8_1 u< 2)
label_10efbd4:
    x8_2 = nullptr
label_10efbd8:
    SystemHintOp_BTI()
    
    if (*(x25 + 0x28) == x8)
        return x8_2
    
    __stack_chk_fail()
    noreturn

uint32_t x11_1 = zx.d(*x9)
char x21_1

if (x11_1 != 0x67)
    x21_1 = 0
else
    if (zx.d(x9[1]) != 0x73)
        x21_1 = 0
    else
        x9 = &x9[2]
        x8_1 = x10 - x9
        *arg1 = x9
        
        if (x8_1 u< 2)
            goto label_10efbd4
        
        x21_1 = 1
    
    x11_1 = zx.d(*x9)

uint64_t x12_1 = zx.q(x11_1 - 0x31)
struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NewExpr::VTable
    ** var_60
struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NewExpr::VTable
    ** x0
void* const x1_1
void* x2_1
void* x8_21
void* x8_25
void* x8_33
void* x8_72
void* x8_88
void* x8_98
void* x8_119
void* x8_144
char const* const x9_9
int64_t x9_11
void* x9_41
int64_t x9_43
void* x9_44
int64_t x9_65
int64_t x9_69
int64_t x9_75
struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NewExpr::VTable
    * x10_10
int16_t x11_6
char const* const x11_12
char const* const x12_7
void* const x12_11
void* const x12_12
void* const x12_13
void* x20_3
void* x20_4
void* x20_10
int64_t x20_12
int64_t x20_13
int64_t x20_15
int64_t x21_3
void* x21_4
void** x21_13
void** x21_17
int64_t x21_19
void** x21_24
int64_t x22_3
void** x22_8
void** x23_3
void* x8_63
int64_t x9_16
struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NewExpr::VTable
    * x10_13
int16_t x11_10
void* x20_7
void** x21_6

if (x12_1.d u> 0x43)
label_10f0288:
    SystemHintOp_BTI()
    x8_2 = nullptr
    
    if (x8_1 u< 0xb || x11_1 != 0x75)
        goto label_10efbd8
    
    void* x0_31
    
    if (zx.d(x9[1]) != 0x38 || zx.d(x9[2]) != 0x5f || zx.d(x9[3]) != 0x5f || zx.d(x9[4]) != 0x75
            || zx.d(x9[5]) != 0x75 || zx.d(x9[6]) != 0x69 || zx.d(x9[7]) != 0x64
            || zx.d(x9[8]) != 0x6f || zx.d(x9[9]) != 0x66 || zx.d(x9[0xa]) != 0x74)
        if (zx.d(x9[1]) != 0x38 || zx.d(x9[2]) != 0x5f || zx.d(x9[3]) != 0x5f || zx.d(x9[4]) != 0x75
                || zx.d(x9[5]) != 0x75 || zx.d(x9[6]) != 0x69 || zx.d(x9[7]) != 0x64
                || zx.d(x9[8]) != 0x6f || zx.d(x9[9]) != 0x66 || zx.d(x9[0xa]) != 0x7a)
            goto label_10efbd4
        
        *arg1 = &x9[0xb]
        x0_31 = sub_10efb98(arg1)
        
        if (x0_31 == 0)
            goto label_10efbd4
    else
        *arg1 = &x9[0xb]
        x0_31 = sub_10eb95c(arg1)
        
        if (x0_31 == 0)
            goto label_10efbd4
    
    x21_6 = arg1[0x266]
    x20_7 = x0_31
    int64_t x8_62 = x21_6[1]
    
    if (x8_62 + 0x20 u< 0xff0)
        goto label_10f0400
    
    void** x0_34 = malloc(0x1000)
    
    if (x0_34 != 0)
        x8_62 = 0
        *x0_34 = x21_6
        x0_34[1] = 0
        x21_6 = x0_34
        arg1[0x266] = x0_34
    label_10f0400:
        x11_10 = 0x140
        x9_16 = x8_62 + 0x20
        x8_63 = x21_6 + x8_62
        x10_13 = &_vtable_for_(anonymous namespace)::itanium_demangle::UUIDOfExpr{for `(anonymous namespace)::itanium_demangle::Node'}
        goto label_10f107c
else
    switch (x12_1)
        case 0, 1, 2, 3, 4, 5, 6, 7, 8
        label_10efc60:
            SystemHintOp_BTI()
            x0 = sub_10f2fc8(arg1)
        label_10f1518:
            
            if (*(x25 + 0x28) == x8)
                return x0
            
            __stack_chk_fail()
            noreturn
        case 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 
                0x19, 0x1a, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x24, 0x25, 0x26, 0x27, 0x28, 
                0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x31, 0x37, 0x39, 0x3a
            goto label_10f0288
        case 0x1b
            SystemHintOp_BTI()
            x0 = sub_10f1b68(arg1)
            goto label_10f1518
        case 0x23
            SystemHintOp_BTI()
            x0 = sub_10eec18(arg1)
            goto label_10f1518
        case 0x30
            SystemHintOp_BTI()
            uint64_t x10_6 = zx.q(zx.d(x9[1]) - 0x4e)
            x8_2 = nullptr
            
            if (x10_6.d u> 0x2c)
                goto label_10efbd8
            
            void* x0_97
            
            switch (x10_6)
                case 0
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    x1_1 = &data_7559c3
                    goto label_10f0ddc
                case 1, 2, 3, 4, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x14, 
                        0x15, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x21, 0x22, 
                        0x23, 0x24, 0x25, 0x27, 0x28, 0x29, 0x2a, 0x2b
                    goto label_10efbd8
                case 5
                    SystemHintOp_BTI()
                    x8_21 = &x9[2]
                    x1_1 = &data_76eb5c
                    goto label_10f1500
                case 0x13
                    SystemHintOp_BTI()
                    x1_1 = &data_78f37f
                    *arg1 = &x9[2]
                    goto label_10f0ddc
                case 0x16
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    int64_t x0_94 = sub_10efb98(arg1)
                    
                    if (x0_94 == 0)
                        goto label_10efbd4
                    
                    x21_13 = arg1[0x266]
                    x20_12 = x0_94
                    int64_t x8_127 = x21_13[1]
                    
                    if (x8_127 + 0x30 u< 0xff0)
                        goto label_10f0e3c
                    
                    void*** x0_95 = malloc(0x1000)
                    
                    if (x0_95 != 0)
                        x8_127 = 0
                        *x0_95 = x21_13
                        x0_95[1] = 0
                        x21_13 = x0_95
                        arg1[0x266] = x0_95
                    label_10f0e3c:
                        x9_65 = x8_127 + 0x30
                        x8_88 = x21_13 + x8_127
                        x12_11 = &data_7939a1
                        goto label_10f1330
                case 0x20
                    SystemHintOp_BTI()
                    x8_21 = &x9[2]
                    x1_1 = &data_7939a1
                    goto label_10f1500
                case 0x26
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    x0_97 = sub_10eb95c(arg1)
                    
                    if (x0_97 == 0)
                        goto label_10efbd4
                    
                label_10f0e9c:
                    void** x21_22 = arg1[0x266]
                    x20_10 = x0_97
                    int64_t x8_130 = x21_22[1]
                    
                    if (x8_130 + 0x40 u< 0xff0)
                        goto label_10f0ee0
                    
                    void** x0_99 = malloc(0x1000)
                    
                    if (x0_99 != 0)
                        x8_130 = 0
                        *x0_99 = x21_22
                        x0_99[1] = 0
                        x21_22 = x0_99
                        arg1[0x266] = x0_99
                    label_10f0ee0:
                        x21_22[1] = x8_130 + 0x40
                        x11_12 = "alignof ("
                        x8_2 = x21_22 + x8_130 + 0x10
                        *x8_2 = &_vtable_for_(anonymous namespace)::itanium_demangle::EnclosingExpr{for `(anonymous namespace)::itanium_demangle::Node'}
                        x8_2[1].d = 0x1010134
                        x9_41 = &data_75d88d[9]
                        goto label_10f1130
                case 0x2c
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    x0_97 = sub_10efb98(arg1)
                    
                    if (x0_97 == 0)
                        goto label_10efbd4
                    
                    goto label_10f0e9c
        case 0x32
            SystemHintOp_BTI()
            uint64_t x10_7 = zx.q(zx.d(x9[1]) - 0x63)
            x8_2 = nullptr
            
            if (x10_7.d u> 0x13)
                goto label_10efbd8
            
            switch (x10_7)
                case 0
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    void* x0_16 = sub_10eb95c(arg1)
                    
                    if (x0_16 == 0)
                        goto label_10efbd4
                    
                    x20_3 = x0_16
                    int64_t x0_18 = sub_10efb98(arg1)
                    
                    if (x0_18 == 0)
                        goto label_10efbd4
                    
                    void** x22_2 = arg1[0x266]
                    x21_3 = x0_18
                    int64_t x8_18 = x22_2[1]
                    
                    if (x8_18 + 0x30 u< 0xff0)
                        goto label_10eff90
                    
                    void** x0_19 = malloc(0x1000)
                    
                    if (x0_19 != 0)
                        x8_18 = 0
                        *x0_19 = x22_2
                        x0_19[1] = 0
                        x22_2 = x0_19
                        arg1[0x266] = x0_19
                    label_10eff90:
                        x12_7 = "const_cast"
                        x22_2[1] = x8_18 + 0x30
                        x8_2 = x22_2 + x8_18 + 0x10
                        *x8_2 = &_vtable_for_(anonymous namespace)::itanium_demangle::CastExpr{for `(anonymous namespace)::itanium_demangle::Node'}
                        x9_9 = &data_731ecd[0xa]
                        goto label_10f12b4
                case 1, 2, 3, 4, 5, 6, 7, 8, 0xb, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12
                    goto label_10efbd8
                case 9
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    void* x0_50 = sub_10efb98(arg1)
                    
                    if (x0_50 == 0)
                        goto label_10efbd4
                    
                    x20_4 = x0_50
                    int64_t x22_5 = (arg1[3] - arg1[2]) s>> 3
                    char* x8_85
                    
                    while (true)
                        x8_85 = *arg1
                        
                        if (x8_85 != arg1[1] && zx.d(*x8_85) == 0x45)
                            break
                        
                        struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NewExpr::VTable
                            ** x0_52 = sub_10efb98(arg1)
                        var_60 = x0_52
                        
                        if (x0_52 == 0)
                            goto label_10efbd4
                        
                        sub_10ede98(&arg1[2], &var_60)
                    
                    int64_t x2_6 = arg1[3]
                    int64_t x22_21 = x22_5 << 3
                    int64_t x1_17 = arg1[2] + x22_21
                    *arg1 = &x8_85[1]
                    void* x0_165
                    int64_t x1_18
                    x0_165, x1_18 = sub_10f7304(arg1, x1_17, x2_6)
                    x23_3 = arg1[0x266]
                    x21_4 = x0_165
                    arg1[3] = arg1[2] + x22_21
                    int64_t x8_185 = x23_3[1]
                    x22_3 = x1_18
                    
                    if (x8_185 + 0x30 u< 0xff0)
                        goto label_10f1910
                    
                    void*** x0_166 = malloc(0x1000)
                    
                    if (x0_166 != 0)
                        x8_185 = 0
                        *x0_166 = x23_3
                        x0_166[1] = 0
                        x23_3 = x0_166
                        arg1[0x266] = x0_166
                    label_10f1910:
                        x11_6 = 0x137
                        x9_11 = x8_185 + 0x30
                        x8_33 = x23_3 + x8_185
                        x10_10 = &_vtable_for_(anonymous namespace)::itanium_demangle::CallExpr{for `(anonymous namespace)::itanium_demangle::Node'}
                        goto label_10f1aa0
                case 0xa
                    SystemHintOp_BTI()
                    x8_21 = &x9[2]
                    x1_1 = &data_74e5d9
                    goto label_10f1500
                case 0xc
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    int64_t x0_55 = sub_10efb98(arg1)
                    
                    if (x0_55 == 0)
                        goto label_10efbd4
                    
                    x21_13 = arg1[0x266]
                    x20_12 = x0_55
                    int64_t x8_87 = x21_13[1]
                    
                    if (x8_87 + 0x30 u< 0xff0)
                        goto label_10f07a0
                    
                    void*** x0_56 = malloc(0x1000)
                    
                    if (x0_56 != 0)
                        x8_87 = 0
                        *x0_56 = x21_13
                        x0_56[1] = 0
                        x21_13 = x0_56
                        arg1[0x266] = x0_56
                    label_10f07a0:
                        x9_65 = x8_87 + 0x30
                        x8_88 = x21_13 + x8_87
                        x12_11 = &data_7939a3
                        goto label_10f1330
                case 0x13
                    SystemHintOp_BTI()
                    char x21_14 = arg1[0x61].b
                    *arg1 = &x9[2]
                    arg1[0x61].b = 0
                    void* x0_58 = sub_10eb95c(arg1)
                    x20_4 = x0_58
                    arg1[0x61].b = x21_14
                    
                    if (x0_58 == 0)
                        goto label_10efbd4
                    
                    char* x9_32 = *arg1
                    int64_t x8_90 = arg1[1]
                    
                    if (x9_32 != x8_90 && zx.d(*x9_32) == 0x5f)
                        void* x9_33 = &x9_32[1]
                        *arg1 = x9_33
                        int64_t x22_6 = (arg1[3] - arg1[2]) s>> 3
                        
                        if (x9_33 == x8_90)
                            goto label_10f082c
                        
                        while (true)
                            if (zx.d(*x9_33) == 0x45)
                                int64_t x9_98 = arg1[2]
                                int64_t x2_7 = arg1[3]
                                int64_t x22_22 = x22_6 << 3
                                *arg1 = x9_33 + 1
                                void* x0_172
                                int64_t x1_20
                                x0_172, x1_20 = sub_10f7304(arg1, x9_98 + x22_22, x2_7)
                                x23_3 = arg1[0x266]
                                x21_4 = x0_172
                                arg1[3] = arg1[2] + x22_22
                                int64_t x8_195 = x23_3[1]
                                x22_3 = x1_20
                                
                                if (x8_195 + 0x30 u>= 0xff0)
                                    void** x0_173 = malloc(0x1000)
                                    
                                    if (x0_173 == 0)
                                        goto label_10f1b58
                                    
                                    x8_195 = 0
                                    *x0_173 = x23_3
                                    x0_173[1] = 0
                                    x23_3 = x0_173
                                    arg1[0x266] = x0_173
                                
                                x11_6 = 0x13c
                                x9_11 = x8_195 + 0x30
                                x8_33 = x23_3 + x8_195
                                x10_10 = &_vtable_for_(anonymous namespace)::itanium_demangle::ConversionExpr{for `(anonymous namespace)::itanium_demangle::Node'}
                                break
                            
                        label_10f082c:
                            struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NewExpr::VTable
                                ** x0_60 = sub_10efb98(arg1)
                            var_60 = x0_60
                            
                            if (x0_60 == 0)
                                goto label_10efbd4
                            
                            sub_10ede98(&arg1[2], &var_60)
                            x9_33 = *arg1
                            
                            if (x9_33 == arg1[1])
                                goto label_10f082c
                        
                        goto label_10f1aa0
                    
                    struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NewExpr::VTable
                        ** x0_154 = sub_10efb98(arg1)
                    var_60 = x0_154
                    
                    if (x0_154 == 0)
                        goto label_10efbd4
                    
                    void** x21_26 = arg1[0x266]
                    int64_t x8_169 = x21_26[1]
                    
                    if (x8_169 + 0x10 u< 0xff0)
                        goto label_10f16c0
                    
                    void** x0_155 = malloc(0x1000)
                    
                    if (x0_155 != 0)
                        x8_169 = 0
                        *x0_155 = x21_26
                        x0_155[1] = 0
                        x21_26 = x0_155
                        arg1[0x266] = x0_155
                    label_10f16c0:
                        x21_26[1] = x8_169 + 0x10
                        *(x21_26 + x8_169 + 0x10) = var_60
                        void** x22_17 = arg1[0x266]
                        int64_t x8_170 = x22_17[1]
                        
                        if (x8_170 + 0x30 u< 0xff0)
                            goto label_10f171c
                        
                        void** x0_156 = malloc(0x1000)
                        
                        if (x0_156 != 0)
                            x8_170 = 0
                            *x0_156 = x22_17
                            x0_156[1] = 0
                            x22_17 = x0_156
                            arg1[0x266] = x0_156
                        label_10f171c:
                            x22_17[1] = x8_170 + 0x30
                            x8_2 = x22_17 + x8_170 + 0x10
                            *x8_2 = &_vtable_for_(anonymous namespace)::itanium_demangle::ConversionExpr{for `(anonymous namespace)::itanium_demangle::Node'}
                            x8_2[1].d = 0x101013c
                            x8_2[2] = x20_4
                            x8_2[3] = x21_26 + x8_169 + 0x10
                            x8_2[4] = 1
                            goto label_10efbd8
        case 0x33
            SystemHintOp_BTI()
            uint64_t x10_2 = zx.q(zx.d(x9[1]) - 0x56)
            x8_2 = nullptr
            
            if (x10_2.d u> 0x20)
                goto label_10efbd8
            
            void* x9_70
            
            switch (x10_2)
                case 0
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    x1_1 = &data_742918
                    goto label_10f0ddc
                case 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xc, 0xe, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 
                        0x17, 0x19, 0x1a, 0x1b, 0x1c, 0x1f
                    goto label_10efbd8
                case 0xb
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    int64_t x0_119 = sub_10efb98(arg1)
                    
                    if (x0_119 == 0)
                        goto label_10efbd4
                    
                    void** x22_11 = arg1[0x266]
                    int64_t x8_146 = x22_11[1]
                    
                    if (x8_146 + 0x20 u< 0xff0)
                        goto label_10f1210
                    
                    void** x0_120 = malloc(0x1000)
                    
                    if (x0_120 != 0)
                        x8_146 = 0
                        *x0_120 = x22_11
                        x0_120[1] = 0
                        x22_11 = x0_120
                        arg1[0x266] = x0_120
                    label_10f1210:
                        x22_11[1] = x8_146 + 0x20
                        x8_2 = x22_11 + x8_146 + 0x10
                        *x8_2 = &_vtable_for_(anonymous namespace)::itanium_demangle::DeleteExpr{for `(anonymous namespace)::itanium_demangle::Node'}
                        x8_2[1].d = 0x1010139
                        x8_2[2] = x0_119
                        x8_2[3].b = x21_1
                        *(x8_2 + 0x19) = 1
                        goto label_10efbd8
                case 0xd
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    void* x0_122 = sub_10eb95c(arg1)
                    
                    if (x0_122 == 0)
                        goto label_10efbd4
                    
                    x20_3 = x0_122
                    int64_t x0_124 = sub_10efb98(arg1)
                    
                    if (x0_124 == 0)
                        goto label_10efbd4
                    
                    void** x22_12 = arg1[0x266]
                    x21_3 = x0_124
                    int64_t x8_149 = x22_12[1]
                    
                    if (x8_149 + 0x30 u< 0xff0)
                        goto label_10f12a0
                    
                    void** x0_125 = malloc(0x1000)
                    
                    if (x0_125 != 0)
                        x8_149 = 0
                        *x0_125 = x22_12
                        x0_125[1] = 0
                        x22_12 = x0_125
                        arg1[0x266] = x0_125
                    label_10f12a0:
                        x12_7 = "dynamic_cast"
                        x22_12[1] = x8_149 + 0x30
                        x8_2 = x22_12 + x8_149 + 0x10
                        *x8_2 = &_vtable_for_(anonymous namespace)::itanium_demangle::CastExpr{for `(anonymous namespace)::itanium_demangle::Node'}
                        x9_9 = &data_761e62[0xc]
                    label_10f12b4:
                        x8_2[1].d = 0x1010135
                        x8_2[2] = x12_7
                        x8_2[3] = x9_9
                        x8_2[4] = x20_3
                        x8_2[5] = x21_3
                        goto label_10efbd8
                case 0xf
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    int64_t x0_127 = sub_10efb98(arg1)
                    
                    if (x0_127 == 0)
                        goto label_10efbd4
                    
                    x21_13 = arg1[0x266]
                    x20_12 = x0_127
                    int64_t x8_152 = x21_13[1]
                    
                    if (x8_152 + 0x30 u< 0xff0)
                        goto label_10f131c
                    
                    void*** x0_128 = malloc(0x1000)
                    
                    if (x0_128 != 0)
                        x8_152 = 0
                        *x0_128 = x21_13
                        x0_128[1] = 0
                        x21_13 = x0_128
                        arg1[0x266] = x0_128
                    label_10f131c:
                        x9_65 = x8_152 + 0x30
                        x8_88 = x21_13 + x8_152
                        x12_11 = &data_74e377
                    label_10f1330:
                        x21_13[1] = x9_65
                        x8_2 = x8_88 + 0x10
                        *x8_2 = &_vtable_for_(anonymous namespace)::itanium_demangle::PrefixExpr{for `(anonymous namespace)::itanium_demangle::Node'}
                        x9_44 = x12_11 + 1
                    label_10f133c:
                        x8_2[1].d = 0x101013a
                        x8_2[2] = x12_11
                        x8_2[3] = x9_44
                        x8_2[4] = x20_12
                        goto label_10efbd8
                case 0x16
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    int64_t x0_130 = sub_10efb98(arg1)
                    
                    if (x0_130 == 0)
                        goto label_10efbd4
                    
                    void** x22_13 = arg1[0x266]
                    int64_t x8_154 = x22_13[1]
                    
                    if (x8_154 + 0x20 u< 0xff0)
                        goto label_10f13b0
                    
                    void** x0_131 = malloc(0x1000)
                    
                    if (x0_131 != 0)
                        x8_154 = 0
                        *x0_131 = x22_13
                        x0_131[1] = 0
                        x22_13 = x0_131
                        arg1[0x266] = x0_131
                    label_10f13b0:
                        x22_13[1] = x8_154 + 0x20
                        x8_2 = x22_13 + x8_154 + 0x10
                        *x8_2 = &_vtable_for_(anonymous namespace)::itanium_demangle::DeleteExpr{for `(anonymous namespace)::itanium_demangle::Node'}
                        x8_2[1].d = 0x1010139
                        x8_2[2] = x0_130
                        x8_2[3].b = x21_1
                        *(x8_2 + 0x19) = 0
                        goto label_10efbd8
                case 0x18
                    goto label_10efc60
                case 0x1d
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    int64_t x0_133 = sub_10efb98(arg1)
                    
                    if (x0_133 == 0)
                        goto label_10efbd4
                    
                    x20_13 = x0_133
                    int64_t x0_135 = sub_10efb98(arg1)
                    
                    if (x0_135 == 0)
                        goto label_10efbd4
                    
                    x22_8 = arg1[0x266]
                    x21_19 = x0_135
                    int64_t x8_157 = x22_8[1]
                    
                    if (x8_157 + 0x30 u< 0xff0)
                        goto label_10f1434
                    
                    void*** x0_136 = malloc(0x1000)
                    
                    if (x0_136 != 0)
                        x8_157 = 0
                        *x0_136 = x22_8
                        x0_136[1] = 0
                        x22_8 = x0_136
                        arg1[0x266] = x0_136
                    label_10f1434:
                        x9_69 = x8_157 + 0x30
                        x8_119 = x22_8 + x8_157
                        x12_12 = &data_765fff
                    label_10f1448:
                        x22_8[1] = x9_69
                        x8_2 = x8_119 + 0x10
                        *x8_2 = &_vtable_for_(anonymous namespace)::itanium_demangle::MemberExpr{for `(anonymous namespace)::itanium_demangle::Node'}
                        x9_70 = x12_12 + 2
                        goto label_10f14e0
                case 0x1e
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    int64_t x0_138 = sub_10efb98(arg1)
                    
                    if (x0_138 == 0)
                        goto label_10efbd4
                    
                    x20_13 = x0_138
                    int64_t x0_140 = sub_10efb98(arg1)
                    
                    if (x0_140 == 0)
                        goto label_10efbd4
                    
                    void** x22_14 = arg1[0x266]
                    x21_19 = x0_140
                    int64_t x8_159 = x22_14[1]
                    
                    if (x8_159 + 0x30 u< 0xff0)
                        goto label_10f14cc
                    
                    void** x0_141 = malloc(0x1000)
                    
                    if (x0_141 != 0)
                        x8_159 = 0
                        *x0_141 = x22_14
                        x0_141[1] = 0
                        x22_14 = x0_141
                        arg1[0x266] = x0_141
                    label_10f14cc:
                        x12_12 = &data_725cf2
                        x22_14[1] = x8_159 + 0x30
                        x8_2 = x22_14 + x8_159 + 0x10
                        *x8_2 = &_vtable_for_(anonymous namespace)::itanium_demangle::MemberExpr{for `(anonymous namespace)::itanium_demangle::Node'}
                        x9_70 = &data_725cf3
                    label_10f14e0:
                        x8_2[1].d = 0x1010133
                        x8_2[2] = x20_13
                        x8_2[3] = x12_12
                        x8_2[4] = x9_70
                        x8_2[5] = x21_19
                        goto label_10efbd8
                case 0x20
                    SystemHintOp_BTI()
                    x8_21 = &x9[2]
                    x1_1 = &data_72942e
                    goto label_10f1500
        case 0x34
            SystemHintOp_BTI()
            uint32_t x8_20 = zx.d(x9[1])
            
            if (x8_20 == 0x4f)
                *arg1 = &x9[2]
                x1_1 = &data_761e6f
            label_10f0ddc:
                x2_1 = x1_1 + 2
            label_10f150c:
                x0 = sub_10f2f10(arg1, x1_1, x2_1)
                goto label_10f1518
            
            if (x8_20 == 0x71)
                *arg1 = &x9[2]
                x1_1 = &data_761e72
                goto label_10f0ddc
            
            if (x8_20 != 0x6f)
                goto label_10efbd4
            
            x8_21 = &x9[2]
            x1_1 = &data_7727a8
            goto label_10f1500
        case 0x35
            SystemHintOp_BTI()
            uint32_t x10_3 = zx.d(x9[1])
            
            if (x10_3 == 0x70 || (x8_1 u>= 3 && x10_3 == 0x4c && zx.d(x9[2]) - 0x30 u<= 9))
                x0 = sub_10f2648(arg1)
            else
                x0 = sub_10f2908(arg1)
            
            goto label_10f1518
        case 0x36
            SystemHintOp_BTI()
            uint32_t x8_22 = zx.d(x9[1])
            
            if (x8_22 == 0x74)
                x8_21 = &x9[2]
                x1_1 = &data_761e75
            label_10f1500:
                *arg1 = x8_21
                x2_1 = x1_1 + 1
                goto label_10f150c
            
            if (x8_22 != 0x65)
                goto label_10efbd4
            
            *arg1 = &x9[2]
            x1_1 = &data_725b61
            goto label_10f0ddc
        case 0x38
            SystemHintOp_BTI()
            uint32_t x8_7 = zx.d(x9[1])
            
            if (x8_7 == 0x6c)
                void* x8_64 = &x9[2]
                *arg1 = x8_64
                int64_t x21_7 = (arg1[3] - arg1[2]) s>> 3
                
                if (x8_64 == x10)
                    goto label_10f0448
                
                while (true)
                    if (zx.d(*x8_64) == 0x45)
                        int64_t x2_2 = arg1[3]
                        int64_t x21_20 = x21_7 << 3
                        int64_t x1_8 = arg1[2] + x21_20
                        *arg1 = x8_64 + 1
                        void* x0_91
                        int64_t x1_9
                        x0_91, x1_9 = sub_10f7304(arg1, x1_8, x2_2)
                        void** x22_9 = arg1[0x266]
                        arg1[3] = arg1[2] + x21_20
                        int64_t x8_123 = x22_9[1]
                        
                        if (x8_123 + 0x30 u>= 0xff0)
                            void** x0_92 = malloc(0x1000)
                            
                            if (x0_92 == 0)
                                goto label_10f1b58
                            
                            x8_123 = 0
                            *x0_92 = x22_9
                            x0_92[1] = 0
                            x22_9 = x0_92
                            arg1[0x266] = x0_92
                        
                        x22_9[1] = x8_123 + 0x30
                        x8_2 = x22_9 + x8_123 + 0x10
                        *x8_2 = &_vtable_for_(anonymous namespace)::itanium_demangle::InitListExpr{for `(anonymous namespace)::itanium_demangle::Node'}
                        x8_2[1].d = 0x101013d
                        x8_2[2] = 0
                        x8_2[3] = x0_91
                        x8_2[4] = x1_9
                        break
                    
                label_10f0448:
                    struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NewExpr::VTable
                        ** x0_36 = sub_10f3604(arg1)
                    var_60 = x0_36
                    
                    if (x0_36 == 0)
                        goto label_10efbd4
                    
                    sub_10ede98(&arg1[2], &var_60)
                    x8_64 = *arg1
                    
                    if (x8_64 == arg1[1])
                        goto label_10f0448
                
                goto label_10efbd8
            
            if (x8_7 != 0x78)
                goto label_10efbd4
            
            *arg1 = &x9[2]
            int64_t x0_4 = sub_10efb98(arg1)
            
            if (x0_4 == 0)
                goto label_10efbd4
            
            int64_t x0_6 = sub_10efb98(arg1)
            
            if (x0_6 == 0)
                goto label_10efbd4
            
            void** x22_1 = arg1[0x266]
            int64_t x8_9 = x22_1[1]
            
            if (x8_9 + 0x20 u< 0xff0)
                goto label_10efd7c
            
            void** x0_7 = malloc(0x1000)
            
            if (x0_7 != 0)
                x8_9 = 0
                *x0_7 = x22_1
                x0_7[1] = 0
                x22_1 = x0_7
                arg1[0x266] = x0_7
            label_10efd7c:
                x22_1[1] = x8_9 + 0x20
                x8_2 = x22_1 + x8_9 + 0x10
                *x8_2 = &_vtable_for_(anonymous namespace)::itanium_demangle::ArraySubscriptExpr{for `(anonymous namespace)::itanium_demangle::Node'}
                x8_2[1].d = 0x1010130
                x8_2[2] = x0_4
                x8_2[3] = x0_6
                goto label_10efbd8
        case 0x3b
            SystemHintOp_BTI()
            uint64_t x10_8 = zx.q(zx.d(x9[1]) - 0x53)
            x8_2 = nullptr
            
            if (x10_8.d u> 0x21)
                goto label_10efbd8
            
            switch (x10_8)
                case 0
                    SystemHintOp_BTI()
                    x8_25 = &x9[2]
                    x1_1 = &data_775d96
                label_10f0b90:
                    *arg1 = x8_25
                    x2_1 = x1_1 + 3
                    goto label_10f150c
                case 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x13, 
                        0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f
                    goto label_10efbd8
                case 0x12
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    x1_1 = &data_7869c7
                    goto label_10f0ddc
                case 0x20
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    x1_1 = &data_77d73e
                    goto label_10f0ddc
                case 0x21
                    SystemHintOp_BTI()
                    x8_21 = &x9[2]
                    x1_1 = &data_7218c0
                    goto label_10f1500
        case 0x3c
            SystemHintOp_BTI()
            uint64_t x11_9 = zx.q(zx.d(x9[1]) - 0x49)
            x8_2 = nullptr
            
            if (x11_9.d u> 0x24)
                goto label_10efbd8
            
            switch (x11_9)
                case 0
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    x1_1 = &data_74291b
                    goto label_10f0ddc
                case 1, 2, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 
                        0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 
                        0x21, 0x22
                    goto label_10efbd8
                case 3
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    x1_1 = &data_7518c9
                    goto label_10f0ddc
                case 0x20
                    SystemHintOp_BTI()
                    x8_21 = &x9[2]
                    x1_1 = &data_742a60
                    goto label_10f1500
                case 0x23
                    SystemHintOp_BTI()
                    x8_21 = &x9[2]
                    x1_1 = &data_74e377
                    goto label_10f1500
                case 0x24
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    
                    if (&x9[2] == x10 || zx.d(x9[2]) != 0x5f)
                        int64_t x0_116 = sub_10efb98(arg1)
                        
                        if (x0_116 == 0)
                            goto label_10efbd4
                        
                        x21_24 = arg1[0x266]
                        x20_15 = x0_116
                        int64_t x8_143 = x21_24[1]
                        
                        if (x8_143 + 0x30 u< 0xff0)
                            goto label_10f1190
                        
                        void** x0_117 = malloc(0x1000)
                        
                        if (x0_117 != 0)
                            x8_143 = 0
                            *x0_117 = x21_24
                            x0_117[1] = 0
                            x21_24 = x0_117
                            arg1[0x266] = x0_117
                        label_10f1190:
                            x9_75 = x8_143 + 0x30
                            x8_144 = x21_24 + x8_143
                            x12_13 = &data_79b742
                            goto label_10f15a0
                    else
                        *arg1 = &x9[3]
                        int64_t x0_63 = sub_10efb98(arg1)
                        
                        if (x0_63 == 0)
                            goto label_10efbd4
                        
                        x21_17 = arg1[0x266]
                        x20_12 = x0_63
                        int64_t x8_97 = x21_17[1]
                        
                        if (x8_97 + 0x30 u< 0xff0)
                            goto label_10f0908
                        
                        void** x0_64 = malloc(0x1000)
                        
                        if (x0_64 != 0)
                            x8_97 = 0
                            *x0_64 = x21_17
                            x0_64[1] = 0
                            x21_17 = x0_64
                            arg1[0x266] = x0_64
                        label_10f0908:
                            x9_43 = x8_97 + 0x30
                            x8_98 = x21_17 + x8_97
                            x12_11 = &data_79b742
                            goto label_10f0c24
        case 0x3d
            SystemHintOp_BTI()
            uint32_t x11_3 = zx.d(x9[1])
            x8_2 = nullptr
            uint64_t x12_3 = zx.q(x11_3 - 0x61)
            
            if (x12_3.d u> 0x17)
                goto label_10efbd8
            
            switch (x12_3)
                case 0, 0x16
                    SystemHintOp_BTI()
                    char x24_1 = (x11_3 == 0x61 ? 1 : 0).b
                    
                    if (x11_3 != 0x77 && x11_3 != 0x61)
                        goto label_10efbd4
                    
                    void* x8_11 = &x9[2]
                    *arg1 = x8_11
                    int64_t x20_2 = (arg1[3] - arg1[2]) s>> 3
                    
                    if (x8_11 == x10)
                        goto label_10efe10
                    
                    while (zx.d(*x8_11) != 0x5f)
                    label_10efe10:
                        struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NewExpr::VTable
                            ** x0_9 = sub_10efb98(arg1)
                        var_60 = x0_9
                        
                        if (x0_9 == 0)
                            goto label_10efbd4
                        
                        sub_10ede98(&arg1[2], &var_60)
                        x8_11 = *arg1
                        
                        if (x8_11 == arg1[1])
                            goto label_10efe10
                    
                    int64_t x2_3 = arg1[3]
                    int64_t x22_15 = x20_2 << 3
                    int64_t x1_10 = arg1[2] + x22_15
                    *arg1 = x8_11 + 1
                    void* x0_147
                    int64_t x1_11
                    x0_147, x1_11 = sub_10f7304(arg1, x1_10, x2_3)
                    arg1[3] = arg1[2] + x22_15
                    void* x0_149 = sub_10eb95c(arg1)
                    
                    if (x0_149 == 0)
                        goto label_10efbd4
                    
                    char* x9_78 = *arg1
                    int64_t x8_166 = arg1[1]
                    
                    if (x8_166 - x9_78 u>= 2 && zx.d(*x9_78) == 0x70 && zx.d(x9_78[1]) == 0x69)
                        int64_t x11_15 = arg1[2]
                        int64_t x10_21 = arg1[3]
                        void* x9_79 = &x9_78[2]
                        *arg1 = x9_79
                        
                        if (x9_79 == x8_166)
                            goto label_10f1654
                        
                        while (true)
                            if (zx.d(*x9_79) == 0x45)
                                int64_t x9_100 = arg1[2]
                                int64_t x2_8 = arg1[3]
                                int64_t x24_3 = (x10_21 - x11_15) s>> 3 << 3
                                *arg1 = x9_79 + 1
                                void* x0_175
                                int64_t x1_22
                                x0_175, x1_22 = sub_10f7304(arg1, x9_100 + x24_3, x2_8)
                                void** x26_1 = arg1[0x266]
                                arg1[3] = arg1[2] + x24_3
                                int64_t x8_199 = x26_1[1]
                                
                                if (x8_199 + 0x40 u>= 0xff0)
                                    void** x0_176 = malloc(0x1000)
                                    
                                    if (x0_176 == 0)
                                        goto label_10f1b58
                                    
                                    x8_199 = 0
                                    *x0_176 = x26_1
                                    x0_176[1] = 0
                                    x26_1 = x0_176
                                    arg1[0x266] = x0_176
                                
                                x26_1[1] = x8_199 + 0x40
                                x8_2 = x26_1 + x8_199 + 0x10
                                *x8_2 = &_vtable_for_(anonymous namespace)::itanium_demangle::NewExpr{for `(anonymous namespace)::itanium_demangle::Node'}
                                x8_2[1].d = 0x1010138
                                x8_2[2] = x0_147
                                x8_2[3] = x1_11
                                x8_2[4] = x0_149
                                x8_2[5] = x0_175
                                x8_2[6] = x1_22
                                x8_2[7].b = 0
                                *(x8_2 + 0x39) = x24_1
                                break
                            
                        label_10f1654:
                            struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NewExpr::VTable
                                ** x0_151 = sub_10efb98(arg1)
                            var_60 = x0_151
                            
                            if (x0_151 == 0)
                                goto label_10efbd4
                            
                            sub_10ede98(&arg1[2], &var_60)
                            x9_79 = *arg1
                            
                            if (x9_79 == arg1[1])
                                goto label_10f1654
                        
                        goto label_10efbd8
                    
                    if (x9_78 == x8_166 || zx.d(*x9_78) != 0x45)
                        goto label_10efbd4
                    
                    void** x23_5 = arg1[0x266]
                    *arg1 = &x9_78[1]
                    int64_t x8_188 = x23_5[1]
                    
                    if (x8_188 + 0x40 u< 0xff0)
                        goto label_10f1988
                    
                    void** x0_167 = malloc(0x1000)
                    
                    if (x0_167 != 0)
                        x8_188 = 0
                        *x0_167 = x23_5
                        x0_167[1] = 0
                        x23_5 = x0_167
                        arg1[0x266] = x0_167
                    label_10f1988:
                        x23_5[1] = x8_188 + 0x40
                        x8_2 = x23_5 + x8_188 + 0x10
                        *x8_2 = &_vtable_for_(anonymous namespace)::itanium_demangle::NewExpr{for `(anonymous namespace)::itanium_demangle::Node'}
                        x8_2[1].d = 0x1010138
                        x8_2[2] = x0_147
                        x8_2[3] = x1_11
                        x8_2[5] = 0
                        x8_2[6] = 0
                        x8_2[4] = x0_149
                        x8_2[7].b = 0
                        *(x8_2 + 0x39) = x24_1
                        goto label_10efbd8
                case 1, 2, 3, 5, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x14, 0x15
                    goto label_10efbd8
                case 4
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    x1_1 = &data_78207b
                    goto label_10f0ddc
                case 6
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    int64_t x0_71 = sub_10efb98(arg1)
                    
                    if (x0_71 == 0)
                        goto label_10efbd4
                    
                    x21_13 = arg1[0x266]
                    x20_12 = x0_71
                    int64_t x8_105 = x21_13[1]
                    
                    if (x8_105 + 0x30 u< 0xff0)
                        goto label_10f0a5c
                    
                    void*** x0_72 = malloc(0x1000)
                    
                    if (x0_72 != 0)
                        x8_105 = 0
                        *x0_72 = x21_13
                        x0_72[1] = 0
                        x21_13 = x0_72
                        arg1[0x266] = x0_72
                    label_10f0a5c:
                        x9_65 = x8_105 + 0x30
                        x8_88 = x21_13 + x8_105
                        x12_11 = &data_742a60
                        goto label_10f1330
                case 0x13
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    int64_t x0_74 = sub_10efb98(arg1)
                    
                    if (x0_74 == 0)
                        goto label_10efbd4
                    
                    x21_13 = arg1[0x266]
                    x20_12 = x0_74
                    int64_t x8_107 = x21_13[1]
                    
                    if (x8_107 + 0x30 u< 0xff0)
                        goto label_10f0acc
                    
                    void*** x0_75 = malloc(0x1000)
                    
                    if (x0_75 != 0)
                        x8_107 = 0
                        *x0_75 = x21_13
                        x0_75[1] = 0
                        x21_13 = x0_75
                        arg1[0x266] = x0_75
                    label_10f0acc:
                        x9_65 = x8_107 + 0x30
                        x8_88 = x21_13 + x8_107
                        x12_11 = &data_75d897
                        goto label_10f1330
                case 0x17
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    void* x0_77 = sub_10efb98(arg1)
                    
                    if (x0_77 == 0)
                        goto label_10efbd4
                    
                    void** x21_18 = arg1[0x266]
                    x20_10 = x0_77
                    int64_t x8_109 = x21_18[1]
                    
                    if (x8_109 + 0x40 u< 0xff0)
                        goto label_10f0b40
                    
                    void** x0_78 = malloc(0x1000)
                    
                    if (x0_78 != 0)
                        x8_109 = 0
                        *x0_78 = x21_18
                        x0_78[1] = 0
                        x21_18 = x0_78
                        arg1[0x266] = x0_78
                    label_10f0b40:
                        x21_18[1] = x8_109 + 0x40
                        x11_12 = "noexcept ("
                        x8_2 = x21_18 + x8_109 + 0x10
                        *x8_2 = &_vtable_for_(anonymous namespace)::itanium_demangle::EnclosingExpr{for `(anonymous namespace)::itanium_demangle::Node'}
                        x8_2[1].d = 0x1010134
                        x9_41 = &data_75d899[0xa]
                    label_10f1130:
                        x8_2[2] = x11_12
                        x8_2[3] = x9_41
                        x8_2[4] = x20_10
                    label_10f113c:
                        x8_2[5] = &data_797a7e
                        x8_2[6] = &data_797a7f
                        goto label_10efbd8
        case 0x3e
            SystemHintOp_BTI()
            uint64_t x10_9 = zx.q(zx.d(x9[1]) - 0x52)
            x8_2 = nullptr
            
            if (x10_9.d u> 0x20)
                goto label_10efbd8
            
            switch (x10_9)
                case 0
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    x1_1 = &data_7727aa
                    goto label_10f0ddc
                case 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 
                        0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1e, 0x1f
                    goto label_10efbd8
                case 0x1c
                    goto label_10efc60
                case 0x1d
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    x1_1 = &data_76eb5e
                    goto label_10f0ddc
                case 0x20
                    SystemHintOp_BTI()
                    x8_21 = &x9[2]
                    x1_1 = &data_78bd54
                    goto label_10f1500
        case 0x3f
            SystemHintOp_BTI()
            uint64_t x11_5 = zx.q(zx.d(x9[1]) - 0x4c)
            x8_2 = nullptr
            
            if (x11_5.d u> 0x28)
                goto label_10efbd8
            
            switch (x11_5)
                case 0
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    x1_1 = &data_76a57e
                    goto label_10f0ddc
                case 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 
                        0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 
                        0x1f, 0x22, 0x23, 0x25, 0x26
                    goto label_10efbd8
                case 0x20
                    SystemHintOp_BTI()
                    x8_21 = &x9[2]
                    x1_1 = &data_7727ad
                    goto label_10f1500
                case 0x21
                    SystemHintOp_BTI()
                    x8_25 = &x9[2]
                    x1_1 = &data_7559c6
                    goto label_10f0b90
                case 0x24
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    
                    if (&x9[2] == x10 || zx.d(x9[2]) != 0x5f)
                        int64_t x0_144 = sub_10efb98(arg1)
                        
                        if (x0_144 == 0)
                            goto label_10efbd4
                        
                        x21_24 = arg1[0x266]
                        x20_15 = x0_144
                        int64_t x8_162 = x21_24[1]
                        
                        if (x8_162 + 0x30 u< 0xff0)
                            goto label_10f158c
                        
                        void*** x0_145 = malloc(0x1000)
                        
                        if (x0_145 != 0)
                            x8_162 = 0
                            *x0_145 = x21_24
                            x0_145[1] = 0
                            x21_24 = x0_145
                            arg1[0x266] = x0_145
                        label_10f158c:
                            x9_75 = x8_162 + 0x30
                            x8_144 = x21_24 + x8_162
                            x12_13 = &data_7218c2
                        label_10f15a0:
                            x21_24[1] = x9_75
                            x8_2 = x8_144 + 0x10
                            *x8_2 = &_vtable_for_(anonymous namespace)::itanium_demangle::PostfixExpr{for `(anonymous namespace)::itanium_demangle::Node'}
                            x8_2[1].d = 0x1010131
                            x8_2[2] = x20_15
                            x8_2[3] = x12_13
                            x8_2[4] = x12_13 + 2
                            goto label_10efbd8
                    else
                        *arg1 = &x9[3]
                        int64_t x0_80 = sub_10efb98(arg1)
                        
                        if (x0_80 == 0)
                            goto label_10efbd4
                        
                        x21_17 = arg1[0x266]
                        x20_12 = x0_80
                        int64_t x8_114 = x21_17[1]
                        
                        if (x8_114 + 0x30 u< 0xff0)
                            goto label_10f0c10
                        
                        void*** x0_81 = malloc(0x1000)
                        
                        if (x0_81 != 0)
                            x8_114 = 0
                            *x0_81 = x21_17
                            x0_81[1] = 0
                            x21_17 = x0_81
                            arg1[0x266] = x0_81
                        label_10f0c10:
                            x9_43 = x8_114 + 0x30
                            x8_98 = x21_17 + x8_114
                            x12_11 = &data_7218c2
                        label_10f0c24:
                            x21_17[1] = x9_43
                            x8_2 = x8_98 + 0x10
                            *x8_2 = &_vtable_for_(anonymous namespace)::itanium_demangle::PrefixExpr{for `(anonymous namespace)::itanium_demangle::Node'}
                            x9_44 = x12_11 + 2
                            goto label_10f133c
                case 0x27
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    int64_t x0_83 = sub_10efb98(arg1)
                    
                    if (x0_83 == 0)
                        goto label_10efbd4
                    
                    x21_13 = arg1[0x266]
                    x20_12 = x0_83
                    int64_t x8_116 = x21_13[1]
                    
                    if (x8_116 + 0x30 u< 0xff0)
                        goto label_10f0c8c
                    
                    void** x0_84 = malloc(0x1000)
                    
                    if (x0_84 != 0)
                        x8_116 = 0
                        *x0_84 = x21_13
                        x0_84[1] = 0
                        x21_13 = x0_84
                        arg1[0x266] = x0_84
                    label_10f0c8c:
                        x9_65 = x8_116 + 0x30
                        x8_88 = x21_13 + x8_116
                        x12_11 = &data_7727ad
                        goto label_10f1330
                case 0x28
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    int64_t x0_86 = sub_10efb98(arg1)
                    
                    if (x0_86 == 0)
                        goto label_10efbd4
                    
                    x20_13 = x0_86
                    int64_t x0_88 = sub_10efb98(arg1)
                    
                    if (x0_88 == 0)
                        goto label_10efbd4
                    
                    x22_8 = arg1[0x266]
                    x21_19 = x0_88
                    int64_t x8_118 = x22_8[1]
                    
                    if (x8_118 + 0x30 u< 0xff0)
                        goto label_10f0d0c
                    
                    void** x0_89 = malloc(0x1000)
                    
                    if (x0_89 != 0)
                        x8_118 = 0
                        *x0_89 = x22_8
                        x0_89[1] = 0
                        x22_8 = x0_89
                        arg1[0x266] = x0_89
                    label_10f0d0c:
                        x9_69 = x8_118 + 0x30
                        x8_119 = x22_8 + x8_118
                        x12_12 = &data_779ab9
                        goto label_10f1448
        case 0x40
            SystemHintOp_BTI()
            
            if (zx.d(x9[1]) != 0x75)
                goto label_10efbd4
            
            *arg1 = &x9[2]
            void* x0_21 = sub_10efb98(arg1)
            
            if (x0_21 == 0)
                goto label_10efbd4
            
            x20_4 = x0_21
            void* x0_23 = sub_10efb98(arg1)
            
            if (x0_23 == 0)
                goto label_10efbd4
            
            x21_4 = x0_23
            int64_t x0_25 = sub_10efb98(arg1)
            
            if (x0_25 == 0)
                goto label_10efbd4
            
            x23_3 = arg1[0x266]
            x22_3 = x0_25
            int64_t x8_32 = x23_3[1]
            
            if (x8_32 + 0x30 u< 0xff0)
                goto label_10f0154
            
            void*** x0_26 = malloc(0x1000)
            
            if (x0_26 != 0)
                x8_32 = 0
                *x0_26 = x23_3
                x0_26[1] = 0
                x23_3 = x0_26
                arg1[0x266] = x0_26
            label_10f0154:
                x11_6 = 0x132
                x9_11 = x8_32 + 0x30
                x8_33 = x23_3 + x8_32
                x10_10 = &_vtable_for_(anonymous namespace)::itanium_demangle::ConditionalExpr{for `(anonymous namespace)::itanium_demangle::Node'}
            label_10f1aa0:
                x23_3[1] = x9_11
                x8_2 = x8_33 + 0x10
                *x8_2 = x10_10
                x8_2[1].d = zx.d(x11_6) | 0x1010000
                x8_2[2] = x20_4
                x8_2[3] = x21_4
                x8_2[4] = x22_3
                goto label_10efbd8
        case 0x41
            SystemHintOp_BTI()
            uint64_t x10_12 = zx.q(zx.d(x9[1]) - 0x4d)
            x8_2 = nullptr
            
            if (x10_12.d u> 0x26)
                goto label_10efbd8
            
            switch (x10_12)
                case 0
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    x1_1 = &data_7869ca
                    goto label_10f0ddc
                case 1, 2, 3, 4, 5, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 
                        0x14, 0x15, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x21, 
                        0x22, 0x23, 0x24, 0x25
                    goto label_10efbd8
                case 6
                    SystemHintOp_BTI()
                    x8_25 = &x9[2]
                    x1_1 = &data_76a581
                    goto label_10f0b90
                case 0x16
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    void* x0_66 = sub_10eb95c(arg1)
                    
                    if (x0_66 == 0)
                        goto label_10efbd4
                    
                    x20_3 = x0_66
                    int64_t x0_68 = sub_10efb98(arg1)
                    
                    if (x0_68 == 0)
                        goto label_10efbd4
                    
                    void** x22_7 = arg1[0x266]
                    x21_3 = x0_68
                    int64_t x8_100 = x22_7[1]
                    
                    if (x8_100 + 0x30 u< 0xff0)
                        goto label_10f09a8
                    
                    void** x0_69 = malloc(0x1000)
                    
                    if (x0_69 != 0)
                        x8_100 = 0
                        *x0_69 = x22_7
                        x0_69[1] = 0
                        x22_7 = x0_69
                        arg1[0x266] = x0_69
                    label_10f09a8:
                        x12_7 = "reinterpret_cast"
                        x22_7[1] = x8_100 + 0x30
                        x8_2 = x22_7 + x8_100 + 0x10
                        *x8_2 = &_vtable_for_(anonymous namespace)::itanium_demangle::CastExpr{for `(anonymous namespace)::itanium_demangle::Node'}
                        x9_9 = &data_7939a5[0x10]
                        goto label_10f12b4
                case 0x20
                    SystemHintOp_BTI()
                    x8_21 = &x9[2]
                    x1_1 = &data_7a460c
                    goto label_10f1500
                case 0x26
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    x1_1 = &data_731ed8
                    goto label_10f0ddc
        case 0x42
            SystemHintOp_BTI()
            uint64_t x11_7 = zx.q(zx.d(x9[1]) - 0x50)
            x8_2 = nullptr
            
            if (x11_7.d u> 0x2a)
                goto label_10efbd8
            
            void* x0_112
            
            switch (x11_7)
                case 0
                    SystemHintOp_BTI()
                    void* x8_35 = &x9[2]
                    *arg1 = x8_35
                    int64_t x21_5 = (arg1[3] - arg1[2]) s>> 3
                    
                    if (x8_35 == x10)
                        goto label_10f01d0
                    
                    while (true)
                        if (zx.d(*x8_35) == 0x45)
                            int64_t x2_4 = arg1[3]
                            int64_t x21_29 = x21_5 << 3
                            int64_t x1_13 = arg1[2] + x21_29
                            *arg1 = x8_35 + 1
                            void* x0_158
                            int64_t x1_14
                            x0_158, x1_14 = sub_10f7304(arg1, x1_13, x2_4)
                            void** x23_4 = arg1[0x266]
                            arg1[3] = arg1[2] + x21_29
                            int64_t x8_175 = x23_4[1]
                            
                            if (x8_175 + 0x20 u>= 0xff0)
                                void** x0_159 = malloc(0x1000)
                                
                                if (x0_159 == 0)
                                    goto label_10f1b58
                                
                                x8_175 = 0
                                *x0_159 = x23_4
                                x0_159[1] = 0
                                x23_4 = x0_159
                                arg1[0x266] = x0_159
                            
                            x23_4[1] = x8_175 + 0x20
                            *(x23_4 + x8_175 + 0x10) = &_vtable_for_(anonymous namespace)::itanium_demangle::NodeArrayNode{for `(anonymous namespace)::itanium_demangle::Node'}
                            *(x23_4 + x8_175 + 0x18) = 0x1010100
                            *(x23_4 + x8_175 + 0x20) = x0_158
                            *(x23_4 + x8_175 + 0x28) = x1_14
                            void** x20_20 = arg1[0x266]
                            int64_t x8_176 = x20_20[1]
                            
                            if (x8_176 + 0x40 u>= 0xff0)
                                void** x0_160 = malloc(0x1000)
                                
                                if (x0_160 == 0)
                                    goto label_10f1b58
                                
                                x8_176 = 0
                                *x0_160 = x20_20
                                x0_160[1] = 0
                                x20_20 = x0_160
                                arg1[0x266] = x0_160
                            
                            x20_20[1] = x8_176 + 0x40
                            x8_2 = x20_20 + x8_176 + 0x10
                            *x8_2 = &_vtable_for_(anonymous namespace)::itanium_demangle::EnclosingExpr{for `(anonymous namespace)::itanium_demangle::Node'}
                            x8_2[1].d = 0x1010134
                            x8_2[2] = "sizeof... ("
                            x8_2[3] = &data_78ac4d[0xb]
                            x8_2[4] = x23_4 + x8_175 + 0x10
                            break
                        
                    label_10f01d0:
                        struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NewExpr::VTable
                            ** x0_28 = sub_10edca8(arg1)
                        var_60 = x0_28
                        
                        if (x0_28 == 0)
                            goto label_10efbd4
                        
                        sub_10ede98(&arg1[2], &var_60)
                        x8_35 = *arg1
                        
                        if (x8_35 == arg1[1])
                            goto label_10f01d0
                    
                    goto label_10f113c
                case 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x14, 
                        0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x21, 
                        0x23, 0x25, 0x26, 0x27, 0x28, 0x29
                    goto label_10efbd8
                case 0xa
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    
                    if (x10 == &x9[2])
                        goto label_10efbd4
                    
                    uint32_t x8_133 = zx.d(x9[2])
                    
                    if (x8_133 == 0x66)
                        void* x0_169 = sub_10f2648(arg1)
                        
                        if (x0_169 == 0)
                            goto label_10efbd4
                        
                        void** x21_31 = arg1[0x266]
                        x20_10 = x0_169
                        int64_t x8_190 = x21_31[1]
                        
                        if (x8_190 + 0x40 u< 0xff0)
                            goto label_10f19fc
                        
                        void** x0_170 = malloc(0x1000)
                        
                        if (x0_170 != 0)
                            x8_190 = 0
                            *x0_170 = x21_31
                            x0_170[1] = 0
                            x21_31 = x0_170
                            arg1[0x266] = x0_170
                        label_10f19fc:
                            x21_31[1] = x8_190 + 0x40
                            x11_12 = "sizeof... ("
                            x8_2 = x21_31 + x8_190 + 0x10
                            *x8_2 = &_vtable_for_(anonymous namespace)::itanium_demangle::EnclosingExpr{for `(anonymous namespace)::itanium_demangle::Node'}
                            x8_2[1].d = 0x1010134
                            x9_41 = &data_78ac4d[0xb]
                            goto label_10f1130
                    else
                        if (x8_133 != 0x54)
                            goto label_10efbd4
                        
                        void* x0_101 = sub_10eec18(arg1)
                        
                        if (x0_101 == 0)
                            goto label_10efbd4
                        
                        x21_6 = arg1[0x266]
                        x20_7 = x0_101
                        int64_t x8_134 = x21_6[1]
                        
                        if (x8_134 + 0x20 u< 0xff0)
                            goto label_10f0f78
                        
                        void*** x0_102 = malloc(0x1000)
                        
                        if (x0_102 != 0)
                            x8_134 = 0
                            *x0_102 = x21_6
                            x0_102[1] = 0
                            x21_6 = x0_102
                            arg1[0x266] = x0_102
                        label_10f0f78:
                            x11_10 = 0x136
                            x9_16 = x8_134 + 0x20
                            x8_63 = x21_6 + x8_134
                            x10_13 = &_vtable_for_(anonymous namespace)::itanium_demangle::SizeofParamPackExpr{for `(anonymous namespace)::itanium_demangle::Node'}
                            goto label_10f107c
                case 0x13
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    void* x0_104 = sub_10eb95c(arg1)
                    
                    if (x0_104 == 0)
                        goto label_10efbd4
                    
                    x20_3 = x0_104
                    int64_t x0_106 = sub_10efb98(arg1)
                    
                    if (x0_106 == 0)
                        goto label_10efbd4
                    
                    void** x22_10 = arg1[0x266]
                    x21_3 = x0_106
                    int64_t x8_136 = x22_10[1]
                    
                    if (x8_136 + 0x30 u< 0xff0)
                        goto label_10f1000
                    
                    void** x0_107 = malloc(0x1000)
                    
                    if (x0_107 != 0)
                        x8_136 = 0
                        *x0_107 = x22_10
                        x0_107[1] = 0
                        x22_10 = x0_107
                        arg1[0x266] = x0_107
                    label_10f1000:
                        x12_7 = "static_cast"
                        x22_10[1] = x8_136 + 0x30
                        x8_2 = x22_10 + x8_136 + 0x10
                        *x8_2 = &_vtable_for_(anonymous namespace)::itanium_demangle::CastExpr{for `(anonymous namespace)::itanium_demangle::Node'}
                        x9_9 = &data_78ac41[0xb]
                        goto label_10f12b4
                case 0x20
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    void* x0_109 = sub_10efb98(arg1)
                    
                    if (x0_109 == 0)
                        goto label_10efbd4
                    
                    x21_6 = arg1[0x266]
                    x20_7 = x0_109
                    int64_t x8_139 = x21_6[1]
                    
                    if (x8_139 + 0x20 u< 0xff0)
                        goto label_10f1068
                    
                    void*** x0_110 = malloc(0x1000)
                    
                    if (x0_110 != 0)
                        x8_139 = 0
                        *x0_110 = x21_6
                        x0_110[1] = 0
                        x21_6 = x0_110
                        arg1[0x266] = x0_110
                    label_10f1068:
                        x11_10 = 0x122
                        x9_16 = x8_139 + 0x20
                        x8_63 = x21_6 + x8_139
                        x10_13 = &_vtable_for_(anonymous namespace)::itanium_demangle::ParameterPackExpansion{for `(anonymous namespace)::itanium_demangle::Node'}
                        goto label_10f107c
                case 0x22
                    goto label_10efc60
                case 0x24
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    x0_112 = sub_10eb95c(arg1)
                    
                    if (x0_112 == 0)
                        goto label_10efbd4
                    
                label_10f10c4:
                    void** x21_23 = arg1[0x266]
                    x20_10 = x0_112
                    int64_t x8_142 = x21_23[1]
                    
                    if (x8_142 + 0x40 u< 0xff0)
                        goto label_10f1100
                    
                    void** x0_114 = malloc(0x1000)
                    
                    if (x0_114 != 0)
                        x8_142 = 0
                        *x0_114 = x21_23
                        x0_114[1] = 0
                        x21_23 = x0_114
                        arg1[0x266] = x0_114
                    label_10f1100:
                        x21_23[1] = x8_142 + 0x40
                        x8_72 = x21_23 + x8_142
                        x11_12 = "sizeof ("
                        goto label_10f111c
                case 0x2a
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    x0_112 = sub_10efb98(arg1)
                    
                    if (x0_112 == 0)
                        goto label_10efbd4
                    
                    goto label_10f10c4
        case 0x43
            SystemHintOp_BTI()
            uint64_t x10_5 = zx.q(zx.d(x9[1]) - 0x65)
            x8_2 = nullptr
            
            if (x10_5.d u> 0x12)
                goto label_10efbd8
            
            void* x0_12
            
            switch (x10_5)
                case 0
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    x0_12 = sub_10efb98(arg1)
                    
                    if (x0_12 == 0)
                        goto label_10efbd4
                    
                label_10f0530:
                    void** x21_8 = arg1[0x266]
                    x20_10 = x0_12
                    int64_t x8_71 = x21_8[1]
                    
                    if (x8_71 + 0x40 u< 0xff0)
                        goto label_10f056c
                    
                    void** x0_39 = malloc(0x1000)
                    
                    if (x0_39 != 0)
                        x8_71 = 0
                        *x0_39 = x21_8
                        x0_39[1] = 0
                        x21_8 = x0_39
                        arg1[0x266] = x0_39
                    label_10f056c:
                        x21_8[1] = x8_71 + 0x40
                        x8_72 = x21_8 + x8_71
                        x11_12 = "typeid ("
                    label_10f111c:
                        x8_2 = x8_72 + 0x10
                        *x8_2 = &_vtable_for_(anonymous namespace)::itanium_demangle::EnclosingExpr{for `(anonymous namespace)::itanium_demangle::Node'}
                        x8_2[1].d = 0x1010134
                        x9_41 = &x11_12[8]
                        goto label_10f1130
                case 1, 2, 3, 5, 6, 8, 9, 0xa, 0xb, 0xc, 0xe, 0xf, 0x10, 0x11
                    goto label_10efbd8
                case 4
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    x0_12 = sub_10eb95c(arg1)
                    
                    if (x0_12 == 0)
                        goto label_10efbd4
                    
                    goto label_10f0530
                case 7
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    void* x0_41 = sub_10eb95c(arg1)
                    
                    if (x0_41 == 0)
                        goto label_10efbd4
                    
                    x20_4 = x0_41
                    int64_t x22_4 = (arg1[3] - arg1[2]) s>> 3
                    char* x8_76
                    
                    while (true)
                        x8_76 = *arg1
                        
                        if (x8_76 != arg1[1] && zx.d(*x8_76) == 0x45)
                            break
                        
                        struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NewExpr::VTable
                            ** x0_43 = sub_10f3604(arg1)
                        var_60 = x0_43
                        
                        if (x0_43 == 0)
                            goto label_10efbd4
                        
                        sub_10ede98(&arg1[2], &var_60)
                    
                    int64_t x2_5 = arg1[3]
                    int64_t x22_20 = x22_4 << 3
                    int64_t x1_15 = arg1[2] + x22_20
                    *arg1 = &x8_76[1]
                    void* x0_162
                    int64_t x1_16
                    x0_162, x1_16 = sub_10f7304(arg1, x1_15, x2_5)
                    x23_3 = arg1[0x266]
                    x21_4 = x0_162
                    arg1[3] = arg1[2] + x22_20
                    int64_t x8_181 = x23_3[1]
                    x22_3 = x1_16
                    
                    if (x8_181 + 0x30 u< 0xff0)
                        goto label_10f1898
                    
                    void*** x0_163 = malloc(0x1000)
                    
                    if (x0_163 != 0)
                        x8_181 = 0
                        *x0_163 = x23_3
                        x0_163[1] = 0
                        x23_3 = x0_163
                        arg1[0x266] = x0_163
                    label_10f1898:
                        x11_6 = 0x13d
                        x9_11 = x8_181 + 0x30
                        x8_33 = x23_3 + x8_181
                        x10_10 = &_vtable_for_(anonymous namespace)::itanium_demangle::InitListExpr{for `(anonymous namespace)::itanium_demangle::Node'}
                        goto label_10f1aa0
                case 0xd
                    SystemHintOp_BTI()
                    void** x20_11 = arg1[0x266]
                    *arg1 = &x9[2]
                    int64_t x8_78 = x20_11[1]
                    
                    if (x8_78 + 0x20 u< 0xff0)
                        goto label_10f0650
                    
                    void** x0_45 = malloc(0x1000)
                    
                    if (x0_45 != 0)
                        x8_78 = 0
                        *x0_45 = x20_11
                        x0_45[1] = 0
                        x20_11 = x0_45
                        arg1[0x266] = x0_45
                    label_10f0650:
                        x20_11[1] = x8_78 + 0x20
                        x8_2 = x20_11 + x8_78 + 0x10
                        *x8_2 = &_vtable_for_(anonymous namespace)::itanium_demangle::NameType{for `(anonymous namespace)::itanium_demangle::Node'}
                        x8_2[1].d = 0x1010107
                        x8_2[2] = "throw"
                        x8_2[3] = &data_72a5ab[5]
                        goto label_10efbd8
                case 0x12
                    SystemHintOp_BTI()
                    *arg1 = &x9[2]
                    void* x0_47 = sub_10efb98(arg1)
                    
                    if (x0_47 == 0)
                        goto label_10efbd4
                    
                    x21_6 = arg1[0x266]
                    x20_7 = x0_47
                    int64_t x8_81 = x21_6[1]
                    
                    if (x8_81 + 0x20 u< 0xff0)
                        goto label_10f06b8
                    
                    void*** x0_48 = malloc(0x1000)
                    
                    if (x0_48 != 0)
                        x8_81 = 0
                        *x0_48 = x21_6
                        x0_48[1] = 0
                        x21_6 = x0_48
                        arg1[0x266] = x0_48
                    label_10f06b8:
                        x11_10 = 0x13f
                        x9_16 = x8_81 + 0x20
                        x8_63 = x21_6 + x8_81
                        x10_13 = &_vtable_for_(anonymous namespace)::itanium_demangle::ThrowExpr{for `(anonymous namespace)::itanium_demangle::Node'}
                    label_10f107c:
                        x21_6[1] = x9_16
                        x8_2 = x8_63 + 0x10
                        *x8_2 = x10_13
                        x8_2[1].d = zx.d(x11_10) | 0x1010000
                        x8_2[2] = x20_7
                        goto label_10efbd8
label_10f1b58:
std::terminate()
noreturn
