// 函数: sub_10ee40c
// 地址: 0x10ee40c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
char* x10 = *arg1
int64_t x8_1 = arg1[1]
void* result

if (x10 == x8_1 || zx.d(*x10) != 0x53)
labelid_4:
    result = nullptr
else
    *arg1 = &x10[1]
    
    if (x8_1 == &x10[1])
    labelid_4:
        result = nullptr
    else
        uint64_t x11_2 = zx.q(zx.d(x10[1]) - 0x61)
        
        if (x11_2.d u<= 0x19)
            result = nullptr
            void** x0
            int64_t x8_4
            int32_t x9_6
            void** x21_1
            
            if (x11_2.d u<= 0x12)
                switch (x11_2)
                    case 0
                        SystemHintOp_BTI()
                        x21_1 = arg1[0x266]
                        *arg1 = &x10[2]
                        x8_4 = x21_1[1]
                        
                        if (x8_4 + 0x10 u>= 0xff0)
                            x0 = malloc(0x1000)
                            
                            if (x0 == 0)
                                std::terminate()
                                noreturn
                            
                            x8_4 = 0
                            x9_6 = 0
                        label_10ee57c:
                            *x0 = x21_1
                            x0[1] = 0
                            arg1[0x266] = x0
                            goto label_10ee684
                        
                        x9_6 = 0
                    label_10ee69c:
                        x21_1[1] = x8_4 + 0x10
                        result = x21_1 + x8_4 + 0x10
                        *result = &_vtable_for_(anonymous namespace)::itanium_demangle::SpecialSubstitution{for `(anonymous namespace)::itanium_demangle::Node'}
                        *(result + 8) = 0x1010129
                        *(result + 0xc) = x9_6
                        void* result_1 = sub_10ef350(arg1, result)
                        void* result_2 = result_1
                        
                        if (result_1 != result)
                            sub_10ede98(&arg1[0x25], &result_2)
                            result = result_1
                    case 1
                        SystemHintOp_BTI()
                        x21_1 = arg1[0x266]
                        *arg1 = &x10[2]
                        x8_4 = x21_1[1]
                        
                        if (x8_4 + 0x10 u< 0xff0)
                            x9_6 = 1
                            goto label_10ee69c
                        
                        x0 = malloc(0x1000)
                        
                        if (x0 == 0)
                            std::terminate()
                            noreturn
                        
                        x8_4 = 0
                        *x0 = x21_1
                        x0[1] = 0
                        arg1[0x266] = x0
                        x9_6 = 1
                        goto label_10ee684
                    case 3
                        SystemHintOp_BTI()
                        x21_1 = arg1[0x266]
                        *arg1 = &x10[2]
                        x8_4 = x21_1[1]
                        
                        if (x8_4 + 0x10 u< 0xff0)
                            x9_6 = 5
                            goto label_10ee69c
                        
                        x0 = malloc(0x1000)
                        
                        if (x0 == 0)
                            std::terminate()
                            noreturn
                        
                        x8_4 = 0
                        x9_6 = 5
                        goto label_10ee57c
                    case 8
                        SystemHintOp_BTI()
                        x21_1 = arg1[0x266]
                        *arg1 = &x10[2]
                        x8_4 = x21_1[1]
                        
                        if (x8_4 + 0x10 u< 0xff0)
                            x9_6 = 3
                            goto label_10ee69c
                        
                        x0 = malloc(0x1000)
                        
                        if (x0 == 0)
                            std::terminate()
                            noreturn
                        
                        x8_4 = 0
                        *x0 = x21_1
                        x0[1] = 0
                        arg1[0x266] = x0
                        x9_6 = 3
                        goto label_10ee684
                    case 0xe
                        SystemHintOp_BTI()
                        x21_1 = arg1[0x266]
                        *arg1 = &x10[2]
                        x8_4 = x21_1[1]
                        
                        if (x8_4 + 0x10 u< 0xff0)
                            x9_6 = 4
                            goto label_10ee69c
                        
                        x0 = malloc(0x1000)
                        
                        if (x0 == 0)
                            std::terminate()
                            noreturn
                        
                        x8_4 = 0
                        *x0 = x21_1
                        x0[1] = 0
                        arg1[0x266] = x0
                        x9_6 = 4
                        goto label_10ee684
                    case 0x12
                        SystemHintOp_BTI()
                        x21_1 = arg1[0x266]
                        *arg1 = &x10[2]
                        x8_4 = x21_1[1]
                        
                        if (x8_4 + 0x10 u< 0xff0)
                            x9_6 = 2
                            goto label_10ee69c
                        
                        x0 = malloc(0x1000)
                        
                        if (x0 == 0)
                            std::terminate()
                            noreturn
                        
                        x8_4 = 0
                        *x0 = x21_1
                        x0[1] = 0
                        arg1[0x266] = x0
                        x9_6 = 2
                    label_10ee684:
                        x21_1 = x0
                        goto label_10ee69c
        else if (zx.d(x10[1]) != 0x5f)
            uint32_t i = zx.d(x10[1])
            
            if (i u< 0x30 || (i u>= 0x3a && zx.d(i.b - 0x41) u> 0x19))
            labelid_4:
                result = nullptr
            else
                int64_t x9_15 = 0
                void* x10_3 = &x10[2]
                
                do
                    int64_t x13_2
                    
                    if ((i & 0xff) u>= 0x3a)
                        if (zx.d(i.b - 0x41) u> 0x19)
                            break
                        
                        x13_2 = -0x37
                    else
                        x13_2 = -0x30
                    
                    *arg1 = x10_3
                    
                    if (x8_1 == x10_3)
                        goto label_10ee514_2
                    
                    int64_t x13_5 = x13_2 + zx.q(i.b)
                    i = zx.d(*x10_3)
                    x10_3 += 1
                    x9_15 = x13_5 + x9_15 * 0x24
                while (i u> 0x2f)
                
                if (x10_3 - 1 == x8_1 || zx.d(*(x10_3 - 1)) != 0x5f)
                label_10ee514:
                    result = nullptr
                else
                    int64_t x8_12 = arg1[0x25]
                    int64_t x11_4 = arg1[0x26]
                    *arg1 = x10_3
                    
                    if (x9_15 + 1 u>= (x11_4 - x8_12) s>> 3)
                    label_10ee514_1:
                        result = nullptr
                    else
                        result = *(x8_12 + ((x9_15 + 1) << 3))
        else
            int64_t* x8_2 = arg1[0x25]
            int64_t x9_3 = arg1[0x26]
            *arg1 = &x10[2]
            
            if (x8_2 == x9_3)
            label_10ee514_2:
                result = nullptr
            else
                result = *x8_2

SystemHintOp_BTI()

if (*(x22 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
