// 函数: sub_10eb95c
// 地址: 0x10eb95c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
void** x19 = arg1
struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::ParameterPackExpansion::VTable
    ** result_1 = nullptr
char* x8_1 = *arg1
void* result_10 = arg1[1]
int64_t x9 = result_10 - x8_1
struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::ParameterPackExpansion::VTable
    ** result_11

if (result_10 == x8_1)
label_10ec3ec:
    SystemHintOp_BTI()
    result_11 = sub_10fc8c8(x19)
label_10ec3f8:
    result_1 = result_11
    
    if (result_11 == 0)
        goto label_10eca20
    
    goto label_10ec408

uint32_t x11_1 = zx.d(*x8_1)
uint64_t x10_1 = zx.q(x11_1 - 0x41)

if (x10_1.d u> 0x39)
    goto label_10ec3ec

void* x0_44
void* x8_7
struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::ParameterPackExpansion::VTable
    ** result_12
struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::ParameterPackExpansion::VTable
    * x8_78
void* x8_83
int64_t x9_6
char const* const x9_14
int64_t x9_22
int64_t x9_24
int64_t x9_29
int64_t x9_44
int64_t x9_48
int64_t x9_50
int64_t x9_57
int64_t x9_59
int64_t x9_61
int64_t x9_71
int64_t x9_74
char x10_5
int32_t x10_6
struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::ParameterPackExpansion::VTable
    * x10_7
char const* const x11_6
int16_t x11_11
char const* const x12_2
void* result
void* x20_2
void* x20_3
void* x20_4
void* x20_5
void* x20_6
struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::ParameterPackExpansion::VTable
    ** result_13
void* x20_8
void* x20_10
void* x20_11
void* x20_13
void* x20_14
void** x21_1
void** x21_2
void** x21_3
void** x21_4
void** x21_5
void** x21_9
void** x21_11
void** x21_15
void** x21_17
void** x21_18
struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::ParameterPackExpansion::VTable
    ** result_18
void* x21_19
void** x23_3
void** x23_4

switch (x10_1)
    case 0
        SystemHintOp_BTI()
        
        if (x8_1 == result_10)
            result_11 = nullptr
            goto label_10ec3f8
        
        *x19 = &x8_1[1]
        void* x8_18
        void* x8_74
        
        if (result_10 == &x8_1[1])
        label_10ec7d4:
            result_11 = sub_10efb98(x19)
            
            if (result_11 == 0)
                goto label_10ec3f8
            
            x8_74 = *x19
            
            if (x8_74 == x19[1] || zx.d(*x8_74) != 0x5f)
                result_11 = nullptr
                goto label_10ec3f8
            
            result_13 = result_11
            x8_18 = x8_74 + 1
        else if (zx.d(x8_1[1]) - 0x30 u<= 9)
            void* x8_75 = &x8_1[2]
            
            while (true)
                *x19 = x8_75
                
                if (result_10 == x8_75)
                    break
                
                uint32_t x9_64 = zx.d(*x8_75)
                x8_75 += 1
                
                if (x9_64 - 0x30 u>= 0xa)
                    result_10 = x8_75 - 1
                    break
            
            void** x24_1 = x19[0x266]
            int64_t x8_76 = x24_1[1]
            
            if (x8_76 + 0x20 u>= 0xff0)
                void** x0_41 = malloc(0x1000)
                
                if (x0_41 == 0)
                    std::terminate()
                    noreturn
                
                x8_76 = 0
                *x0_41 = x24_1
                x0_41[1] = 0
                x24_1 = x0_41
                x19[0x266] = x0_41
            
            x24_1[1] = x8_76 + 0x20
            result_13 = x24_1 + x8_76 + 0x10
            *result_13 = &_vtable_for_(anonymous namespace)::itanium_demangle::NameType{for `(anonymous namespace)::itanium_demangle::Node'}
            result_13[1].d = 0x1010107
            result_13[2] = &x8_1[1]
            result_13[3] = result_10
            x8_74 = *x19
            
            if (x8_74 == x19[1] || zx.d(*x8_74) != 0x5f)
                result_11 = nullptr
                goto label_10ec3f8
            
            x8_18 = x8_74 + 1
        else
            if (zx.d(x8_1[1]) != 0x5f)
                goto label_10ec7d4
            
            result_13 = nullptr
            x8_18 = &x8_1[2]
        *x19 = x8_18
        result_11 = sub_10eb95c(x19)
        
        if (result_11 == 0)
            goto label_10ec3f8
        
        x23_3 = x19[0x266]
        result_18 = result_11
        int64_t x8_77 = x23_3[1]
        
        if (x8_77 + 0x20 u>= 0xff0)
            void*** x0_43 = malloc(0x1000)
            
            if (x0_43 == 0)
                std::terminate()
                noreturn
            
            x8_77 = 0
            *x0_43 = x23_3
            x0_43[1] = 0
            x23_3 = x0_43
            x19[0x266] = x0_43
        
        x9_71 = x8_77 + 0x20
        x0_44 = x23_3 + x8_77
        x8_78 = &_vtable_for_(anonymous namespace)::itanium_demangle::ArrayType{for `(anonymous namespace)::itanium_demangle::Node'}
        x10_6 = 0x100000e
    case 1, 4, 7, 8, 9, 0xb, 0xd, 0x10, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 
            0x2a, 0x2f, 0x30
        goto label_10ec3ec
    case 2
        SystemHintOp_BTI()
        *x19 = &x8_1[1]
        void* result_2 = sub_10eb95c(x19)
        result = result_2
        
        if (result_2 == 0)
            goto label_10eca24
        
        void** x21_6 = x19[0x266]
        int64_t x8_20 = x21_6[1]
        
        if (x8_20 + 0x30 u>= 0xff0)
            void** x0_8 = malloc(0x1000)
            
            if (x0_8 == 0)
                std::terminate()
                noreturn
            
            x8_20 = 0
            *x0_8 = x21_6
            x0_8[1] = 0
            x21_6 = x0_8
            x19[0x266] = x0_8
        
        x12_2 = " complex"
        x21_6[1] = x8_20 + 0x30
        result_12 = x21_6 + x8_20 + 0x10
        *result_12 = &_vtable_for_(anonymous namespace)::itanium_demangle::PostfixQualifiedType{for `(anonymous namespace)::itanium_demangle::Node'}
        x9_14 = &data_759c85[8]
    label_10ebdfc:
        result_12[1].d = 0x1010105
        result_12[2] = result
        result_12[3] = x12_2
        result_12[4] = x9_14
        goto label_10eca08
    case 3
        SystemHintOp_BTI()
        
        if (x9 u< 2)
            goto label_10eca20
        
        result = nullptr
        uint64_t x9_31 = zx.q(zx.d(x8_1[1]) - 0x4f)
        
        if (x9_31.d u> 0x29)
            goto label_10eca24
        
        switch (x9_31)
            case 0, 0x20, 0x28, 0x29
                goto label_10ec18c
            case 1, 2, 3, 4, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x13, 0x18, 
                    0x1b, 0x1c, 0x1d, 0x1e, 0x22, 0x23
                goto label_10eca24
            case 5, 0x25
                SystemHintOp_BTI()
                result_11 = sub_10eefc0(x19)
                goto label_10ec3f8
            case 0x12
                SystemHintOp_BTI()
                x21_4 = x19[0x266]
                *x19 = &x8_1[2]
                int64_t x8_88 = x21_4[1]
                
                if (x8_88 + 0x20 u>= 0xff0)
                    void** x0_52 = malloc(0x1000)
                    
                    if (x0_52 == 0)
                        std::terminate()
                        noreturn
                    
                    x8_88 = 0
                    *x0_52 = x21_4
                    x0_52[1] = 0
                    x21_4 = x0_52
                    x19[0x266] = x0_52
                
                x9_61 = x8_88 + 0x20
                x20_5 = x21_4 + x8_88
                x11_6 = "auto"
                goto label_10ec7b8
            case 0x14
                SystemHintOp_BTI()
                x21_17 = x19[0x266]
                *x19 = &x8_1[2]
                int64_t x8_90 = x21_17[1]
                
                if (x8_90 + 0x20 u>= 0xff0)
                    void*** x0_53 = malloc(0x1000)
                    
                    if (x0_53 == 0)
                        std::terminate()
                        noreturn
                    
                    x8_90 = 0
                    *x0_53 = x21_17
                    x0_53[1] = 0
                    x21_17 = x0_53
                    x19[0x266] = x0_53
                
                x9_50 = x8_90 + 0x20
                x20_13 = x21_17 + x8_90
                x11_6 = "decltype(auto)"
                goto label_10ec614
            case 0x15
                SystemHintOp_BTI()
                x21_18 = x19[0x266]
                *x19 = &x8_1[2]
                int64_t x8_92 = x21_18[1]
                
                if (x8_92 + 0x20 u>= 0xff0)
                    void*** x0_54 = malloc(0x1000)
                    
                    if (x0_54 == 0)
                        std::terminate()
                        noreturn
                    
                    x8_92 = 0
                    *x0_54 = x21_18
                    x0_54[1] = 0
                    x21_18 = x0_54
                    x19[0x266] = x0_54
                
                x9_57 = x8_92 + 0x20
                x20_14 = x21_18 + x8_92
                x11_6 = "decimal64"
                goto label_10ec6e0
            case 0x16
                SystemHintOp_BTI()
                x21_9 = x19[0x266]
                *x19 = &x8_1[2]
                int64_t x8_94 = x21_9[1]
                
                if (x8_94 + 0x20 u>= 0xff0)
                    void** x0_55 = malloc(0x1000)
                    
                    if (x0_55 == 0)
                        std::terminate()
                        noreturn
                    
                    x8_94 = 0
                    *x0_55 = x21_9
                    x0_55[1] = 0
                    x21_9 = x0_55
                    x19[0x266] = x0_55
                
                x9_22 = x8_94 + 0x20
                x20_8 = x21_9 + x8_94
                x11_6 = "decimal128"
                goto label_10ebfa0
            case 0x17
                SystemHintOp_BTI()
                x21_18 = x19[0x266]
                *x19 = &x8_1[2]
                int64_t x8_96 = x21_18[1]
                
                if (x8_96 + 0x20 u>= 0xff0)
                    void*** x0_56 = malloc(0x1000)
                    
                    if (x0_56 == 0)
                        std::terminate()
                        noreturn
                    
                    x8_96 = 0
                    *x0_56 = x21_18
                    x0_56[1] = 0
                    x21_18 = x0_56
                    x19[0x266] = x0_56
                
                x9_57 = x8_96 + 0x20
                x20_14 = x21_18 + x8_96
                x11_6 = "decimal32"
                goto label_10ec6e0
            case 0x19
                SystemHintOp_BTI()
                x21_18 = x19[0x266]
                *x19 = &x8_1[2]
                int64_t x8_98 = x21_18[1]
                
                if (x8_98 + 0x20 u>= 0xff0)
                    void** x0_57 = malloc(0x1000)
                    
                    if (x0_57 == 0)
                        std::terminate()
                        noreturn
                    
                    x8_98 = 0
                    *x0_57 = x21_18
                    x0_57[1] = 0
                    x21_18 = x0_57
                    x19[0x266] = x0_57
                
                x9_57 = x8_98 + 0x20
                x20_14 = x21_18 + x8_98
                x11_6 = "decimal16"
                goto label_10ec6e0
            case 0x1a
                SystemHintOp_BTI()
                x21_3 = x19[0x266]
                *x19 = &x8_1[2]
                int64_t x8_100 = x21_3[1]
                
                if (x8_100 + 0x20 u>= 0xff0)
                    void*** x0_58 = malloc(0x1000)
                    
                    if (x0_58 == 0)
                        std::terminate()
                        noreturn
                    
                    x8_100 = 0
                    *x0_58 = x21_3
                    x0_58[1] = 0
                    x21_3 = x0_58
                    x19[0x266] = x0_58
                
                x9_6 = x8_100 + 0x20
                x20_4 = x21_3 + x8_100
                x11_6 = "char32_t"
                goto label_10ebbf4
            case 0x1f
                SystemHintOp_BTI()
                x21_17 = x19[0x266]
                *x19 = &x8_1[2]
                int64_t x8_102 = x21_17[1]
                
                if (x8_102 + 0x20 u>= 0xff0)
                    void** x0_59 = malloc(0x1000)
                    
                    if (x0_59 == 0)
                        std::terminate()
                        noreturn
                    
                    x8_102 = 0
                    *x0_59 = x21_17
                    x0_59[1] = 0
                    x21_17 = x0_59
                    x19[0x266] = x0_59
                
                x9_50 = x8_102 + 0x20
                x20_13 = x21_17 + x8_102
                x11_6 = "std::nullptr_t"
                goto label_10ec614
            case 0x21
                SystemHintOp_BTI()
                *x19 = &x8_1[2]
                void* result_9 = sub_10eb95c(x19)
                result = result_9
                
                if (result_9 == 0)
                    goto label_10eca24
                
                void** x21_20 = x19[0x266]
                int64_t x8_104 = x21_20[1]
                
                if (x8_104 + 0x20 u>= 0xff0)
                    void** x0_61 = malloc(0x1000)
                    
                    if (x0_61 == 0)
                        std::terminate()
                        noreturn
                    
                    x8_104 = 0
                    *x0_61 = x21_20
                    x0_61[1] = 0
                    x21_20 = x0_61
                    x19[0x266] = x0_61
                
                x21_20[1] = x8_104 + 0x20
                result_12 = x21_20 + x8_104 + 0x10
                *result_12 = &_vtable_for_(anonymous namespace)::itanium_demangle::ParameterPackExpansion{for `(anonymous namespace)::itanium_demangle::Node'}
                result_12[1].d = 0x1010122
                result_12[2] = result
                goto label_10eca08
            case 0x24
                SystemHintOp_BTI()
                x21_3 = x19[0x266]
                *x19 = &x8_1[2]
                int64_t x8_107 = x21_3[1]
                
                if (x8_107 + 0x20 u>= 0xff0)
                    void** x0_62 = malloc(0x1000)
                    
                    if (x0_62 == 0)
                        std::terminate()
                        noreturn
                    
                    x8_107 = 0
                    *x0_62 = x21_3
                    x0_62[1] = 0
                    x21_3 = x0_62
                    x19[0x266] = x0_62
                
                x9_6 = x8_107 + 0x20
                x20_4 = x21_3 + x8_107
                x11_6 = "char16_t"
                goto label_10ebbf4
            case 0x26
                SystemHintOp_BTI()
                x21_11 = x19[0x266]
                *x19 = &x8_1[2]
                int64_t x8_109 = x21_11[1]
                
                if (x8_109 + 0x20 u>= 0xff0)
                    void** x0_63 = malloc(0x1000)
                    
                    if (x0_63 == 0)
                        std::terminate()
                        noreturn
                    
                    x8_109 = 0
                    *x0_63 = x21_11
                    x0_63[1] = 0
                    x21_11 = x0_63
                    x19[0x266] = x0_63
                
                x9_29 = x8_109 + 0x20
                x20_10 = x21_11 + x8_109
                x11_6 = "char8_t"
                goto label_10ec144
            case 0x27
                SystemHintOp_BTI()
                *x19 = &x8_1[2]
                
                if (result_10 != &x8_1[2])
                    uint32_t x9_89 = zx.d(x8_1[2])
                    
                    if (x9_89 u>= 0x31)
                        if (x9_89 u<= 0x39)
                            void* x8_110 = &x8_1[3]
                            
                            while (true)
                                *x19 = x8_110
                                
                                if (result_10 == x8_110)
                                    break
                                
                                uint32_t x9_90 = zx.d(*x8_110)
                                x8_110 += 1
                                
                                if (x9_90 - 0x30 u>= 0xa)
                                    result_10 = x8_110 - 1
                                    break
                            
                            void** x24_2 = x19[0x266]
                            int64_t x8_111 = x24_2[1]
                            
                            if (x8_111 + 0x20 u>= 0xff0)
                                void** x0_64 = malloc(0x1000)
                                
                                if (x0_64 == 0)
                                    std::terminate()
                                    noreturn
                                
                                x8_111 = 0
                                *x0_64 = x24_2
                                x0_64[1] = 0
                                x24_2 = x0_64
                                x19[0x266] = x0_64
                            
                            x24_2[1] = x8_111 + 0x20
                            *(x24_2 + x8_111 + 0x10) = &_vtable_for_(anonymous namespace)::itanium_demangle::NameType{for `(anonymous namespace)::itanium_demangle::Node'}
                            *(x24_2 + x8_111 + 0x18) = 0x1010107
                            *(x24_2 + x8_111 + 0x20) = &x8_1[2]
                            *(x24_2 + x8_111 + 0x28) = result_10
                            void* x8_112 = *x19
                            int64_t x9_94 = x19[1]
                            
                            if (x8_112 == x9_94 || zx.d(*x8_112) != 0x5f)
                                result_11 = nullptr
                                goto label_10ec3f8
                            
                            *x19 = x8_112 + 1
                            
                            if (x8_112 + 1 != x9_94 && zx.d(*(x8_112 + 1)) == 0x70)
                                void** x20_17 = x19[0x266]
                                *x19 = x8_112 + 2
                                int64_t x8_114 = x20_17[1]
                                
                                if (x8_114 + 0x20 u>= 0xff0)
                                    void** x0_65 = malloc(0x1000)
                                    
                                    if (x0_65 == 0)
                                        std::terminate()
                                        noreturn
                                    
                                    x8_114 = 0
                                    *x0_65 = x20_17
                                    x0_65[1] = 0
                                    x20_17 = x0_65
                                    x19[0x266] = x0_65
                                
                                x20_17[1] = x8_114 + 0x20
                                result_11 = x20_17 + x8_114 + 0x10
                                *result_11 = &_vtable_for_(anonymous namespace)::itanium_demangle::PixelVectorType{for `(anonymous namespace)::itanium_demangle::Node'}
                                result_11[1].d = 0x101011a
                                result_11[2] = x24_2 + x8_111 + 0x10
                                goto label_10ec3f8
                            
                            result_11 = sub_10eb95c(x19)
                            
                            if (result_11 == 0)
                                goto label_10ec3f8
                            
                            void** x21_22 = x19[0x266]
                            struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::ParameterPackExpansion::VTable
                                ** result_16 = result_11
                            int64_t x8_120 = x21_22[1]
                            
                            if (x8_120 + 0x20 u>= 0xff0)
                                void** x0_74 = malloc(0x1000)
                                
                                if (x0_74 == 0)
                                    std::terminate()
                                    noreturn
                                
                                x8_120 = 0
                                *x0_74 = x21_22
                                x0_74[1] = 0
                                x21_22 = x0_74
                                x19[0x266] = x0_74
                            
                            x21_22[1] = x8_120 + 0x20
                            result_11 = x21_22 + x8_120 + 0x10
                            *result_11 = &_vtable_for_(anonymous namespace)::itanium_demangle::VectorType{for `(anonymous namespace)::itanium_demangle::Node'}
                            result_11[1].d = 0x1010119
                            result_11[2] = result_16
                            result_11[3] = x24_2 + x8_111 + 0x10
                            goto label_10ec3f8
                        
                        if (x9_89 == 0x5f)
                            *x19 = &x8_1[3]
                            result_11 = sub_10eb95c(x19)
                            
                            if (result_11 == 0)
                                goto label_10ec3f8
                            
                            void** x21_21 = x19[0x266]
                            struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::ParameterPackExpansion::VTable
                                ** result_15 = result_11
                            int64_t x8_116 = x21_21[1]
                            
                            if (x8_116 + 0x20 u>= 0xff0)
                                void** x0_68 = malloc(0x1000)
                                
                                if (x0_68 == 0)
                                    std::terminate()
                                    noreturn
                                
                                x8_116 = 0
                                *x0_68 = x21_21
                                x0_68[1] = 0
                                x21_21 = x0_68
                                x19[0x266] = x0_68
                            
                            x21_21[1] = x8_116 + 0x20
                            result_11 = x21_21 + x8_116 + 0x10
                            *result_11 = &_vtable_for_(anonymous namespace)::itanium_demangle::VectorType{for `(anonymous namespace)::itanium_demangle::Node'}
                            result_11[1].d = 0x1010119
                            result_11[2] = result_15
                            result_11[3] = 0
                            goto label_10ec3f8
                
                result_11 = sub_10efb98(x19)
                
                if (result_11 == 0)
                    goto label_10ec3f8
                
                char* x8_117 = *x19
                
                if (x8_117 == x19[1] || zx.d(*x8_117) != 0x5f)
                    result_11 = nullptr
                    goto label_10ec3f8
                
                result_13 = result_11
                *x19 = &x8_117[1]
                result_11 = sub_10eb95c(x19)
                
                if (result_11 == 0)
                    goto label_10ec3f8
                
                x23_3 = x19[0x266]
                result_18 = result_11
                int64_t x8_119 = x23_3[1]
                
                if (x8_119 + 0x20 u>= 0xff0)
                    void** x0_72 = malloc(0x1000)
                    
                    if (x0_72 == 0)
                        std::terminate()
                        noreturn
                    
                    x8_119 = 0
                    *x0_72 = x23_3
                    x0_72[1] = 0
                    x23_3 = x0_72
                    x19[0x266] = x0_72
                
                x9_71 = x8_119 + 0x20
                x0_44 = x23_3 + x8_119
                x8_78 = &_vtable_for_(anonymous namespace)::itanium_demangle::VectorType{for `(anonymous namespace)::itanium_demangle::Node'}
                x10_6 = 0x1010119
    case 5
    label_10ec18c:
        SystemHintOp_BTI()
        result_11 = sub_10fc000(x19)
        goto label_10ec3f8
    case 6
        SystemHintOp_BTI()
        *x19 = &x8_1[1]
        void* result_3 = sub_10eb95c(x19)
        result = result_3
        
        if (result_3 == 0)
            goto label_10eca24
        
        void** x21_7 = x19[0x266]
        int64_t x8_23 = x21_7[1]
        
        if (x8_23 + 0x30 u>= 0xff0)
            void** x0_10 = malloc(0x1000)
            
            if (x0_10 == 0)
                std::terminate()
                noreturn
            
            x8_23 = 0
            *x0_10 = x21_7
            x0_10[1] = 0
            x21_7 = x0_10
            x19[0x266] = x0_10
        
        x12_2 = " imaginary"
        x21_7[1] = x8_23 + 0x30
        result_12 = x21_7 + x8_23 + 0x10
        *result_12 = &_vtable_for_(anonymous namespace)::itanium_demangle::PostfixQualifiedType{for `(anonymous namespace)::itanium_demangle::Node'}
        x9_14 = &data_76ebc1[0xa]
        goto label_10ebdfc
    case 0xa, 0x15, 0x31
        SystemHintOp_BTI()
        uint64_t x10_2 = zx.q(x11_1 == 0x72 ? 1 : 0)
        
        if (x9 u> x10_2)
            int32_t x11_2
            
            x11_2 = x11_1 == 0x72 ? 2 : 1
            
            if (zx.d(x8_1[x10_2]) == 0x56)
                x10_2 = zx.q(x11_2)
            else
                x10_2 = zx.q(x10_2.d)
        
        uint64_t x11_4 = zx.q(x10_2.d)
        
        if (x9 u> x11_4)
            if (zx.d(x8_1[x11_4]) == 0x4b)
                x11_4 = zx.q(x10_2.d + 1)
            else
                x11_4 = zx.q(x10_2.d)
            
            x10_2 = zx.q(x11_4.d)
        
        if (x9 u<= x11_4)
            goto label_10eba5c
        
        uint32_t x11_5 = zx.d(x8_1[x11_4])
        
        if (x11_5 == 0x46)
            goto label_10ec18c
        
        if (x11_5 != 0x44 || x9 u<= zx.q(x10_2.d) + 1)
            goto label_10eba5c
        
        uint64_t x8_3 = zx.q(zx.d(x8_1[zx.q(x10_2.d) + 1]) - 0x4f)
        
        if (x8_3.d u> 0x29 || (1 << x8_3 & 0x30100000001) == 0)
            goto label_10eba5c
        
        goto label_10ec18c
    case 0xc
        SystemHintOp_BTI()
        
        if (x8_1 == result_10)
            result_11 = nullptr
            goto label_10ec3f8
        
        *x19 = &x8_1[1]
        result_11 = sub_10eb95c(x19)
        
        if (result_11 == 0)
            goto label_10ec3f8
        
        struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::ParameterPackExpansion::VTable
            ** result_14 = result_11
        result_11 = sub_10eb95c(x19)
        
        if (result_11 == 0)
            goto label_10ec3f8
        
        void** x23_2 = x19[0x266]
        struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::ParameterPackExpansion::VTable
            ** result_17 = result_11
        int64_t x8_46 = x23_2[1]
        
        if (x8_46 + 0x20 u>= 0xff0)
            void** x0_22 = malloc(0x1000)
            
            if (x0_22 == 0)
                std::terminate()
                noreturn
            
            x8_46 = 0
            *x0_22 = x23_2
            x0_22[1] = 0
            x23_2 = x0_22
            x19[0x266] = x0_22
        
        x23_2[1] = x8_46 + 0x20
        char x9_34 = *(result_17 + 9)
        result_11 = x23_2 + x8_46 + 0x10
        *result_11 = &_vtable_for_(anonymous namespace)::itanium_demangle::PointerToMemberType{for `(anonymous namespace)::itanium_demangle::Node'}
        result_11[1].b = 0xd
        *(result_11 + 0xa) = 0x101
        *(result_11 + 9) = x9_34
        result_11[2] = result_14
        result_11[3] = result_17
        goto label_10ec3f8
    case 0xe
        SystemHintOp_BTI()
        *x19 = &x8_1[1]
        void* result_5 = sub_10eb95c(x19)
        result = result_5
        
        if (result_5 == 0)
            goto label_10eca24
        
        void** x21_12 = x19[0x266]
        int64_t x8_48 = x21_12[1]
        
        if (x8_48 + 0x20 u>= 0xff0)
            void** x0_25 = malloc(0x1000)
            
            if (x0_25 == 0)
                std::terminate()
                noreturn
            
            x8_48 = 0
            *x0_25 = x21_12
            x0_25[1] = 0
            x21_12 = x0_25
            x19[0x266] = x0_25
        
        x21_12[1] = x8_48 + 0x20
        x10_5 = *(result + 9)
        result_12 = x21_12 + x8_48 + 0x10
        *result_12 = &_vtable_for_(anonymous namespace)::itanium_demangle::ReferenceType{for `(anonymous namespace)::itanium_demangle::Node'}
        result_12[1].b = 0xc
        *(result_12 + 0xa) = 0x101
        result_12[2] = result
        result_12[3].d = 1
    label_10ec3c4:
        *(result_12 + 0x1c) = 0
        *(result_12 + 9) = x10_5
        goto label_10eca08
    case 0xf
        SystemHintOp_BTI()
        *x19 = &x8_1[1]
        void* result_6 = sub_10eb95c(x19)
        result = result_6
        
        if (result_6 == 0)
            goto label_10eca24
        
        void** x21_13 = x19[0x266]
        int64_t x8_51 = x21_13[1]
        
        if (x8_51 + 0x20 u>= 0xff0)
            void** x0_27 = malloc(0x1000)
            
            if (x0_27 == 0)
                std::terminate()
                noreturn
            
            x8_51 = 0
            *x0_27 = x21_13
            x0_27[1] = 0
            x21_13 = x0_27
            x19[0x266] = x0_27
        
        x21_13[1] = x8_51 + 0x20
        char x9_39 = *(result + 9)
        result_12 = x21_13 + x8_51 + 0x10
        *result_12 = &_vtable_for_(anonymous namespace)::itanium_demangle::PointerType{for `(anonymous namespace)::itanium_demangle::Node'}
        result_12[1].b = 0xb
        *(result_12 + 0xa) = 0x101
        result_12[2] = result
        *(result_12 + 9) = x9_39
    label_10eca08:
        result_1 = result_12
    label_10ec408:
        sub_10ede98(&x19[0x25], &result_1)
        result = result_1
        goto label_10eca24
    case 0x11
        SystemHintOp_BTI()
        *x19 = &x8_1[1]
        void* result_7 = sub_10eb95c(x19)
        result = result_7
        
        if (result_7 == 0)
            goto label_10eca24
        
        void** x21_14 = x19[0x266]
        int64_t x8_54 = x21_14[1]
        
        if (x8_54 + 0x20 u>= 0xff0)
            void** x0_29 = malloc(0x1000)
            
            if (x0_29 == 0)
                std::terminate()
                noreturn
            
            x8_54 = 0
            *x0_29 = x21_14
            x0_29[1] = 0
            x21_14 = x0_29
            x19[0x266] = x0_29
        
        x21_14[1] = x8_54 + 0x20
        x10_5 = *(result + 9)
        result_12 = x21_14 + x8_54 + 0x10
        *result_12 = &_vtable_for_(anonymous namespace)::itanium_demangle::ReferenceType{for `(anonymous namespace)::itanium_demangle::Node'}
        result_12[1].b = 0xc
        *(result_12 + 0xa) = 0x101
        result_12[2] = result
        result_12[3].d = 0
        goto label_10ec3c4
    case 0x12
        SystemHintOp_BTI()
        
        if (x9 u< 2)
            goto label_10ec3ec
        
        uint32_t x8_56 = zx.d(x8_1[1])
        
        if (x8_56 == 0 || x8_56 == 0x74)
            goto label_10ec3ec
        
        void* result_8 = sub_10ee40c(x19)
        result = result_8
        
        if (result_8 == 0 || zx.d(x19[0x61].b) == 0)
            goto label_10eca24
        
        void* x8_80 = *x19
        
        if (x19[1] == x8_80 || zx.d(*x8_80) != 0x49)
            goto label_10eca24
        
        goto label_10ec93c
    case 0x13
        SystemHintOp_BTI()
        int32_t x8_26
        
        if (x9 u>= 2)
            x8_26 = zx.d(x8_1[1]) - 0x65
        
        if (x9 u>= 2 && x8_26 u<= 0x10 && (1 << x8_26 & 0x14001) != 0)
            goto label_10ec3ec
        
        struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::ParameterPackExpansion::VTable
            ** result_4 = sub_10eec18(x19)
        result = result_4
        result_1 = result_4
        
        if (result_4 == 0)
            goto label_10eca24
        
        if (zx.d(x19[0x61].b) == 0)
            goto label_10ec408
        
        void* x8_29 = *x19
        
        if (x19[1] == x8_29 || zx.d(*x8_29) != 0x49)
            goto label_10ec408
        
    label_10ec93c:
        void* x0_47 = sub_10ee7a8(x19, 0)
        
        if (x0_47 == 0)
            goto label_10eca20
        
        x23_4 = x19[0x266]
        x21_19 = x0_47
        int64_t x8_82 = x23_4[1]
        
        if (x8_82 + 0x20 u>= 0xff0)
            void** x0_48 = malloc(0x1000)
            
            if (x0_48 == 0)
                std::terminate()
                noreturn
            
            x8_82 = 0
            *x0_48 = x23_4
            x0_48[1] = 0
            x23_4 = x0_48
            x19[0x266] = x0_48
        
        x11_11 = 0x125
        x9_74 = x8_82 + 0x20
        x8_83 = x23_4 + x8_82
        x10_7 = &_vtable_for_(anonymous namespace)::itanium_demangle::NameWithTemplateArgs{for `(anonymous namespace)::itanium_demangle::Node'}
        goto label_10ec9f8
    case 0x14
    label_10eba5c:
        SystemHintOp_BTI()
        result_11 = sub_10fc508(x19)
        goto label_10ec3f8
    case 0x20
        SystemHintOp_BTI()
        x21_15 = x19[0x266]
        *x19 = &x8_1[1]
        int64_t x8_71 = x21_15[1]
        
        if (x8_71 + 0x20 u>= 0xff0)
            void** x0_38 = malloc(0x1000)
            
            if (x0_38 == 0)
                std::terminate()
                noreturn
            
            x8_71 = 0
            *x0_38 = x21_15
            x0_38[1] = 0
            x21_15 = x0_38
            x19[0x266] = x0_38
        
        x9_59 = x8_71 + 0x20
        x20_11 = x21_15 + x8_71
        x11_6 = "signed char"
        goto label_10ec74c
    case 0x21
        SystemHintOp_BTI()
        x21_4 = x19[0x266]
        *x19 = &x8_1[1]
        int64_t x8_32 = x21_4[1]
        
        if (x8_32 + 0x20 u>= 0xff0)
            void*** x0_12 = malloc(0x1000)
            
            if (x0_12 == 0)
                std::terminate()
                noreturn
            
            x8_32 = 0
            *x0_12 = x21_4
            x0_12[1] = 0
            x21_4 = x0_12
            x19[0x266] = x0_12
        
        x9_61 = x8_32 + 0x20
        x20_5 = x21_4 + x8_32
        x11_6 = "bool"
        goto label_10ec7b8
    case 0x22
        SystemHintOp_BTI()
        x21_4 = x19[0x266]
        *x19 = &x8_1[1]
        int64_t x8_73 = x21_4[1]
        
        if (x8_73 + 0x20 u>= 0xff0)
            void*** x0_39 = malloc(0x1000)
            
            if (x0_39 == 0)
                std::terminate()
                noreturn
            
            x8_73 = 0
            *x0_39 = x21_4
            x0_39[1] = 0
            x21_4 = x0_39
            x19[0x266] = x0_39
        
        x9_61 = x8_73 + 0x20
        x20_5 = x21_4 + x8_73
        x11_6 = "char"
        goto label_10ec7b8
    case 0x23
        SystemHintOp_BTI()
        void** x21_8 = x19[0x266]
        *x19 = &x8_1[1]
        int64_t x8_34 = x21_8[1]
        
        if (x8_34 + 0x20 u>= 0xff0)
            void** x0_13 = malloc(0x1000)
            
            if (x0_13 == 0)
                std::terminate()
                noreturn
            
            x8_34 = 0
            *x0_13 = x21_8
            x0_13[1] = 0
            x21_8 = x0_13
            x19[0x266] = x0_13
        
        x11_6 = "double"
        x21_8[1] = x8_34 + 0x20
        result = x21_8 + x8_34 + 0x10
        *result = &_vtable_for_(anonymous namespace)::itanium_demangle::NameType{for `(anonymous namespace)::itanium_demangle::Node'}
        x8_7 = &data_7852e3[6]
        goto label_10ec7c4
    case 0x24
        SystemHintOp_BTI()
        x21_15 = x19[0x266]
        *x19 = &x8_1[1]
        int64_t x8_58 = x21_15[1]
        
        if (x8_58 + 0x20 u>= 0xff0)
            void*** x0_32 = malloc(0x1000)
            
            if (x0_32 == 0)
                std::terminate()
                noreturn
            
            x8_58 = 0
            *x0_32 = x21_15
            x0_32[1] = 0
            x21_15 = x0_32
            x19[0x266] = x0_32
        
        x9_59 = x8_58 + 0x20
        x20_11 = x21_15 + x8_58
        x11_6 = "long double"
    label_10ec74c:
        x21_15[1] = x9_59
        result = x20_11 + 0x10
        *result = &_vtable_for_(anonymous namespace)::itanium_demangle::NameType{for `(anonymous namespace)::itanium_demangle::Node'}
        x8_7 = &x11_6[0xb]
        goto label_10ec7c4
    case 0x25
        SystemHintOp_BTI()
        x21_1 = x19[0x266]
        *x19 = &x8_1[1]
        int64_t x8_9 = x21_1[1]
        
        if (x8_9 + 0x20 u>= 0xff0)
            void*** x0_2 = malloc(0x1000)
            
            if (x0_2 == 0)
                std::terminate()
                noreturn
            
            x8_9 = 0
            *x0_2 = x21_1
            x0_2[1] = 0
            x21_1 = x0_2
            x19[0x266] = x0_2
        
        x9_48 = x8_9 + 0x20
        x20_2 = x21_1 + x8_9
        x11_6 = "float"
    label_10ec5a8:
        x21_1[1] = x9_48
        result = x20_2 + 0x10
        *result = &_vtable_for_(anonymous namespace)::itanium_demangle::NameType{for `(anonymous namespace)::itanium_demangle::Node'}
        x8_7 = &x11_6[5]
        goto label_10ec7c4
    case 0x26
        SystemHintOp_BTI()
        x21_9 = x19[0x266]
        *x19 = &x8_1[1]
        int64_t x8_36 = x21_9[1]
        
        if (x8_36 + 0x20 u>= 0xff0)
            void*** x0_14 = malloc(0x1000)
            
            if (x0_14 == 0)
                std::terminate()
                noreturn
            
            x8_36 = 0
            *x0_14 = x21_9
            x0_14[1] = 0
            x21_9 = x0_14
            x19[0x266] = x0_14
        
        x9_22 = x8_36 + 0x20
        x20_8 = x21_9 + x8_36
        x11_6 = "__float128"
    label_10ebfa0:
        x21_9[1] = x9_22
        result = x20_8 + 0x10
        *result = &_vtable_for_(anonymous namespace)::itanium_demangle::NameType{for `(anonymous namespace)::itanium_demangle::Node'}
        x8_7 = &x11_6[0xa]
        goto label_10ec7c4
    case 0x27
        SystemHintOp_BTI()
        x21_2 = x19[0x266]
        *x19 = &x8_1[1]
        int64_t x8_60 = x21_2[1]
        
        if (x8_60 + 0x20 u>= 0xff0)
            void** x0_33 = malloc(0x1000)
            
            if (x0_33 == 0)
                std::terminate()
                noreturn
            
            x8_60 = 0
            *x0_33 = x21_2
            x0_33[1] = 0
            x21_2 = x0_33
            x19[0x266] = x0_33
        
        x9_44 = x8_60 + 0x20
        x20_3 = x21_2 + x8_60
        x11_6 = "unsigned char"
        goto label_10ec4d0
    case 0x28
        SystemHintOp_BTI()
        x21_5 = x19[0x266]
        *x19 = &x8_1[1]
        int64_t x8_38 = x21_5[1]
        
        if (x8_38 + 0x20 u>= 0xff0)
            void** x0_15 = malloc(0x1000)
            
            if (x0_15 == 0)
                std::terminate()
                noreturn
            
            x8_38 = 0
            *x0_15 = x21_5
            x0_15[1] = 0
            x21_5 = x0_15
            x19[0x266] = x0_15
        
        x9_24 = x8_38 + 0x20
        x20_6 = x21_5 + x8_38
        x11_6 = &data_746c1b
        goto label_10ec00c
    case 0x29
        SystemHintOp_BTI()
        void** x21_16 = x19[0x266]
        *x19 = &x8_1[1]
        int64_t x8_62 = x21_16[1]
        
        if (x8_62 + 0x20 u>= 0xff0)
            void** x0_34 = malloc(0x1000)
            
            if (x0_34 == 0)
                std::terminate()
                noreturn
            
            x8_62 = 0
            *x0_34 = x21_16
            x0_34[1] = 0
            x21_16 = x0_34
            x19[0x266] = x0_34
        
        x11_6 = "unsigned int"
        x21_16[1] = x8_62 + 0x20
        result = x21_16 + x8_62 + 0x10
        *result = &_vtable_for_(anonymous namespace)::itanium_demangle::NameType{for `(anonymous namespace)::itanium_demangle::Node'}
        x8_7 = &data_75d8b0[0xc]
        goto label_10ec7c4
    case 0x2b
        SystemHintOp_BTI()
        x21_4 = x19[0x266]
        *x19 = &x8_1[1]
        int64_t x8_40 = x21_4[1]
        
        if (x8_40 + 0x20 u>= 0xff0)
            void*** x0_16 = malloc(0x1000)
            
            if (x0_16 == 0)
                std::terminate()
                noreturn
            
            x8_40 = 0
            *x0_16 = x21_4
            x0_16[1] = 0
            x21_4 = x0_16
            x19[0x266] = x0_16
        
        x9_61 = x8_40 + 0x20
        x20_5 = x21_4 + x8_40
        x11_6 = "long"
        goto label_10ec7b8
    case 0x2c
        SystemHintOp_BTI()
        x21_2 = x19[0x266]
        *x19 = &x8_1[1]
        int64_t x8_11 = x21_2[1]
        
        if (x8_11 + 0x20 u>= 0xff0)
            void*** x0_3 = malloc(0x1000)
            
            if (x0_3 == 0)
                std::terminate()
                noreturn
            
            x8_11 = 0
            *x0_3 = x21_2
            x0_3[1] = 0
            x21_2 = x0_3
            x19[0x266] = x0_3
        
        x9_44 = x8_11 + 0x20
        x20_3 = x21_2 + x8_11
        x11_6 = "unsigned long"
    label_10ec4d0:
        x21_2[1] = x9_44
        result = x20_3 + 0x10
        *result = &_vtable_for_(anonymous namespace)::itanium_demangle::NameType{for `(anonymous namespace)::itanium_demangle::Node'}
        x8_7 = &x11_6[0xd]
        goto label_10ec7c4
    case 0x2d
        SystemHintOp_BTI()
        x21_3 = x19[0x266]
        *x19 = &x8_1[1]
        int64_t x8_13 = x21_3[1]
        
        if (x8_13 + 0x20 u>= 0xff0)
            void*** x0_4 = malloc(0x1000)
            
            if (x0_4 == 0)
                std::terminate()
                noreturn
            
            x8_13 = 0
            *x0_4 = x21_3
            x0_4[1] = 0
            x21_3 = x0_4
            x19[0x266] = x0_4
        
        x9_6 = x8_13 + 0x20
        x20_4 = x21_3 + x8_13
        x11_6 = "__int128"
    label_10ebbf4:
        x21_3[1] = x9_6
        result = x20_4 + 0x10
        *result = &_vtable_for_(anonymous namespace)::itanium_demangle::NameType{for `(anonymous namespace)::itanium_demangle::Node'}
        x8_7 = &x11_6[8]
        goto label_10ec7c4
    case 0x2e
        SystemHintOp_BTI()
        void** x21_10 = x19[0x266]
        *x19 = &x8_1[1]
        int64_t x8_42 = x21_10[1]
        
        if (x8_42 + 0x20 u>= 0xff0)
            void** x0_17 = malloc(0x1000)
            
            if (x0_17 == 0)
                std::terminate()
                noreturn
            
            x8_42 = 0
            *x0_17 = x21_10
            x0_17[1] = 0
            x21_10 = x0_17
            x19[0x266] = x0_17
        
        x11_6 = "unsigned __int128"
        x21_10[1] = x8_42 + 0x20
        result = x21_10 + x8_42 + 0x10
        *result = &_vtable_for_(anonymous namespace)::itanium_demangle::NameType{for `(anonymous namespace)::itanium_demangle::Node'}
        x8_7 = &data_731edb[0x11]
        goto label_10ec7c4
    case 0x32
        SystemHintOp_BTI()
        x21_1 = x19[0x266]
        *x19 = &x8_1[1]
        int64_t x8_64 = x21_1[1]
        
        if (x8_64 + 0x20 u>= 0xff0)
            void** x0_35 = malloc(0x1000)
            
            if (x0_35 == 0)
                std::terminate()
                noreturn
            
            x8_64 = 0
            *x0_35 = x21_1
            x0_35[1] = 0
            x21_1 = x0_35
            x19[0x266] = x0_35
        
        x9_48 = x8_64 + 0x20
        x20_2 = x21_1 + x8_64
        x11_6 = "short"
        goto label_10ec5a8
    case 0x33
        SystemHintOp_BTI()
        x21_17 = x19[0x266]
        *x19 = &x8_1[1]
        int64_t x8_66 = x21_17[1]
        
        if (x8_66 + 0x20 u>= 0xff0)
            void*** x0_36 = malloc(0x1000)
            
            if (x0_36 == 0)
                std::terminate()
                noreturn
            
            x8_66 = 0
            *x0_36 = x21_17
            x0_36[1] = 0
            x21_17 = x0_36
            x19[0x266] = x0_36
        
        x9_50 = x8_66 + 0x20
        x20_13 = x21_17 + x8_66
        x11_6 = "unsigned short"
    label_10ec614:
        x21_17[1] = x9_50
        result = x20_13 + 0x10
        *result = &_vtable_for_(anonymous namespace)::itanium_demangle::NameType{for `(anonymous namespace)::itanium_demangle::Node'}
        x8_7 = &x11_6[0xe]
        goto label_10ec7c4
    case 0x34
        SystemHintOp_BTI()
        *x19 = &x8_1[1]
        int64_t x9_54
        
        if (result_10 != &x8_1[1] && zx.d(x8_1[1]) - 0x30 u<= 9)
            x9_54 = 0
            void* x8_67 = &x8_1[2]
            
            while (true)
                *x19 = x8_67
                x9_54 = zx.q(*(x8_67 - 1)) + x9_54 * 0xa - 0x30
                
                if (result_10 == x8_67)
                    result = result_10
                    break
                
                uint32_t x11_9 = zx.d(*x8_67)
                x8_67 += 1
                
                if (x11_9 - 0x30 u>= 0xa)
                    result = x8_67 - 1
                    break
        
        if (result_10 == &x8_1[1] || zx.d(x8_1[1]) - 0x30 u> 9 || result_10 - result u< x9_54)
        label_10eca20:
            result = nullptr
        label_10eca24:
            SystemHintOp_BTI()
            
            if (*(x22 + 0x28) != x8)
                __stack_chk_fail()
                noreturn
            
            return result
        
        x21_19 = result + x9_54
        *x19 = x21_19
        
        if (result == x21_19)
            goto label_10eca20
        
        x23_4 = x19[0x266]
        int64_t x8_85 = x23_4[1]
        
        if (x8_85 + 0x20 u>= 0xff0)
            void*** x0_49 = malloc(0x1000)
            
            if (x0_49 == 0)
                std::terminate()
                noreturn
            
            x8_85 = 0
            *x0_49 = x23_4
            x0_49[1] = 0
            x23_4 = x0_49
            x19[0x266] = x0_49
        
        x11_11 = 0x107
        x9_74 = x8_85 + 0x20
        x8_83 = x23_4 + x8_85
        x10_7 = &_vtable_for_(anonymous namespace)::itanium_demangle::NameType{for `(anonymous namespace)::itanium_demangle::Node'}
    label_10ec9f8:
        x23_4[1] = x9_74
        result_12 = x8_83 + 0x10
        *result_12 = x10_7
        result_12[1].d = zx.d(x11_11) | 0x1010000
        result_12[2] = result
        result_12[3] = x21_19
        goto label_10eca08
    case 0x35
        SystemHintOp_BTI()
        x21_4 = x19[0x266]
        *x19 = &x8_1[1]
        int64_t x8_15 = x21_4[1]
        
        if (x8_15 + 0x20 u>= 0xff0)
            void*** x0_5 = malloc(0x1000)
            
            if (x0_5 == 0)
                std::terminate()
                noreturn
            
            x8_15 = 0
            *x0_5 = x21_4
            x0_5[1] = 0
            x21_4 = x0_5
            x19[0x266] = x0_5
        
        x9_61 = x8_15 + 0x20
        x20_5 = x21_4 + x8_15
        x11_6 = "void"
    label_10ec7b8:
        x21_4[1] = x9_61
        result = x20_5 + 0x10
        *result = &_vtable_for_(anonymous namespace)::itanium_demangle::NameType{for `(anonymous namespace)::itanium_demangle::Node'}
        x8_7 = &x11_6[4]
        goto label_10ec7c4
    case 0x36
        SystemHintOp_BTI()
        x21_11 = x19[0x266]
        *x19 = &x8_1[1]
        int64_t x8_44 = x21_11[1]
        
        if (x8_44 + 0x20 u>= 0xff0)
            void*** x0_18 = malloc(0x1000)
            
            if (x0_18 == 0)
                std::terminate()
                noreturn
            
            x8_44 = 0
            *x0_18 = x21_11
            x0_18[1] = 0
            x21_11 = x0_18
            x19[0x266] = x0_18
        
        x9_29 = x8_44 + 0x20
        x20_10 = x21_11 + x8_44
        x11_6 = "wchar_t"
    label_10ec144:
        x21_11[1] = x9_29
        result = x20_10 + 0x10
        *result = &_vtable_for_(anonymous namespace)::itanium_demangle::NameType{for `(anonymous namespace)::itanium_demangle::Node'}
        x8_7 = &x11_6[7]
        goto label_10ec7c4
    case 0x37
        SystemHintOp_BTI()
        x21_18 = x19[0x266]
        *x19 = &x8_1[1]
        int64_t x8_69 = x21_18[1]
        
        if (x8_69 + 0x20 u>= 0xff0)
            void*** x0_37 = malloc(0x1000)
            
            if (x0_37 == 0)
                std::terminate()
                noreturn
            
            x8_69 = 0
            *x0_37 = x21_18
            x0_37[1] = 0
            x21_18 = x0_37
            x19[0x266] = x0_37
        
        x9_57 = x8_69 + 0x20
        x20_14 = x21_18 + x8_69
        x11_6 = "long long"
    label_10ec6e0:
        x21_18[1] = x9_57
        result = x20_14 + 0x10
        *result = &_vtable_for_(anonymous namespace)::itanium_demangle::NameType{for `(anonymous namespace)::itanium_demangle::Node'}
        x8_7 = &x11_6[9]
        goto label_10ec7c4
    case 0x38
        SystemHintOp_BTI()
        void** x21 = x19[0x266]
        *x19 = &x8_1[1]
        int64_t x8_6 = x21[1]
        
        if (x8_6 + 0x20 u>= 0xff0)
            void** x0_1 = malloc(0x1000)
            
            if (x0_1 == 0)
                std::terminate()
                noreturn
            
            x8_6 = 0
            *x0_1 = x21
            x0_1[1] = 0
            x21 = x0_1
            x19[0x266] = x0_1
        
        x11_6 = "unsigned long long"
        x21[1] = x8_6 + 0x20
        result = x21 + x8_6 + 0x10
        *result = &_vtable_for_(anonymous namespace)::itanium_demangle::NameType{for `(anonymous namespace)::itanium_demangle::Node'}
        x8_7 = &data_76ebae[0x12]
    label_10ec7c4:
        *(result + 8) = 0x1010107
        *(result + 0x10) = x11_6
        *(result + 0x18) = x8_7
        goto label_10eca24
    case 0x39
        SystemHintOp_BTI()
        x21_5 = x19[0x266]
        *x19 = &x8_1[1]
        int64_t x8_17 = x21_5[1]
        
        if (x8_17 + 0x20 u>= 0xff0)
            void*** x0_6 = malloc(0x1000)
            
            if (x0_6 == 0)
                std::terminate()
                noreturn
            
            x8_17 = 0
            *x0_6 = x21_5
            x0_6[1] = 0
            x21_5 = x0_6
            x19[0x266] = x0_6
        
        x9_24 = x8_17 + 0x20
        x20_6 = x21_5 + x8_17
        x11_6 = &data_77966e
    label_10ec00c:
        x21_5[1] = x9_24
        result = x20_6 + 0x10
        *result = &_vtable_for_(anonymous namespace)::itanium_demangle::NameType{for `(anonymous namespace)::itanium_demangle::Node'}
        x8_7 = &x11_6[3]
        goto label_10ec7c4

x23_3[1] = x9_71
result_11 = x0_44 + 0x10
*result_11 = x8_78
result_11[1].d = x10_6
result_11[2] = result_18
result_11[3] = result_13
goto label_10ec3f8
