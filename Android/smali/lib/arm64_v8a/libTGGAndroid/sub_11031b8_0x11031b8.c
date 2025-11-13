// 函数: sub_11031b8
// 地址: 0x11031b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_6f0
void* sp = &var_6f0
int64_t var_98
int64_t* x27 = &var_98
int64_t x8_1 = arg3[1] + *arg3
var_98 = arg3[2]
int64_t var_90 = x8_1
void* x28 = nullptr
int64_t var_88 = -1
int64_t var_80 = arg2[2]
int64_t var_78 = arg2[1] + *arg2
void var_68
void* var_6c8 = &var_68
void var_480
void* var_6e8 = &var_480
int64_t var_70 = arg4 - arg2[3]

while (true)
    char* x8_8 = *x27
    int64_t x23_1 = x27[2]
    char* var_a0 = x8_8
    
    if (x23_1 != 0)
        int64_t x24_1 = x27[1]
        
        if (x8_8 u< x24_1)
            int64_t x25_1 = 0
            int64_t x0 = x24_1 - 1
            char* x26_1 = x8_8
            int64_t var_6c0_1 = x0
            
            while (true)
                uint64_t x9_2 = zx.q(*x26_1)
                x26_1 = &x26_1[1]
                var_a0 = x26_1
                char const* const buf
                size_t size
                char const* const x2_2
                FILE* fp
                char const* const x3_1
                int64_t x8_10
                int32_t x8_54
                uint32_t x9_3
                void* x9_5
                int32_t x10_2
                int64_t x10_5
                int64_t x10_23
                int64_t x11_27
                char* x12_5
                int64_t (* x20_1)()
                void var_6b8
                int64_t x8_11
                
                if (x9_2.d u> 0x2f)
                label_1103f5c:
                    SystemHintOp_BTI()
                    int32_t x10_44 = x9_2.d & 0xc0
                    x8_11 = x9_2 & 0x3f
                    
                    if (x10_44 == 0x40)
                        x25_1 += zx.q(arg3[5].d * x8_11.d)
                        
                        if (x25_1 u>= x23_1)
                            break
                    else if (x10_44 == 0xc0)
                    label_110402c:
                        
                        if (zx.d(arg6[x8_11 * 4 + 7].b) == 0)
                            goto label_11041f8
                        
                        int64_t x8_44 = x8_11 << 4
                        *(arg6 + x8_44 + 0x18) = *(&var_6b8 + x8_44 + 0x18)
                        
                        if (x25_1 u>= x23_1)
                            break
                    else
                        if (x10_44 != 0x80)
                            return 0
                        
                        int64_t x10_45 = 0
                        int64_t x9_33 = 0
                        uint64_t x8_41 = zx.q(x8_11.d)
                        char* x11_52 = x26_1
                        
                        while (true)
                            if (x24_1 == x11_52)
                                goto label_1104424
                            
                            if (x10_45 u> 0x3f)
                                goto label_11043fc
                            
                            uint64_t x12_47 = zx.q(*x11_52)
                            int64_t x14_41 = x12_47 & 0x7f
                            int64_t x13_36 = x14_41 << x10_45
                            
                            if (x13_36 u>> x10_45 != x14_41)
                                goto label_11043fc
                            
                            x9_33 |= x13_36
                            x10_45 += 7
                            x11_52 = &x11_52[1]
                            x26_1 = &x26_1[1]
                            
                            if ((sx.d((x12_47.d).b) & 0x80000000) == 0)
                                var_a0 = x26_1
                                void* x10_46 = &arg6[x8_41 * 4]
                                int64_t x9_34 = x9_33 * sx.q(*(arg3 + 0x2c))
                                
                                if (zx.d(*(x10_46 + 0x1c)) == 0)
                                    uint64_t x8_42 = x8_41 << 4
                                    *(&var_6b8 + x8_42 + 0x18) = *(arg6 + x8_42 + 0x18)
                                    *(x10_46 + 0x1c) = 1
                                
                                *(x10_46 + 0x18) = 2
                                *(x10_46 + 0x20) = x9_34
                                
                                if (x25_1 u< x23_1)
                                    break
                                
                                goto label_1103254
                else
                    switch (x9_2)
                        case 0
                            goto label_11041f8
                        case 1
                            SystemHintOp_BTI()
                            int64_t x0_2 = sub_11046b8(arg1, &var_a0, x24_1, zx.d(arg3[3].b), 0)
                            x26_1 = var_a0
                            x25_1 = x0_2
                            x0 = var_6c0_1
                            
                            if (x25_1 u>= x23_1)
                                break
                        case 2
                            SystemHintOp_BTI()
                            x9_3 = zx.d(x8_8[1])
                            x10_2 = arg3[5].d
                            x26_1 = &x8_8[2]
                        label_110331c:
                            x25_1 += zx.q(x10_2 * x9_3)
                            var_a0 = x26_1
                            
                            if (x25_1 u>= x23_1)
                                break
                        case 3
                            SystemHintOp_BTI()
                            x9_3 = zx.d(*(x8_8 + 1))
                            x10_2 = arg3[5].d
                            x26_1 = &x8_8[3]
                            goto label_110331c
                        case 4
                            SystemHintOp_BTI()
                            x9_3 = *(x8_8 + 1)
                            x10_2 = arg3[5].d
                            x26_1 = &x8_8[5]
                            goto label_110331c
                        case 5
                            SystemHintOp_BTI()
                            int64_t x11_2 = 0
                            x8_10 = 0
                            void* x12_1 = x0 - x26_1
                            char* x9_4 = x26_1
                            
                            while (true)
                                if (x24_1 == x9_4)
                                    goto label_1104424
                                
                                if (x11_2 u> 0x3f)
                                    goto label_11043fc
                                
                                void* x10_3 = x12_1
                                uint64_t x12_2 = zx.q(*x9_4)
                                int64_t x14_1 = x12_2 & 0x7f
                                int64_t x13_1 = x14_1 << x11_2
                                
                                if (x13_1 u>> x11_2 != x14_1)
                                    goto label_11043fc
                                
                                x8_10 |= x13_1
                                x11_2 += 7
                                x9_4 = &x9_4[1]
                                x26_1 = &x26_1[1]
                                x12_1 = x10_3 - 1
                                
                                if ((sx.d((x12_2.d).b) & 0x80000000) == 0)
                                    int64_t x12_3 = 0
                                    int64_t x13_2 = 0
                                    int64_t x11_3 = 0
                                    var_a0 = x26_1
                                    
                                    while (true)
                                        if (x10_3 == 0)
                                            goto label_1104424
                                        
                                        if (x13_2 u> 0x3f)
                                            goto label_11043fc
                                        
                                        uint64_t x14_3 = zx.q(x9_4[x12_3])
                                        int64_t x16_1 = x14_3 & 0x7f
                                        int64_t x15_2 = x16_1 << x13_2
                                        
                                        if (x15_2 u>> x13_2 != x16_1)
                                            goto label_11043fc
                                        
                                        x11_3 |= x15_2
                                        x13_2 += 7
                                        x12_3 += 1
                                        x10_3 -= 1
                                        
                                        if ((sx.d((x14_3.d).b) & 0x80000000) == 0)
                                            x26_1 = &x26_1[x12_3]
                                            var_a0 = x26_1
                                            
                                            if (x8_10 u>= 0x60)
                                                buf = "libunwind: malformed DW_CFA_offset_extended "
                                                "DWARF unwind, reg too big\n"
                                                size = 0x46
                                                fp = __sF + 0x130
                                                goto label_11043b8
                                            
                                            x9_5 = &arg6[x8_10 * 4]
                                            x12_5 = x9_5 + 0x1c
                                            x10_5 = x11_3 * sx.q(*(arg3 + 0x2c))
                                            
                                            if (zx.d(*x12_5) != 0)
                                                goto label_11041ec
                                            
                                            break
                                    
                                    break
                            
                        label_11041cc:
                            int64_t x8_52 = x8_10 << 4
                            *(&var_6b8 + x8_52 + 0x18) = *(arg6 + x8_52 + 0x18)
                            *x12_5 = 1
                        label_11041ec:
                            x8_54 = 2
                        label_11041f0:
                            *(x9_5 + 0x18) = x8_54
                            *(x9_5 + 0x20) = x10_5
                        label_11041f8:
                            SystemHintOp_BTI()
                            
                            if (x25_1 u>= x23_1)
                                break
                        case 6
                            SystemHintOp_BTI()
                            int64_t x9_6 = 0
                            x8_11 = 0
                            char* x10_6 = x26_1
                            
                            while (true)
                                if (x24_1 == x10_6)
                                    goto label_1104424
                                
                                if (x9_6 u> 0x3f)
                                    goto label_11043fc
                                
                                uint64_t x11_4 = zx.q(*x10_6)
                                int64_t x13_4 = x11_4 & 0x7f
                                int64_t x12_6 = x13_4 << x9_6
                                
                                if (x12_6 u>> x9_6 != x13_4)
                                    goto label_11043fc
                                
                                x8_11 |= x12_6
                                x9_6 += 7
                                x10_6 = &x10_6[1]
                                x26_1 = &x26_1[1]
                                
                                if ((sx.d((x11_4.d).b) & 0x80000000) == 0)
                                    var_a0 = x26_1
                                    
                                    if (x8_11 u< 0x60)
                                        break
                                    
                                    buf = "libunwind: malformed DW_CFA_restore_extended DWARF "
                                    "unwind, reg too big\n"
                                    goto label_11042d4
                            
                            goto label_110402c
                        case 7
                            SystemHintOp_BTI()
                            int64_t x9_7 = 0
                            int64_t x8_12 = 0
                            char* x10_7 = x26_1
                            
                            while (true)
                                if (x24_1 == x10_7)
                                    goto label_1104424
                                
                                if (x9_7 u> 0x3f)
                                    goto label_11043fc
                                
                                uint64_t x11_6 = zx.q(*x10_7)
                                int64_t x13_5 = x11_6 & 0x7f
                                int64_t x12_7 = x13_5 << x9_7
                                
                                if (x12_7 u>> x9_7 != x13_5)
                                    goto label_11043fc
                                
                                x8_12 |= x12_7
                                x9_7 += 7
                                x10_7 = &x10_7[1]
                                x26_1 = &x26_1[1]
                                
                                if ((sx.d((x11_6.d).b) & 0x80000000) == 0)
                                    var_a0 = x26_1
                                    
                                    if (x8_12 u>= 0x60)
                                        buf = "libunwind: malformed DW_CFA_undefined DWARF unwind, "
                                        "reg too big\n"
                                        break
                                    
                                    void* x9_8 = &arg6[x8_12 * 4]
                                    
                                    if (zx.d(*(x9_8 + 0x1c)) == 0)
                                        int64_t x8_13 = x8_12 << 4
                                        *(&var_6b8 + x8_13 + 0x18) = *(arg6 + x8_13 + 0x18)
                                        *(x9_8 + 0x1c) = 1
                                    
                                    *(x9_8 + 0x18) = 1
                                    
                                    if (x25_1 u< x23_1)
                                        goto label_1104208
                                    
                                    goto label_1103254
                            
                            goto label_11043ac
                        case 8
                            SystemHintOp_BTI()
                            int64_t x9_9 = 0
                            int64_t x8_15 = 0
                            char* x10_10 = x26_1
                            
                            while (true)
                                if (x24_1 == x10_10)
                                    goto label_1104424
                                
                                if (x9_9 u> 0x3f)
                                    goto label_11043fc
                                
                                uint64_t x11_10 = zx.q(*x10_10)
                                int64_t x13_6 = x11_10 & 0x7f
                                int64_t x12_8 = x13_6 << x9_9
                                
                                if (x12_8 u>> x9_9 != x13_6)
                                    goto label_11043fc
                                
                                x8_15 |= x12_8
                                x9_9 += 7
                                x10_10 = &x10_10[1]
                                x26_1 = &x26_1[1]
                                
                                if ((sx.d((x11_10.d).b) & 0x80000000) == 0)
                                    var_a0 = x26_1
                                    
                                    if (x8_15 u>= 0x60)
                                        buf = "libunwind: malformed DW_CFA_same_value DWARF unwind, "
                                        "reg too big\n"
                                        break
                                    
                                    void* x9_10 = &arg6[x8_15 * 4]
                                    
                                    if (zx.d(*(x9_10 + 0x1c)) == 0)
                                        int64_t x8_16 = x8_15 << 4
                                        *(&var_6b8 + x8_16 + 0x18) = *(arg6 + x8_16 + 0x18)
                                        *(x9_10 + 0x1c) = 1
                                    
                                    *(x9_10 + 0x18) = 0
                                    
                                    if (x25_1 u< x23_1)
                                        goto label_1104208
                                    
                                    goto label_1103254
                            
                        label_1104320:
                            fp = __sF + 0x130
                            size = 0x41
                            goto label_11043b8
                        case 9
                            SystemHintOp_BTI()
                            int64_t x11_14 = 0
                            int64_t x8_18 = 0
                            void* x12_9 = x0 - x26_1
                            char* x9_11 = x26_1
                            void* x10_13
                            uint64_t x12_10
                            
                            do
                                if (x24_1 == x9_11)
                                    goto label_1104424
                                
                                if (x11_14 u> 0x3f)
                                    goto label_11043fc
                                
                                x10_13 = x12_9
                                x12_10 = zx.q(*x9_11)
                                int64_t x14_8 = x12_10 & 0x7f
                                int64_t x13_7 = x14_8 << x11_14
                                
                                if (x13_7 u>> x11_14 != x14_8)
                                    goto label_11043fc
                                
                                x8_18 |= x13_7
                                x11_14 += 7
                                x9_11 = &x9_11[1]
                                x26_1 = &x26_1[1]
                                x12_9 = x10_13 - 1
                            while ((sx.d((x12_10.d).b) & 0x80000000) != 0)
                            int64_t x12_11 = 0
                            int64_t x13_8 = 0
                            int64_t x11_15 = 0
                            var_a0 = x26_1
                            uint64_t x14_10
                            
                            do
                                if (x10_13 == 0)
                                    goto label_1104424
                                
                                if (x13_8 u> 0x3f)
                                    goto label_11043fc
                                
                                x14_10 = zx.q(x9_11[x12_11])
                                int64_t x16_2 = x14_10 & 0x7f
                                int64_t x15_4 = x16_2 << x13_8
                                
                                if (x15_4 u>> x13_8 != x16_2)
                                    goto label_11043fc
                                
                                x11_15 |= x15_4
                                x13_8 += 7
                                x12_11 += 1
                                x10_13 -= 1
                            while ((sx.d((x14_10.d).b) & 0x80000000) != 0)
                            x26_1 = &x26_1[x12_11]
                            var_a0 = x26_1
                            
                            if (x8_18 u>= 0x60)
                                buf = "libunwind: malformed DW_CFA_register DWARF unwind, reg too big\n"
                                size = 0x3f
                                fp = __sF + 0x130
                                goto label_11043b8
                            
                            if (x11_15 u>= 0x60)
                                buf = "libunwind: malformed DW_CFA_register DWARF unwind, reg2 too big\n"
                            label_11043ac:
                                fp = __sF + 0x130
                                size = 0x40
                                goto label_11043b8
                            
                            void* x9_12 = &arg6[x8_18 * 4]
                            
                            if (zx.d(*(x9_12 + 0x1c)) == 0)
                                int64_t x8_19 = x8_18 << 4
                                *(&var_6b8 + x8_19 + 0x18) = *(arg6 + x8_19 + 0x18)
                                *(x9_12 + 0x1c) = 1
                            
                            *(x9_12 + 0x18) = 4
                            *(x9_12 + 0x20) = x11_15
                            
                            if (x25_1 u>= x23_1)
                                break
                        case 0xa
                            SystemHintOp_BTI()
                            void* x8_21 = x28
                            x28 = sp - 0x620
                            sp = x28
                            *x28 = x8_21
                            memcpy(x28 + 8, arg6, 0x618)
                            x0 = var_6c0_1
                            
                            if (x25_1 u>= x23_1)
                                break
                        case 0xb
                            SystemHintOp_BTI()
                            
                            if (x28 == 0)
                                return 0
                            
                            memcpy(arg6, x28 + 8, 0x618)
                            x0 = var_6c0_1
                            x28 = *x28
                            
                            if (x25_1 u>= x23_1)
                                break
                        case 0xc
                            SystemHintOp_BTI()
                            int64_t x11_16 = 0
                            int64_t x8_22 = 0
                            void* x12_14 = x0 - x26_1
                            char* x9_13 = x26_1
                            
                            while (true)
                                if (x24_1 == x9_13)
                                    goto label_1104424
                                
                                if (x11_16 u> 0x3f)
                                    goto label_11043fc
                                
                                void* x10_16 = x12_14
                                uint64_t x12_15 = zx.q(*x9_13)
                                int64_t x14_12 = x12_15 & 0x7f
                                int64_t x13_9 = x14_12 << x11_16
                                
                                if (x13_9 u>> x11_16 != x14_12)
                                    goto label_11043fc
                                
                                x8_22 |= x13_9
                                x11_16 += 7
                                x9_13 = &x9_13[1]
                                x26_1 = &x26_1[1]
                                x12_14 = x10_16 - 1
                                
                                if ((sx.d((x12_15.d).b) & 0x80000000) == 0)
                                    int64_t x12_16 = 0
                                    int64_t x13_10 = 0
                                    int64_t x11_17 = 0
                                    var_a0 = x26_1
                                    
                                    while (true)
                                        if (x10_16 == 0)
                                            goto label_1104424
                                        
                                        if (x13_10 u> 0x3f)
                                            goto label_11043fc
                                        
                                        uint64_t x14_14 = zx.q(x9_13[x12_16])
                                        int64_t x16_3 = x14_14 & 0x7f
                                        int64_t x15_6 = x16_3 << x13_10
                                        
                                        if (x15_6 u>> x13_10 != x16_3)
                                            goto label_11043fc
                                        
                                        x11_17 |= x15_6
                                        x13_10 += 7
                                        x12_16 += 1
                                        x10_16 -= 1
                                        
                                        if ((sx.d((x14_14.d).b) & 0x80000000) == 0)
                                            x26_1 = &x26_1[x12_16]
                                            var_a0 = x26_1
                                            
                                            if (x8_22 u>= 0x60)
                                                buf = "libunwind: malformed DW_CFA_def_cfa DWARF "
                                                "unwind, reg too big\n"
                                                size = 0x3e
                                                fp = __sF + 0x130
                                                break
                                            
                                            *arg6 = x8_22.d
                                            arg6[1] = x11_17.d
                                            
                                            if (x25_1 u< x23_1)
                                                goto label_1104208
                                            
                                            goto label_1103254
                                    
                                    break
                            
                            goto label_11043b8
                        case 0xd
                            SystemHintOp_BTI()
                            int64_t x9_14 = 0
                            int64_t x8_23 = 0
                            char* x10_17 = x26_1
                            
                            while (true)
                                if (x24_1 == x10_17)
                                    goto label_1104424
                                
                                if (x9_14 u> 0x3f)
                                    goto label_11043fc
                                
                                uint64_t x11_18 = zx.q(*x10_17)
                                int64_t x13_11 = x11_18 & 0x7f
                                int64_t x12_17 = x13_11 << x9_14
                                
                                if (x12_17 u>> x9_14 != x13_11)
                                    goto label_11043fc
                                
                                x8_23 |= x12_17
                                x9_14 += 7
                                x10_17 = &x10_17[1]
                                x26_1 = &x26_1[1]
                                
                                if ((sx.d((x11_18.d).b) & 0x80000000) == 0)
                                    var_a0 = x26_1
                                    
                                    if (x8_23 u>= 0x60)
                                        buf = "libunwind: malformed DW_CFA_def_cfa_register DWARF "
                                        "unwind, reg too big\n"
                                    label_11042d4:
                                        fp = __sF + 0x130
                                        size = 0x47
                                        break
                                    
                                    *arg6 = x8_23.d
                                    
                                    if (x25_1 u< x23_1)
                                        goto label_1104208
                                    
                                    goto label_1103254
                            
                            goto label_11043b8
                        case 0xe
                            SystemHintOp_BTI()
                            int64_t x9_15 = 0
                            int64_t x8_24 = 0
                            char* x10_18 = x26_1
                            
                            while (true)
                                if (x24_1 == x10_18)
                                    goto label_1104424
                                
                                if (x9_15 u> 0x3f)
                                    goto label_11043fc
                                
                                uint64_t x11_20 = zx.q(*x10_18)
                                int64_t x13_12 = x11_20 & 0x7f
                                int64_t x12_18 = x13_12 << x9_15
                                
                                if (x12_18 u>> x9_15 != x13_12)
                                    goto label_11043fc
                                
                                x8_24 |= x12_18
                                x9_15 += 7
                                x10_18 = &x10_18[1]
                                x26_1 = &x26_1[1]
                                
                                if ((sx.d((x11_20.d).b) & 0x80000000) == 0)
                                    var_a0 = x26_1
                                    arg6[1] = x8_24.d
                                    
                                    if (x25_1 u< x23_1)
                                        break
                                    
                                    goto label_1103254
                        case 0xf
                            SystemHintOp_BTI()
                            int64_t x9_16 = 0
                            int64_t x8_25 = 0
                            int64_t x10_19 = neg.q(x26_1)
                            *arg6 = 0
                            *(arg6 + 8) = x26_1
                            
                            while (true)
                                if (x24_1 == x26_1)
                                    goto label_1104424
                                
                                if (x9_16 u> 0x3f)
                                    goto label_11043fc
                                
                                uint64_t x11_22 = zx.q(*x26_1)
                                int64_t x13_13 = x11_22 & 0x7f
                                int64_t x12_19 = x13_13 << x9_16
                                
                                if (x12_19 u>> x9_16 != x13_13)
                                    goto label_11043fc
                                
                                x8_25 |= x12_19
                                x9_16 += 7
                                x26_1 = &x26_1[1]
                                x10_19 -= 1
                                
                                if ((sx.d((x11_22.d).b) & 0x80000000) == 0)
                                    x26_1 = x8_25 - x10_19
                                    var_a0 = x26_1
                                    
                                    if (x25_1 u< x23_1)
                                        break
                                    
                                    goto label_1103254
                        case 0x10
                            SystemHintOp_BTI()
                            int64_t x11_24 = 0
                            int64_t x10_20 = 0
                            void* x12_20 = x0 - x26_1
                            char* x8_26 = x26_1
                            
                            while (true)
                                if (x24_1 == x8_26)
                                    goto label_1104424
                                
                                if (x11_24 u> 0x3f)
                                    goto label_11043fc
                                
                                void* x9_17 = x12_20
                                uint64_t x12_21 = zx.q(*x8_26)
                                int64_t x14_19 = x12_21 & 0x7f
                                int64_t x13_14 = x14_19 << x11_24
                                
                                if (x13_14 u>> x11_24 != x14_19)
                                    goto label_11043fc
                                
                                x10_20 |= x13_14
                                x11_24 += 7
                                x8_26 = &x8_26[1]
                                x26_1 = &x26_1[1]
                                x12_20 = x9_17 - 1
                                
                                if ((sx.d((x12_21.d).b) & 0x80000000) == 0)
                                    var_a0 = x26_1
                                    
                                    if (x10_20 u>= 0x60)
                                        buf = "libunwind: malformed DW_CFA_expression DWARF unwind, "
                                        "reg too big\n"
                                        goto label_1104320
                                    
                                    void* x13_15 = &arg6[x10_20 * 4]
                                    
                                    if (zx.d(*(x13_15 + 0x1c)) == 0)
                                        int64_t x10_21 = x10_20 << 4
                                        *(&var_6b8 + x10_21 + 0x18) = *(arg6 + x10_21 + 0x18)
                                        *(x13_15 + 0x1c) = 1
                                    
                                    x10_23 = 0
                                    int64_t x12_24 = 0
                                    x11_27 = 0
                                    *(x13_15 + 0x18) = 5
                                    *(x13_15 + 0x20) = x26_1
                                    uint64_t x13_16
                                    
                                    do
                                        if (x9_17 == 0)
                                            goto label_1104424
                                        
                                        if (x12_24 u> 0x3f)
                                            goto label_11043fc
                                        
                                        x13_16 = zx.q(x8_26[x10_23])
                                        int64_t x15_8 = x13_16 & 0x7f
                                        int64_t x14_21 = x15_8 << x12_24
                                        
                                        if (x14_21 u>> x12_24 != x15_8)
                                            goto label_11043fc
                                        
                                        x11_27 |= x14_21
                                        x12_24 += 7
                                        x10_23 += 1
                                        x9_17 -= 1
                                    while ((sx.d((x13_16.d).b) & 0x80000000) != 0)
                                    break
                            
                        label_1103f48:
                            x26_1 = &x26_1[x11_27 + x10_23]
                            var_a0 = x26_1
                            
                            if (x25_1 u>= x23_1)
                                break
                        case 0x11
                            SystemHintOp_BTI()
                            int64_t x11_28 = 0
                            int64_t x8_27 = 0
                            void* x12_25 = x0 - x26_1
                            char* x9_18 = x26_1
                            
                            while (true)
                                if (x24_1 == x9_18)
                                    goto label_1104424
                                
                                if (x11_28 u> 0x3f)
                                    goto label_11043fc
                                
                                void* x10_24 = x12_25
                                uint64_t x12_26 = zx.q(*x9_18)
                                int64_t x14_22 = x12_26 & 0x7f
                                int64_t x13_18 = x14_22 << x11_28
                                
                                if (x13_18 u>> x11_28 != x14_22)
                                    goto label_11043fc
                                
                                x8_27 |= x13_18
                                x11_28 += 7
                                x9_18 = &x9_18[1]
                                x26_1 = &x26_1[1]
                                x12_25 = x10_24 - 1
                                
                                if ((sx.d((x12_26.d).b) & 0x80000000) == 0)
                                    var_a0 = x26_1
                                    
                                    if (x8_27 u> 0x5f)
                                        buf = "libunwind: malformed DW_CFA_offset_extended_sf DWARF "
                                        "unwind, reg too big\n"
                                        size = 0x49
                                        fp = __sF + 0x130
                                        goto label_11043b8
                                    
                                    int64_t x13_19 = 0
                                    int64_t x11_29 = 0
                                    int64_t x12_27 = 0
                                    uint64_t x14_24
                                    
                                    do
                                        if (x10_24 == 0)
                                            goto label_110445c
                                        
                                        x14_24 = zx.q(x9_18[x13_19])
                                        x13_19 += 1
                                        x10_24 -= 1
                                        int64_t x15_11 = (x14_24 & 0x7f) << x11_29
                                        x11_29 += 7
                                        x12_27 |= x15_11
                                    while ((x14_24.d & 0x80) != 0)
                                    
                                    x26_1 = &x26_1[x13_19]
                                    x9_5 = &arg6[x8_27 * 4]
                                    var_a0 = x26_1
                                    int64_t x11_31
                                    
                                    if (((x11_29.d - 7 u< 0x39 ? 1 : 0) & (x14_24.d & 0x40) u>> 6)
                                            != 0)
                                        x11_31 = -1 << x11_29
                                    else
                                        x11_31 = 0
                                    
                                    x10_5 = (x12_27 | x11_31) * sx.q(*(arg3 + 0x2c))
                                    
                                    if (zx.d(*(x9_5 + 0x1c)) == 0)
                                        int64_t x8_28 = x8_27 << 4
                                        *(&var_6b8 + x8_28 + 0x18) = *(arg6 + x8_28 + 0x18)
                                        *(x9_5 + 0x1c) = 1
                                    
                                    break
                            
                            goto label_11041ec
                        case 0x12
                            SystemHintOp_BTI()
                            int64_t x11_34 = 0
                            int64_t x8_30 = 0
                            void* x12_28 = x0 - x26_1
                            char* x9_19 = x26_1
                            
                            while (true)
                                if (x24_1 == x9_19)
                                    goto label_1104424
                                
                                if (x11_34 u> 0x3f)
                                    goto label_11043fc
                                
                                void* x10_28 = x12_28
                                uint64_t x12_29 = zx.q(*x9_19)
                                int64_t x14_27 = x12_29 & 0x7f
                                int64_t x13_22 = x14_27 << x11_34
                                
                                if (x13_22 u>> x11_34 != x14_27)
                                    goto label_11043fc
                                
                                x8_30 |= x13_22
                                x11_34 += 7
                                x9_19 = &x9_19[1]
                                x26_1 = &x26_1[1]
                                x12_28 = x10_28 - 1
                                
                                if ((sx.d((x12_29.d).b) & 0x80000000) == 0)
                                    int64_t x13_23 = 0
                                    int64_t x12_30 = 0
                                    int64_t x11_35 = 0
                                    var_a0 = x26_1
                                    uint64_t x14_29
                                    
                                    do
                                        if (x10_28 == 0)
                                            goto label_110445c
                                        
                                        x14_29 = zx.q(x9_19[x13_23])
                                        x13_23 += 1
                                        x10_28 -= 1
                                        int64_t x15_14 = (x14_29 & 0x7f) << x12_30
                                        x12_30 += 7
                                        x11_35 |= x15_14
                                    while ((x14_29.d & 0x80) != 0)
                                    
                                    x26_1 = &x26_1[x13_23]
                                    var_a0 = x26_1
                                    
                                    if (x8_30 u>= 0x60)
                                        buf = "libunwind: malformed DW_CFA_def_cfa_sf DWARF unwind, "
                                        "reg too big\n"
                                        break
                                    
                                    int32_t x9_22
                                    
                                    if (((x12_30.d - 7 u< 0x39 ? 1 : 0) & (x14_29.d & 0x40) u>> 6)
                                            != 0)
                                        x9_22 = (-1 << x12_30).d
                                    else
                                        x9_22 = 0
                                    
                                    int32_t x9_24 = *(arg3 + 0x2c) * (x11_35.d | x9_22)
                                    *arg6 = x8_30.d
                                    arg6[1] = x9_24
                                    
                                    if (x25_1 u< x23_1)
                                        goto label_1104208
                                    
                                    goto label_1103254
                            
                            goto label_1104320
                        case 0x13
                            SystemHintOp_BTI()
                            int64_t x9_25 = 0
                            int64_t x8_31 = 0
                            char* x10_30 = x26_1
                            uint64_t x11_36
                            
                            do
                                if (x24_1 == x10_30)
                                    goto label_110445c
                                
                                x11_36 = zx.q(*x10_30)
                                x10_30 = &x10_30[1]
                                x26_1 = &x26_1[1]
                                int64_t x12_33 = (x11_36 & 0x7f) << x9_25
                                x9_25 += 7
                                x8_31 |= x12_33
                            while ((x11_36.d & 0x80) != 0)
                            
                            var_a0 = x26_1
                            int32_t x9_27
                            
                            if (((x9_25.d - 7 u< 0x39 ? 1 : 0) & (x11_36.d & 0x40) u>> 6) != 0)
                                x9_27 = (-1 << x9_25).d
                            else
                                x9_27 = 0
                            
                            arg6[1] = *(arg3 + 0x2c) * (x8_31.d | x9_27)
                            
                            if (x25_1 u>= x23_1)
                                break
                        case 0x14
                            SystemHintOp_BTI()
                            int64_t x10_33 = 0
                            int64_t x2_1 = 0
                            void* x11_38 = x0 - x26_1
                            char* x8_34 = x26_1
                            
                            while (true)
                                if (x24_1 == x8_34)
                                    goto label_1104424
                                
                                if (x10_33 u> 0x3f)
                                    goto label_11043fc
                                
                                void* x9_28 = x11_38
                                uint64_t x11_39 = zx.q(*x8_34)
                                int64_t x13_24 = x11_39 & 0x7f
                                int64_t x12_35 = x13_24 << x10_33
                                
                                if (x12_35 u>> x10_33 != x13_24)
                                    goto label_11043fc
                                
                                x2_1 |= x12_35
                                x10_33 += 7
                                x8_34 = &x8_34[1]
                                x26_1 = &x26_1[1]
                                x11_38 = x9_28 - 1
                                
                                if ((sx.d((x11_39.d).b) & 0x80000000) == 0)
                                    var_a0 = x26_1
                                    
                                    if (x2_1 u> 0x5f)
                                        fprintf(__sF + 0x130, 
                                            "libunwind: malformed DW_CFA_val_offset DWARF unwind, reg ("
                                        ") out of range\n\n")
                                        return 0
                                    
                                    int64_t x11_40 = 0
                                    int64_t x12_36 = 0
                                    int64_t x10_34 = 0
                                    
                                    while (true)
                                        if (x9_28 == 0)
                                            goto label_1104424
                                        
                                        if (x12_36 u> 0x3f)
                                            goto label_11043fc
                                        
                                        uint64_t x13_26 = zx.q(x8_34[x11_40])
                                        int64_t x15_15 = x13_26 & 0x7f
                                        int64_t x14_32 = x15_15 << x12_36
                                        
                                        if (x14_32 u>> x12_36 != x15_15)
                                            goto label_11043fc
                                        
                                        x10_34 |= x14_32
                                        x12_36 += 7
                                        x11_40 += 1
                                        x9_28 -= 1
                                        
                                        if ((sx.d((x13_26.d).b) & 0x80000000) == 0)
                                            x26_1 = &x26_1[x11_40]
                                            void* x8_35 = &arg6[x2_1 * 4]
                                            var_a0 = x26_1
                                            int64_t x9_30 = x10_34 * sx.q(*(arg3 + 0x2c))
                                            
                                            if (zx.d(*(x8_35 + 0x1c)) == 0)
                                                int64_t x10_35 = x2_1 << 4
                                                *(&var_6b8 + x10_35 + 0x18) =
                                                    *(arg6 + x10_35 + 0x18)
                                                *(x8_35 + 0x1c) = 1
                                            
                                            *(x8_35 + 0x18) = 3
                                            *(x8_35 + 0x20) = x9_30
                                            
                                            if (x25_1 u< x23_1)
                                                break
                                            
                                            goto label_1103254
                                    
                                    break
                        case 0x15
                            SystemHintOp_BTI()
                            int64_t x11_43 = 0
                            int64_t x8_36 = 0
                            void* x12_39 = x0 - x26_1
                            char* x9_31 = x26_1
                            
                            while (true)
                                if (x24_1 == x9_31)
                                    goto label_1104424
                                
                                if (x11_43 u> 0x3f)
                                    goto label_11043fc
                                
                                void* x10_37 = x12_39
                                uint64_t x12_40 = zx.q(*x9_31)
                                int64_t x14_33 = x12_40 & 0x7f
                                int64_t x13_28 = x14_33 << x11_43
                                
                                if (x13_28 u>> x11_43 != x14_33)
                                    goto label_11043fc
                                
                                x8_36 |= x13_28
                                x11_43 += 7
                                x9_31 = &x9_31[1]
                                x26_1 = &x26_1[1]
                                x12_39 = x10_37 - 1
                                
                                if ((sx.d((x12_40.d).b) & 0x80000000) == 0)
                                    var_a0 = x26_1
                                    
                                    if (x8_36 u> 0x5f)
                                        buf = "libunwind: malformed DW_CFA_val_offset_sf DWARF "
                                        "unwind, reg too big\n"
                                        size = 0x44
                                        fp = __sF + 0x130
                                        goto label_11043b8
                                    
                                    int64_t x13_29 = 0
                                    int64_t x11_44 = 0
                                    int64_t x12_41 = 0
                                    uint64_t x14_35
                                    
                                    do
                                        if (x10_37 == 0)
                                        label_110445c:
                                            x2_2 = "getSLEB128"
                                            x20_1 = __sF + 0x130
                                            x3_1 = "truncated sleb128 expression"
                                            goto label_1104434
                                        
                                        x14_35 = zx.q(x9_31[x13_29])
                                        x13_29 += 1
                                        x10_37 -= 1
                                        int64_t x15_18 = (x14_35 & 0x7f) << x11_44
                                        x11_44 += 7
                                        x12_41 |= x15_18
                                    while ((x14_35.d & 0x80) != 0)
                                    
                                    x26_1 = &x26_1[x13_29]
                                    x9_5 = &arg6[x8_36 * 4]
                                    var_a0 = x26_1
                                    int64_t x11_46
                                    
                                    if (((x11_44.d - 7 u< 0x39 ? 1 : 0) & (x14_35.d & 0x40) u>> 6)
                                            != 0)
                                        x11_46 = -1 << x11_44
                                    else
                                        x11_46 = 0
                                    
                                    x10_5 = (x12_41 | x11_46) * sx.q(*(arg3 + 0x2c))
                                    
                                    if (zx.d(*(x9_5 + 0x1c)) == 0)
                                        int64_t x8_37 = x8_36 << 4
                                        *(&var_6b8 + x8_37 + 0x18) = *(arg6 + x8_37 + 0x18)
                                        *(x9_5 + 0x1c) = 1
                                    
                                    x8_54 = 3
                                    break
                            
                            goto label_11041f0
                        case 0x16
                            SystemHintOp_BTI()
                            int64_t x11_49 = 0
                            int64_t x10_41 = 0
                            void* x12_42 = x0 - x26_1
                            char* x8_39 = x26_1
                            
                            while (true)
                                if (x24_1 == x8_39)
                                    goto label_1104424
                                
                                if (x11_49 u> 0x3f)
                                    goto label_11043fc
                                
                                void* x9_32 = x12_42
                                uint64_t x12_43 = zx.q(*x8_39)
                                int64_t x14_38 = x12_43 & 0x7f
                                int64_t x13_32 = x14_38 << x11_49
                                
                                if (x13_32 u>> x11_49 != x14_38)
                                    goto label_11043fc
                                
                                x10_41 |= x13_32
                                x11_49 += 7
                                x8_39 = &x8_39[1]
                                x26_1 = &x26_1[1]
                                x12_42 = x9_32 - 1
                                
                                if ((sx.d((x12_43.d).b) & 0x80000000) == 0)
                                    var_a0 = x26_1
                                    
                                    if (x10_41 u>= 0x60)
                                        buf = "libunwind: malformed DW_CFA_val_expression DWARF "
                                        "unwind, reg too big\n"
                                        size = 0x45
                                        fp = __sF + 0x130
                                        goto label_11043b8
                                    
                                    void* x13_33 = &arg6[x10_41 * 4]
                                    
                                    if (zx.d(*(x13_33 + 0x1c)) == 0)
                                        int64_t x10_42 = x10_41 << 4
                                        *(&var_6b8 + x10_42 + 0x18) = *(arg6 + x10_42 + 0x18)
                                        *(x13_33 + 0x1c) = 1
                                    
                                    x10_23 = 0
                                    int64_t x12_46 = 0
                                    x11_27 = 0
                                    *(x13_33 + 0x18) = 6
                                    *(x13_33 + 0x20) = x26_1
                                    uint64_t x13_34
                                    
                                    do
                                        if (x9_32 == 0)
                                            goto label_1104424
                                        
                                        if (x12_46 u> 0x3f)
                                            goto label_11043fc
                                        
                                        x13_34 = zx.q(x8_39[x10_23])
                                        int64_t x15_20 = x13_34 & 0x7f
                                        int64_t x14_40 = x15_20 << x12_46
                                        
                                        if (x14_40 u>> x12_46 != x15_20)
                                            goto label_11043fc
                                        
                                        x11_27 |= x14_40
                                        x12_46 += 7
                                        x10_23 += 1
                                        x9_32 -= 1
                                    while ((sx.d((x13_34.d).b) & 0x80000000) != 0)
                                    break
                            
                            goto label_1103f48
                        case 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 
                                0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c
                            goto label_1103f5c
                        case 0x2d
                            SystemHintOp_BTI()
                            
                            if (arg5 != 4)
                                goto label_11041f8
                            
                            if (zx.d(arg6[0x8f].b) == 0)
                                *var_6e8 = *(arg6 + 0x238)
                                arg6[0x8f].b = 1
                            
                            *(arg6 + 0x240) ^= 1
                            
                            if (x25_1 u>= x23_1)
                                break
                        case 0x2e
                            SystemHintOp_BTI()
                            int64_t x9_39 = 0
                            int64_t x8_51 = 0
                            char* x10_47 = x26_1
                            
                            while (true)
                                if (x24_1 == x10_47)
                                    goto label_1104424
                                
                                if (x9_39 u> 0x3f)
                                    goto label_11043fc
                                
                                uint64_t x11_55 = zx.q(*x10_47)
                                int64_t x13_38 = x11_55 & 0x7f
                                int64_t x12_51 = x13_38 << x9_39
                                
                                if (x12_51 u>> x9_39 != x13_38)
                                    goto label_11043fc
                                
                                x8_51 |= x12_51
                                x9_39 += 7
                                x10_47 = &x10_47[1]
                                x26_1 = &x26_1[1]
                                
                                if ((sx.d((x11_55.d).b) & 0x80000000) == 0)
                                    var_a0 = x26_1
                                    arg6[4] = x8_51.d
                                    
                                    if (x25_1 u< x23_1)
                                        break
                                    
                                    goto label_1103254
                        case 0x2f
                            SystemHintOp_BTI()
                            int64_t x11_57 = 0
                            x8_10 = 0
                            void* x12_52 = x0 - x26_1
                            char* x9_40 = x26_1
                            void* x10_48
                            
                            while (true)
                                if (x24_1 == x9_40)
                                label_1104424:
                                    x2_2 = "getULEB128"
                                    x20_1 = __sF + 0x130
                                    x3_1 = "truncated uleb128 expression"
                                else
                                    if (x11_57 u<= 0x3f)
                                        x10_48 = x12_52
                                        uint64_t x12_53 = zx.q(*x9_40)
                                        int64_t x14_43 = x12_53 & 0x7f
                                        int64_t x13_39 = x14_43 << x11_57
                                        
                                        if (x13_39 u>> x11_57 == x14_43)
                                            x8_10 |= x13_39
                                            x11_57 += 7
                                            x9_40 = &x9_40[1]
                                            x26_1 = &x26_1[1]
                                            x12_52 = x10_48 - 1
                                            
                                            if ((sx.d((x12_53.d).b) & 0x80000000) == 0)
                                                break
                                            
                                            continue
                                    
                                label_11043fc:
                                    x2_2 = "getULEB128"
                                    x20_1 = __sF + 0x130
                                    x3_1 = "malformed uleb128 expression"
                                
                            label_1104434:
                                fprintf(x20_1, "libunwind: %s - %s\n", x2_2, x3_1)
                                fflush(x20_1)
                                abort()
                                noreturn
                            
                            var_a0 = x26_1
                            
                            if (x8_10 u> 0x5f)
                                buf = "libunwind: malformed DW_CFA_GNU_negative_offset_extended "
                                "DWARF unwind, reg too big\n"
                                size = 0x53
                                fp = __sF + 0x130
                            label_11043b8:
                                fwrite(buf, size, 1, fp)
                                return 0
                            
                            int64_t x12_54 = 0
                            int64_t x13_40 = 0
                            int64_t x11_58 = 0
                            
                            while (true)
                                if (x10_48 == 0)
                                    goto label_1104424
                                
                                if (x13_40 u> 0x3f)
                                    goto label_11043fc
                                
                                uint64_t x14_45 = zx.q(x9_40[x12_54])
                                int64_t x16_7 = x14_45 & 0x7f
                                int64_t x15_23 = x16_7 << x13_40
                                
                                if (x15_23 u>> x13_40 != x16_7)
                                    goto label_11043fc
                                
                                x11_58 |= x15_23
                                x13_40 += 7
                                x12_54 += 1
                                x10_48 -= 1
                                
                                if ((sx.d((x14_45.d).b) & 0x80000000) == 0)
                                    x26_1 = &x26_1[x12_54]
                                    x9_5 = &arg6[x8_10 * 4]
                                    var_a0 = x26_1
                                    x12_5 = x9_5 + 0x1c
                                    x10_5 = 0 - x11_58 * sx.q(*(arg3 + 0x2c))
                                    
                                    if (zx.d(*x12_5) != 0)
                                        goto label_11041ec
                                    
                                    break
                            
                            goto label_11041cc
            label_1104208:
                x8_8 = x26_1
                
                if (x26_1 u>= x24_1)
                    break
    
label_1103254:
    x27 = &x27[3]
    
    if (x27 == var_6c8)
        break

return 1
