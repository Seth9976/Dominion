// 函数: sub_11057d4
// 地址: 0x11057d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x22

x22 = arg5 == 0 ? arg3 : arg5

void* x28

if (arg4 != -1)
    x28 = arg4 + arg3
else
    x28 = -ffffffffffffffff

void* var_68 = x22

if (x22 u< x28)
    while (true)
        int32_t* x8_1 = x22
        uint64_t x9_1 = zx.q(*x8_1)
        void* x8_2 = &x8_1[1]
        void* x26_1 = x22
        var_68 = x8_2
        
        if (x9_1.d == 0xffffffff)
            x9_1 = *(x26_1 + 4)
            x8_2 = x26_1 + 0xc
            var_68 = x8_2
        
        if (x9_1 == 0)
            break
        
        uint64_t x10_1 = zx.q(*x8_2)
        x22 = x8_2 + x9_1
        
        if (x10_1.d != 0)
            void* x1 = x8_2 - x10_1
            
            if (x1 u>= arg3 && x1 u< x28 && sub_1105c18(arg1, x1, arg7) == 0)
                var_68 += 4
                int64_t x0_3 = sub_11046b8(arg1, &var_68, x22, zx.d(arg7[3].b), 0)
                int64_t x0_5 = sub_11046b8(arg1, &var_68, x22, zx.d(arg7[3].b) & 0xf, 0)
                
                if (x0_3 u< arg2)
                    int64_t x27_1 = x0_5 + x0_3
                    
                    if (x27_1 u>= arg2)
                        arg6[5] = 0
                        void* x24_2 = var_68
                        
                        if (zx.d(*(arg7 + 0x31)) != 0)
                            int64_t x10_2 = 0
                            int64_t x8_7 = 0
                            int64_t x9_2 = neg.q(x24_2)
                            
                            while (true)
                                char const* const x3_4
                                int64_t (* x19_2)()
                                
                                if (x22 == x24_2)
                                    x19_2 = __sF + 0x130
                                    x3_4 = "truncated uleb128 expression"
                                else
                                    if (x10_2 u<= 0x3f)
                                        uint64_t x11_1 = zx.q(*x24_2)
                                        int64_t x13_1 = x11_1 & 0x7f
                                        int64_t x12_1 = x13_1 << x10_2
                                        
                                        if (x12_1 u>> x10_2 == x13_1)
                                            x8_7 |= x12_1
                                            x10_2 += 7
                                            x24_2 += 1
                                            x9_2 -= 1
                                            
                                            if ((sx.d((x11_1.d).b) & 0x80000000) == 0)
                                                break
                                            
                                            continue
                                    
                                    x19_2 = __sF + 0x130
                                    x3_4 = "malformed uleb128 expression"
                                
                                fprintf(x19_2, "libunwind: %s - %s\n", "getULEB128", x3_4)
                                fflush(x19_2)
                                abort()
                                noreturn
                            
                            int64_t x25_2 = neg.q(x9_2)
                            var_68 = x25_2
                            uint32_t x10_3 = zx.d(*(arg7 + 0x19))
                            x24_2 = x8_7 - x9_2
                            
                            if (x10_3 != 0xff
                                    && sub_11046b8(arg1, &var_68, x22, x10_3 & 0xf, 0) != 0)
                                var_68 = x25_2
                                arg6[5] = sub_11046b8(arg1, &var_68, x22, zx.d(*(arg7 + 0x19)), 0)
                        
                        arg6[2] = x24_2
                        arg6[3] = x0_3
                        arg6[4] = x27_1
                        *arg6 = x26_1
                        arg6[1] = x22 - x26_1
                        return 1
        
        var_68 = x22
        
        if (x22 u>= x28)
            break

return 0
