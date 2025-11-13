// 函数: _Z15MCTS_CreateRootRK7DomGameR8DomYield9PlayerWho
// 地址: 0x9fc2a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0xd54)
int32_t var_480 = arg3
int32_t x28 = 0x28
char x9 = (x8 s>> 8).b
char var_46f = x8.b
char var_470 = x9
char var_46e = x9 + x8.b
char var_46d = x9 ^ x8.b
int32_t x8_2 = *(arg1 + 0xd58)
char x9_1 = (x8_2 s>> 8).b
char var_46b = x8_2.b
char var_46c = x9_1
char var_46a = x9_1 + x8_2.b
char var_469 = x9_1 ^ x8_2.b
int32_t x11 = *(arg1 + 0xd5c)
int64_t i = 0xd7c
char x8_4 = (x11 s>> 8).b
char var_468 = x8_4
char var_467 = x11.b
char var_466 = x8_4 + x11.b
char var_465 = x8_4 ^ x11.b
int32_t x8_6 = *(arg1 + 0xd60)
char x14 = (x8_6 s>> 8).b
char var_463 = x8_6.b
char var_464 = x14
char var_462 = x14 + x8_6.b
char var_461 = x14 ^ x8_6.b
int32_t x8_8 = *(arg1 + 0xd64)
char x17 = (x8_8 s>> 8).b
char var_45f = x8_8.b
char var_460 = x17
char var_45e = x17 + x8_8.b
char var_45d = x17 ^ x8_8.b
int32_t x8_10 = *(arg1 + 0xd68)
char x2 = (x8_10 s>> 8).b
char var_45b = x8_10.b
char var_45c = x2
char var_45a = x2 + x8_10.b
char var_459 = x2 ^ x8_10.b
int32_t x8_12 = *(arg1 + 0xd6c)
char x5 = (x8_12 s>> 8).b
char var_457 = x8_12.b
char var_458 = x5
char var_456 = x5 + x8_12.b
char var_455 = x5 ^ x8_12.b
int32_t x8_14 = *(arg1 + 0xd70)
char x19 = (x8_14 s>> 8).b
char var_453 = x8_14.b
char var_454 = x19
char var_452 = x19 + x8_14.b
char var_451 = x19 ^ x8_14.b
int32_t x8_16 = *(arg1 + 0xd74)
char x23 = (x8_16 s>> 8).b
char var_44f = x8_16.b
char var_450 = x23
char var_44e = x23 + x8_16.b
char var_44d = x23 ^ x8_16.b
int32_t x8_18 = *(arg1 + 0xd78)
char x26 = (x8_18 s>> 8).b
char var_44b = x8_18.b
char var_44c = x26
char var_44a = x26 + x8_18.b
char var_449 = x26 ^ x8_18.b

do
    void* x26_1 = arg1 + i
    int32_t x8_20 = *x26_1
    int64_t fp_1 = sx.q(x28)
    void* x27_2 = &(&var_470)[fp_1]
    char lr_1 = (x8_20 s>> 8).b
    *(x27_2 + 1) = x8_20.b
    *x27_2 = lr_1
    *(x27_2 + 2) = lr_1 + x8_20.b
    *(x27_2 + 3) = lr_1 ^ x8_20.b
    int32_t x8_22 = *(x26_1 + 4)
    uint64_t x27_1 = zx.q(x28 + 4)
    
    if (x8_22 == 0)
        x28 = x27_1.d
    else
        int64_t lr_2 = sx.q(x27_1.d)
        char x23_2 = (x8_22 s>> 8).b
        void* x27_3 = &(&var_470)[fp_1]
        (&var_470)[lr_2] = x23_2
        *(x27_3 + 5) = x8_22.b
        *(x27_3 + 6) = x23_2 + x8_22.b
        *(x27_3 + 7) = x23_2 ^ x8_22.b
        int32_t x8_24 = *(x26_1 + 8)
        int64_t x26_2 = lr_2 + 4
        
        if (x8_24 == 0)
            x28 = x26_2.d
        else
            char x23_3 = (x8_24 s>> 8).b
            (&var_470)[x26_2] = x23_3
            (&var_470)[sx.q(fp_1.d + 9)] = x8_24.b
            (&var_470)[sx.q(fp_1.d + 0xa)] = x23_3 + x8_24.b
            (&var_470)[sx.q(fp_1.d + 0xb)] = x23_3 ^ x8_24.b
            void* x26_3 = arg1 + i
            int32_t x8_26 = *(x26_3 + 0xc)
            x27_1 = lr_2 + 8
            
            if (x8_26 == 0)
                x28 = x27_1.d
            else
                int64_t fp_3 = lr_2 << 0x20
                char x23_4 = (x8_26 s>> 8).b
                (&var_470)[x27_1] = x23_4
                (&var_470)[(fp_3 + 0x900000000) s>> 0x20] = x8_26.b
                (&var_470)[(fp_3 + 0xa00000000) s>> 0x20] = x23_4 + x8_26.b
                (&var_470)[(fp_3 + 0xb00000000) s>> 0x20] = x23_4 ^ x8_26.b
                int32_t x8_28 = *(x26_3 + 0x10)
                x26_2 = lr_2 + 0xc
                
                if (x8_28 == 0)
                    x28 = x26_2.d
                else
                    char x23_7 = (x8_28 s>> 8).b
                    (&var_470)[x26_2] = x23_7
                    (&var_470)[(fp_3 + 0xd00000000) s>> 0x20] = x8_28.b
                    (&var_470)[(fp_3 + 0xe00000000) s>> 0x20] = x23_7 + x8_28.b
                    (&var_470)[(fp_3 + 0xf00000000) s>> 0x20] = x23_7 ^ x8_28.b
                    void* x26_6 = arg1 + i
                    int32_t x27_6 = *(x26_6 + 0x14)
                    int64_t x8_30 = lr_2 + 0x10
                    
                    if (x27_6 == 0)
                        x28 = x8_30.d
                    else
                        char x23_10 = (x27_6 s>> 8).b
                        (&var_470)[x8_30] = x23_10
                        (&var_470)[(fp_3 + 0x1100000000) s>> 0x20] = x27_6.b
                        (&var_470)[(fp_3 + 0x1200000000) s>> 0x20] = x23_10 + x27_6.b
                        (&var_470)[(fp_3 + 0x1300000000) s>> 0x20] = x23_10 ^ x27_6.b
                        int32_t x8_32 = *(x26_6 + 0x18)
                        x26_2 = lr_2 + 0x14
                        
                        if (x8_32 == 0)
                            x28 = x26_2.d
                        else
                            char x19_3 = (x8_32 s>> 8).b
                            (&var_470)[x26_2] = x19_3
                            (&var_470)[(fp_3 + 0x1500000000) s>> 0x20] = x8_32.b
                            (&var_470)[(fp_3 + 0x1600000000) s>> 0x20] = x19_3 + x8_32.b
                            (&var_470)[(fp_3 + 0x1700000000) s>> 0x20] = x19_3 ^ x8_32.b
                            void* x26_7 = arg1 + i
                            int32_t x27_7 = *(x26_7 + 0x1c)
                            x8_30 = lr_2 + 0x18
                            
                            if (x27_7 == 0)
                                x28 = x8_30.d
                            else
                                char x19_6 = (x27_7 s>> 8).b
                                (&var_470)[x8_30] = x19_6
                                (&var_470)[(fp_3 + 0x1900000000) s>> 0x20] = x27_7.b
                                (&var_470)[(fp_3 + 0x1a00000000) s>> 0x20] = x19_6 + x27_7.b
                                (&var_470)[(fp_3 + 0x1b00000000) s>> 0x20] = x19_6 ^ x27_7.b
                                int32_t x8_35 = *(x26_7 + 0x20)
                                x26_2 = lr_2 + 0x1c
                                
                                if (x8_35 == 0)
                                    x28 = x26_2.d
                                else
                                    char x19_8 = (x8_35 s>> 8).b
                                    (&var_470)[x26_2] = x19_8
                                    (&var_470)[(fp_3 + 0x1d00000000) s>> 0x20] = x8_35.b
                                    (&var_470)[(fp_3 + 0x1e00000000) s>> 0x20] = x19_8 + x8_35.b
                                    (&var_470)[(fp_3 + 0x1f00000000) s>> 0x20] = x19_8 ^ x8_35.b
                                    void* x26_8 = arg1 + i
                                    int32_t x27_8 = *(x26_8 + 0x24)
                                    x8_30 = lr_2 + 0x20
                                    
                                    if (x27_8 == 0)
                                        x28 = x8_30.d
                                    else
                                        char x19_11 = (x27_8 s>> 8).b
                                        (&var_470)[x8_30] = x19_11
                                        (&var_470)[(fp_3 + 0x2100000000) s>> 0x20] = x27_8.b
                                        (&var_470)[(fp_3 + 0x2200000000) s>> 0x20] =
                                            x19_11 + x27_8.b
                                        (&var_470)[(fp_3 + 0x2300000000) s>> 0x20] =
                                            x19_11 ^ x27_8.b
                                        int32_t x8_38 = *(x26_8 + 0x28)
                                        x26_2 = lr_2 + 0x24
                                        
                                        if (x8_38 == 0)
                                            x28 = x26_2.d
                                        else
                                            char x19_13 = (x8_38 s>> 8).b
                                            (&var_470)[x26_2] = x19_13
                                            (&var_470)[(fp_3 + 0x2500000000) s>> 0x20] = x8_38.b
                                            (&var_470)[(fp_3 + 0x2600000000) s>> 0x20] =
                                                x19_13 + x8_38.b
                                            (&var_470)[(fp_3 + 0x2700000000) s>> 0x20] =
                                                x19_13 ^ x8_38.b
                                            void* x26_9 = arg1 + i
                                            int32_t x27_9 = *(x26_9 + 0x2c)
                                            x8_30 = lr_2 + 0x28
                                            
                                            if (x27_9 == 0)
                                                x28 = x8_30.d
                                            else
                                                char x19_16 = (x27_9 s>> 8).b
                                                (&var_470)[x8_30] = x19_16
                                                (&var_470)[(fp_3 + 0x2900000000) s>> 0x20] = x27_9.b
                                                (&var_470)[(fp_3 + 0x2a00000000) s>> 0x20] =
                                                    x19_16 + x27_9.b
                                                (&var_470)[(fp_3 + 0x2b00000000) s>> 0x20] =
                                                    x19_16 ^ x27_9.b
                                                int32_t x8_41 = *(x26_9 + 0x30)
                                                x26_2 = lr_2 + 0x2c
                                                
                                                if (x8_41 == 0)
                                                    x28 = x26_2.d
                                                else
                                                    char x19_18 = (x8_41 s>> 8).b
                                                    (&var_470)[x26_2] = x19_18
                                                    (&var_470)[(fp_3 + 0x2d00000000) s>> 0x20] =
                                                        x8_41.b
                                                    (&var_470)[(fp_3 + 0x2e00000000) s>> 0x20] =
                                                        x19_18 + x8_41.b
                                                    (&var_470)[(fp_3 + 0x2f00000000) s>> 0x20] =
                                                        x19_18 ^ x8_41.b
                                                    void* x26_10 = arg1 + i
                                                    int32_t x27_10 = *(x26_10 + 0x34)
                                                    x8_30 = lr_2 + 0x30
                                                    
                                                    if (x27_10 == 0)
                                                        x28 = x8_30.d
                                                    else
                                                        char x19_21 = (x27_10 s>> 8).b
                                                        (&var_470)[x8_30] = x19_21
                                                        (&var_470)[(fp_3 + 0x3100000000)
                                                            s>> 0x20] = x27_10.b
                                                        (&var_470)[(fp_3 + 0x3200000000)
                                                            s>> 0x20] = x19_21 + x27_10.b
                                                        (&var_470)[(fp_3 + 0x3300000000)
                                                            s>> 0x20] = x19_21 ^ x27_10.b
                                                        int32_t x26_11 = *(x26_10 + 0x38)
                                                        x27_1 = lr_2 + 0x34
                                                        
                                                        if (x26_11 == 0)
                                                            x28 = x27_1.d
                                                        else
                                                            char x8_44 = (x26_11 s>> 8).b
                                                            (&var_470)[x27_1] = x8_44
                                                            x28 += 0x3c
                                                            (&var_470)[(fp_3 + 0x3500000000)
                                                                s>> 0x20] = x26_11.b
                                                            (&var_470)[(fp_3 + 0x3600000000)
                                                                s>> 0x20] = x8_44 + x26_11.b
                                                            (&var_470)[(fp_3 + 0x3700000000)
                                                                s>> 0x20] = x8_44 ^ x26_11.b
    
    i += 0x3c
while (i != 0xe6c)

int32_t x8_46 = *(arg1 + 0xe6c)
void* x9_2 = &(&var_470)[sx.q(x28)]
char x10_2 = (x8_46 s>> 8).b
*(x9_2 + 1) = x8_46.b
*x9_2 = x10_2
*(x9_2 + 2) = x10_2 + x8_46.b
*(x9_2 + 3) = x10_2 ^ x8_46.b
int32_t x8_48 = *(arg1 + 0xe7c)
char x10_3 = (x8_48 s>> 8).b
*(x9_2 + 5) = x8_48.b
*(x9_2 + 4) = x10_3
*(x9_2 + 6) = x10_3 + x8_48.b
*(x9_2 + 7) = x10_3 ^ x8_48.b
int32_t x8_50 = *(arg1 + 0xec8)
char x10_4 = (x8_50 s>> 8).b
*(x9_2 + 9) = x8_50.b
*(x9_2 + 8) = x10_4
*(x9_2 + 0xa) = x10_4 + x8_50.b
*(x9_2 + 0xb) = x10_4 ^ x8_50.b
int32_t x8_52 = *(arg1 + 0xe80)
uint64_t var_68 = 0
char x10_6 = (x8_52 s>> 8).b
*(x9_2 + 0xd) = x8_52.b
*(x9_2 + 0xc) = x10_6
*(x9_2 + 0xe) = x10_6 + x8_52.b
*(x9_2 + 0xf) = x10_6 ^ x8_52.b
uint64_t var_70 = 0
SpookyHash::Hash128(&var_470, sx.q(x28 + 0x10), &var_70, &var_68)
uint64_t x8_54 = var_70

if (x8_54 != data_14a71e0)
    data_14a71e0 = x8_54
    
    if (*(arg1 + 0x1528) s>= 2)
        int64_t i_1 = 1
        
        do
            void* x27_11 = arg1 + i_1 * 0x68
            int64_t x1_1 = sx.q(*(x27_11 + 0x1a70))
            int64_t x8_57 = x1_1 * 0x68c8c4ad
            int32_t* x26_12 = *(&data_13db978
                + (sx.q(x1_1.d - ((x8_57 s>> 0x2c).d + (x8_57 u>> 0x3f).d) * 0x2717) << 3))
            
            if (x26_12 == 0)
            label_9fc9dc:
                printf("Couldn't lookup %d\n")
                x26_12 = nullptr
            else
                while (*x26_12 != x1_1.d)
                    x26_12 = *(x26_12 + 0x1b8)
                    
                    if (x26_12 == 0)
                        goto label_9fc9dc
            
            __builtin_memset(&x26_12[4], 0, 0x14)
            uint64_t x2_2 = zx.q(*(x27_11 + 0x1a70))
            uint64_t x1_2 = zx.q(*(arg1 + 0xe6c))
            int32_t x0_3
            
            if (x2_2.d != x1_2.d)
                x0_3 = IsPileSubtype(arg1, x1_2, x2_2)
            
            if (x2_2.d == x1_2.d || (x0_3 & 1) != 0)
                x26_12[4].b = 1
            
            uint64_t x2_3 = zx.q(*(x27_11 + 0x1a70))
            uint64_t x1_3 = zx.q(*(arg1 + 0xe7c))
            int32_t x0_5
            
            if (x2_3.d != x1_3.d)
                x0_5 = IsPileSubtype(arg1, x1_3, x2_3)
            
            if (x2_3.d == x1_3.d || (x0_5 & 1) != 0)
                *(x26_12 + 0x12) = 1
            
            uint64_t x2_4 = zx.q(*(x27_11 + 0x1a70))
            uint64_t x1_4 = zx.q(*(arg1 + 0xec8))
            int32_t x0_7
            
            if (x2_4.d != x1_4.d)
                x0_7 = IsPileSubtype(arg1, x1_4, x2_4)
            
            if (x2_4.d == x1_4.d || (x0_7 & 1) != 0)
                *(x26_12 + 0x22) = 1
            
            uint64_t x2_5 = zx.q(*(x27_11 + 0x1a70))
            uint64_t x1_5 = zx.q(*(arg1 + 0xe80))
            int32_t x0_9
            
            if (x2_5.d != x1_5.d)
                x0_9 = IsPileSubtype(arg1, x1_5, x2_5)
            
            if (x2_5.d == x1_5.d || (x0_9 & 1) != 0)
                *(x26_12 + 0x23) = 1
            
            if (*(arg1 + 0xd7c) != 0)
                for (int64_t j = 0xd80; j != 0xdb8; j += 4)
                    uint64_t x1_6 = zx.q(*(arg1 + j))
                    
                    if (x1_6.d != 0)
                        uint64_t x2_6 = zx.q(*(x27_11 + 0x1a70))
                        int32_t x0_11
                        
                        if (x2_6.d != x1_6.d)
                            x0_11 = IsPileSubtype(arg1, x1_6, x2_6)
                        
                        if (x2_6.d == x1_6.d || (x0_11 & 1) != 0)
                            int32_t x9_4 = *(arg1 + 0xd7c)
                            uint64_t x8_65 = zx.q(x9_4 - 0x1147)
                            int64_t x8_63
                            
                            if (x8_65.d u> 0xe)
                                if (x9_4 != 0xc3f)
                                label_9fcf94:
                                    pthread_kill(pthread_self(), 6)
                                    return sub_9fcf9c(XNoReturn()) __tailcall
                                
                                x8_63 = 1
                            else
                                switch (x8_65)
                                    case 0
                                        x8_63 = 3
                                    case 1
                                        x8_63 = 4
                                    case 2
                                        x8_63 = 5
                                    case 3
                                        x8_63 = 6
                                    case 4
                                        x8_63 = 7
                                    case 5
                                        x8_63 = 8
                                    case 6
                                        x8_63 = 9
                                    case 7
                                        x8_63 = 0xa
                                    case 8
                                        x8_63 = 0xb
                                    case 9
                                        x8_63 = 0xc
                                    case 0xa
                                        x8_63 = 0xd
                                    case 0xb
                                        x8_63 = 0xe
                                    case 0xc
                                        x8_63 = 0xf
                                    case 0xd
                                        x8_63 = 0x10
                                    case 0xe
                                        x8_63 = 0x11
                            
                            *(x26_12 + x8_63 + 0x10) = 1
                
                if (*(arg1 + 0xdb8) != 0)
                    int64_t x28_3 = 0xdbc
                    
                    while (true)
                        uint64_t x1_7 = zx.q(*(arg1 + x28_3))
                        
                        if (x1_7.d != 0)
                            uint64_t x2_7 = zx.q(*(x27_11 + 0x1a70))
                            int32_t x0_13
                            
                            if (x2_7.d != x1_7.d)
                                x0_13 = IsPileSubtype(arg1, x1_7, x2_7)
                            
                            if (x2_7.d == x1_7.d || (x0_13 & 1) != 0)
                                int32_t x9_6 = *(arg1 + 0xdb8)
                                uint64_t x8_69 = zx.q(x9_6 - 0x1147)
                                int64_t x8_67
                                
                                if (x8_69.d u> 0xe)
                                    if (x9_6 != 0xc3f)
                                        goto label_9fcf94
                                    
                                    x8_67 = 1
                                else
                                    switch (x8_69)
                                        case 0
                                            x8_67 = 3
                                        case 1
                                            x8_67 = 4
                                        case 2
                                            x8_67 = 5
                                        case 3
                                            x8_67 = 6
                                        case 4
                                            x8_67 = 7
                                        case 5
                                            x8_67 = 8
                                        case 6
                                            x8_67 = 9
                                        case 7
                                            x8_67 = 0xa
                                        case 8
                                            x8_67 = 0xb
                                        case 9
                                            x8_67 = 0xc
                                        case 0xa
                                            x8_67 = 0xd
                                        case 0xb
                                            x8_67 = 0xe
                                        case 0xc
                                            x8_67 = 0xf
                                        case 0xd
                                            x8_67 = 0x10
                                        case 0xe
                                            x8_67 = 0x11
                                
                                *(x26_12 + x8_67 + 0x10) = 1
                        
                        x28_3 += 4
                        
                        if (x28_3 == 0xdf4)
                            if (*(arg1 + 0xdf4) != 0)
                                int64_t x28_4 = 0xdf8
                                
                                while (true)
                                    uint64_t x1_8 = zx.q(*(arg1 + x28_4))
                                    
                                    if (x1_8.d != 0)
                                        uint64_t x2_8 = zx.q(*(x27_11 + 0x1a70))
                                        int32_t x0_15
                                        
                                        if (x2_8.d != x1_8.d)
                                            x0_15 = IsPileSubtype(arg1, x1_8, x2_8)
                                        
                                        if (x2_8.d == x1_8.d || (x0_15 & 1) != 0)
                                            int32_t x9_8 = *(arg1 + 0xdf4)
                                            uint64_t x8_73 = zx.q(x9_8 - 0x1147)
                                            int64_t x8_71
                                            
                                            if (x8_73.d u> 0xe)
                                                if (x9_8 != 0xc3f)
                                                    goto label_9fcf94
                                                
                                                x8_71 = 1
                                            else
                                                switch (x8_73)
                                                    case 0
                                                        x8_71 = 3
                                                    case 1
                                                        x8_71 = 4
                                                    case 2
                                                        x8_71 = 5
                                                    case 3
                                                        x8_71 = 6
                                                    case 4
                                                        x8_71 = 7
                                                    case 5
                                                        x8_71 = 8
                                                    case 6
                                                        x8_71 = 9
                                                    case 7
                                                        x8_71 = 0xa
                                                    case 8
                                                        x8_71 = 0xb
                                                    case 9
                                                        x8_71 = 0xc
                                                    case 0xa
                                                        x8_71 = 0xd
                                                    case 0xb
                                                        x8_71 = 0xe
                                                    case 0xc
                                                        x8_71 = 0xf
                                                    case 0xd
                                                        x8_71 = 0x10
                                                    case 0xe
                                                        x8_71 = 0x11
                                            
                                            *(x26_12 + x8_71 + 0x10) = 1
                                    
                                    x28_4 += 4
                                    
                                    if (x28_4 == 0xe30)
                                        if (*(arg1 + 0xe30) != 0)
                                            for (int64_t j_1 = 0xe34; j_1 != 0xe6c; j_1 += 4)
                                                uint64_t x1_9 = zx.q(*(arg1 + j_1))
                                                
                                                if (x1_9.d != 0)
                                                    uint64_t x2_9 = zx.q(*(x27_11 + 0x1a70))
                                                    int32_t x0_17
                                                    
                                                    if (x2_9.d != x1_9.d)
                                                        x0_17 = IsPileSubtype(arg1, x1_9, x2_9)
                                                    
                                                    if (x2_9.d == x1_9.d || (x0_17 & 1) != 0)
                                                        int32_t x9_10 = *(arg1 + 0xe30)
                                                        uint64_t x8_77 = zx.q(x9_10 - 0x1147)
                                                        int64_t x8_75
                                                        
                                                        if (x8_77.d u> 0xe)
                                                            if (x9_10 != 0xc3f)
                                                                goto label_9fcf94
                                                            
                                                            x8_75 = 1
                                                        else
                                                            switch (x8_77)
                                                                case 0
                                                                    x8_75 = 3
                                                                case 1
                                                                    x8_75 = 4
                                                                case 2
                                                                    x8_75 = 5
                                                                case 3
                                                                    x8_75 = 6
                                                                case 4
                                                                    x8_75 = 7
                                                                case 5
                                                                    x8_75 = 8
                                                                case 6
                                                                    x8_75 = 9
                                                                case 7
                                                                    x8_75 = 0xa
                                                                case 8
                                                                    x8_75 = 0xb
                                                                case 9
                                                                    x8_75 = 0xc
                                                                case 0xa
                                                                    x8_75 = 0xd
                                                                case 0xb
                                                                    x8_75 = 0xe
                                                                case 0xc
                                                                    x8_75 = 0xf
                                                                case 0xd
                                                                    x8_75 = 0x10
                                                                case 0xe
                                                                    x8_75 = 0x11
                                                        
                                                        *(x26_12 + x8_75 + 0x10) = 1
                                        
                                        break
                            
                            break
            
            i_1 += 1
        while (i_1 s< sx.q(*(arg1 + 0x1528)))

sub_9fcf9c(var_480)
SimulateGame(0x137ac58, arg1, zx.q(var_480))
int64_t x19_26
int32_t x20_2
x19_26, x20_2 = sub_9f654c(0x137ac58, var_480)
sub_9f6acc(arg1, arg2)
uint64_t* x0_20 = sub_9f7b40(0x137ac58, arg2, x20_2, nullptr)
void* x0_21 = x0_20[1]

if (x0_21 == 0)
    void* x0_22 = operator new(0xe8)
    __builtin_memset(x0_22, 0, 0xe8)
    *(x0_22 + 0xdc) = 4
    int64_t x0_23 = operator new[](0x1c0)
    __builtin_memset(x0_23, 0, 0x1c0)
    *(x0_22 + 0xd0) = x0_23
    x0_20[1] = x0_22
    *(x0_22 + 0xb4) = x20_2
    void* x1_14 = x0_20[1]
    *((x19_26 << 3) + 0x14a7240) = x1_14
    sub_9fd2ec(0x137ac58, x1_14, arg2)
    sub_9fd5f0(0x137ac58, x0_20[1], arg2)
    x0_21 = *(sub_9fdb9c(0x137ac58, x0_20[1], arg2) + 8)
else
    *((x19_26 << 3) + 0x14a7240) = x0_21

return sub_9fd168(x0_21)
