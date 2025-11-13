// 函数: sub_11049a8
// 地址: 0x11049a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = 0
int64_t x8 = 0
int64_t x10 = neg.q(arg1)
char const* const x2
char const* const x3_9
int64_t (* x19)()

while (true)
    if (&arg1[0x14] == arg1)
    label_110522c:
        x2 = "getULEB128"
        x19 = __sF + 0x130
        x3_9 = "truncated uleb128 expression"
        break
    
    if (x9 u<= 0x3f)
        uint64_t x12_1 = zx.q(*arg1)
        int64_t x14_1 = x12_1 & 0x7f
        int64_t x13_1 = x14_1 << x9
        
        if (x13_1 u>> x9 == x14_1)
            x8 |= x13_1
            x9 += 7
            arg1 = &arg1[1]
            x10 -= 1
            
            if ((sx.d((x12_1.d).b) & 0x80000000) != 0)
                continue
            
            int64_t x15_2 = neg.q(x10)
            int64_t x8_1 = x8 - x10
            int64_t var_338 = arg4
            
            if (x8_1 u<= x15_2)
                return arg4
            
            int64_t* x13_2 = &var_338
            int64_t x14_2 = x15_2
            
            while (true)
                uint64_t x16_1 = zx.q(*x14_2)
                x14_2 += 1
                uint64_t x17_1 = zx.q(x16_1.d - 3)
                int64_t x15_4
                uint64_t x15_10
                int64_t x16_9
                int64_t x16_10
                int64_t x16_11
                
                if (x17_1.d u<= 0x91)
                    switch (x17_1)
                        case 0, 0xb, 0xc
                            SystemHintOp_BTI()
                            x14_2 = x15_2 + 9
                            x13_2 = &x13_2[1]
                            *x13_2 = *(x15_2 + 1)
                        label_1104a58:
                            x15_2 = x14_2
                            
                            if (x14_2 u>= x8_1)
                                return *x13_2
                            
                            continue
                        case 3
                            SystemHintOp_BTI()
                            x15_10 = **x13_2
                        label_11051a0:
                            *x13_2 = x15_10
                            goto label_1104a58
                        case 5
                            SystemHintOp_BTI()
                            x16_9 = zx.q(*(x15_2 + 1))
                        label_1104d68:
                            x14_2 = x15_2 + 2
                            x13_2 = &x13_2[1]
                            *x13_2 = x16_9
                            goto label_1104a58
                        case 6
                            SystemHintOp_BTI()
                            x16_9 = sx.q(*(x15_2 + 1))
                            goto label_1104d68
                        case 7
                            SystemHintOp_BTI()
                            x16_10 = zx.q(*(x15_2 + 1))
                        label_1104c58:
                            x14_2 = x15_2 + 3
                            x13_2 = &x13_2[1]
                            *x13_2 = x16_10
                            goto label_1104a58
                        case 8
                            SystemHintOp_BTI()
                            x16_10 = sx.q(*(x15_2 + 1))
                            goto label_1104c58
                        case 9
                            SystemHintOp_BTI()
                            x16_11 = zx.q(*(x15_2 + 1))
                        label_1104c78:
                            x14_2 = x15_2 + 5
                            x13_2 = &x13_2[1]
                            *x13_2 = x16_11
                            goto label_1104a58
                        case 0xa
                            SystemHintOp_BTI()
                            x16_11 = sx.q(*(x15_2 + 1))
                            goto label_1104c78
                        case 0xd
                            SystemHintOp_BTI()
                            int64_t x16_12 = 0
                            x15_4 = 0
                            int64_t x17_5 = x14_2
                            uint64_t x0_9
                            
                            do
                                if (x8_1 == x17_5)
                                    goto label_110522c
                                
                                if (x16_12 u> 0x3f)
                                    goto label_1105204
                                
                                x0_9 = zx.q(*x17_5)
                                int64_t x3_6 = x0_9 & 0x7f
                                int64_t x1_8 = x3_6 << x16_12
                                
                                if (x1_8 u>> x16_12 != x3_6)
                                    goto label_1105204
                                
                                x15_4 |= x1_8
                                x16_12 += 7
                                x17_5 += 1
                                x14_2 += 1
                            while ((sx.d((x0_9.d).b) & 0x80000000) != 0)
                            goto label_1104a50
                        case 0xe
                            SystemHintOp_BTI()
                            int64_t x16_13 = 0
                            int64_t x15_11 = 0
                            int64_t x17_6 = x14_2
                            uint64_t x0_11
                            
                            do
                                if (x8_1 == x17_6)
                                label_11051dc:
                                    x2 = "getSLEB128"
                                    x19 = __sF + 0x130
                                    x3_9 = "truncated sleb128 expression"
                                    goto label_110523c
                                
                                x0_11 = zx.q(*x17_6)
                                x17_6 += 1
                                x14_2 += 1
                                int64_t x1_10 = (x0_11 & 0x7f) << x16_13
                                x16_13 += 7
                                x15_11 |= x1_10
                            while ((x0_11.d & 0x80) != 0)
                            
                            int64_t x16_15
                            
                            if (((x16_13.d - 7 u< 0x39 ? 1 : 0) & (x0_11.d & 0x40) u>> 6) != 0)
                                x16_15 = -1 << x16_13
                            else
                                x16_15 = 0
                            
                            x15_4 = x15_11 | x16_15
                            goto label_1104a50
                        case 0xf
                            SystemHintOp_BTI()
                            x15_4 = *x13_2
                            goto label_1104a50
                        case 0x10
                            SystemHintOp_BTI()
                            x13_2 -= 8
                            goto label_1104a58
                        case 0x11
                            SystemHintOp_BTI()
                            x15_4 = x13_2[-1]
                            goto label_1104a50
                        case 0x12
                            SystemHintOp_BTI()
                            x16_9 = *(x13_2 - (zx.q(*(x15_2 + 1)) << 3))
                            goto label_1104d68
                        case 0x13
                            SystemHintOp_BTI()
                            uint128_t v0 = *(x13_2 - 8)
                            *(x13_2 - 8) = vextq_s8(v0, v0, 8)
                            goto label_1104a58
                        case 0x14
                            SystemHintOp_BTI()
                            int64_t x15_12 = *x13_2
                            *(x13_2 - 8) = *(x13_2 - 0x10)
                            x13_2[-2] = x15_12
                            goto label_1104a58
                        case 0x15
                            SystemHintOp_BTI()
                            int64_t x15_14 = **x13_2
                            x13_2 = &x13_2[-1]
                            *x13_2 = x15_14
                            goto label_1104a58
                        case 0x16
                            SystemHintOp_BTI()
                            int64_t x15_15 = *x13_2
                            
                            if ((x15_15 & 0xffffffff80000000) == 0)
                                goto label_1104a58
                            
                            x15_10 = neg.q(x15_15)
                            goto label_11051a0
                        case 0x17
                            SystemHintOp_BTI()
                            void* x15_17 = &x13_2[-1]
                            int64_t x17_9 = *x13_2
                            x13_2 = x15_17
                            *x15_17 &= x17_9
                            goto label_1104a58
                        case 0x18
                            SystemHintOp_BTI()
                            void* x15_19 = &x13_2[-1]
                            int64_t x17_10 = *x13_2
                            x13_2 = x15_19
                            *x15_19 s/= x17_10
                            goto label_1104a58
                        case 0x19
                            SystemHintOp_BTI()
                            void* x15_21 = &x13_2[-1]
                            int64_t x17_11 = *x13_2
                            x13_2 = x15_21
                            *x15_21 -= x17_11
                            goto label_1104a58
                        case 0x1a
                            SystemHintOp_BTI()
                            void* x15_23 = &x13_2[-1]
                            int64_t x17_12 = *x13_2
                            x13_2 = x15_23
                            *x15_23 = *x15_23 s% x17_12
                            goto label_1104a58
                        case 0x1b
                            SystemHintOp_BTI()
                            void* x15_25 = &x13_2[-1]
                            int64_t x17_13 = *x13_2
                            x13_2 = x15_25
                            *x15_25 *= x17_13
                            goto label_1104a58
                        case 0x1c
                            SystemHintOp_BTI()
                            x15_10 = neg.q(*x13_2)
                            goto label_11051a0
                        case 0x1d
                            SystemHintOp_BTI()
                            x15_10 = not.q(*x13_2)
                            goto label_11051a0
                        case 0x1e
                            SystemHintOp_BTI()
                            void* x15_29 = &x13_2[-1]
                            int64_t x17_14 = *x13_2
                            x13_2 = x15_29
                            *x15_29 |= x17_14
                            goto label_1104a58
                        case 0x1f
                            SystemHintOp_BTI()
                            void* x15_31 = &x13_2[-1]
                            int64_t x17_15 = *x13_2
                            x13_2 = x15_31
                            *x15_31 += x17_15
                            goto label_1104a58
                        case 0x20
                            SystemHintOp_BTI()
                            int64_t x16_30 = 0
                            int64_t x15_32 = 0
                            int64_t x17_16 = x14_2
                            uint64_t x0_14
                            
                            do
                                if (x8_1 == x17_16)
                                    goto label_110522c
                                
                                if (x16_30 u> 0x3f)
                                    goto label_1105204
                                
                                x0_14 = zx.q(*x17_16)
                                int64_t x3_7 = x0_14 & 0x7f
                                int64_t x1_11 = x3_7 << x16_30
                                
                                if (x1_11 u>> x16_30 != x3_7)
                                    goto label_1105204
                                
                                x15_32 |= x1_11
                                x16_30 += 7
                                x17_16 += 1
                                x14_2 += 1
                            while ((sx.d((x0_14.d).b) & 0x80000000) != 0)
                            x15_10 = *x13_2 + x15_32
                            goto label_11051a0
                        case 0x21
                            SystemHintOp_BTI()
                            void* x15_34 = &x13_2[-1]
                            int64_t x17_17 = *x13_2
                            x13_2 = x15_34
                            *x15_34 <<= x17_17
                            goto label_1104a58
                        case 0x22
                            SystemHintOp_BTI()
                            void* x15_36 = &x13_2[-1]
                            int64_t x17_18 = *x13_2
                            x13_2 = x15_36
                            *x15_36 u>>= x17_18
                            goto label_1104a58
                        case 0x23
                            SystemHintOp_BTI()
                            void* x15_38 = &x13_2[-1]
                            int64_t x17_19 = *x13_2
                            x13_2 = x15_38
                            *x15_38 s>>= x17_19
                            goto label_1104a58
                        case 0x24
                            SystemHintOp_BTI()
                            void* x15_40 = &x13_2[-1]
                            int64_t x17_20 = *x13_2
                            x13_2 = x15_40
                            *x15_40 ^= x17_20
                            goto label_1104a58
                        case 0x25
                            SystemHintOp_BTI()
                            int64_t x16_40 = *x13_2
                            x13_2 = &x13_2[-1]
                            
                            if (x16_40 == 0)
                                x14_2 = x15_2 + 3
                            else
                                x14_2 = x15_2 + 3 + sx.q(*x14_2)
                            
                            goto label_1104a58
                        case 0x26
                            SystemHintOp_BTI()
                            void* x15_43 = &x13_2[-1]
                            int64_t x17_21 = *x13_2
                            x13_2 = x15_43
                            *x15_43 = zx.q(*x15_43 == x17_21 ? 1 : 0)
                            goto label_1104a58
                        case 0x27
                            SystemHintOp_BTI()
                            void* x15_45 = &x13_2[-1]
                            int64_t x17_22 = *x13_2
                            x13_2 = x15_45
                            *x15_45 = zx.q(*x15_45 u>= x17_22 ? 1 : 0)
                            goto label_1104a58
                        case 0x28
                            SystemHintOp_BTI()
                            void* x15_47 = &x13_2[-1]
                            int64_t x17_23 = *x13_2
                            x13_2 = x15_47
                            *x15_47 = zx.q(*x15_47 u> x17_23 ? 1 : 0)
                            goto label_1104a58
                        case 0x29
                            SystemHintOp_BTI()
                            void* x15_49 = &x13_2[-1]
                            int64_t x17_24 = *x13_2
                            x13_2 = x15_49
                            *x15_49 = zx.q(*x15_49 u<= x17_24 ? 1 : 0)
                            goto label_1104a58
                        case 0x2a
                            SystemHintOp_BTI()
                            void* x15_51 = &x13_2[-1]
                            int64_t x17_25 = *x13_2
                            x13_2 = x15_51
                            *x15_51 = zx.q(*x15_51 u< x17_25 ? 1 : 0)
                            goto label_1104a58
                        case 0x2b
                            SystemHintOp_BTI()
                            void* x15_53 = &x13_2[-1]
                            int64_t x17_26 = *x13_2
                            x13_2 = x15_53
                            *x15_53 = zx.q(*x15_53 != x17_26 ? 1 : 0)
                            goto label_1104a58
                        case 0x2c
                            SystemHintOp_BTI()
                            x14_2 = x15_2 + sx.q(*(x15_2 + 1)) + 3
                            goto label_1104a58
                        case 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 
                                0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 
                                0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c
                            SystemHintOp_BTI()
                            x15_4 = x16_1 - 0x30
                            goto label_1104a50
                        case 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 
                                0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f, 0x60, 0x61, 0x62, 
                                0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c
                            SystemHintOp_BTI()
                            x15_4 = *(arg3 + (zx.q(x16_1.d - 0x50) << 3))
                        label_1104a50:
                            x13_2 = &x13_2[1]
                            *x13_2 = x15_4
                            goto label_1104a58
                        case 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 
                                0x78, 0x79, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e, 0x7f, 0x80, 0x81, 0x82, 
                                0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c
                            SystemHintOp_BTI()
                            int64_t x0_1 = 0
                            int64_t x15_5 = 0
                            int64_t x1_1 = x14_2
                            uint64_t x3
                            
                            do
                                if (x8_1 == x1_1)
                                    goto label_11051dc
                                
                                x3 = zx.q(*x1_1)
                                x1_1 += 1
                                x14_2 += 1
                                int64_t x4_2 = (x3 & 0x7f) << x0_1
                                x0_1 += 7
                                x15_5 |= x4_2
                            while ((x3.d & 0x80) != 0)
                            
                            int64_t x0_3
                            
                            if (((x0_1.d - 7 u< 0x39 ? 1 : 0) & (x3.d & 0x40) u>> 6) != 0)
                                x0_3 = -1 << x0_1
                            else
                                x0_3 = 0
                            
                            if (x16_1.d == 0x92)
                                x15_4 = *(arg3 + 0x108) + (x15_5 | x0_3)
                                goto label_1104a50
                            
                            if (x16_1.d == 0x6f)
                                x15_4 = *(arg3 + 0x100) + (x15_5 | x0_3)
                                goto label_1104a50
                            
                            if (x16_1.d == 0x6e)
                                x15_4 = *(arg3 + 0xf8) + (x15_5 | x0_3)
                                goto label_1104a50
                            
                            if (x16_1.d - 0x70 u<= 0x1f)
                                x15_4 = *(arg3 + (zx.q(x16_1.d - 0x70) << 3)) + (x15_5 | x0_3)
                                goto label_1104a50
                            
                        label_1105264:
                            x2 = "getRegister"
                            x19 = __sF + 0x130
                            x3_9 = "unsupported arm64 register"
                            break
                        case 0x8d
                            SystemHintOp_BTI()
                            int64_t x16_54 = 0
                            int64_t x15_54 = 0
                            int64_t x17_27 = x14_2
                            
                            while (true)
                                if (x8_1 == x17_27)
                                    goto label_110522c
                                
                                if (x16_54 u> 0x3f)
                                    goto label_1105204
                                
                                uint64_t x0_17 = zx.q(*x17_27)
                                int64_t x3_8 = x0_17 & 0x7f
                                int64_t x1_13 = x3_8 << x16_54
                                
                                if (x1_13 u>> x16_54 != x3_8)
                                    goto label_1105204
                                
                                x15_54 |= x1_13
                                x16_54 += 7
                                x17_27 += 1
                                x14_2 += 1
                                
                                if ((sx.d((x0_17.d).b) & 0x80000000) == 0)
                                    int64_t* x16_55 = arg3 + 0x108
                                    
                                    if (x15_54.d != 0x22)
                                        x16_55 = arg3 + 0x100
                                        
                                        if (x15_54.d != 0xffffffff)
                                            x16_55 = arg3 + 0xf8
                                            
                                            if (x15_54.d != 0xfffffffe)
                                                if (x15_54.d u> 0x1f)
                                                    break
                                                
                                                x16_55 = arg3 + (zx.q(x15_54.d) << 3)
                                    
                                    x15_4 = *x16_55
                                    goto label_1104a50
                            
                            goto label_1105264
                        case 0x8e
                            SystemHintOp_BTI()
                            x2 = "evaluateExpression"
                            x19 = __sF + 0x130
                            x3_9 = "DW_OP_fbreg not implemented"
                            break
                        case 0x8f
                            SystemHintOp_BTI()
                            int64_t x17_3 = 0
                            int64_t x15_7 = 0
                            int64_t x0_4 = x14_2 + 1
                            int64_t x16_4 = x14_2
                            
                            while (true)
                                if (x8_1 == x16_4)
                                    goto label_110522c
                                
                                if (x17_3 u> 0x3f)
                                    goto label_1105204
                                
                                x14_2 = x0_4
                                uint64_t x0_5 = zx.q(*x16_4)
                                int64_t x3_2 = x0_5 & 0x7f
                                int64_t x1_5 = x3_2 << x17_3
                                
                                if (x1_5 u>> x17_3 != x3_2)
                                    goto label_1105204
                                
                                x15_7 |= x1_5
                                x17_3 += 7
                                x16_4 += 1
                                x0_4 = x14_2 + 1
                                
                                if ((sx.d((x0_5.d).b) & 0x80000000) == 0)
                                    int64_t x0_6 = 0
                                    int64_t x17_4 = 0
                                    uint64_t x1_6
                                    
                                    do
                                        if (x8_1 == x16_4)
                                            goto label_11051dc
                                        
                                        x1_6 = zx.q(*x16_4)
                                        x16_4 += 1
                                        x14_2 += 1
                                        int64_t x3_5 = (x1_6 & 0x7f) << x0_6
                                        x0_6 += 7
                                        x17_4 |= x3_5
                                    while ((x1_6.d & 0x80) != 0)
                                    
                                    int64_t x16_7
                                    
                                    if (((x0_6.d - 7 u< 0x39 ? 1 : 0) & (x1_6.d & 0x40) u>> 6) != 0)
                                        x16_7 = -1 << x0_6
                                    else
                                        x16_7 = 0
                                    
                                    int64_t* x0_8 = arg3 + 0x108
                                    
                                    if (x15_7.d != 0x22)
                                        x0_8 = arg3 + 0x100
                                        
                                        if (x15_7.d != 0xffffffff)
                                            x0_8 = arg3 + 0xf8
                                            
                                            if (x15_7.d != 0xfffffffe)
                                                if (x15_7.d u> 0x1f)
                                                    break
                                                
                                                x0_8 = arg3 + (zx.q(x15_7.d) << 3)
                                    
                                    x15_4 = *x0_8 + (x17_4 | x16_7)
                                    goto label_1104a50
                            
                            goto label_1105264
                        case 0x90
                            SystemHintOp_BTI()
                            x2 = "evaluateExpression"
                            x19 = __sF + 0x130
                            x3_9 = "DW_OP_piece not implemented"
                            break
                        case 0x91
                            SystemHintOp_BTI()
                            uint64_t x14_9 = zx.q(zx.d(*(x15_2 + 1)) - 1)
                            
                            if (x14_9.d u> 7)
                            label_11052f8:
                                SystemHintOp_BTI()
                                x2 = "evaluateExpression"
                                x19 = __sF + 0x130
                                x3_9 = "DW_OP_deref_size with bad size"
                                break
                            
                            int64_t* x16_53 = *x13_2
                            x14_2 = x15_2 + 2
                            
                            switch (x14_9)
                                case 0
                                    SystemHintOp_BTI()
                                    x15_10 = zx.q(*x16_53)
                                case 1
                                    SystemHintOp_BTI()
                                    x15_10 = zx.q(*x16_53)
                                case 2, 4, 5, 6
                                    goto label_11052f8
                                case 3
                                    SystemHintOp_BTI()
                                    x15_10 = zx.q(*x16_53)
                                case 7
                                    SystemHintOp_BTI()
                                    x15_10 = *x16_53
                            
                            goto label_11051a0
                SystemHintOp_BTI()
                x2 = "evaluateExpression"
                x19 = __sF + 0x130
                x3_9 = "DWARF opcode not implemented"
                break
            
            break
    
label_1105204:
    x2 = "getULEB128"
    x19 = __sF + 0x130
    x3_9 = "malformed uleb128 expression"
    break

label_110523c:
fprintf(x19, "libunwind: %s - %s\n", x2, x3_9)
fflush(x19)
abort()
noreturn
