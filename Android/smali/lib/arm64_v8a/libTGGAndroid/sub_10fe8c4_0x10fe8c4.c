// 函数: sub_10fe8c4
// 地址: 0x10fe8c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
int128_t result
result.q = 0
result:8.q = 0
__builtin_memset(arg1, 0, 0x28)
arg1[5].d = 3

if ((arg2 & 1) == 0)
    if ((arg2 & 2) == 0)
        goto label_10fe938
    
    if ((not.d(arg2) & 0xc) != 0)
        goto label_10fe980
    
labelid_3:
    arg1[5].d = 2
else
    int32_t x8_2
    
    if ((arg2 & 0xe) == 0)
    label_10fe980:
        char* x0_1
        x0_1, result = sub_1101fd4(arg5)
        
        if (x0_1 == 0)
        label_10feda8:
        labelid_3:
            arg1[5].d = 8
        else
            arg1[2] = x0_1
            int64_t x0_3 = sub_110208c(arg5)
            int64_t* x0_5
            x0_5, result = sub_1102008(arg5)
            void* var_78 = &x0_1[1]
            int64_t* x0_7 = sub_10ff24c(&var_78, *x0_1)
            char* x8_5 = var_78
            int64_t* x13_1
            
            x13_1 = x0_7 == 0 ? x0_5 : x0_7
            
            uint64_t x9_2 = zx.q(*x8_5)
            void* x8_6 = &x8_5[1]
            void* x28_1
            
            if (x9_2 == 0xff)
                x28_1 = nullptr
            else
                int64_t x10_1 = 0
                int64_t x9_3 = 0
                uint64_t x11_1
                
                do
                    x11_1 = zx.q(*x8_6)
                    x8_6 += 1
                    x9_3 |= (x11_1 & 0x7f) << x10_1
                    x10_1 += 7
                while ((x11_1.d & 0x80) != 0)
                x28_1 = x8_6 + x9_3
            
            void* x21_1 = x8_6 + 1
            var_78 = x21_1
            char x24_3 = *x8_6
            int64_t x10_2 = 0
            int64_t x9_4 = 0
            int64_t x27_1 = x0_3 + not.q(x0_5)
            uint64_t x8_7
            
            do
                x8_7 = zx.q(*x21_1)
                x21_1 += 1
                x9_4 |= (x8_7 & 0x7f) << x10_2
                x10_2 += 7
            while ((x8_7.d & 0x80) != 0)
            int64_t x23_1 = x9_4 & 0xffffffff
            void* x9_5 = x21_1
            void* var_80 = x21_1
            var_78 = x21_1
            int64_t* x0_13
            int64_t x8_8
            
            while (true)
                if (x9_5 u< x21_1 + x23_1)
                    int64_t* x0_9 = sub_10ff24c(&var_80, x24_3)
                    int64_t* x0_11 = sub_10ff24c(&var_80, x24_3)
                    x0_13 = sub_10ff24c(&var_80, x24_3)
                    x9_5 = var_80
                    int64_t x10_3 = 0
                    x8_8 = 0
                    uint64_t x11_4
                    
                    do
                        x11_4 = zx.q(*x9_5)
                        x9_5 += 1
                        x8_8 |= (x11_4 & 0x7f) << x10_3
                        x10_3 += 7
                    while ((x11_4.d & 0x80) != 0)
                    var_80 = x9_5
                    
                    if (x0_9 u<= x27_1 && x27_1 u< x0_11 + x0_9)
                        break
                    
                    if (x27_1 u>= x0_9)
                        continue
                
            label_10fee80:
                sub_10feeac(arg3 & 1, arg4)
                noreturn
            
            if (x0_13 == 0)
            label_10fed7c:
            label_10fe93c:
                arg1[5].d = 8
            else
                void* x9_7 = x0_13 + x13_1
                
                if (x8_8 == 0)
                    if ((arg2 & 6) != 2)
                        goto label_10feda8
                    
                    *arg1 = 0
                    arg1[3] = x9_7
                label_10fe93c_1:
                    arg1[5].d = 6
                else
                    void* var_a8_1 = &arg4[4]
                    int64_t x26_2 = x9_2 & 0xf
                    int64_t* var_a0_1
                    var_a0_1.d = arg2 & 5
                    void* x27_2 = x21_1 + x23_1 + x8_8 - 1
                    int32_t x21_2 = 0x1c1d u>> x26_2.d & 1
                    
                    while (true)
                        int64_t x9_11 = 0
                        int64_t x8_10 = 0
                        void* x20_3 = x27_2
                        uint64_t x10_6
                        
                        do
                            x10_6 = zx.q(*x20_3)
                            x20_3 += 1
                            x8_10 |= (x10_6 & 0x7f) << x9_11
                            x9_11 += 7
                        while ((x10_6.d & 0x80) != 0)
                        
                        int64_t x9_13
                        
                        if (((x9_11 u< 0x40 ? 1 : 0) & (x10_6.d & 0x40) u>> 6) != 0)
                            x9_13 = -1 << x9_11
                        else
                            x9_13 = 0
                        
                        int64_t x25_3 = x8_10 | x9_13
                        void* var_70
                        int32_t x8_17
                        
                        if (x25_3 s>= 1)
                            if (x28_1 == 0)
                                goto label_10fee80
                            
                            if (x26_2.d u> 0xc)
                                goto label_10fee80
                            
                            if (x21_2 == 0)
                                goto label_10fee80
                            
                            var_70 = x28_1 + x25_3 * *(&data_87b9b0 + (x26_2 << 3))
                            int64_t* x0_15 = sub_10ff24c(&var_70, x9_2.b)
                            
                            if (x0_15 == 0)
                                if (var_a0_1.d != 0)
                                    goto label_10fedb8
                                
                                if ((arg2 & 8) == 0)
                                    goto label_10fee80
                                
                                goto label_10fed2c
                            
                            if ((arg3 & 1) == 0)
                                goto label_10fed2c
                            
                            void* x8_14 = var_a8_1
                            
                            if (sub_10e96dc(arg4) == 0x434c4e47432b2b01)
                                x8_14 = arg4[-0xb]
                            
                            var_70 = x8_14
                            
                            if (x8_14 == 0)
                                sub_10feeac(1, arg4)
                                noreturn
                            
                            int64_t x1_5 = arg4[-0xa]
                            
                            if (x1_5 == 0)
                                sub_10feeac(1, arg4)
                                noreturn
                            
                            int32_t x0_19
                            x0_19, result = (*(*x0_15 + 0x20))(x0_15, x1_5, &var_70)
                            
                            if ((x0_19 & 1) == 0)
                                goto label_10fed2c
                            
                            x8_17 = arg2
                            
                            if ((x8_17 & 1) == 0)
                                goto label_10fed28
                            
                            *arg1 = x25_3
                            arg1[1] = x27_2
                            void* x8_37 = var_70
                            arg1[5].d = 6
                            arg1[3] = x9_7
                            arg1[4] = x8_37
                            break
                        
                        if ((x25_3 & 0xffffffff80000000) == 0)
                            if ((arg2 & 6) != 2)
                                goto label_10fed2c
                            
                            *arg1 = 0
                            arg1[1] = x27_2
                            arg1[3] = x9_7
                            
                            if (sub_10e96dc(arg4) == 0x434c4e47432b2b01)
                                var_a8_1 = arg4[-0xb]
                            
                            arg1[4] = var_a8_1
                            x8_2 = 6
                            goto label_10fe93c_2
                        
                        if ((arg3 & 1) != 0)
                            void* x23_2 = var_a8_1
                            
                            if (sub_10e96dc(arg4) == 0x434c4e47432b2b01)
                                x23_2 = arg4[-0xb]
                            
                            if (x23_2 == 0)
                                sub_10feeac(1, arg4)
                                noreturn
                            
                            int64_t x24_5 = arg4[-0xa]
                            
                            if (x24_5 == 0)
                                sub_10feeac(1, arg4)
                                noreturn
                            
                            if (x28_1 == 0)
                                sub_10feeac(0, arg4)
                                noreturn
                            
                            int64_t x9_14 = 0
                            int64_t x8_22 = 0
                            void* x22_2 = x28_1 + not.q(x25_3)
                            
                            while (true)
                                uint64_t x10_9 = zx.q(*x22_2)
                                x22_2 += 1
                                x8_22 |= (x10_9 & 0x7f) << x9_14
                                x9_14 += 7
                                
                                if ((x10_9.d & 0x80) == 0)
                                    if (x8_22 == 0)
                                        x8_17 = arg2
                                        
                                        if ((x8_17 & 1) == 0)
                                            break
                                        
                                        *arg1 = x25_3
                                        arg1[1] = x27_2
                                        arg1[3] = x9_7
                                        arg1[4] = x23_2
                                        x8_2 = 6
                                        goto label_10fe93c_2
                                    
                                    if (x26_2.d u> 0xc)
                                        goto label_10fee8c
                                    
                                    if (x21_2 == 0)
                                        goto label_10fee8c
                                    
                                    var_70 = x28_1 + x8_22 * *(&data_87b9b0 + (x26_2 << 3))
                                    int64_t* x0_23 = sub_10ff24c(&var_70, x9_2.b)
                                    var_70 = x23_2
                                    int32_t x0_24
                                    x0_24, result = (*(*x0_23 + 0x20))(x0_23, x24_5, &var_70)
                                    x9_14 = 0
                                    x8_22 = 0
                                    
                                    if ((x0_24 & 1) != 0)
                                        goto label_10fed2c
                            
                        label_10fed28:
                            
                            if ((x8_17 & 8) != 0)
                                goto label_10fed2c
                            
                        label_10fee8c:
                            sub_10feeac(1, arg4)
                            noreturn
                        
                        if (var_a0_1.d != 0)
                        label_10fedb8:
                            *arg1 = x25_3
                            arg1[1] = x27_2
                            arg1[3] = x9_7
                            
                            if (sub_10e96dc(arg4) == 0x434c4e47432b2b01)
                                var_a8_1 = arg4[-0xb]
                            
                            arg1[4] = var_a8_1
                            x8_2 = 6
                            goto label_10fe93c_2
                        
                        if ((arg2 & 8) == 0)
                            sub_10feeac(0, arg4)
                            noreturn
                        
                    label_10fed2c:
                        int64_t x9_16 = 0
                        int64_t x8_28 = 0
                        void* x10_10 = x20_3
                        uint64_t x11_14
                        
                        do
                            x11_14 = zx.q(*x10_10)
                            x10_10 += 1
                            x8_28 |= (x11_14 & 0x7f) << x9_16
                            x9_16 += 7
                        while ((x11_14.d & 0x80) != 0)
                        
                        int64_t x9_18
                        
                        if (((x9_16 u< 0x40 ? 1 : 0) & (x11_14.d & 0x40) u>> 6) != 0)
                            x9_18 = -1 << x9_16
                        else
                            x9_18 = 0
                        
                        int64_t x8_29 = x8_28 | x9_18
                        
                        if (x8_29 == 0)
                            goto label_10fed7c
                        
                        x27_2 = x20_3 + x8_29
    else
    label_10fe938:
        x8_2 = 3
    label_10fe93c_2:
        arg1[5].d = x8_2

if (*(x21 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
