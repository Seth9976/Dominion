// 函数: sub_10f1b68
// 地址: 0x10f1b68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x8 = *arg1
int64_t x9 = arg1[1]

if (x8 == x9 || zx.d(*x8) != 0x4c)
label_10f2624:
    SystemHintOp_BTI()
    return nullptr

void* x10_2 = x9 - &x8[1]
*arg1 = &x8[1]
int64_t* result

if (x9 != &x8[1])
    uint64_t x11_3 = zx.q(zx.d(x8[1]) - 0x41)
    
    if (x11_3.d u> 0x38)
        goto label_10f1c68
    
    void* x0_2
    void* x0_14
    void* const x1
    void* x2
    struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::LambdaExpr::VTable
        * const x8_4
    void* x8_18
    struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::FloatLiteralImpl<float>::VTable
        * const x8_23
    int64_t x9_4
    int64_t x9_35
    int16_t x10_3
    int16_t x10_56
    int64_t* result_1
    void* x20_3
    void** x21_1
    void* x21_3
    void** x22_2
    
    switch (x11_3)
        case 0
            SystemHintOp_BTI()
            result = sub_10eb95c(arg1)
            
            if (result == 0)
                SystemHintOp_BTI()
                return result
            
            char* x8_1 = *arg1
            
            if (x8_1 == arg1[1] || zx.d(*x8_1) != 0x45)
                goto label_10f2624
            
            x21_1 = arg1[0x266]
            *arg1 = &x8_1[1]
            result_1 = result
            int64_t x8_3 = x21_1[1]
            
            if (x8_3 + 0x20 u>= 0xff0)
                void*** x0_1 = malloc(0x1000)
                
                if (x0_1 == 0)
                    std::terminate()
                    noreturn
                
                x8_3 = 0
                *x0_1 = x21_1
                x0_1[1] = 0
                x21_1 = x0_1
                arg1[0x266] = x0_1
            
            x9_4 = x8_3 + 0x20
            x0_2 = x21_1 + x8_3
            x10_3 = 0x142
            x8_4 = &_vtable_for_(anonymous namespace)::itanium_demangle::StringLiteral{for `(anonymous namespace)::itanium_demangle::Node'}
        label_10f1c54:
            x21_1[1] = x9_4
            result = x0_2 + 0x10
            *result = x8_4
            result[1].d = zx.d(x10_3) | 0x1010000
            result[2] = result_1
            SystemHintOp_BTI()
            return result
        case 1, 2, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x15, 0x16, 
                0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1f, 0x26, 0x2a, 0x2f, 0x30, 0x31, 0x34, 
                0x35
            goto label_10f1c68
        case 3
            SystemHintOp_BTI()
            
            if (x10_2 u< 3 || zx.d(x8[2]) != 0x6e || zx.d(x8[3]) != 0x45)
                goto label_10f2624
            
            void** x20_1 = arg1[0x266]
            *arg1 = &x8[4]
            int64_t x8_10 = x20_1[1]
            
            if (x8_10 + 0x20 u> 0xfef)
                void** x0_6 = malloc(0x1000)
                
                if (x0_6 == 0)
                    std::terminate()
                    noreturn
                
                x8_10 = 0
                *x0_6 = x20_1
                x0_6[1] = 0
                x20_1 = x0_6
                arg1[0x266] = x0_6
            
            x20_1[1] = x8_10 + 0x20
            result = x20_1 + x8_10 + 0x10
            *result = &_vtable_for_(anonymous namespace)::itanium_demangle::NameType{for `(anonymous namespace)::itanium_demangle::Node'}
            result[1].d = 0x1010107
            result[2] = "nullptr"
            result[3] = &data_78f382[7]
            SystemHintOp_BTI()
            return result
        case 0x13
            SystemHintOp_BTI()
            return nullptr
        case 0x14
            SystemHintOp_BTI()
            
            if (x10_2 u< 2 || zx.d(x8[2]) != 0x6c)
                goto label_10f2624
            
            result = sub_10f39a4(arg1, 0)
            
            if (result == 0)
                SystemHintOp_BTI()
                return result
            
            char* x8_12 = *arg1
            
            if (x8_12 == arg1[1] || zx.d(*x8_12) != 0x45)
                goto label_10f2624
            
            x21_1 = arg1[0x266]
            *arg1 = &x8_12[1]
            result_1 = result
            int64_t x8_14 = x21_1[1]
            
            if (x8_14 + 0x20 u>= 0xff0)
                void** x0_9 = malloc(0x1000)
                
                if (x0_9 == 0)
                    std::terminate()
                    noreturn
                
                x8_14 = 0
                *x0_9 = x21_1
                x0_9[1] = 0
                x21_1 = x0_9
                arg1[0x266] = x0_9
            
            x9_4 = x8_14 + 0x20
            x0_2 = x21_1 + x8_14
            x10_3 = 0x143
            x8_4 = &_vtable_for_(anonymous namespace)::itanium_demangle::LambdaExpr{for `(anonymous namespace)::itanium_demangle::Node'}
            goto label_10f1c54
        case 0x1e
            SystemHintOp_BTI()
            
            if (x10_2 u< 2 || zx.d(x8[2]) != 0x5a)
                goto label_10f2624
            
            *arg1 = &x8[3]
            result = sub_10eaca8(arg1)
            
            if (result == 0)
                SystemHintOp_BTI()
                return result
            
            char* x8_16 = *arg1
            
            if (x8_16 == arg1[1] || zx.d(*x8_16) != 0x45)
                goto label_10f2624
            
            *arg1 = &x8_16[1]
            SystemHintOp_BTI()
            return result
        case 0x20
            SystemHintOp_BTI()
            x1 = "signed char"
            x8_18 = &x8[2]
            x2 = &data_74e3fb[0xb]
        case 0x21
            SystemHintOp_BTI()
            
            if (x10_2 u< 3)
                goto label_10f2624
            
            if (zx.d(x8[2]) == 0x30 && zx.d(x8[3]) == 0x45)
                void** x20_2 = arg1[0x266]
                *arg1 = &x8[4]
                int64_t x8_20 = x20_2[1]
                
                if (x8_20 + 0x10 u> 0xfef)
                    void** x0_11 = malloc(0x1000)
                    
                    if (x0_11 == 0)
                        std::terminate()
                        noreturn
                    
                    x8_20 = 0
                    *x0_11 = x20_2
                    x0_11[1] = 0
                    x20_2 = x0_11
                    arg1[0x266] = x0_11
                
                x20_2[1] = x8_20 + 0x10
                result = x20_2 + x8_20 + 0x10
                *result = &_vtable_for_(anonymous namespace)::itanium_demangle::BoolExpr{for `(anonymous namespace)::itanium_demangle::Node'}
                result[1].d = 0x1010141
                *(result + 0xc) = 0
                SystemHintOp_BTI()
                return result
            
            if (zx.d(x8[2]) != 0x31 || zx.d(x8[3]) != 0x45)
                goto label_10f2624
            
            void** x20_4 = arg1[0x266]
            *arg1 = &x8[4]
            int64_t x8_29 = x20_4[1]
            
            if (x8_29 + 0x10 u> 0xfef)
                void** x0_18 = malloc(0x1000)
                
                if (x0_18 == 0)
                    std::terminate()
                    noreturn
                
                x8_29 = 0
                *x0_18 = x20_4
                x0_18[1] = 0
                x20_4 = x0_18
                arg1[0x266] = x0_18
            
            x20_4[1] = x8_29 + 0x10
            result = x20_4 + x8_29 + 0x10
            *result = &_vtable_for_(anonymous namespace)::itanium_demangle::BoolExpr{for `(anonymous namespace)::itanium_demangle::Node'}
            result[1].d = 0x1010141
            *(result + 0xc) = 1
            SystemHintOp_BTI()
            return result
        case 0x22
            SystemHintOp_BTI()
            x1 = "char"
            x8_18 = &x8[2]
            x2 = &data_75d45c[4]
        case 0x23
            SystemHintOp_BTI()
            x20_3 = &x8[2]
            *arg1 = x20_3
            
            if (x9 - x20_3 u< 0x11)
                goto label_10f2624
            
            uint32_t x10_8 = zx.d(x8[2])
            
            if (x10_8 - 0x30 u>= 0xa && (x10_8 & 0xffffffdf) - 0x41 u> 5)
                goto label_10f2624
            
            uint32_t x10_11 = zx.d(x8[3])
            
            if (x10_11 - 0x30 u>= 0xa && (x10_11 & 0xffffffdf) - 0x41 u> 5)
                goto label_10f2624
            
            uint32_t x10_14 = zx.d(x8[4])
            
            if (x10_14 - 0x30 u>= 0xa && (x10_14 & 0xffffffdf) - 0x41 u> 5)
                goto label_10f2624
            
            uint32_t x10_17 = zx.d(x8[5])
            
            if (x10_17 - 0x30 u>= 0xa && (x10_17 & 0xffffffdf) - 0x41 u> 5)
                goto label_10f2624
            
            uint32_t x10_20 = zx.d(x8[6])
            
            if (x10_20 - 0x30 u>= 0xa && (x10_20 & 0xffffffdf) - 0x41 u> 5)
                goto label_10f2624
            
            uint32_t x10_23 = zx.d(x8[7])
            
            if (x10_23 - 0x30 u>= 0xa && (x10_23 & 0xffffffdf) - 0x41 u> 5)
                goto label_10f2624
            
            uint32_t x10_26 = zx.d(x8[8])
            
            if (x10_26 - 0x30 u>= 0xa && (x10_26 & 0xffffffdf) - 0x41 u> 5)
                goto label_10f2624
            
            uint32_t x10_29 = zx.d(x8[9])
            
            if (x10_29 - 0x30 u>= 0xa && (x10_29 & 0xffffffdf) - 0x41 u> 5)
                goto label_10f2624
            
            uint32_t x10_32 = zx.d(x8[0xa])
            
            if (x10_32 - 0x30 u>= 0xa && (x10_32 & 0xffffffdf) - 0x41 u> 5)
                goto label_10f2624
            
            uint32_t x10_35 = zx.d(x8[0xb])
            
            if (x10_35 - 0x30 u>= 0xa && (x10_35 & 0xffffffdf) - 0x41 u> 5)
                goto label_10f2624
            
            uint32_t x10_38 = zx.d(x8[0xc])
            
            if (x10_38 - 0x30 u>= 0xa && (x10_38 & 0xffffffdf) - 0x41 u> 5)
                goto label_10f2624
            
            uint32_t x10_41 = zx.d(x8[0xd])
            
            if (x10_41 - 0x30 u>= 0xa && (x10_41 & 0xffffffdf) - 0x41 u> 5)
                goto label_10f2624
            
            uint32_t x10_44 = zx.d(x8[0xe])
            
            if (x10_44 - 0x30 u>= 0xa && (x10_44 & 0xffffffdf) - 0x41 u> 5)
                goto label_10f2624
            
            uint32_t x10_47 = zx.d(x8[0xf])
            
            if (x10_47 - 0x30 u>= 0xa && (x10_47 & 0xffffffdf) - 0x41 u> 5)
                goto label_10f2624
            
            uint32_t x10_50 = zx.d(x8[0x10])
            
            if (x10_50 - 0x30 u>= 0xa && (x10_50 & 0xffffffdf) - 0x41 u> 5)
                goto label_10f2624
            
            uint32_t x10_53 = zx.d(x8[0x11])
            
            if (x10_53 - 0x30 u>= 0xa && (x10_53 & 0xffffffdf) - 0x41 u> 5)
                goto label_10f2624
            
            x21_3 = &x8[0x12]
            *arg1 = x21_3
            
            if (x21_3 == x9 || zx.d(*x21_3) != 0x45)
                goto label_10f2624
            
            x22_2 = arg1[0x266]
            *arg1 = &x8[0x13]
            int64_t x8_22 = x22_2[1]
            
            if (x8_22 + 0x20 u>= 0xff0)
                void** x0_13 = malloc(0x1000)
                
                if (x0_13 == 0)
                    std::terminate()
                    noreturn
                
                x8_22 = 0
                *x0_13 = x22_2
                x0_13[1] = 0
                x22_2 = x0_13
                arg1[0x266] = x0_13
            
            x9_35 = x8_22 + 0x20
            x0_14 = x22_2 + x8_22
            x10_56 = 0x147
            x8_23 = &_vtable_for_(anonymous namespace)::itanium_demangle::FloatLiteralImpl<double>{for `(anonymous namespace)::itanium_demangle::Node'}
            goto label_10f2610
        case 0x24
            SystemHintOp_BTI()
            x20_3 = &x8[2]
            *arg1 = x20_3
            
            if (x9 - x20_3 u< 0x21)
                goto label_10f2624
            
            int64_t i = 0
            x21_3 = &x8[0x22]
            
            do
                uint32_t x11_22 = zx.d(*(x20_3 + i))
                
                if (x11_22 - 0x30 u>= 0xa && (x11_22 & 0xffffffdf) - 0x41 u> 5)
                    goto label_10f2624
                
                i += 1
            while (i != 0x20)
            
            *arg1 = x21_3
            
            if (x21_3 == x9 || zx.d(*x21_3) != 0x45)
                goto label_10f2624
            
            x22_2 = arg1[0x266]
            *arg1 = &x8[0x23]
            int64_t x8_31 = x22_2[1]
            
            if (x8_31 + 0x20 u>= 0xff0)
                void*** x0_20 = malloc(0x1000)
                
                if (x0_20 == 0)
                    std::terminate()
                    noreturn
                
                x8_31 = 0
                *x0_20 = x22_2
                x0_20[1] = 0
                x22_2 = x0_20
                arg1[0x266] = x0_20
            
            x9_35 = x8_31 + 0x20
            x0_14 = x22_2 + x8_31
            x10_56 = 0x148
            x8_23 = &_vtable_for_(anonymous namespace)::itanium_demangle::FloatLiteralImpl<long double>{for `(anonymous namespace)::itanium_demangle::Node'}
        label_10f2610:
            x22_2[1] = x9_35
            result = x0_14 + 0x10
            *result = x8_23
            result[1].d = zx.d(x10_56) | 0x1010000
            result[2] = x20_3
            result[3] = x21_3
            SystemHintOp_BTI()
            return result
        case 0x25
            SystemHintOp_BTI()
            x20_3 = &x8[2]
            *arg1 = x20_3
            
            if (x9 - x20_3 u< 9)
                goto label_10f2624
            
            uint32_t x10_59 = zx.d(x8[2])
            
            if (x10_59 - 0x30 u>= 0xa && (x10_59 & 0xffffffdf) - 0x41 u> 5)
                goto label_10f2624
            
            uint32_t x10_62 = zx.d(x8[3])
            
            if (x10_62 - 0x30 u>= 0xa && (x10_62 & 0xffffffdf) - 0x41 u> 5)
                goto label_10f2624
            
            uint32_t x10_65 = zx.d(x8[4])
            
            if (x10_65 - 0x30 u>= 0xa && (x10_65 & 0xffffffdf) - 0x41 u> 5)
                goto label_10f2624
            
            uint32_t x10_68 = zx.d(x8[5])
            
            if (x10_68 - 0x30 u>= 0xa && (x10_68 & 0xffffffdf) - 0x41 u> 5)
                goto label_10f2624
            
            uint32_t x10_71 = zx.d(x8[6])
            
            if (x10_71 - 0x30 u>= 0xa && (x10_71 & 0xffffffdf) - 0x41 u> 5)
                goto label_10f2624
            
            uint32_t x10_74 = zx.d(x8[7])
            
            if (x10_74 - 0x30 u>= 0xa && (x10_74 & 0xffffffdf) - 0x41 u> 5)
                goto label_10f2624
            
            uint32_t x10_77 = zx.d(x8[8])
            
            if (x10_77 - 0x30 u>= 0xa && (x10_77 & 0xffffffdf) - 0x41 u> 5)
                goto label_10f2624
            
            uint32_t x10_80 = zx.d(x8[9])
            
            if (x10_80 - 0x30 u>= 0xa && (x10_80 & 0xffffffdf) - 0x41 u> 5)
                goto label_10f2624
            
            x21_3 = &x8[0xa]
            *arg1 = x21_3
            
            if (x21_3 == x9 || zx.d(*x21_3) != 0x45)
                goto label_10f2624
            
            x22_2 = arg1[0x266]
            *arg1 = &x8[0xb]
            int64_t x8_25 = x22_2[1]
            
            if (x8_25 + 0x20 u>= 0xff0)
                void*** x0_15 = malloc(0x1000)
                
                if (x0_15 == 0)
                    std::terminate()
                    noreturn
                
                x8_25 = 0
                *x0_15 = x22_2
                x0_15[1] = 0
                x22_2 = x0_15
                arg1[0x266] = x0_15
            
            x9_35 = x8_25 + 0x20
            x0_14 = x22_2 + x8_25
            x10_56 = 0x146
            x8_23 = &_vtable_for_(anonymous namespace)::itanium_demangle::FloatLiteralImpl<float>{for `(anonymous namespace)::itanium_demangle::Node'}
            goto label_10f2610
        case 0x27
            SystemHintOp_BTI()
            x1 = "unsigned char"
            x8_18 = &x8[2]
            x2 = &data_73a3fa[0xd]
        case 0x28
            SystemHintOp_BTI()
            *arg1 = &x8[2]
            return sub_10f383c(arg1, &data_793a18, &data_793a18) __tailcall
        case 0x29
            SystemHintOp_BTI()
            x8_18 = &x8[2]
            x1 = &data_75d45a
            x2 = x1 + 1
        case 0x2b
            SystemHintOp_BTI()
            x8_18 = &x8[2]
            x1 = &data_7921be
            x2 = x1 + 1
        case 0x2c
            SystemHintOp_BTI()
            x1 = &data_76a585
            x8_18 = &x8[2]
            x2 = x1 + 2
        case 0x2d
            SystemHintOp_BTI()
            x1 = "__int128"
            x8_18 = &x8[2]
            x2 = &data_76eb61[8]
        case 0x2e
            SystemHintOp_BTI()
            x1 = "unsigned __int128"
            x8_18 = &x8[2]
            x2 = &data_731edb[0x11]
        case 0x32
            SystemHintOp_BTI()
            x1 = "short"
            x8_18 = &x8[2]
            x2 = &data_76111c[5]
        case 0x33
            SystemHintOp_BTI()
            x1 = "unsigned short"
            x8_18 = &x8[2]
            x2 = &data_746a1b[0xe]
        case 0x36
            SystemHintOp_BTI()
            x1 = "wchar_t"
            x8_18 = &x8[2]
            x2 = &data_72a5b1[7]
        case 0x37
            SystemHintOp_BTI()
            x1 = &data_7a3a18
            x8_18 = &x8[2]
            x2 = x1 + 2
        case 0x38
            SystemHintOp_BTI()
            x1 = &data_78ac59
            x8_18 = &x8[2]
            x2 = &data_78ac5c
    
    *arg1 = x8_18
    return sub_10f383c(arg1, x1, x2) __tailcall

label_10f1c68:
SystemHintOp_BTI()
result = sub_10eb95c(arg1)

if (result == 0)
    SystemHintOp_BTI()
    return result

char* x21_2 = *arg1
void* x8_5 = arg1[1]
int64_t* result_2 = result
char* x9_7
void* x22_1

if (x8_5 == x21_2 || zx.d(*x21_2) - 0x30 u> 9)
    x22_1 = nullptr
    x9_7 = x21_2
    x21_2 = nullptr
else
    void* x10_5 = &x21_2[1]
    
    while (true)
        x9_7 = x10_5
        *arg1 = x10_5
        
        if (x8_5 == x10_5)
            x22_1 = x8_5
            break
        
        x10_5 = &x9_7[1]
        
        if (zx.d(*x9_7) - 0x30 u>= 0xa)
            x22_1 = x10_5 - 1
            break

if (x22_1 == x21_2 || x9_7 == x8_5)
    SystemHintOp_BTI()
    return nullptr

if (zx.d(*x9_7) != 0x45)
    goto label_10f2624

void** x23_1 = arg1[0x266]
*arg1 = &x9_7[1]
int64_t x8_8 = x23_1[1]

if (x8_8 + 0x30 u>= 0xff0)
    void** x0_4 = malloc(0x1000)
    
    if (x0_4 == 0)
        std::terminate()
        noreturn
    
    x8_8 = 0
    *x0_4 = x23_1
    x0_4[1] = 0
    x23_1 = x0_4
    arg1[0x266] = x0_4

x23_1[1] = x8_8 + 0x30
result = x23_1 + x8_8 + 0x10
*result = &_vtable_for_(anonymous namespace)::itanium_demangle::IntegerCastExpr{for `(anonymous namespace)::itanium_demangle::Node'}
result[1].d = 0x1010144
result[2] = result_2
result[3] = x21_2
result[4] = x22_1
SystemHintOp_BTI()
return result
