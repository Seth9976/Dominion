// 函数: sub_10f2fc8
// 地址: 0x10f2fc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x8 = *arg1
int64_t x9 = arg1[1]
void* x10 = x9 - x8
uint32_t x10_1
struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::GlobalQualifiedName::VTable
    ** x20_1
void* x21_5
void* x22_3

if (x10 u>= 3)
    x10_1 = zx.d(*x8)
    
    if (x10_1 != 0x73)
        goto label_10f3100
    
    if (zx.d(x8[1]) != 0x72 || zx.d(x8[2]) != 0x4e)
        goto label_10f30ec
    
    *arg1 = &x8[3]
    struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::GlobalQualifiedName::VTable
        ** x0_1 = sub_10f76dc(arg1)
    
    if (x0_1 != 0)
        char* x8_2 = *arg1
        x20_1 = x0_1
        
        if (arg1[1] == x8_2 || zx.d(*x8_2) != 0x49)
            goto label_10f3298
        
        void* x0_3 = sub_10ee7a8(arg1, 0)
        
        if (x0_3 != 0)
            void** x22_1 = arg1[0x266]
            int64_t x8_4 = x22_1[1]
            
            if (x8_4 + 0x20 u>= 0xff0)
                void** x0_4 = malloc(0x1000)
                
                if (x0_4 == 0)
                label_10f3600:
                    std::terminate()
                    noreturn
                
                x8_4 = 0
                *x0_4 = x22_1
                x0_4[1] = 0
                x22_1 = x0_4
                arg1[0x266] = x0_4
            
            x22_1[1] = x8_4 + 0x20
            *(x22_1 + x8_4 + 0x10) = &_vtable_for_(anonymous namespace)::itanium_demangle::NameWithTemplateArgs{for `(anonymous namespace)::itanium_demangle::Node'}
            *(x22_1 + x8_4 + 0x20) = x20_1
            *(x22_1 + x8_4 + 0x28) = x0_3
            x20_1 = x22_1 + x8_4 + 0x10
            *(x22_1 + x8_4 + 0x18) = 0x1010125
        label_10f3298:
            
            while (true)
                char* x8_21 = *arg1
                
                if (x8_21 != arg1[1] && zx.d(*x8_21) == 0x45)
                    *arg1 = &x8_21[1]
                    void* x0_29 = sub_10f779c(arg1)
                    
                    if (x0_29 == 0)
                        return nullptr
                    
                    void** x23_2 = arg1[0x266]
                    x21_5 = x0_29
                    int64_t x8_39 = x23_2[1]
                    
                    if (x8_39 + 0x20 u>= 0xff0)
                        void** x0_30 = malloc(0x1000)
                        
                        if (x0_30 == 0)
                            goto label_10f3600
                        
                        x8_39 = 0
                        *x0_30 = x23_2
                        x0_30[1] = 0
                        x23_2 = x0_30
                        arg1[0x266] = x0_30
                    
                    x23_2[1] = x8_39 + 0x20
                    x22_3 = x23_2 + x8_39 + 0x10
                    *x22_3 = &_vtable_for_(anonymous namespace)::itanium_demangle::QualifiedName{for `(anonymous namespace)::itanium_demangle::Node'}
                    *(x22_3 + 8) = 0x1010116
                    break
                
                struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NameType::VTable
                    ** x0_14 = sub_10f7a0c(arg1)
                
                if (x0_14 == 0)
                    return nullptr
                
                char* x8_22 = *arg1
                struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NameType::VTable
                    ** x21_3 = x0_14
                
                if (arg1[1] != x8_22 && zx.d(*x8_22) == 0x49)
                    void* x0_16 = sub_10ee7a8(arg1, 0)
                    
                    if (x0_16 == 0)
                        return x0_16
                    
                    void** x27_1 = arg1[0x266]
                    int64_t x8_24 = x27_1[1]
                    
                    if (x8_24 + 0x20 u>= 0xff0)
                        void** x0_17 = malloc(0x1000)
                        
                        if (x0_17 == 0)
                            goto label_10f3600
                        
                        x8_24 = 0
                        *x0_17 = x27_1
                        x0_17[1] = 0
                        x27_1 = x0_17
                        arg1[0x266] = x0_17
                    
                    x27_1[1] = x8_24 + 0x20
                    *(x27_1 + x8_24 + 0x10) = &_vtable_for_(anonymous namespace)::itanium_demangle::NameWithTemplateArgs{for `(anonymous namespace)::itanium_demangle::Node'}
                    *(x27_1 + x8_24 + 0x20) = x21_3
                    *(x27_1 + x8_24 + 0x28) = x0_16
                    x21_3 = x27_1 + x8_24 + 0x10
                    *(x27_1 + x8_24 + 0x18) = 0x1010125
                
                void** x22_4 = arg1[0x266]
                int64_t x8_18 = x22_4[1]
                
                if (x8_18 + 0x20 u>= 0xff0)
                    void** x0_18 = malloc(0x1000)
                    
                    if (x0_18 == 0)
                        goto label_10f3600
                    
                    x8_18 = 0
                    *x0_18 = x22_4
                    x0_18[1] = 0
                    x22_4 = x0_18
                    arg1[0x266] = x0_18
                
                x22_4[1] = x8_18 + 0x20
                *(x22_4 + x8_18 + 0x10) = &_vtable_for_(anonymous namespace)::itanium_demangle::QualifiedName{for `(anonymous namespace)::itanium_demangle::Node'}
                *(x22_4 + x8_18 + 0x18) = 0x1010116
                *(x22_4 + x8_18 + 0x20) = x20_1
                *(x22_4 + x8_18 + 0x28) = x21_3
                x20_1 = x22_4 + x8_18 + 0x10
            
            goto label_10f35d0
else
    int32_t x23_1
    
    if (x10 != 2)
        x23_1 = 0
    label_10f31fc:
        void* x0_11 = sub_10f779c(arg1)
        
        if (x0_11 == 0 || x23_1 == 0)
            return x0_11
        
        void** x20_2 = arg1[0x266]
        int64_t x8_15 = x20_2[1]
        
        if (x8_15 + 0x20 u< 0xff0)
            goto label_10f3254
        
        void** x0_12 = malloc(0x1000)
        
        if (x0_12 == 0)
            goto label_10f3600
        
        x8_15 = 0
        *x0_12 = x20_2
        x0_12[1] = 0
        x20_2 = x0_12
        arg1[0x266] = x0_12
    label_10f3254:
        x20_2[1] = x8_15 + 0x20
        *(x20_2 + x8_15 + 0x10) = &_vtable_for_(anonymous namespace)::itanium_demangle::GlobalQualifiedName{for `(anonymous namespace)::itanium_demangle::Node'}
        *(x20_2 + x8_15 + 0x18) = 0x1010126
        *(x20_2 + x8_15 + 0x20) = x0_11
        return x20_2 + x8_15 + 0x10
    
label_10f30ec:
    x10_1 = zx.d(*x8)
label_10f3100:
    
    if (x10_1 != 0x67 || zx.d(x8[1]) != 0x73)
        x23_1 = 0
        
        if (zx.d(*x8) != 0x73 || zx.d(x8[1]) != 0x72)
            goto label_10f31fc
    else
        x8 = &x8[2]
        x23_1 = 1
        *arg1 = x8
        
        if (x9 - x8 u< 2 || zx.d(*x8) != 0x73 || zx.d(x8[1]) != 0x72)
            goto label_10f31fc
    
    *arg1 = &x8[2]
    
    if (x9 == &x8[2] || zx.d(x8[2]) - 0x30 u> 9)
        void* x0_6 = sub_10f76dc(arg1)
        
        if (x0_6 != 0)
            char* x8_10 = *arg1
            x20_1 = x0_6
            
            if (arg1[1] == x8_10 || zx.d(*x8_10) != 0x49)
                goto label_10f3570
            
            void* x0_8 = sub_10ee7a8(arg1, 0)
            
            if (x0_8 != 0)
                void** x22_2 = arg1[0x266]
                int64_t x8_12 = x22_2[1]
                
                if (x8_12 + 0x20 u>= 0xff0)
                    void** x0_9 = malloc(0x1000)
                    
                    if (x0_9 == 0)
                        goto label_10f3600
                    
                    x8_12 = 0
                    *x0_9 = x22_2
                    x0_9[1] = 0
                    x22_2 = x0_9
                    arg1[0x266] = x0_9
                
                x22_2[1] = x8_12 + 0x20
                *(x22_2 + x8_12 + 0x10) = &_vtable_for_(anonymous namespace)::itanium_demangle::NameWithTemplateArgs{for `(anonymous namespace)::itanium_demangle::Node'}
                *(x22_2 + x8_12 + 0x20) = x20_1
                *(x22_2 + x8_12 + 0x28) = x0_8
                x20_1 = x22_2 + x8_12 + 0x10
                *(x22_2 + x8_12 + 0x18) = 0x1010125
            label_10f3570:
                void* x0_32 = sub_10f779c(arg1)
                
                if (x0_32 != 0)
                    void** x23_3 = arg1[0x266]
                    x21_5 = x0_32
                    int64_t x8_41 = x23_3[1]
                    
                    if (x8_41 + 0x20 u< 0xff0)
                        goto label_10f35c4
                    
                    void** x0_33 = malloc(0x1000)
                    
                    if (x0_33 == 0)
                        goto label_10f3600
                    
                    x8_41 = 0
                    *x0_33 = x23_3
                    x0_33[1] = 0
                    x23_3 = x0_33
                    arg1[0x266] = x0_33
                label_10f35c4:
                    x23_3[1] = x8_41 + 0x20
                    x22_3 = x23_3 + x8_41 + 0x10
                    *x22_3 = &_vtable_for_(anonymous namespace)::itanium_demangle::QualifiedName{for `(anonymous namespace)::itanium_demangle::Node'}
                    *(x22_3 + 8) = 0x1010116
                label_10f35d0:
                    *(x22_3 + 0x10) = x20_1
                    *(x22_3 + 0x18) = x21_5
                    return x22_3
    else
        struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NameType::VTable
            ** x0_20 = sub_10f7a0c(arg1)
        
        if (x0_20 != 0)
            struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NameType::VTable
                ** x21_4 = x0_20
            x20_1 = nullptr
            
            while (true)
                char* x8_27 = *arg1
                
                if (arg1[1] != x8_27 && zx.d(*x8_27) == 0x49)
                    void* x0_24 = sub_10ee7a8(arg1, 0)
                    
                    if (x0_24 == 0)
                        return x0_24
                    
                    void** x25_1 = arg1[0x266]
                    int64_t x8_29 = x25_1[1]
                    
                    if (x8_29 + 0x20 u>= 0xff0)
                        void** x0_25 = malloc(0x1000)
                        
                        if (x0_25 == 0)
                            goto label_10f3600
                        
                        x8_29 = 0
                        *x0_25 = x25_1
                        x0_25[1] = 0
                        x25_1 = x0_25
                        arg1[0x266] = x0_25
                    
                    x25_1[1] = x8_29 + 0x20
                    *(x25_1 + x8_29 + 0x10) = &_vtable_for_(anonymous namespace)::itanium_demangle::NameWithTemplateArgs{for `(anonymous namespace)::itanium_demangle::Node'}
                    *(x25_1 + x8_29 + 0x20) = x21_4
                    *(x25_1 + x8_29 + 0x28) = x0_24
                    x21_4 = x25_1 + x8_29 + 0x10
                    *(x25_1 + x8_29 + 0x18) = 0x1010125
                
                struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::GlobalQualifiedName::VTable
                    ** x8_34
                
                if (x20_1 != 0)
                    void** x22_5 = arg1[0x266]
                    int64_t x8_32 = x22_5[1]
                    
                    if (x8_32 + 0x20 u>= 0xff0)
                        void** x0_26 = malloc(0x1000)
                        
                        if (x0_26 == 0)
                            goto label_10f3600
                        
                        x8_32 = 0
                        *x0_26 = x22_5
                        x0_26[1] = 0
                        x22_5 = x0_26
                        arg1[0x266] = x0_26
                    
                    x22_5[1] = x8_32 + 0x20
                    x8_34 = x22_5 + x8_32 + 0x10
                    *x8_34 = &_vtable_for_(anonymous namespace)::itanium_demangle::QualifiedName{for `(anonymous namespace)::itanium_demangle::Node'}
                    x8_34[1].d = 0x1010116
                    x8_34[2] = x20_1
                    x20_1 = x8_34
                    x8_34[3] = x21_4
                else if (x23_1 == 0)
                    x20_1 = x21_4
                else
                    void** x20_3 = arg1[0x266]
                    int64_t x8_35 = x20_3[1]
                    
                    if (x8_35 + 0x20 u>= 0xff0)
                        void** x0_27 = malloc(0x1000)
                        
                        if (x0_27 == 0)
                            goto label_10f3600
                        
                        x8_35 = 0
                        *x0_27 = x20_3
                        x0_27[1] = 0
                        x20_3 = x0_27
                        arg1[0x266] = x0_27
                    
                    x20_3[1] = x8_35 + 0x20
                    x8_34 = x20_3 + x8_35 + 0x10
                    *x8_34 = &_vtable_for_(anonymous namespace)::itanium_demangle::GlobalQualifiedName{for `(anonymous namespace)::itanium_demangle::Node'}
                    x8_34[1].d = 0x1010126
                    x20_1 = x8_34
                    x8_34[2] = x21_4
                char* x8_37 = *arg1
                
                if (x8_37 != arg1[1] && zx.d(*x8_37) == 0x45)
                    *arg1 = &x8_37[1]
                    break
                
                struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NameType::VTable
                    ** x0_22 = sub_10f7a0c(arg1)
                x21_4 = x0_22
                
                if (x0_22 == 0)
                    return nullptr
            
            goto label_10f3570
return nullptr
