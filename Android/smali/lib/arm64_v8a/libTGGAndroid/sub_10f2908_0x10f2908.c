// 函数: sub_10f2908
// 地址: 0x10f2908
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x8 = *arg1
int64_t x10 = arg1[1]
struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NewExpr::VTable
    ** result

if (x8 == x10 || zx.d(*x8) != 0x66)
    result = nullptr
else
    *arg1 = &x8[1]
    
    if (x10 == &x8[1])
        result = nullptr
    else
        uint32_t x23_1 = zx.d(x8[1])
        result = nullptr
        uint64_t x9_3 = zx.q(x23_1 - 0x4c)
        
        if (x9_3.d u<= 0x26)
            int32_t x22_1 = 0
            char x21_1 = 1
            
            switch (x9_3)
                case 0, 0x20
                    goto label_10f2990
                case 6, 0x26
                    SystemHintOp_BTI()
                    x21_1 = 0
                    x22_1 = 1
                label_10f2990:
                    SystemHintOp_BTI()
                    *arg1 = &x8[2]
                    
                    if (x10 - &x8[2] u>= 2)
                        uint32_t x10_2 = zx.d(x8[2])
                        
                        if (x10_2 != 0x61)
                            goto label_10f2a68
                        
                        void* const x24_1
                        void* x25_1
                        
                        if (zx.d(x8[3]) != 0x61)
                            x10_2 = zx.d(x8[2])
                            
                            if (x10_2 == 0x61)
                                if (zx.d(x8[3]) == 0x6e)
                                    x24_1 = &data_7939a1
                                    x25_1 = &data_7939a2
                                    goto label_10f2e1c
                                
                                x10_2 = zx.d(x8[2])
                                
                                if (x10_2 == 0x61)
                                    if (zx.d(x8[3]) == 0x4e)
                                        x24_1 = &data_7559c3
                                        goto label_10f2e10
                                    
                                    x10_2 = zx.d(x8[2])
                                    
                                    if (x10_2 == 0x61)
                                        if (zx.d(x8[3]) == 0x53)
                                            x24_1 = &data_76eb5c
                                            x25_1 = &data_76eb5d
                                            goto label_10f2e1c
                                        
                                        x10_2 = zx.d(x8[2])
                            
                        label_10f2a68:
                            
                            if (x10_2 == 0x63 && zx.d(x8[3]) == 0x6d)
                                x24_1 = &data_74e5d9
                                x25_1 = &data_74e5da
                                goto label_10f2e1c
                            
                            uint32_t x10_12
                            
                            if (zx.d(x8[2]) == 0x64)
                                if (zx.d(x8[3]) == 0x73)
                                    x24_1 = &data_765fff
                                    goto label_10f2e10
                                
                                if (zx.d(x8[2]) != 0x64)
                                    goto label_10f2afc
                                
                                if (zx.d(x8[3]) == 0x76)
                                    x24_1 = &data_72942e
                                    x25_1 = &data_72942f
                                    goto label_10f2e1c
                                
                                x10_12 = zx.d(x8[2])
                                
                                if (x10_12 != 0x64)
                                    goto label_10f2b00
                                
                                if (zx.d(x8[3]) != 0x56)
                                    goto label_10f2afc
                                
                                x24_1 = &data_742918
                                goto label_10f2e10
                            
                        label_10f2afc:
                            x10_12 = zx.d(x8[2])
                        label_10f2b00:
                            
                            if (x10_12 == 0x65 && zx.d(x8[3]) == 0x6f)
                                x24_1 = &data_7727a8
                                x25_1 = &data_7727a9
                                goto label_10f2e1c
                            
                            uint32_t x10_16 = zx.d(x8[2])
                            
                            if (x10_16 == 0x65)
                                if (zx.d(x8[3]) == 0x4f)
                                    x24_1 = &data_761e6f
                                    goto label_10f2e10
                                
                                x10_16 = zx.d(x8[2])
                                
                                if (x10_16 == 0x65)
                                    if (zx.d(x8[3]) == 0x71)
                                        x24_1 = &data_761e72
                                        goto label_10f2e10
                                    
                                    x10_16 = zx.d(x8[2])
                            
                            if (x10_16 == 0x67 && zx.d(x8[3]) == 0x65)
                                x24_1 = &data_725b61
                                goto label_10f2e10
                            
                            uint32_t x10_20 = zx.d(x8[2])
                            
                            if (x10_20 != 0x67)
                                goto label_10f2bbc
                            
                            if (zx.d(x8[3]) == 0x74)
                                x24_1 = &data_761e75
                                x25_1 = &data_761e76
                                goto label_10f2e1c
                            
                            x10_20 = zx.d(x8[2])
                        label_10f2bbc:
                            
                            if (x10_20 == 0x6c && zx.d(x8[3]) == 0x65)
                                x24_1 = &data_7869c7
                                goto label_10f2e10
                            
                            uint32_t x10_26
                            
                            if (zx.d(x8[2]) == 0x6c)
                                if (zx.d(x8[3]) == 0x73)
                                    x24_1 = &data_77d73e
                                    goto label_10f2e10
                                
                                if (zx.d(x8[2]) != 0x6c)
                                    goto label_10f2c50
                                
                                if (zx.d(x8[3]) == 0x53)
                                    x24_1 = &data_775d96
                                label_10f2c20:
                                    x25_1 = x24_1 + 3
                                    goto label_10f2e1c
                                
                                x10_26 = zx.d(x8[2])
                                
                                if (x10_26 != 0x6c)
                                    goto label_10f2c54
                                
                                if (zx.d(x8[3]) != 0x74)
                                    goto label_10f2c50
                                
                                x24_1 = &data_7218c0
                                x25_1 = &data_7218c1
                                goto label_10f2e1c
                            
                        label_10f2c50:
                            x10_26 = zx.d(x8[2])
                        label_10f2c54:
                            
                            if (x10_26 == 0x6d && zx.d(x8[3]) == 0x69)
                                x24_1 = &data_742a60
                                x25_1 = &data_742a61
                                goto label_10f2e1c
                            
                            uint32_t x10_33
                            
                            if (zx.d(x8[2]) == 0x6d)
                                if (zx.d(x8[3]) == 0x49)
                                    x24_1 = &data_74291b
                                    goto label_10f2e10
                                
                                if (zx.d(x8[2]) != 0x6d)
                                    goto label_10f2ce8
                                
                                if (zx.d(x8[3]) == 0x6c)
                                    x24_1 = &data_74e377
                                    x25_1 = &data_74e378
                                    goto label_10f2e1c
                                
                                x10_33 = zx.d(x8[2])
                                
                                if (x10_33 != 0x6d)
                                    goto label_10f2cec
                                
                                if (zx.d(x8[3]) != 0x4c)
                                    goto label_10f2ce8
                                
                                x24_1 = &data_7518c9
                                goto label_10f2e10
                            
                        label_10f2ce8:
                            x10_33 = zx.d(x8[2])
                        label_10f2cec:
                            
                            if (x10_33 == 0x6e && zx.d(x8[3]) == 0x65)
                                x24_1 = &data_78207b
                                goto label_10f2e10
                            
                            uint32_t x10_40
                            
                            if (zx.d(x8[2]) == 0x6f)
                                if (zx.d(x8[3]) == 0x6f)
                                    x24_1 = &data_76eb5e
                                    goto label_10f2e10
                                
                                if (zx.d(x8[2]) != 0x6f)
                                    goto label_10f2d7c
                                
                                if (zx.d(x8[3]) == 0x72)
                                    x24_1 = &data_78bd54
                                    x25_1 = &data_78bd55
                                    goto label_10f2e1c
                                
                                x10_40 = zx.d(x8[2])
                                
                                if (x10_40 != 0x6f)
                                    goto label_10f2d80
                                
                                if (zx.d(x8[3]) != 0x52)
                                    goto label_10f2d7c
                                
                                x24_1 = &data_7727aa
                                goto label_10f2e10
                            
                        label_10f2d7c:
                            x10_40 = zx.d(x8[2])
                        label_10f2d80:
                            
                            if (x10_40 == 0x70 && zx.d(x8[3]) == 0x6c)
                                x24_1 = &data_7727ad
                                x25_1 = &data_7727ae
                                goto label_10f2e1c
                            
                            uint32_t x10_44 = zx.d(x8[2])
                            
                            if (x10_44 == 0x70)
                                if (zx.d(x8[3]) == 0x4c)
                                    x24_1 = &data_76a57e
                                    goto label_10f2e10
                                
                                x10_44 = zx.d(x8[2])
                            
                            if (x10_44 == 0x72 && zx.d(x8[3]) == 0x6d)
                                x24_1 = &data_7a460c
                                x25_1 = &data_7a460d
                                goto label_10f2e1c
                            
                            if (zx.d(x8[2]) != 0x72)
                                result = nullptr
                            else
                                if (zx.d(x8[3]) == 0x4d)
                                    x24_1 = &data_7869ca
                                    goto label_10f2e10
                                
                                if (zx.d(x8[2]) != 0x72)
                                    result = nullptr
                                else
                                    if (zx.d(x8[3]) == 0x73)
                                        x24_1 = &data_731ed8
                                        goto label_10f2e10
                                    
                                    if (zx.d(x8[2]) == 0x72 && zx.d(x8[3]) == 0x53)
                                        x24_1 = &data_76a581
                                        goto label_10f2c20
                                    
                                    result = nullptr
                        else
                            x24_1 = &data_78f37f
                        label_10f2e10:
                            x25_1 = x24_1 + 2
                        label_10f2e1c:
                            *arg1 = &x8[4]
                            result = sub_10efb98(arg1)
                            
                            if (result != 0)
                                struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NewExpr::VTable
                                    ** result_2 = result
                                struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NewExpr::VTable
                                    ** result_3
                                
                                if (x23_1 == 0x52 || x23_1 == 0x4c)
                                    result = sub_10efb98(arg1)
                                    
                                    if (result != 0)
                                        struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NewExpr::VTable
                                            ** result_1
                                        
                                        result_1 = x22_1 != 0 ? result_2 : result
                                        
                                        result_3 = x22_1 != 0 ? result : result_2
                                        
                                        result_2 = result_1
                                        goto label_10f2e60
                                else
                                    result_3 = nullptr
                                label_10f2e60:
                                    void** x23_2 = arg1[0x266]
                                    int64_t x8_2 = x23_2[1]
                                    
                                    if (x8_2 + 0x40 u>= 0xff0)
                                        void** x0_2 = malloc(0x1000)
                                        
                                        if (x0_2 == 0)
                                            std::terminate()
                                            noreturn
                                        
                                        x8_2 = 0
                                        *x0_2 = x23_2
                                        x0_2[1] = 0
                                        x23_2 = x0_2
                                        arg1[0x266] = x0_2
                                    
                                    x23_2[1] = x8_2 + 0x40
                                    result = x23_2 + x8_2 + 0x10
                                    *result = &_vtable_for_(anonymous namespace)::itanium_demangle::FoldExpr{for `(anonymous namespace)::itanium_demangle::Node'}
                                    result[1].d = 0x101013e
                                    result[2] = result_2
                                    result[3] = result_3
                                    result[4] = x24_1
                                    result[5] = x25_1
                                    result[6].b = x21_1
                    else
                        result = nullptr

SystemHintOp_BTI()
return result
