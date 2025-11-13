// 函数: sub_9f7b40
// 地址: 0x9f7b40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = zx.q(*(arg1 + 0xd40))
char var_4490[0x8]
int32_t var_4488[0x6]
int32_t var_3ff0[0x6]
int32_t var_3fd8[0x6]
int32_t var_3fc0[0x6]
int32_t var_3fa8[0x6]
int32_t var_3f90[0x6]
int32_t var_3f78[0x6]
int32_t var_3f60[0x6]
int32_t var_3f48[0x6]
int32_t var_3f30[0x6]
int32_t var_3f18[0x6]
int32_t var_3f00[0x6]

if (x24.d s>= 1)
    uint64_t x23_1 = x24 << 2
    memset(&var_3f18, 0, x23_1)
    memset(&var_3f00, 0, x23_1)
    memset(&var_3f48, 0, x23_1)
    memset(&var_3f30, 0, x23_1)
    memset(&var_4490, 0, x24)
    memset(&var_3f60, 0, x23_1)
    memset(&var_3f90, 0, x23_1)
    memset(&var_3f78, 0, x23_1)
    memset(&var_3fc0, 0, x23_1)
    memset(&var_3fa8, 0, x23_1)
    memset(&var_3ff0, 0, x23_1)
    memset(&var_3fd8, 0, x23_1)
    memset(&var_4488, 0, x23_1)

int32_t var_4470[0x1c]
memset(&var_4470, 0, 0x480)
uint64_t i_41 = zx.q(*(arg1 + 0x19ac))

if (i_41.d s>= 1)
    void* x6_1 = arg1 + 0x15f7c
    uint64_t i
    
    do
        int64_t x21_2 = sx.q(*(x6_1 - 0x10))
        
        if (x21_2.d == 0xffffffff)
            uint64_t x23_7 = zx.q(ror.d(*(x6_1 - 0x14) - 0x400, 9))
            
            if (x23_7.d u<= 7)
                int64_t x21_5 = sx.q(*(x6_1 - 0xc))
                
                switch (x23_7)
                    case 0
                        void* x21_6 = &var_4470[x21_5 * 4]
                        *(x21_6 + 4) += *x6_1
                    case 4
                        var_4470[x21_5 * 4] += *x6_1
                    case 6
                        void* x21_10 = &var_4470[x21_5 * 4]
                        *(x21_10 + 8) += *x6_1
                    case 7
                        void* x21_1 = &var_4470[x21_5 * 4]
                        *(x21_1 + 0xc) += *x6_1
        else
            int32_t x23_4 = *(x6_1 - 0x14)
            
            if (x23_4 s> 0xb07)
                if (x23_4 == 0xb08)
                    var_4490[x21_2] = 1
                else if (x23_4 == 0xc00)
                    var_3f00[x21_2] += *x6_1
                
                if (x23_4 == 0xe00)
                    var_3f48[x21_2] += *x6_1
                else if (x23_4 == 0xe01)
                    if (*(arg1 + (sx.q(*(x6_1 - 0xc)) << 4) + 0x152c) == 0xe26)
                        var_4488[x21_2] = *x6_1 - 1
                else if (x23_4 == 0x1000)
                    var_3f18[x21_2] += *x6_1
            else if (x23_4 s> 0xb02)
            label_9f7d78:
                int64_t x24_2 = sx.q(*(x6_1 - 0xc))
                
                if (x24_2.d != 0x3f1)
                    uint64_t x25_1 = zx.q(x23_4 - 0xb00)
                    
                    if (x25_1.d u<= 7)
                        int32_t x23_6 = *(arg1 + (x24_2 << 4) + 0x152c)
                        
                        switch (x25_1)
                            case 0
                                var_3ff0[x21_2] = x23_6
                            case 3
                                var_3f78[x21_2] = x23_6
                            case 4
                                var_3f90[x21_2] = x23_6
                            case 5
                                var_3fa8[x21_2] = x23_6
                            case 6
                                var_3fc0[x21_2] = x23_6
                            case 7
                                var_3fd8[x21_2] = x23_6
            else if (x23_4 == 0x601)
                var_3f60[x21_2] += *x6_1
            else if (x23_4 == 0xa00)
                var_3f30[x21_2] += *x6_1
            else if (x23_4 == 0xb00)
                goto label_9f7d78
        
        i = i_41
        i_41 -= 1
        x6_1 += 0x20
    while (i != 1)

data_13ef230 = arg3.b
uint64_t i_42 = zx.q(*(arg1 + 0x1528))
void var_3268
int32_t i_86

if (i_42.d s< 1)
    i_86 = 0
else
    i_86 = 0
    void* x10_1 = arg1 + 0x1a94
    uint64_t i_1
    
    do
        if (*(x10_1 - 0x20) == 0x474)
            int32_t x12_2 = *(x10_1 - 0x24)
            void* x13_1 = &var_3268 + muls.dp.d(i_86, 0xc)
            i_86 += 1
            *x13_1 = *(x10_1 - 8)
            *(x13_1 + 4) = x12_2
            *(x13_1 + 8) = *x10_1
        
        i_1 = i_42
        i_42 -= 1
        x10_1 += 0x68
    while (i_1 != 1)

sub_a02a30(&var_3268, &var_3268 + muls.dp.d(i_86, 0xc))
int32_t i_87
void var_ce8
void var_ce4
uint64_t x28_1

if (*(arg1 + 0xd40) s< 1)
    x28_1 = 1
else
    uint64_t i_73 = zx.q(i_86)
    int64_t x21_14 = 0
    int64_t x22_1 = sx.q(arg3)
    int64_t x19_1 = 1
    i_87 = i_86
    int64_t x8_4
    
    do
        int32_t x25_3 = 0
        int32_t x23_29 = 0
        
        for (int64_t i_2 = 0x3e8; i_2 != 0x473; i_2 += 1)
            int32_t j = *(arg1 + x21_14 * 0x5a30 + (i_2 << 2) + 0x16fc8)
            
            if (j != 0)
                void* x10_3 = &var_ce8 + (sx.q(x25_3) << 2)
                
                do
                    void* x11_4 = arg1 + muls.dp.d(j, 0x68)
                    x23_29 += i_2 == 0x3ea ? 1 : 0
                    x25_3 += 1
                    *x10_3 = *(x11_4 + 0x1a70)
                    x10_3 += 4
                    j = *(x11_4 + 0x1ac8)
                while (j != 0)
        
        if (i_86 s>= 1)
            uint64_t i_43 = i_73
            void var_3260
            void* x9_6 = &var_3260
            uint64_t i_3
            
            do
                if (x21_14 == zx.q(*x9_6))
                    *(&var_ce8 + (sx.q(x25_3) << 2)) = *(x9_6 - 4)
                    x25_3 += 1
                
                i_3 = i_43
                i_43 -= 1
                x9_6 += 0xc
            while (i_3 != 1)
        
        sub_a03898(&var_ce8, &var_ce8 + (sx.q(x25_3) << 2))
        
        if (x25_3 s>= 1)
            x19_1 = sx.q(x19_1.d)
            uint64_t x8_5 = zx.q(x25_3)
            int64_t i_77
            
            if (x25_3 != 1)
                void* x11_6 = &var_ce4
                i_77 = x8_5 & 0xfffffffe
                void* x10_6 = &(&data_13ef230)[x19_1]
                x19_1 += i_77 << 2
                void* x10_7 = x10_6 + 3
                int64_t i_64 = i_77
                int64_t i_4
                
                do
                    int32_t x13_3 = *(x11_6 - 4)
                    int32_t x14_2 = *x11_6
                    i_4 = i_64
                    i_64 -= 2
                    x11_6 += 8
                    char x15_1 = (x13_3 s>> 8).b
                    char x16_1 = (x14_2 s>> 8).b
                    *(x10_7 - 2) = x13_3.b
                    *(x10_7 + 2) = x14_2.b
                    *(x10_7 - 3) = x15_1
                    *(x10_7 + 1) = x16_1
                    *(x10_7 - 1) = x15_1 + x13_3.b
                    *(x10_7 + 3) = x16_1 + x14_2.b
                    *x10_7 = x15_1 ^ x13_3.b
                    *(x10_7 + 4) = x16_1 ^ x14_2.b
                    x10_7 += 8
                while (i_4 != 2)
                
                if (i_77 != x8_5)
                    goto label_9f81b4
            else
                i_77 = 0
            label_9f81b4:
                void* x10_8 = &var_ce8 + (i_77 << 2)
                int64_t i_44 = x8_5 - i_77
                int64_t i_5
                
                do
                    int32_t x9_7 = *x10_8
                    x10_8 += 4
                    void* x11_7 = &(&data_13ef230)[x19_1]
                    x19_1 += 4
                    i_5 = i_44
                    i_44 -= 1
                    char x12_5 = (x9_7 s>> 8).b
                    *(x11_7 + 1) = x9_7.b
                    *x11_7 = x12_5
                    *(x11_7 + 2) = x12_5 + x9_7.b
                    *(x11_7 + 3) = x12_5 ^ x9_7.b
                while (i_5 != 1)
        
        if (i_86 s>= 1)
            uint64_t i_45 = i_73
            int32_t* x9_9 = &var_3268 | 4
            int32_t x10_9 = 0
            uint64_t i_6
            
            do
                if (x21_14 == zx.q(x9_9[1]))
                    uint64_t x11_11 = zx.q(x9_9[-1])
                    
                    if (x11_11.d != x10_9)
                        void* x10_10 = &(&data_13ef230)[sx.q(x19_1.d)]
                        *x10_10 = 0xff
                        int32_t x12_8 = *(arg1 + x11_11 * 0x68 + 0x1a70)
                        x19_1 = zx.q(x19_1.d + 5)
                        char x13_7 = (x12_8 s>> 8).b
                        *(x10_10 + 2) = x12_8.b
                        *(x10_10 + 1) = x13_7
                        *(x10_10 + 3) = x13_7 + x12_8.b
                        *(x10_10 + 4) = x13_7 ^ x12_8.b
                        x10_9 = x11_11.d
                    
                    int32_t x11_8 = *x9_9
                    void* x12_6 = &(&data_13ef230)[sx.q(x19_1.d)]
                    x19_1 = zx.q(x19_1.d + 4)
                    char x13_6 = (x11_8 s>> 8).b
                    *(x12_6 + 1) = x11_8.b
                    *x12_6 = x13_6
                    *(x12_6 + 2) = x13_6 + x11_8.b
                    *(x12_6 + 3) = x13_6 ^ x11_8.b
                
                i_6 = i_45
                i_45 -= 1
                x9_9 = &x9_9[3]
            while (i_6 != 1)
        
        int64_t x25_4 = sx.q(x19_1.d)
        (&data_13ef230)[x25_4] = 0xff
        uint64_t i_46 = zx.q(*(arg1 + 0x19c0))
        int32_t i_85
        
        if (i_46.d s< 1)
            i_85 = 0
        else
            void* x9_10 = arg1 + 0x3c25c
            i_85 = 0
            uint64_t i_7
            
            do
                if (x21_14 == zx.q(*(x9_10 - 0x3c)) && *(x9_10 - 8) == 3 && *(x9_10 - 4) == 8)
                    *(&var_ce8 + (sx.q(i_85) << 2)) = *x9_10
                    i_85 += 1
                
                i_7 = i_46
                i_46 -= 1
                x9_10 += 0xb8
            while (i_7 != 1)
        
        sub_a03898(&var_ce8, &var_ce8 + (sx.q(i_85) << 2))
        
        if (i_85 s>= 1)
            uint64_t i_47 = zx.q(i_85)
            void* x9_12 = x25_4 + 0x13ef234
            void* x10_15 = &var_ce8
            uint64_t i_8
            
            do
                int32_t x11_13 = *x10_15
                x10_15 += 4
                int32_t x12_10 = x19_1.d + 1
                x19_1 = zx.q(x19_1.d + 4)
                i_8 = i_47
                i_47 -= 1
                char x13_8 = (x11_13 s>> 8).b
                (&data_13ef230)[sx.q(x12_10)] = x13_8
                *(x9_12 - 2) = x11_13.b
                *(x9_12 - 1) = x13_8 + x11_13.b
                *x9_12 = x13_8 ^ x11_13.b
                x9_12 += 4
            while (i_8 != 1)
        
        char x9_13 = -1
        (&data_13ef230)[sx.q(x19_1.d + 1)] = 0xff
        void* x11_15 = arg1 + x21_14 * 0x5a30
        int64_t x8_7 = sx.q(x19_1.d)
        *(x8_7 + 0x13ef232) = (_byteswap(zx.d(*(x11_15 + 0x1820c))) u>> 0x10).w
        char x14_6 = (var_3f00[x21_14]).b
        *(x8_7 + 0x13ef234) = (*(x11_15 + 0x18194)).b
        char x15_2 = (var_3f18[x21_14]).b
        *(x8_7 + 0x13ef235) = (*(x11_15 + 0x18198)).b
        i_86 = i_87
        *(x8_7 + 0x13ef236) = (*(x11_15 + 0x1819c)).b
        char x12_18 = (var_3f30[x21_14]).b
        char x11_16 = (*(x11_15 + 0x181a0)).b
        *(x8_7 + 0x13ef238) = x14_6
        char x14_7 = (var_3f48[x21_14]).b
        *(x8_7 + 0x13ef239) = x15_2
        char x15_3 = var_4490[x21_14]
        *(x8_7 + 0x13ef23a) = x12_18
        *(x8_7 + 0x13ef23b) = x14_7
        char x14_8 = (var_3f60[x21_14]).b
        *(x8_7 + 0x13ef23c) = x15_3
        char x15_4 = (var_4488[x21_14]).b
        int32_t x12_19 = var_3f78[x21_14]
        *(x8_7 + 0x13ef237) = x11_16
        uint64_t x11_17 = x8_7 + 0xf
        *(x8_7 + 0x13ef23d) = x14_8
        *(x8_7 + 0x13ef23e) = x15_4
        int32_t x10_17
        
        if (x12_19 == 0)
            x10_17 = 0x10
        else
            char x9_14 = (x12_19 s>> 8).b
            (&data_13ef230)[x11_17] = x9_14
            *(x8_7 + 0x13ef240) = x12_19.b
            x11_17 = zx.q(x8_7.d + 0x12)
            x9_13 = x9_14 ^ x12_19.b
            *(x8_7 + 0x13ef241) = x9_14 + x12_19.b
            x10_17 = 0x13
        
        int32_t x12_20 = var_3f90[x21_14]
        int64_t x8_8 = x8_7 + zx.q(x10_17)
        (&data_13ef230)[sx.q(x11_17.d)] = x9_13
        char x9_16
        int32_t x10_18
        int32_t x11_19
        
        if (x12_20 == 0)
            x9_16 = -1
            x11_19 = 1
            x10_18 = x8_8.d
        else
            char x9_15 = (x12_20 s>> 8).b
            x10_18 = x8_8.d + 3
            (&data_13ef230)[x8_8] = x9_15
            *(sx.q(x8_8.d) + 0x13ef231) = x12_20.b
            x9_16 = x9_15 ^ x12_20.b
            *(sx.q(x8_8.d) + 0x13ef232) = x9_15 + x12_20.b
            x11_19 = 4
        
        int32_t x12_21 = var_3fa8[x21_14]
        (&data_13ef230)[sx.q(x10_18)] = x9_16
        int64_t x8_10 = sx.q(x8_8.d) + zx.q(x11_19)
        char x9_18
        int32_t x10_19
        int32_t x11_21
        
        if (x12_21 == 0)
            x9_18 = -1
            x11_21 = 1
            x10_19 = x8_10.d
        else
            char x9_17 = (x12_21 s>> 8).b
            x10_19 = x8_10.d + 3
            (&data_13ef230)[x8_10] = x9_17
            *(sx.q(x8_10.d) + 0x13ef231) = x12_21.b
            x9_18 = x9_17 ^ x12_21.b
            *(sx.q(x8_10.d) + 0x13ef232) = x9_17 + x12_21.b
            x11_21 = 4
        
        int32_t x12_22 = var_3fc0[x21_14]
        (&data_13ef230)[sx.q(x10_19)] = x9_18
        int64_t x8_12 = sx.q(x8_10.d) + zx.q(x11_21)
        char x9_20
        int32_t x10_20
        int32_t x11_23
        
        if (x12_22 == 0)
            x9_20 = -1
            x11_23 = 1
            x10_20 = x8_12.d
        else
            char x9_19 = (x12_22 s>> 8).b
            x10_20 = x8_12.d + 3
            (&data_13ef230)[x8_12] = x9_19
            *(sx.q(x8_12.d) + 0x13ef231) = x12_22.b
            x9_20 = x9_19 ^ x12_22.b
            *(sx.q(x8_12.d) + 0x13ef232) = x9_19 + x12_22.b
            x11_23 = 4
        
        int32_t x12_23 = var_3fd8[x21_14]
        (&data_13ef230)[sx.q(x10_20)] = x9_20
        int64_t x8_14 = sx.q(x8_12.d) + zx.q(x11_23)
        char x9_22
        int32_t x10_21
        int32_t x11_25
        
        if (x12_23 == 0)
            x9_22 = -1
            x11_25 = 1
            x10_21 = x8_14.d
        else
            char x9_21 = (x12_23 s>> 8).b
            x10_21 = x8_14.d + 3
            (&data_13ef230)[x8_14] = x9_21
            *(sx.q(x8_14.d) + 0x13ef231) = x12_23.b
            x9_22 = x9_21 ^ x12_23.b
            *(sx.q(x8_14.d) + 0x13ef232) = x9_21 + x12_23.b
            x11_25 = 4
        
        int32_t x12_24 = var_3ff0[x21_14]
        (&data_13ef230)[sx.q(x10_21)] = x9_22
        int64_t x8_16 = sx.q(x8_14.d) + zx.q(x11_25)
        char x9_2
        int32_t x10_2
        int32_t x11_2
        
        if (x12_24 != 0)
            char x9_1 = (x12_24 s>> 8).b
            x10_2 = x8_16.d + 3
            (&data_13ef230)[x8_16] = x9_1
            *(sx.q(x8_16.d) + 0x13ef231) = x12_24.b
            x9_2 = x9_1 ^ x12_24.b
            *(sx.q(x8_16.d) + 0x13ef232) = x9_1 + x12_24.b
            x11_2 = 4
        else
            x9_2 = -1
            x11_2 = 1
            x10_2 = x8_16.d
        
        (&data_13ef230)[sx.q(x10_2)] = x9_2
        int64_t x11_3 = sx.q(x8_16.d) + zx.q(x11_2)
        (&data_13ef230)[x11_3] = x23_29.b
        x8_4 = sx.q(*(arg1 + 0xd40))
        x21_14 += 1
        x19_1 = zx.q(x11_3.d + 1)
    while (x21_14 s< x8_4)
    
    if (x8_4.d s< 1)
        x28_1 = zx.q(x19_1.d)
    else
        i_87.q = arg1 + 0x19b18
        void* var_6a18_2 = &var_ce4
        void* var_6a38_2 = arg1 + 0x1821c
        void* var_6a28_2 = arg1 + 0x18218
        int64_t x23_30 = 0
        void* fp = arg1 + 0x19b1c
        void* var_6a40_2 = arg1 + 0x1c09c
        void* var_6a30_2 = arg1 + 0x1c098
        uint64_t x8_18
        
        do
            uint64_t x26_2 = zx.q(*(arg1 + x23_30 * 0x5a30 + 0x181cc))
            
            if (x26_2.d s< 1)
                x26_2 = 0
            else
                int64_t i_74
                
                if (x26_2.d != 1)
                    void* x10_22 = var_6a18_2
                    i_74 = x26_2 & 0xfffffffe
                    int64_t i_59 = i_74
                    void* x11_26 = fp
                    int64_t i_9
                    
                    do
                        uint64_t x12_25 = zx.q(*(x11_26 - 4))
                        uint64_t x13_15 = zx.q(*x11_26)
                        x11_26 += 8
                        i_9 = i_59
                        i_59 -= 2
                        int32_t x13_17 = *(arg1 + 0x1a68 + x13_15 * 0x68 + 8)
                        *(x10_22 - 4) = *(arg1 + 0x1a68 + x12_25 * 0x68 + 8)
                        *x10_22 = x13_17
                        x10_22 += 8
                    while (i_9 != 2)
                    
                    if (i_74 != x26_2)
                        goto label_9f8744
                else
                    i_74 = 0
                label_9f8744:
                    int64_t x10_23 = i_74 << 2
                    int64_t i_48 = x26_2 - i_74
                    void* x9_38 = &var_ce8 + x10_23
                    int32_t* x10_24 = i_87.q + x10_23
                    int64_t i_10
                    
                    do
                        uint64_t x11_28 = zx.q(*x10_24)
                        x10_24 = &x10_24[1]
                        i_10 = i_48
                        i_48 -= 1
                        *x9_38 = *(arg1 + x11_28 * 0x68 + 0x1a70)
                        x9_38 += 4
                    while (i_10 != 1)
            
            sub_a03898(&var_ce8, &var_ce8 + (zx.q(x26_2.d) << 2))
            
            if (x26_2.d != 0)
                uint64_t x8_20 = zx.q(x26_2.d)
                x19_1 = sx.q(x19_1.d)
                int64_t i_78
                
                if (x8_20.d != 1)
                    void* x11_31 = var_6a18_2
                    i_78 = x8_20 & 0xfffffffe
                    void* x10_25 = &(&data_13ef230)[x19_1]
                    x19_1 += i_78 << 2
                    void* x10_26 = x10_25 + 3
                    int64_t i_65 = i_78
                    int64_t i_11
                    
                    do
                        int32_t x13_18 = *(x11_31 - 4)
                        int32_t x14_9 = *x11_31
                        i_11 = i_65
                        i_65 -= 2
                        x11_31 += 8
                        char x15_5 = (x13_18 s>> 8).b
                        char x16_2 = (x14_9 s>> 8).b
                        *(x10_26 - 2) = x13_18.b
                        *(x10_26 + 2) = x14_9.b
                        *(x10_26 - 3) = x15_5
                        *(x10_26 + 1) = x16_2
                        *(x10_26 - 1) = x15_5 + x13_18.b
                        *(x10_26 + 3) = x16_2 + x14_9.b
                        *x10_26 = x15_5 ^ x13_18.b
                        *(x10_26 + 4) = x16_2 ^ x14_9.b
                        x10_26 += 8
                    while (i_11 != 2)
                    
                    if (i_78 != x8_20)
                        goto label_9f8830
                else
                    i_78 = 0
                label_9f8830:
                    void* x10_27 = &var_ce8 + (i_78 << 2)
                    int64_t i_49 = x8_20 - i_78
                    int64_t i_12
                    
                    do
                        int32_t x9_39 = *x10_27
                        x10_27 += 4
                        void* x11_32 = &(&data_13ef230)[x19_1]
                        x19_1 += 4
                        i_12 = i_49
                        i_49 -= 1
                        char x12_28 = (x9_39 s>> 8).b
                        *(x11_32 + 1) = x9_39.b
                        *x11_32 = x12_28
                        *(x11_32 + 2) = x12_28 + x9_39.b
                        *(x11_32 + 3) = x12_28 ^ x9_39.b
                    while (i_12 != 1)
            
            int64_t fp_2 = sx.q(x19_1.d)
            (&data_13ef230)[fp_2] = 0xff
            uint64_t x26_3 = zx.q(*(arg1 + x23_30 * 0x5a30 + 0x181a4))
            
            if (x26_3.d s< 1)
                x26_3 = 0
            else
                int64_t i_75
                
                if (x26_3.d != 1)
                    void* x10_28 = var_6a18_2
                    void* x11_33 = var_6a38_2
                    i_75 = x26_3 & 0xfffffffe
                    int64_t i_60 = i_75
                    int64_t i_13
                    
                    do
                        uint64_t x12_29 = zx.q(*(x11_33 - 4))
                        uint64_t x13_21 = zx.q(*x11_33)
                        x11_33 += 8
                        i_13 = i_60
                        i_60 -= 2
                        int32_t x13_23 = *(arg1 + 0x1a68 + x13_21 * 0x68 + 8)
                        *(x10_28 - 4) = *(arg1 + 0x1a68 + x12_29 * 0x68 + 8)
                        *x10_28 = x13_23
                        x10_28 += 8
                    while (i_13 != 2)
                    
                    if (i_75 != x26_3)
                        goto label_9f88ec
                else
                    i_75 = 0
                label_9f88ec:
                    int64_t x10_29 = i_75 << 2
                    int64_t i_50 = x26_3 - i_75
                    void* x9_41 = &var_ce8 + x10_29
                    void* x10_30 = var_6a28_2 + x10_29
                    int64_t i_14
                    
                    do
                        uint64_t x11_35 = zx.q(*x10_30)
                        x10_30 += 4
                        i_14 = i_50
                        i_50 -= 1
                        *x9_41 = *(arg1 + x11_35 * 0x68 + 0x1a70)
                        x9_41 += 4
                    while (i_14 != 1)
            
            sub_a03898(&var_ce8, &var_ce8 + (zx.q(x26_3.d) << 2))
            
            if (x26_3.d != 0)
                uint64_t i_51 = zx.q(x26_3.d)
                void* x9_43 = fp_2 + 0x13ef234
                void* x10_31 = &var_ce8
                uint64_t i_15
                
                do
                    int32_t x11_38 = *x10_31
                    x10_31 += 4
                    int32_t x12_32 = x19_1.d + 1
                    x19_1 = zx.q(x19_1.d + 4)
                    i_15 = i_51
                    i_51 -= 1
                    char x13_24 = (x11_38 s>> 8).b
                    (&data_13ef230)[sx.q(x12_32)] = x13_24
                    *(x9_43 - 2) = x11_38.b
                    *(x9_43 - 1) = x13_24 + x11_38.b
                    *x9_43 = x13_24 ^ x11_38.b
                    x9_43 += 4
                while (i_15 != 1)
            
            (&data_13ef230)[sx.q(x19_1.d + 1)] = 0xff
            uint64_t fp_3 = zx.q(*(arg1 + x23_30 * 0x5a30 + 0x181f0))
            
            if (fp_3.d s< 1)
                fp_3 = 0
            else
                int64_t i_76
                
                if (fp_3.d != 1)
                    void* x10_32 = var_6a18_2
                    void* x11_40 = var_6a40_2
                    i_76 = fp_3 & 0xfffffffe
                    int64_t i_61 = i_76
                    int64_t i_16
                    
                    do
                        uint64_t x12_34 = zx.q(*(x11_40 - 4))
                        uint64_t x13_25 = zx.q(*x11_40)
                        x11_40 += 8
                        i_16 = i_61
                        i_61 -= 2
                        int32_t x13_27 = *(arg1 + 0x1a68 + x13_25 * 0x68 + 8)
                        *(x10_32 - 4) = *(arg1 + 0x1a68 + x12_34 * 0x68 + 8)
                        *x10_32 = x13_27
                        x10_32 += 8
                    while (i_16 != 2)
                    
                    if (i_76 != fp_3)
                        goto label_9f89f4
                else
                    i_76 = 0
                label_9f89f4:
                    int64_t x10_33 = i_76 << 2
                    int64_t i_52 = fp_3 - i_76
                    void* x9_44 = &var_ce8 + x10_33
                    void* x10_34 = var_6a30_2 + x10_33
                    int64_t i_17
                    
                    do
                        uint64_t x11_42 = zx.q(*x10_34)
                        x10_34 += 4
                        i_17 = i_52
                        i_52 -= 1
                        *x9_44 = *(arg1 + x11_42 * 0x68 + 0x1a70)
                        x9_44 += 4
                    while (i_17 != 1)
            
            sub_a03898(&var_ce8, &var_ce8 + (zx.q(fp_3.d) << 2))
            int64_t x8_25
            
            if (fp_3.d == 0)
                x8_25 = zx.q(x19_1.d + 2)
            else
                x8_25 = sx.q(x19_1.d + 2)
                uint64_t x9_45 = zx.q(fp_3.d)
                int64_t i_84
                
                if (fp_3.d != 1)
                    void* x12_37 = var_6a18_2
                    i_84 = x9_45 & 0xfffffffe
                    void* x11_45 = &(&data_13ef230)[x8_25]
                    x8_25 += i_84 << 2
                    void* x11_46 = x11_45 + 3
                    int64_t i_70 = i_84
                    int64_t i_18
                    
                    do
                        int32_t x14_13 = *(x12_37 - 4)
                        int32_t x15_6 = *x12_37
                        i_18 = i_70
                        i_70 -= 2
                        x12_37 += 8
                        char x16_3 = (x14_13 s>> 8).b
                        char x17_3 = (x15_6 s>> 8).b
                        *(x11_46 - 2) = x14_13.b
                        *(x11_46 + 2) = x15_6.b
                        *(x11_46 - 3) = x16_3
                        *(x11_46 + 1) = x17_3
                        *(x11_46 - 1) = x16_3 + x14_13.b
                        *(x11_46 + 3) = x17_3 + x15_6.b
                        *x11_46 = x16_3 ^ x14_13.b
                        *(x11_46 + 4) = x17_3 ^ x15_6.b
                        x11_46 += 8
                    while (i_18 != 2)
                    
                    if (i_84 != x9_45)
                        goto label_9f8acc
                else
                    i_84 = 0
                label_9f8acc:
                    void* x11_47 = &var_ce8 + (i_84 << 2)
                    int64_t i_62 = x9_45 - i_84
                    int64_t i_19
                    
                    do
                        int32_t x10_35 = *x11_47
                        x11_47 += 4
                        void* x12_38 = &(&data_13ef230)[x8_25]
                        x8_25 += 4
                        i_19 = i_62
                        i_62 -= 1
                        char x13_28 = (x10_35 s>> 8).b
                        *(x12_38 + 1) = x10_35.b
                        *x12_38 = x13_28
                        *(x12_38 + 2) = x13_28 + x10_35.b
                        *(x12_38 + 3) = x13_28 ^ x10_35.b
                    while (i_19 != 1)
            
            int64_t x8_26 = sx.q(x8_25.d)
            (&data_13ef230)[x8_26] = 0xff
            int64_t x10_37 = sx.q(*(arg1 + x23_30 * 0x5a30 + 0x17f74))
            uint64_t x9_49 = x8_26 + 1
            
            if ((*(arg1 + x10_37 * 0x68 + (x22_1 << 2) + 0x1aa8) & 4) != 0)
                int32_t x10_39 = *(arg1 + x10_37 * 0x68 + 0x1a70)
                char x12_39 = (x10_39 s>> 8).b
                (&data_13ef230)[x9_49] = x12_39
                *(x8_26 + 0x13ef232) = x10_39.b
                x9_49 = zx.q(x8_26.d + 5)
                *(x8_26 + 0x13ef233) = x12_39 + x10_39.b
                *(x8_26 + 0x13ef234) = x12_39 ^ x10_39.b
            
            int64_t fp_4 = 0
            x19_1 = zx.q(x9_49.d + 1)
            int32_t x8_27 = 0x3ec
            (&data_13ef230)[sx.q(x9_49.d)] = 0xff
            
            while (*(x22_1 * 0x84 + 0x14a76c8) s<= 0)
                int32_t i_20 = *(arg1 + x23_30 * 0x5a30 + (sx.q(x8_27) << 2) + 0x16fc8)
                int32_t x26_4
                
                if (i_20 == 0)
                    x26_4 = 0
                else
                    x26_4 = 0
                    
                    do
                        int64_t i_53 = sx.q(i_20)
                        
                        if ((*(arg1 + muls.dp.d(i_20, 0x68) + (x22_1 << 2) + 0x1aa8) & 2) != 0)
                            *(&var_ce8 + (sx.q(x26_4) << 2)) = *(arg1 + i_53 * 0x68 + 0x1a70)
                            x26_4 += 1
                        
                        i_20 = *(arg1 + i_53 * 0x68 + 0x1ac8)
                    while (i_20 != 0)
                
                sub_a03898(&var_ce8, &var_ce8 + (sx.q(x26_4) << 2))
                
                if (x26_4 s>= 1)
                    x19_1 = sx.q(x19_1.d)
                    uint64_t x8_30 = zx.q(x26_4)
                    int64_t i_79
                    
                    if (x26_4 != 1)
                        void* x11_50 = var_6a18_2
                        i_79 = x8_30 & 0xfffffffe
                        void* x10_42 = &(&data_13ef230)[x19_1]
                        x19_1 += i_79 << 2
                        void* x10_43 = x10_42 + 3
                        int64_t i_66 = i_79
                        int64_t i_21
                        
                        do
                            int32_t x13_30 = *(x11_50 - 4)
                            int32_t x14_16 = *x11_50
                            i_21 = i_66
                            i_66 -= 2
                            x11_50 += 8
                            char x15_8 = (x13_30 s>> 8).b
                            char x16_4 = (x14_16 s>> 8).b
                            *(x10_43 - 2) = x13_30.b
                            *(x10_43 + 2) = x14_16.b
                            *(x10_43 - 3) = x15_8
                            *(x10_43 + 1) = x16_4
                            *(x10_43 - 1) = x15_8 + x13_30.b
                            *(x10_43 + 3) = x16_4 + x14_16.b
                            *x10_43 = x15_8 ^ x13_30.b
                            *(x10_43 + 4) = x16_4 ^ x14_16.b
                            x10_43 += 8
                        while (i_21 != 2)
                        
                        if (i_79 != x8_30)
                            goto label_9f8cb4
                    else
                        i_79 = 0
                    label_9f8cb4:
                        void* x10_44 = &var_ce8 + (i_79 << 2)
                        int64_t i_54 = x8_30 - i_79
                        int64_t i_22
                        
                        do
                            int32_t x9_57 = *x10_44
                            x10_44 += 4
                            void* x11_51 = &(&data_13ef230)[x19_1]
                            x19_1 += 4
                            i_22 = i_54
                            i_54 -= 1
                            char x12_40 = (x9_57 s>> 8).b
                            *(x11_51 + 1) = x9_57.b
                            *x11_51 = x12_40
                            *(x11_51 + 2) = x12_40 + x9_57.b
                            *(x11_51 + 3) = x12_40 ^ x9_57.b
                        while (i_22 != 1)
                
                fp_4 += 1
                x8_27 = *(&data_7ac390 + (fp_4 << 2))
                (&data_13ef230)[sx.q(x19_1.d)] = 0xff
                x19_1 = zx.q(x19_1.d + 1)
                
                if (fp_4 == 0xe)
                    break
            
            x8_18 = sx.q(*(arg1 + 0xd40))
            x23_30 += 1
            i_87.q += 0x5a30
            fp += 0x5a30
            var_6a38_2 += 0x5a30
            var_6a28_2 += 0x5a30
            var_6a40_2 += 0x5a30
            var_6a30_2 += 0x5a30
        while (x23_30 s< x8_18)
        
        if (x8_18.d s< 1)
            x28_1 = zx.q(x19_1.d)
        else
            int64_t i_23 = 0
            x28_1 = zx.q(x19_1.d)
            
            do
                if (i_23 == zx.q(*(arg1 + 0x19d4)))
                    int32_t j_1 = *(arg1 + i_23 * 0x5a30 + 0x17f70)
                    int32_t x19_3
                    
                    if (j_1 == 0)
                        x19_3 = 0
                    else
                        x19_3 = 0
                        
                        do
                            int64_t j_8 = sx.q(j_1)
                            
                            if ((*(arg1 + muls.dp.d(j_1, 0x68) + (x22_1 << 2) + 0x1aa8) & 2) != 0)
                                *(&var_ce8 + (sx.q(x19_3) << 2)) = *(arg1 + j_8 * 0x68 + 0x1a70)
                                x19_3 += 1
                            
                            j_1 = *(arg1 + j_8 * 0x68 + 0x1ac8)
                        while (j_1 != 0)
                    
                    sub_a03898(&var_ce8, &var_ce8 + (sx.q(x19_3) << 2))
                    
                    if (x19_3 s>= 1)
                        x28_1 = sx.q(x28_1.d)
                        uint64_t x8_33 = zx.q(x19_3)
                        int64_t j_17
                        
                        if (x19_3 != 1)
                            void* x11_52 = &var_ce4
                            j_17 = x8_33 & 0xfffffffe
                            void* x10_46 = &(&data_13ef230)[x28_1]
                            x28_1 += j_17 << 2
                            void* x10_47 = x10_46 + 3
                            int64_t j_14 = j_17
                            int64_t j_2
                            
                            do
                                int32_t x13_33 = *(x11_52 - 4)
                                int32_t x14_18 = *x11_52
                                j_2 = j_14
                                j_14 -= 2
                                x11_52 += 8
                                char x15_9 = (x13_33 s>> 8).b
                                char x16_5 = (x14_18 s>> 8).b
                                *(x10_47 - 2) = x13_33.b
                                *(x10_47 + 2) = x14_18.b
                                *(x10_47 - 3) = x15_9
                                *(x10_47 + 1) = x16_5
                                *(x10_47 - 1) = x15_9 + x13_33.b
                                *(x10_47 + 3) = x16_5 + x14_18.b
                                *x10_47 = x15_9 ^ x13_33.b
                                *(x10_47 + 4) = x16_5 ^ x14_18.b
                                x10_47 += 8
                            while (j_2 != 2)
                            
                            if (j_17 != x8_33)
                                goto label_9f8e3c
                        else
                            j_17 = 0
                        label_9f8e3c:
                            void* x10_48 = &var_ce8 + (j_17 << 2)
                            int64_t j_9 = x8_33 - j_17
                            int64_t j_3
                            
                            do
                                int32_t x9_66 = *x10_48
                                x10_48 += 4
                                void* x11_53 = &(&data_13ef230)[x28_1]
                                x28_1 += 4
                                j_3 = j_9
                                j_9 -= 1
                                char x12_41 = (x9_66 s>> 8).b
                                *(x11_53 + 1) = x9_66.b
                                *x11_53 = x12_41
                                *(x11_53 + 2) = x12_41 + x9_66.b
                                *(x11_53 + 3) = x12_41 ^ x9_66.b
                            while (j_3 != 1)
                    
                    (&data_13ef230)[sx.q(x28_1.d)] = 0xff
                    x8_18 = zx.q(*(arg1 + 0xd40))
                    x28_1 = zx.q(x28_1.d + 1)
                
                i_23 += 1
            while (i_23 s< sx.q(x8_18.d))

int64_t x22_2 = sx.q(x28_1.d)
int64_t x8_34 = 0
int64_t i_24 = 0
int64_t x21_16 = (x28_1 & 0xffffffff) << 0x20

do
    int32_t x12_43 = *(arg1 + x8_34 + 0x159c)
    void* x13_36 = &(&data_13ef230)[x22_2 + i_24]
    i_24 += 8
    void var_4400
    uint128_t v0_1 = vmovn_s32(*(&var_4400 + x8_34))
    char x14_20 = (x12_43 s>> 8).b
    x21_16 += 0x800000000
    *(x13_36 + 1) = x12_43.b
    uint128_t v0 = vmovn_s16(v0_1)
    x8_34 += 0x10
    *x13_36 = x14_20
    *(x13_36 + 4) = v0.d
    *(x13_36 + 2) = x14_20 + x12_43.b
    *(x13_36 + 3) = x14_20 ^ x12_43.b
while (i_24 != 0xf8)

(&data_13ef230)[x21_16 s>> 0x20] = 0xff
int32_t i_25 = *(arg1 + 0x1554)
void* x27_2 = arg2
int64_t x25_5

if (i_25 == 0)
    x25_5 = 0
else
    x25_5 = 0
    
    do
        void* x8_36 = arg1 + muls.dp.d(i_25, 0x68)
        *(&var_ce8 + (x25_5 << 2)) = *(x8_36 + 0x1a70)
        i_25 = *(x8_36 + 0x1ac8)
        x25_5 += 1
    while (i_25 != 0)

void* x26_5 = arg4
int128_t v0_2
int128_t v1
v0_2, v1 = sub_a03898(&var_ce8, &var_ce8 + (zx.q(x25_5.d) << 2))
int32_t x8_37
int32_t x9_71

if (x25_5.d == 0)
    x8_37 = x22_2.d + i_24.d
    x9_71 = i_24.d + x22_2.d + 1
else
    int32_t x9_69 = i_24.d + x22_2.d
    int64_t x9_70 = sx.q(x9_69)
    int64_t i_26 = 0
    x21_16 = x9_70 << 0x20
    x9_71 = x9_69 + 1
    
    do
        int32_t x13_38 = *(&var_ce8 + i_26)
        void* x14_21 = &(&data_13ef230)[x9_70 + i_26]
        i_26 += 4
        char x15_11 = (x13_38 s>> 8).b
        (&data_13ef230)[sx.q(x9_71)] = x15_11
        *(x14_21 + 2) = x13_38.b
        x9_71 += 4
        x21_16 += 0x400000000
        *(x14_21 + 3) = x15_11 + x13_38.b
        *(x14_21 + 4) = x15_11 ^ x13_38.b
    while (zx.q(x25_5.d) << 2 != i_26)
    
    x8_37 = i_26.d + x22_2.d + i_24.d

(&data_13ef230)[sx.q(x9_71)] = 0xff
(&data_13ef230)[(x21_16 + 0x200000000) s>> 0x20] = (*(arg1 + 0x19cc)).b
(&data_13ef230)[(x21_16 + 0x300000000) s>> 0x20] = (*(arg1 + 0x19d4)).b
(&data_13ef230)[(x21_16 + 0x400000000) s>> 0x20] = (*(arg1 + 0x19d8)).b
(&data_13ef230)[(x21_16 + 0x500000000) s>> 0x20] = (*(arg1 + 0x19e4)).b
(&data_13ef230)[(x21_16 + 0x600000000) s>> 0x20] = (*(arg1 + 0x19e8)).b
(&data_13ef230)[(x21_16 + 0x700000000) s>> 0x20] = (*(arg1 + 0x19ec)).b
(&data_13ef230)[(x21_16 + 0x800000000) s>> 0x20] = (*(arg1 + 0x19bc)).b
(&data_13ef230)[(x21_16 + 0x900000000) s>> 0x20] = (*(x27_2 + 4)).b
(&data_13ef230)[(x21_16 + 0xa00000000) s>> 0x20] = (*(x27_2 + 0x54)).b
(&data_13ef230)[(x21_16 + 0xb00000000) s>> 0x20] = (*(x27_2 + 0x58)).b
(&data_13ef230)[(x21_16 + 0xc00000000) s>> 0x20] = (*(x27_2 + 0x48)).b
(&data_13ef230)[(x21_16 + 0xd00000000) s>> 0x20] = (*(x27_2 + 0x4c)).b
(&data_13ef230)[(x21_16 + 0xe00000000) s>> 0x20] = (*(x27_2 + 0x74)).b
(&data_13ef230)[(x21_16 + 0xf00000000) s>> 0x20] = (*(x27_2 + 0x68)).b
(&data_13ef230)[(x21_16 + 0x1000000000) s>> 0x20] = (*(x27_2 + 0x64)).b
uint64_t x19_4 = zx.q(x8_37 + 0x11)

if (*(x27_2 + 0x5c) == 2)
    int32_t x10_85 = *(arg1 + zx.q(*(x27_2 + 0x60)) * 0x68 + 0x1a70)
    char x14_22 = (x10_85 s>> 8).b
    x19_4 = zx.q(x8_37 + 0x15)
    *(sx.q(x8_37) + 0x13ef241) = x14_22
    (&data_13ef230)[(x21_16 + 0x1200000000) s>> 0x20] = x10_85.b
    (&data_13ef230)[(x21_16 + 0x1300000000) s>> 0x20] = x14_22 + x10_85.b
    (&data_13ef230)[(x21_16 + 0x1400000000) s>> 0x20] = x14_22 ^ x10_85.b

int32_t x8_42 = *(x27_2 + 4)
uint64_t var_6a10

if (x8_42 - 1 u> 2)
label_9f93dc:
    uint64_t x9_99 = zx.q(*(x27_2 + 0x74))
    
    if (x8_42 == 4 && x9_99.d s>= 1)
        int64_t x10_92 = 0
        
        do
            (&data_13ef230)[sx.q(x19_4.d) + x10_92] = (*(x27_2 + 0x78 + (x10_92 << 2))).b
            x9_99 = sx.q(*(x27_2 + 0x74))
            x10_92 += 1
        while (x10_92 s< x9_99)
        
        x8_42 = *(x27_2 + 4)
        x19_4 = zx.q(x19_4.d + x10_92.d)
    
    if (x8_42 == 6)
        int64_t i_27
        
        if (x9_99.d s< 1)
            i_27 = 0
        else
            i_27 = 0
            void var_6a08
            void* x23_31 = &var_6a08
            
            do
                int64_t x26_6 = i_27 << 2
                int32_t x0_31 = AbilitySource(arg1, zx.q(*(x27_2 + 0x78 + x26_6)))
                uint64_t x8_44 = zx.q(*(x27_2 + 0x78 + x26_6))
                i_27 += 1
                int32_t x9_102 = *(arg1 + (x8_44 u>> 6 & 0xfff) * 0x68 + 0x1a70)
                *x23_31 = x8_44.d
                *(x23_31 - 8) = x0_31
                *(x23_31 - 4) = x9_102
                x23_31 += 0xc
            while (i_27 s< sx.q(*(x27_2 + 0x74)))
        
        v0_2, v1 = sub_a042b0(&var_6a10, &var_6a10 + mulu.dp.d(i_27.d, 0xc))
        
        if (i_27.d != 0)
            int64_t i_28 = 0
            void var_3ee4
            i_87.q = &var_3ee4
            void* var_6a18_4 = &var_ce4
            
            do
                int32_t* x8_46 = &var_6a10 + i_28 * 0xc
                int32_t x9_103 = *x8_46
                int32_t x10_93 = x8_46[1]
                uint64_t x23_32 = zx.q(x8_46[2])
                char x12_53 = (x9_103 s>> 8).b
                *(sx.q(x19_4.d) + 0x13ef231) = x9_103.b
                *(sx.q(x19_4.d) + 0x13ef233) = x12_53 ^ x9_103.b
                char x13_50 = (x10_93 s>> 8).b
                *(sx.q(x19_4.d) + 0x13ef235) = x10_93.b
                (&data_13ef230)[sx.q(x19_4.d)] = x12_53
                *(sx.q(x19_4.d) + 0x13ef234) = x13_50
                *(sx.q(x19_4.d) + 0x13ef232) = x12_53 + x9_103.b
                *(sx.q(x19_4.d) + 0x13ef236) = x13_50 + x10_93.b
                *(sx.q(x19_4.d) + 0x13ef237) = x13_50 ^ x10_93.b
                uint64_t x21_18 = zx.q(x19_4.d + 8)
                CardID var_3ee8
                int32_t x0_35 =
                    AbilityGetAssociatedCards(arg1, zx.q(*(arg2 + 0x54)), x23_32, &var_3ee8)
                int32_t x22_4 = x0_35
                int32_t x0_37
                int32_t x0_41
                
                if (x0_35 s<= 0)
                    x0_37 = AbilitySource(arg1, x23_32)
                    
                    if (x0_37 == 0x1121)
                        x0_41 = CardsAtCard(arg1, zx.q(AbilitySourceCard(arg1, x23_32)), &var_3ee8)
                        x22_4 = x0_41
                
                if (x0_35 s> 0 || (x0_37 == 0x1121 && x0_41 s> 0))
                    uint64_t x19_5 = zx.q(x22_4)
                    int64_t j_15
                    
                    if (x22_4 u>= 2)
                        int32_t* x11_70 = i_87.q
                        void* x10_95 = var_6a18_4
                        j_15 = x19_5 & 0xfffffffe
                        int64_t j_11 = j_15
                        int64_t j_4
                        
                        do
                            uint64_t x12_55 = zx.q(x11_70[-1])
                            uint64_t x13_51 = zx.q(*x11_70)
                            x11_70 = &x11_70[2]
                            j_4 = j_11
                            j_11 -= 2
                            int32_t x13_53 = *(arg1 + 0x1a68 + x13_51 * 0x68 + 8)
                            *(x10_95 - 4) = *(arg1 + 0x1a68 + x12_55 * 0x68 + 8)
                            *x10_95 = x13_53
                            x10_95 += 8
                        while (j_4 != 2)
                        
                        if (j_15 != x19_5)
                            goto label_9f9610
                    else
                        j_15 = 0
                    label_9f9610:
                        int64_t x10_96 = j_15 << 2
                        int64_t j_12 = x19_5 - j_15
                        void* x8_47 = &var_ce8 + x10_96
                        void* x10_97 = &var_3ee8 + x10_96
                        int64_t j_5
                        
                        do
                            uint64_t x11_71 = zx.q(*x10_97)
                            x10_97 += 4
                            j_5 = j_12
                            j_12 -= 1
                            *x8_47 = *(arg1 + x11_71 * 0x68 + 0x1a70)
                            x8_47 += 4
                        while (j_5 != 1)
                    v0_2, v1 = sub_a03898(&var_ce8, &var_ce8 + (sx.q(x19_5.d) << 2))
                    x21_18 = sx.q(x21_18.d)
                    int64_t j_16
                    
                    if (x19_5.d u>= 2)
                        void* x10_98 = var_6a18_4
                        j_16 = x19_5 & 0xfffffffe
                        void* x9_106 = &(&data_13ef230)[x21_18]
                        x21_18 += j_16 << 2
                        void* x9_107 = x9_106 + 3
                        int64_t j_13 = j_16
                        int64_t j_6
                        
                        do
                            int32_t x12_58 = *(x10_98 - 4)
                            int32_t x13_54 = *x10_98
                            j_6 = j_13
                            j_13 -= 2
                            x10_98 += 8
                            char x14_26 = (x12_58 s>> 8).b
                            char x15_16 = (x13_54 s>> 8).b
                            *(x9_107 - 2) = x12_58.b
                            *(x9_107 + 2) = x13_54.b
                            *(x9_107 - 3) = x14_26
                            *(x9_107 + 1) = x15_16
                            *(x9_107 - 1) = x14_26 + x12_58.b
                            *(x9_107 + 3) = x15_16 + x13_54.b
                            *x9_107 = x14_26 ^ x12_58.b
                            *(x9_107 + 4) = x15_16 ^ x13_54.b
                            x9_107 += 8
                        while (j_6 != 2)
                        
                        if (j_16 != x19_5)
                            goto label_9f96cc
                    else
                        j_16 = 0
                    label_9f96cc:
                        void* x9_108 = &var_ce8 + (j_16 << 2)
                        int64_t j_10 = x19_5 - j_16
                        int64_t j_7
                        
                        do
                            int32_t x10_99 = *x9_108
                            x9_108 += 4
                            void* x11_74 = &(&data_13ef230)[x21_18]
                            x21_18 += 4
                            j_7 = j_10
                            j_10 -= 1
                            char x12_60 = (x10_99 s>> 8).b
                            *(x11_74 + 1) = x10_99.b
                            *x11_74 = x12_60
                            *(x11_74 + 2) = x12_60 + x10_99.b
                            *(x11_74 + 3) = x12_60 ^ x10_99.b
                        while (j_7 != 1)
                else
                    v0_2, v1 = sub_a03898(&var_ce8, &var_ce8 + (sx.q(x22_4) << 2))
                
                i_28 += 1
                x19_4 = zx.q(x21_18.d + 1)
                (&data_13ef230)[sx.q(x21_18.d)] = 0xff
            while (i_28 != zx.q(i_27.d))
        
        x26_5 = arg4
        x27_2 = arg2
        x8_42 = *(x27_2 + 4)
    
    if (x8_42 - 7 u<= 1)
        uint64_t x8_49 = zx.q(*(x27_2 + 0x74))
        int32_t x21_19
        
        if (x8_49.d s< 1)
            x21_19 = 0
        else
            int64_t x9_109 = 0
            x21_19 = 0
            
            do
                int32_t i_29 = *(x27_2 + (x9_109 << 2) + 0x78)
                
                if (x21_19 s< 1)
                label_9f9740:
                    *(&var_ce8 + (sx.q(x21_19) << 2)) = i_29
                    x21_19 += 1
                else
                    uint64_t x12_62 = zx.q(x21_19)
                    void* x13_57 = &var_ce8
                    
                    while (*x13_57 != i_29)
                        uint64_t temp14_1 = x12_62
                        x12_62 -= 1
                        x13_57 += 4
                        
                        if (temp14_1 == 1)
                            goto label_9f9740
                
                x9_109 += 1
            while (x9_109 != x8_49)
        
        v0_2, v1 = sub_a03898(&var_ce8, &var_ce8 + (sx.q(x21_19) << 2))
        
        if (x21_19 s>= 1)
            x19_4 = sx.q(x19_4.d)
            uint64_t x8_50 = zx.q(x21_19)
            int64_t i_82
            
            if (x21_19 != 1)
                i_82 = x8_50 & 0xfffffffe
                void* x11_76 = &(&data_13ef230)[x19_4]
                x19_4 += i_82 << 2
                void* x10_101 = &var_ce4
                void* x11_77 = x11_76 + 3
                int64_t i_68 = i_82
                int64_t i_30
                
                do
                    int32_t x13_58 = *(x10_101 - 4)
                    int32_t x14_28 = *x10_101
                    i_30 = i_68
                    i_68 -= 2
                    x10_101 += 8
                    char x15_17 = (x13_58 s>> 8).b
                    char x16_12 = (x14_28 s>> 8).b
                    *(x11_77 - 2) = x13_58.b
                    *(x11_77 + 2) = x14_28.b
                    *(x11_77 - 3) = x15_17
                    *(x11_77 + 1) = x16_12
                    *(x11_77 - 1) = x15_17 + x13_58.b
                    *(x11_77 + 3) = x16_12 + x14_28.b
                    *x11_77 = x15_17 ^ x13_58.b
                    *(x11_77 + 4) = x16_12 ^ x14_28.b
                    x11_77 += 8
                while (i_30 != 2)
                
                if (i_82 != x8_50)
                    goto label_9f9844
            else
                i_82 = 0
            label_9f9844:
                void* x10_102 = &var_ce8 + (i_82 << 2)
                int64_t i_57 = x8_50 - i_82
                int64_t i_31
                
                do
                    int32_t x9_110 = *x10_102
                    x10_102 += 4
                    void* x11_78 = &(&data_13ef230)[x19_4]
                    x19_4 += 4
                    i_31 = i_57
                    i_57 -= 1
                    char x12_63 = (x9_110 s>> 8).b
                    *(x11_78 + 1) = x9_110.b
                    *x11_78 = x12_63
                    *(x11_78 + 2) = x12_63 + x9_110.b
                    *(x11_78 + 3) = x12_63 ^ x9_110.b
                while (i_31 != 1)
else
    uint64_t i_55 = zx.q(*(x27_2 + 0x74))
    int32_t x21_17
    
    if (i_55.d s< 1)
        x21_17 = 0
    else if (*(x27_2 + 0x48) != 2)
        int64_t i_80
        
        if (i_55.d u>= 2)
            i_80 = i_55 & 0x7ffffffe
            void* x10_87 = x27_2 + 0x7c
            void* x11_58 = &var_ce4
            int64_t i_71 = i_80
            int64_t i_32
            
            do
                uint64_t x15_12 = zx.q(*(x10_87 - 4))
                uint64_t x16_7 = zx.q(*x10_87)
                x10_87 += 8
                i_32 = i_71
                i_71 -= 2
                int32_t x16_9 = *(arg1 + 0x1a68 + x16_7 * 0x68 + 8)
                *(x11_58 - 4) = *(arg1 + 0x1a68 + x15_12 * 0x68 + 8)
                *x11_58 = x16_9
                x11_58 += 8
            while (i_32 != 2)
            
            if (i_80 != i_55)
                goto label_9f9260
        else
            i_80 = 0
        label_9f9260:
            int64_t x11_59 = i_80 << 2
            int32_t* x10_88 = &var_ce8 + x11_59
            int64_t i_63 = i_55 - i_80
            void* x11_61 = x11_59 + x27_2 + 0x78
            int64_t i_33
            
            do
                uint64_t x13_44 = zx.q(*x11_61)
                x11_61 += 4
                i_33 = i_63
                i_63 -= 1
                *x10_88 = *(arg1 + x13_44 * 0x68 + 0x1a70)
                x10_88 = &x10_88[1]
            while (i_33 != 1)
        x21_17 = i_55.d
    else
        x21_17 = 0
        void* x9_93 = x27_2 + 0x78
        uint64_t i_34
        
        do
            uint64_t x12_46 = zx.q(*x9_93)
            
            if (*(arg1 + x12_46 * 0x68 + 0x1a74) == 0x3ea)
                *(&var_ce8 + (sx.q(x21_17) << 2)) = *(arg1 + x12_46 * 0x68 + 0x1a70)
                x21_17 += 1
            
            i_34 = i_55
            i_55 -= 1
            x9_93 += 4
        while (i_34 != 1)
    
    v0_2, v1 = sub_a03898(&var_ce8, &var_ce8 + (sx.q(x21_17) << 2))
    
    if (x21_17 s>= 1)
        x19_4 = sx.q(x19_4.d)
        uint64_t x8_40 = zx.q(x21_17)
        int64_t i_81
        
        if (x21_17 != 1)
            i_81 = x8_40 & 0xfffffffe
            void* x11_62 = &(&data_13ef230)[x19_4]
            x19_4 += i_81 << 2
            void* x10_89 = &var_ce4
            void* x11_63 = x11_62 + 3
            int64_t i_67 = i_81
            int64_t i_35
            
            do
                int32_t x13_47 = *(x10_89 - 4)
                int32_t x14_23 = *x10_89
                i_35 = i_67
                i_67 -= 2
                x10_89 += 8
                char x15_15 = (x13_47 s>> 8).b
                char x16_10 = (x14_23 s>> 8).b
                *(x11_63 - 2) = x13_47.b
                *(x11_63 + 2) = x14_23.b
                *(x11_63 - 3) = x15_15
                *(x11_63 + 1) = x16_10
                *(x11_63 - 1) = x15_15 + x13_47.b
                *(x11_63 + 3) = x16_10 + x14_23.b
                *x11_63 = x15_15 ^ x13_47.b
                *(x11_63 + 4) = x16_10 ^ x14_23.b
                x11_63 += 8
            while (i_35 != 2)
            
            if (i_81 != x8_40)
                goto label_9f934c
        else
            i_81 = 0
        label_9f934c:
            void* x10_90 = &var_ce8 + (i_81 << 2)
            int64_t i_56 = x8_40 - i_81
            int64_t i_36
            
            do
                int32_t x9_94 = *x10_90
                x10_90 += 4
                void* x11_64 = &(&data_13ef230)[x19_4]
                x19_4 += 4
                i_36 = i_56
                i_56 -= 1
                char x12_50 = (x9_94 s>> 8).b
                *(x11_64 + 1) = x9_94.b
                *x11_64 = x12_50
                *(x11_64 + 2) = x12_50 + x9_94.b
                *(x11_64 + 3) = x12_50 ^ x9_94.b
            while (i_36 != 1)
    
    x8_42 = *(x27_2 + 4)
    
    if (x8_42 != 3)
        goto label_9f93dc
    
    if (*(x27_2 + 0xd18) s>= 1)
        int64_t i_37 = 0
        void* x9_97 = sx.q(x19_4.d) + 0x13ef231
        
        do
            int64_t x11_65 = i_37 << 2
            i_37 += 1
            x19_4 = zx.q(x19_4.d + 2)
            *(x9_97 - 1) = (*(x27_2 + 0xcf8 + x11_65) u>> 8).b
            *x9_97 = (*(x27_2 + 0xcf8 + x11_65)).b
            x9_97 += 2
        while (i_37 s< sx.q(*(x27_2 + 0xd18)))
        
        x8_42 = *(x27_2 + 4)
        goto label_9f93dc

if (x26_5 != 0 && *(x27_2 + 4) == 0)
    uint64_t x8_52 = zx.q(*(arg1 + 0xd40))
    
    if (x8_52.d s>= 1)
        x19_4 = sx.q(x19_4.d)
        int64_t i_83
        
        if (x8_52.d u< 0x20 || (&(&data_13ef230)[x19_4] u< x26_5 + x8_52
                && &(&data_13ef230)[x19_4 + x8_52] u> x26_5))
            i_83 = 0
        label_9f98c4:
            int64_t i_58 = x8_52 - i_83
            char* x9_115 = x26_5 + i_83
            uint64_t x10_104 = x19_4
            int64_t i_38
            
            do
                char x11_79 = *x9_115
                x9_115 = &x9_115[1]
                x19_4 = x10_104 + 1
                i_38 = i_58
                i_58 -= 1
                (&data_13ef230)[x10_104] = x11_79
                x10_104 = x19_4
            while (i_38 != 1)
        else
            i_83 = x8_52 & 0xffffffe0
            void* x11_80 = &(&data_13ef230)[x19_4]
            void* x10_106 = x26_5 + 0x10
            x19_4 += i_83
            void* x11_81 = x11_80 + 0x10
            int64_t i_69 = i_83
            int64_t i_39
            
            do
                v0_2 = *(x10_106 - 0x10)
                v1 = *x10_106
                x10_106 += 0x20
                i_39 = i_69
                i_69 -= 0x20
                *(x11_81 - 0x10) = v0_2
                *x11_81 = v1
                x11_81 += 0x20
            while (i_39 != 0x20)
            
            if (i_83 != x8_52)
                goto label_9f98c4

var_6a10 = 0
uint64_t var_68 = 0
SpookyHash::Hash128(&data_13ef230, sx.q(x19_4.d), &var_68, &var_6a10)
uint64_t x19_6 = var_68
int64_t x20_1 = x19_6 & 0xffff
uint64_t* i_72 = *(&data_12f9f30 + (x20_1 << 3))
uint64_t* i_40

if (i_72 != 0)
    i_40 = i_72
    
    do
        if (*i_40 == x19_6)
            return i_40
        
        i_40 = i_40[3]
    while (i_40 != 0)

i_40 = operator new(0x20)
int32_t x9_116 = data_14a71d4
i_40[3] = i_72
*(&data_12f9f30 + (x20_1 << 3)) = i_40
*i_40 = x19_6
i_40[1] = 0
i_40[2].d = x9_116
data_14a71d4 = x9_116 + 1
return i_40
