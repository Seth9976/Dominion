// 函数: sub_10fc508
// 地址: 0x10fc508
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x10 = *arg1
void* x8 = arg1[1]
int32_t x21_1

if (x10 == x8)
label_10fc5c4:
    x21_1 = 0
    
    if (x10 != x8)
    label_10fc5d8:
        
        if (zx.d(*x10) == 0x56)
            x10 = &x10[1]
            x21_1 |= 2
            *arg1 = x10
        
        if (x10 != x8 && zx.d(*x10) == 0x4b)
            x21_1 |= 1
            *arg1 = &x10[1]
else
    if (zx.d(*x10) == 0x55)
        void* x9_2 = &x10[1]
        *arg1 = x9_2
        
        if (x8 != x9_2 && zx.d(*x9_2) - 0x30 u<= 9)
            int64_t x11_3 = 0
            void* x12_1 = &x10[2]
            void* x23_1
            
            while (true)
                *arg1 = x12_1
                x9_2 = x12_1
                x11_3 = zx.q(*(x12_1 - 1)) + x11_3 * 0xa - 0x30
                
                if (x8 == x9_2)
                    x23_1 = x8
                    break
                
                x12_1 = x9_2 + 1
                
                if (zx.d(*x9_2) - 0x30 u>= 0xa)
                    x23_1 = x12_1 - 1
                    break
            
            if (x8 - x23_1 u>= x11_3)
                x9_2 = x23_1 + x11_3
                void* x22_2 = x9_2
                *arg1 = x9_2
                
                if (x23_1 != x22_2)
                    struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::ObjCProtoName::VTable
                        * const x8_7
                    int64_t x9_9
                    int16_t x10_17
                    void* x20_2
                    int64_t x21_2
                    void** x24_1
                    
                    if (x22_2 - x23_1 u< 9 || zx.d(*x23_1) != 0x6f || zx.d(*(x23_1 + 1)) != 0x62
                            || zx.d(*(x23_1 + 2)) != 0x6a || zx.d(*(x23_1 + 3)) != 0x63
                            || zx.d(*(x23_1 + 4)) != 0x70 || zx.d(*(x23_1 + 5)) != 0x72
                            || zx.d(*(x23_1 + 6)) != 0x6f || zx.d(*(x23_1 + 7)) != 0x74
                            || zx.d(*(x23_1 + 8)) != 0x6f)
                        int64_t x0_4 = sub_10fc508(arg1)
                        
                        if (x0_4 != 0)
                            x24_1 = arg1[0x266]
                            x21_2 = x0_4
                            int64_t x8_6 = x24_1[1]
                            
                            if (x8_6 + 0x30 u>= 0xff0)
                                void*** x0_5 = malloc(0x1000)
                                
                                if (x0_5 == 0)
                                    std::terminate()
                                    noreturn
                                
                                x8_6 = 0
                                *x0_5 = x24_1
                                x0_5[1] = 0
                                x24_1 = x0_5
                                arg1[0x266] = x0_5
                            
                            x9_9 = x8_6 + 0x30
                            x20_2 = x24_1 + x8_6
                            x10_17 = 0x102
                            x8_7 = &_vtable_for_(anonymous namespace)::itanium_demangle::VendorExtQualType{for `(anonymous namespace)::itanium_demangle::Node'}
                        label_10fc808:
                            x24_1[1] = x9_9
                            int64_t* x20_1 = x20_2 + 0x10
                            *x20_1 = x8_7
                            x20_1[1].d = zx.d(x10_17) | 0x1010000
                            x20_1[2] = x21_2
                            x20_1[3] = x23_1
                            x20_1[4] = x22_2
                            return x20_1
                    else
                        *arg1 = x23_1 + 9
                        arg1[1] = x22_2
                        
                        if (x23_1 + 9 == x22_2 || zx.d(*(x23_1 + 9)) - 0x30 u> 9)
                            x22_2 = nullptr
                            x23_1 = nullptr
                        else
                            int64_t x10_15 = 0
                            void* x11_5 = x23_1 + 0xa
                            
                            while (true)
                                *arg1 = x11_5
                                x10_15 = zx.q(*(x11_5 - 1)) + x10_15 * 0xa - 0x30
                                
                                if (x22_2 == x11_5)
                                    x23_1 = x22_2
                                    break
                                
                                uint32_t x13_4 = zx.d(*x11_5)
                                x11_5 += 1
                                
                                if (x13_4 - 0x30 u>= 0xa)
                                    x23_1 = x11_5 - 1
                                    break
                            
                            if (x22_2 - x23_1 u>= x10_15)
                                x22_2 = x23_1 + x10_15
                            else
                                x22_2 = nullptr
                                x23_1 = nullptr
                        
                        *arg1 = x9_2
                        arg1[1] = x8
                        
                        if (x23_1 != x22_2)
                            int64_t x0_7 = sub_10fc508(arg1)
                            
                            if (x0_7 != 0)
                                x24_1 = arg1[0x266]
                                x21_2 = x0_7
                                int64_t x8_8 = x24_1[1]
                                
                                if (x8_8 + 0x30 u>= 0xff0)
                                    void** x0_8 = malloc(0x1000)
                                    
                                    if (x0_8 == 0)
                                        std::terminate()
                                        noreturn
                                    
                                    x8_8 = 0
                                    *x0_8 = x24_1
                                    x0_8[1] = 0
                                    x24_1 = x0_8
                                    arg1[0x266] = x0_8
                                
                                x9_9 = x8_8 + 0x30
                                x20_2 = x24_1 + x8_8
                                x10_17 = 0x10a
                                x8_7 = &_vtable_for_(anonymous namespace)::itanium_demangle::ObjCProtoName{for `(anonymous namespace)::itanium_demangle::Node'}
                                goto label_10fc808
        
        return nullptr
    
    if (zx.d(*x10) != 0x72)
        goto label_10fc5c4
    
    x10 = &x10[1]
    x21_1 = 4
    *arg1 = x10
    
    if (x10 != x8)
        goto label_10fc5d8

int64_t* x0_1 = sub_10eb95c(arg1)

if (x0_1 == 0 || x21_1 == 0)
    return x0_1

void** x22_1 = arg1[0x266]
int64_t x8_3 = x22_1[1]

if (x8_3 + 0x20 u>= 0xff0)
    void** x0_2 = malloc(0x1000)
    
    if (x0_2 == 0)
        std::terminate()
        noreturn
    
    x8_3 = 0
    *x0_2 = x22_1
    x0_2[1] = 0
    x22_1 = x0_2
    arg1[0x266] = x0_2

x22_1[1] = x8_3 + 0x20
int16_t x9_7 = *(x0_1 + 9)
char x12_4 = *(x0_1 + 0xb)
*(x22_1 + x8_3 + 0x10) = &_vtable_for_(anonymous namespace)::itanium_demangle::QualType{for `(anonymous namespace)::itanium_demangle::Node'}
*(x22_1 + x8_3 + 0x20) = x0_1
*(x22_1 + x8_3 + 0x18) = 3
*(x22_1 + x8_3 + 0x1c) = x21_1
*(x22_1 + x8_3 + 0x19) = x9_7
*(x22_1 + x8_3 + 0x1b) = x12_4
return x22_1 + x8_3 + 0x10
