// 函数: _Z19ZoomAssociatedCardsR7DomGameR6DomGfxR15AssociatedPiles
// 地址: 0xaefb04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i
int32_t x20_1

for (i = *(arg2 + 0x2c); i == 3; i = *(arg2 + 0x2c))
    x20_1 = *(arg2 + 0x30)
    
    if (x20_1 == 0x70d)
        goto label_aefbe0
    
    if (x20_1 == 0x718)
        goto label_aefbe0
    
    int32_t x10 = *(arg2 + 0x70)
    
    if (x10 == 0)
        goto label_aefbe0
    
    arg2 = *(gDomClient + 0x205e0) + zx.q(x10.w) * 0x21d8

if (i == 5)
    x20_1 = *(arg2 + 0x204)
else if (i == 1)
    x20_1 = *(arg2 + 0x170)
else
    if (i != 0)
        pthread_kill(pthread_self(), 6)
        DomGame* x0_17
        DomGfx* x1_14
        DomAssociatedCardGroups* x2
        x0_17, x1_14, x2 = XNoReturn()
        return ZoomAssociatedCardPiles(x0_17, x1_14, x2) __tailcall
    
    x20_1 = CardWhat(gDomClient + 0x20728, zx.q(*(arg2 + 0x98)))

label_aefbe0:
*(arg3 + 0x810) = 0
*(arg3 + 0x400) = 0
*(arg3 + 0x808) = 0
TestSet(arg1, zx.q(x20_1), 0x717, &data_7ef3d0, 6, 0, 0x10, arg3)
TestSet(arg1, zx.q(x20_1), 0x706, &data_7ef3bc, 5, 0, 2, arg3)
AssociatedPiles& var_70 = arg3
TestSetPotentialArray(arg1, zx.q(x20_1), &data_7ef238, 5, 0x7ef24c, 3, 4, 3)

if (x20_1 != 0x924)
    int64_t x8_26 = 0
    int32_t x9_11
    
    do
        if (x8_26 == 4)
            goto label_aefd18
        
        x9_11 = *((x8_26 << 2) + 0x7ef23c)
        x8_26 += 1
    while (x9_11 != x20_1)
    
    if (x8_26 u<= 4)
        if (x20_1 == 0x924)
            goto label_aefc68
        
        void* x8_28 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
        int64_t x9_12 = sx.q(*(x8_28 + 0x400))
        *(x8_28 + 0x404) = 4
        *(x8_28 + 0x400) = x9_12.d + 1
        *(x8_28 + (x9_12 << 2)) = 0x924
        
        if (x20_1 != 0x925)
            goto label_aefc68
        
        goto label_aefc94
else
label_aefc68:
    void* x8_2 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
    int64_t x9_1 = sx.q(*(x8_2 + 0x400))
    *(x8_2 + 0x404) = 4
    *(x8_2 + 0x400) = x9_1.d + 1
    *(x8_2 + (x9_1 << 2)) = 0x925
    
    if (x20_1 != 0x926)
    label_aefc94:
        void* x8_4 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
        int64_t x9_2 = sx.q(*(x8_4 + 0x400))
        *(x8_4 + 0x404) = 4
        *(x8_4 + 0x400) = x9_2.d + 1
        *(x8_4 + (x9_2 << 2)) = 0x926
        
        if (x20_1 == 0x927)
            goto label_aefcf4
        
        goto label_aefcc4
    
label_aefcc4:
    void* x8_6 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
    int64_t x9_3 = sx.q(*(x8_6 + 0x400))
    *(x8_6 + 0x404) = 4
    *(x8_6 + 0x400) = x9_3.d + 1
    *(x8_6 + (x9_3 << 2)) = 0x927
    
    if (x20_1 == 0x928)
        *(arg3 + 0x810) += 1
    else
    label_aefcf4:
        void* x8_8 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
        int64_t x9_4 = sx.q(*(x8_8 + 0x400))
        *(x8_8 + 0x404) = 4
        *(x8_8 + 0x400) = x9_4.d + 1
        *(x8_8 + (x9_4 << 2)) = 0x928
        *(arg3 + 0x810) += 1

label_aefd18:

if (x20_1 == 0x91e)
label_aefe24:
    void* x8_17 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
    int64_t x9_7 = sx.q(*(x8_17 + 0x400))
    *(x8_17 + 0x404) = 0
    *(x8_17 + 0x400) = x9_7.d + 1
    *(x8_17 + (x9_7 << 2)) = 0x92e
    *(arg3 + 0x810) += 1
else
    if (x20_1 == 0x92e)
        int64_t x8_11 = sx.q(*(arg3 + 0x810))
        void* x9_5 = arg3 + x8_11 * 0x408
        *(x9_5 + 0x404) = 0xf
        uint64_t x10_5 = zx.q(*(arg1 + 0x1528))
        
        if (x10_5.d s>= 1)
            int64_t x11_16
            
            if (*(arg1 + 0x1a70) != 0x91e)
                x11_16 = 0
                void* __offset(DomGame, 0x1ad8) x12_1 = arg1 + 0x1ad8
                int32_t i_1
                
                do
                    if (x10_5 - 1 == x11_16)
                        goto label_aefd78
                    
                    i_1 = *x12_1
                    x12_1 += 0x68
                    x11_16 += 1
                while (i_1 != 0x91e)
            
            if (*(arg1 + 0x1a70) == 0x91e || x11_16 u< x10_5)
                int64_t x10_6 = sx.q(*(x9_5 + 0x400))
                *(x9_5 + 0x400) = x10_6.d + 1
                *(arg3 + x8_11 * 0x408 + (x10_6 << 2)) = 0x91e
                x10_5 = zx.q(*(arg1 + 0x1528))
            
        label_aefd78:
            
            if (x10_5.d s> 0)
                int64_t x11_31
                uint64_t x12_2
                
                if (*(arg1 + 0x1a70) != 0x90f)
                    x12_2 = zx.q(x10_5.d)
                    x11_31 = 0
                    void* __offset(DomGame, 0x1ad8) x13_4 = arg1 + 0x1ad8
                    int32_t i_2
                    
                    do
                        if (x12_2 - 1 == x11_31)
                            goto label_aefdac
                        
                        i_2 = *x13_4
                        x13_4 += 0x68
                        x11_31 += 1
                    while (i_2 != 0x90f)
                
                if (*(arg1 + 0x1a70) == 0x90f || x11_31 u< x12_2)
                    int64_t x10_7 = sx.q(*(x9_5 + 0x400))
                    *(x9_5 + 0x400) = x10_7.d + 1
                    *(arg3 + x8_11 * 0x408 + (x10_7 << 2)) = 0x90f
                    x10_5 = zx.q(*(arg1 + 0x1528))
                
            label_aefdac:
                
                if (x10_5.d s>= 1)
                    uint64_t x10_85
                    int64_t x11_39
                    
                    if (*(arg1 + 0x1a70) != 0x915)
                        x10_85 = zx.q(x10_5.d)
                        x11_39 = 0
                        void* __offset(DomGame, 0x1ad8) x12_3 = arg1 + 0x1ad8
                        int32_t i_3
                        
                        do
                            if (x10_85 - 1 == x11_39)
                                goto label_aefde4
                            
                            i_3 = *x12_3
                            x12_3 += 0x68
                            x11_39 += 1
                        while (i_3 != 0x915)
                    
                    if (*(arg1 + 0x1a70) == 0x915 || x11_39 u< x10_85)
                        int64_t x10_8 = sx.q(*(x9_5 + 0x400))
                        *(x9_5 + 0x400) = x10_8.d + 1
                        *(arg3 + x8_11 * 0x408 + (x10_8 << 2)) = 0x915
        
    label_aefde4:
        *(arg3 + 0x810) += 1
    
    int64_t x8_15 = 0
    int32_t x10_10
    
    do
        if (x8_15 == 2)
            goto label_aefe48
        
        x10_10 = *((x8_15 << 2) + 0x7ef25c)
        x8_15 += 1
    while (x10_10 != x20_1)
    
    if (x8_15 u<= 2)
        goto label_aefe24

label_aefe48:
uint64_t x8_20 = zx.q(x20_1 - 0x905)

if (x8_20.d u> 0x2a)
label_af0030:
    int64_t x8_44 = 0
    int32_t x10_14
    
    do
        if (x8_44 == 9)
            goto label_af0248
        
        x10_14 = *((x8_44 << 2) + &data_7ef380:4)
        x8_44 += 1
    while (x10_14 != x20_1)
    
    if (x8_44 u<= 9)
        if (x20_1 == 0x92f)
            goto label_af00a4
        
        void* x8_46 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
        int64_t x9_19 = sx.q(*(x8_46 + 0x400))
        *(x8_46 + 0x404) = 5
        *(x8_46 + 0x400) = x9_19.d + 1
        *(x8_46 + (x9_19 << 2)) = 0x92f
        
        if (x20_1 == 0x930)
            goto label_af00d4
        
        goto label_af00a4
else
    switch (x8_20)
        case 0
        label_aefe6c:
            uint64_t x8_21 = zx.q(*(arg1 + 0x1528))
            
            if (x8_21.d s< 1)
                goto label_af0030
            
            int64_t x9_85
            
            if (*(arg1 + 0x1a70) != 0x92c)
                x9_85 = 0
                void* __offset(DomGame, 0x1ad8) x10_79 = arg1 + 0x1ad8
                int32_t i_4
                
                do
                    if (x8_21 - 1 == x9_85)
                        goto label_aefeb4
                    
                    i_4 = *x10_79
                    x10_79 += 0x68
                    x9_85 += 1
                while (i_4 != 0x92c)
            
            if (*(arg1 + 0x1a70) == 0x92c || x9_85 u< x8_21)
                void* x8_23 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x9_9 = sx.q(*(x8_23 + 0x400))
                *(x8_23 + 0x404) = 0
                *(x8_23 + 0x400) = x9_9.d + 1
                *(x8_23 + (x9_9 << 2)) = 0x92c
                *(arg3 + 0x810) += 1
            
        label_aefeb4:
            
            if (x20_1 == 0x92f)
                goto label_af00a4
            
            if (x20_1 == 0x92c)
                goto label_aeffdc
            
            goto label_af0030
        case 1, 2, 3, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 
                0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 
                0x23, 0x24, 0x25, 0x26, 0x29
            goto label_af0030
        case 4
            uint64_t x8_29 = zx.q(*(arg1 + 0x1528))
            
            if (x8_29.d s>= 1)
                int64_t x9_86
                
                if (*(arg1 + 0x1a70) != 0x92d)
                    x9_86 = 0
                    void* __offset(DomGame, 0x1ad8) x10_80 = arg1 + 0x1ad8
                    int32_t i_5
                    
                    do
                        if (x8_29 - 1 == x9_86)
                            goto label_af0030
                        
                        i_5 = *x10_80
                        x10_80 += 0x68
                        x9_86 += 1
                    while (i_5 != 0x92d)
                
                if (*(arg1 + 0x1a70) == 0x92d || x9_86 u< x8_29)
                    void* x8_31 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                    int64_t x9_14 = sx.q(*(x8_31 + 0x400))
                    *(x8_31 + 0x404) = 0
                    *(x8_31 + 0x400) = x9_14.d + 1
                    *(x8_31 + (x9_14 << 2)) = 0x92d
                    *(arg3 + 0x810) += 1
            
            goto label_af0030
        case 0x27
        label_aeffdc:
            uint64_t x8_39 = zx.q(*(arg1 + 0x1528))
            
            if (x8_39.d s< 1)
                goto label_af0030
            
            int64_t x9_83
            
            if (*(arg1 + 0x1a70) != 0x905)
                x9_83 = 0
                void* __offset(DomGame, 0x1ad8) x10_77 = arg1 + 0x1ad8
                int32_t i_6
                
                do
                    if (x8_39 - 1 == x9_83)
                        goto label_af0024
                    
                    i_6 = *x10_77
                    x10_77 += 0x68
                    x9_83 += 1
                while (i_6 != 0x905)
            
            if (*(arg1 + 0x1a70) == 0x905 || x9_83 u< x8_39)
                void* x8_41 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x9_18 = sx.q(*(x8_41 + 0x400))
                *(x8_41 + 0x404) = 0
                *(x8_41 + 0x400) = x9_18.d + 1
                *(x8_41 + (x9_18 << 2)) = 0x905
                *(arg3 + 0x810) += 1
            
        label_af0024:
            
            if (x20_1 == 0x92f)
                goto label_af00a4
            
            goto label_af0030
        case 0x28
            uint64_t x8_34 = zx.q(*(arg1 + 0x1528))
            
            if (x8_34.d s< 1)
                goto label_af0030
            
            int64_t x9_87
            
            if (*(arg1 + 0x1a70) != 0x909)
                x9_87 = 0
                void* __offset(DomGame, 0x1ad8) x10_81 = arg1 + 0x1ad8
                int32_t i_7
                
                do
                    if (x8_34 - 1 == x9_87)
                        goto label_aeffc0
                    
                    i_7 = *x10_81
                    x10_81 += 0x68
                    x9_87 += 1
                while (i_7 != 0x909)
            
            if (*(arg1 + 0x1a70) == 0x909 || x9_87 u< x8_34)
                void* x8_36 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x9_16 = sx.q(*(x8_36 + 0x400))
                *(x8_36 + 0x404) = 0
                *(x8_36 + 0x400) = x9_16.d + 1
                *(x8_36 + (x9_16 << 2)) = 0x909
                *(arg3 + 0x810) += 1
            
        label_aeffc0:
            
            if (x20_1 == 0x92f)
                goto label_af00a4
            
            if (x20_1 == 0x92c)
                goto label_aeffdc
            
            if (x20_1 == 0x905)
                goto label_aefe6c
            
            goto label_af0030
        case 0x2a
        label_af00a4:
            void* x8_48 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
            int64_t x9_20 = sx.q(*(x8_48 + 0x400))
            *(x8_48 + 0x404) = 5
            *(x8_48 + 0x400) = x9_20.d + 1
            *(x8_48 + (x9_20 << 2)) = 0x930
            
            if (x20_1 != 0x931)
            label_af00d4:
                void* x8_50 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x9_21 = sx.q(*(x8_50 + 0x400))
                *(x8_50 + 0x404) = 5
                *(x8_50 + 0x400) = x9_21.d + 1
                *(x8_50 + (x9_21 << 2)) = 0x931
                
                if (x20_1 == 0x932)
                    goto label_af0134
                
                goto label_af0104
            
        label_af0104:
            void* x8_52 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
            int64_t x9_22 = sx.q(*(x8_52 + 0x400))
            *(x8_52 + 0x404) = 5
            *(x8_52 + 0x400) = x9_22.d + 1
            *(x8_52 + (x9_22 << 2)) = 0x932
            
            if (x20_1 != 0x933)
            label_af0134:
                void* x8_54 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x9_23 = sx.q(*(x8_54 + 0x400))
                *(x8_54 + 0x404) = 5
                *(x8_54 + 0x400) = x9_23.d + 1
                *(x8_54 + (x9_23 << 2)) = 0x933
                
                if (x20_1 == 0x934)
                    goto label_af0194
                
                goto label_af0164
            
        label_af0164:
            void* x8_56 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
            int64_t x9_24 = sx.q(*(x8_56 + 0x400))
            *(x8_56 + 0x404) = 5
            *(x8_56 + 0x400) = x9_24.d + 1
            *(x8_56 + (x9_24 << 2)) = 0x934
            
            if (x20_1 != 0x935)
            label_af0194:
                void* x8_58 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x9_25 = sx.q(*(x8_58 + 0x400))
                *(x8_58 + 0x404) = 5
                *(x8_58 + 0x400) = x9_25.d + 1
                *(x8_58 + (x9_25 << 2)) = 0x935
                
                if (x20_1 == 0x936)
                    goto label_af01f4
                
                goto label_af01c4
            
        label_af01c4:
            void* x8_60 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
            int64_t x9_26 = sx.q(*(x8_60 + 0x400))
            *(x8_60 + 0x404) = 5
            *(x8_60 + 0x400) = x9_26.d + 1
            *(x8_60 + (x9_26 << 2)) = 0x936
            
            if (x20_1 == 0x937)
            label_af0224:
                void* x8_64 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x9_28 = sx.q(*(x8_64 + 0x400))
                *(x8_64 + 0x404) = 5
                *(x8_64 + 0x400) = x9_28.d + 1
                *(x8_64 + (x9_28 << 2)) = 0x938
                *(arg3 + 0x810) += 1
            else
            label_af01f4:
                void* x8_62 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x9_27 = sx.q(*(x8_62 + 0x400))
                *(x8_62 + 0x404) = 5
                *(x8_62 + 0x400) = x9_27.d + 1
                *(x8_62 + (x9_27 << 2)) = 0x937
                
                if (x20_1 != 0x938)
                    goto label_af0224
                
                *(arg3 + 0x810) += 1

label_af0248:

if (x20_1 != 0xb01)
    int64_t x8_94 = 0
    int32_t x10_37
    
    do
        if (x8_94 == 4)
            goto label_af0314
        
        x10_37 = *((x8_94 << 2) + 0x7ef268)
        x8_94 += 1
    while (x10_37 != x20_1)
    
    if (x8_94 u<= 4)
        if (x20_1 == 0xb01)
            goto label_af0260
        
        void* x8_96 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
        int64_t x9_39 = sx.q(*(x8_96 + 0x400))
        *(x8_96 + 0x404) = 8
        *(x8_96 + 0x400) = x9_39.d + 1
        *(x8_96 + (x9_39 << 2)) = 0xb01
        
        if (x20_1 != 0xb33)
            goto label_af0260
        
        goto label_af0290
else
label_af0260:
    void* x8_68 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
    int64_t x9_29 = sx.q(*(x8_68 + 0x400))
    *(x8_68 + 0x404) = 8
    *(x8_68 + 0x400) = x9_29.d + 1
    *(x8_68 + (x9_29 << 2)) = 0xb33
    
    if (x20_1 != 0xb35)
    label_af0290:
        void* x8_70 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
        int64_t x9_30 = sx.q(*(x8_70 + 0x400))
        *(x8_70 + 0x404) = 8
        *(x8_70 + 0x400) = x9_30.d + 1
        *(x8_70 + (x9_30 << 2)) = 0xb35
        
        if (x20_1 == 0xb37)
            goto label_af02f0
        
        goto label_af02c0
    
label_af02c0:
    void* x8_72 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
    int64_t x9_31 = sx.q(*(x8_72 + 0x400))
    *(x8_72 + 0x404) = 8
    *(x8_72 + 0x400) = x9_31.d + 1
    *(x8_72 + (x9_31 << 2)) = 0xb37
    
    if (x20_1 == 0xb39)
        *(arg3 + 0x810) += 1
    else
    label_af02f0:
        void* x8_74 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
        int64_t x9_32 = sx.q(*(x8_74 + 0x400))
        *(x8_74 + 0x404) = 8
        *(x8_74 + 0x400) = x9_32.d + 1
        *(x8_74 + (x9_32 << 2)) = 0xb39
        *(arg3 + 0x810) += 1

label_af0314:

if (x20_1 != 0xb02)
    int64_t x8_97 = 0
    int32_t x10_40
    
    do
        if (x8_97 == 4)
            goto label_af03e0
        
        x10_40 = *((x8_97 << 2) + 0x7ef27c)
        x8_97 += 1
    while (x10_40 != x20_1)
    
    if (x8_97 u<= 4)
        if (x20_1 == 0xb02)
            goto label_af032c
        
        void* x8_99 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
        int64_t x9_40 = sx.q(*(x8_99 + 0x400))
        *(x8_99 + 0x404) = 8
        *(x8_99 + 0x400) = x9_40.d + 1
        *(x8_99 + (x9_40 << 2)) = 0xb02
        
        if (x20_1 != 0xb32)
            goto label_af032c
        
        goto label_af035c
else
label_af032c:
    void* x8_78 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
    int64_t x9_33 = sx.q(*(x8_78 + 0x400))
    *(x8_78 + 0x404) = 8
    *(x8_78 + 0x400) = x9_33.d + 1
    *(x8_78 + (x9_33 << 2)) = 0xb32
    
    if (x20_1 != 0xb34)
    label_af035c:
        void* x8_80 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
        int64_t x9_34 = sx.q(*(x8_80 + 0x400))
        *(x8_80 + 0x404) = 8
        *(x8_80 + 0x400) = x9_34.d + 1
        *(x8_80 + (x9_34 << 2)) = 0xb34
        
        if (x20_1 == 0xb36)
            goto label_af03bc
        
        goto label_af038c
    
label_af038c:
    void* x8_82 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
    int64_t x9_35 = sx.q(*(x8_82 + 0x400))
    *(x8_82 + 0x404) = 8
    *(x8_82 + 0x400) = x9_35.d + 1
    *(x8_82 + (x9_35 << 2)) = 0xb36
    
    if (x20_1 == 0xb38)
        *(arg3 + 0x810) += 1
    else
    label_af03bc:
        void* x8_84 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
        int64_t x9_36 = sx.q(*(x8_84 + 0x400))
        *(x8_84 + 0x404) = 8
        *(x8_84 + 0x400) = x9_36.d + 1
        *(x8_84 + (x9_36 << 2)) = 0xb38
        *(arg3 + 0x810) += 1

label_af03e0:
uint64_t x8_87 = zx.q(x20_1 - 0xc04)

if (x8_87.d u> 0x26)
label_af090c:
    int64_t x8_132 = 0
    int32_t x10_60
    
    do
        if (x8_132 == 7)
            goto label_af0ae8
        
        x10_60 = *((x8_132 << 2) + &data_7aff20:4)
        x8_132 += 1
    while (x10_60 != x20_1)
    
    if (x8_132 u<= 7)
        if (x20_1 == 0xc2a)
            goto label_af0980
        
        void* x8_134 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
        int64_t x9_68 = sx.q(*(x8_134 + 0x400))
        *(x8_134 + 0x404) = 6
        *(x8_134 + 0x400) = x9_68.d + 1
        *(x8_134 + (x9_68 << 2)) = 0xc2a
        
        if (x20_1 == 0xc2b)
            goto label_af09b0
        
        goto label_af0980
else
    switch (x8_87)
        case 0
        label_af0404:
            uint64_t x8_88 = zx.q(*(arg1 + 0x1528))
            
            if (x8_88.d s< 1)
                goto label_af090c
            
            int64_t x9_93
            
            if (*(arg1 + 0x1a70) != 0xc05)
                x9_93 = 0
                void* __offset(DomGame, 0x1ad8) x10_88 = arg1 + 0x1ad8
                int32_t i_8
                
                do
                    if (x8_88 - 1 == x9_93)
                        goto label_af0450
                    
                    i_8 = *x10_88
                    x10_88 += 0x68
                    x9_93 += 1
                while (i_8 != 0xc05)
            
            if (*(arg1 + 0x1a70) == 0xc05 || x9_93 u< x8_88)
                void* x8_90 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x9_38 = sx.q(*(x8_90 + 0x400))
                *(x8_90 + 0x404) = 7
                *(x8_90 + 0x400) = x9_38.d + 1
                *(x8_90 + (x9_38 << 2)) = 0xc05
                *(arg3 + 0x810) += 1
            
        label_af0450:
            uint64_t x8_93 = zx.q(x20_1 - 0xc05)
            
            if (x8_93.d u> 0x25)
                goto label_af090c
            
            switch (x8_93)
                case 0
                    goto label_af0714
                case 1, 2, 3, 4, 5, 8, 9, 0xa, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 
                        0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 
                        0x22, 0x23, 0x24
                    goto label_af090c
                case 6
                    goto label_af0784
                case 7
                    goto label_af07f4
                case 0xb
                    goto label_af0858
                case 0xc
                    goto label_af08b4
                case 0x25
                    goto label_af0980
        case 1
        label_af0714:
            uint64_t x8_105 = zx.q(*(arg1 + 0x1528))
            
            if (x8_105.d s< 1)
                goto label_af090c
            
            int64_t x9_92
            
            if (*(arg1 + 0x1a70) != 0xc04)
                x9_92 = 0
                void* __offset(DomGame, 0x1ad8) x10_87 = arg1 + 0x1ad8
                int32_t i_9
                
                do
                    if (x8_105 - 1 == x9_92)
                        goto label_af0760
                    
                    i_9 = *x10_87
                    x10_87 += 0x68
                    x9_92 += 1
                while (i_9 != 0xc04)
            
            if (*(arg1 + 0x1a70) == 0xc04 || x9_92 u< x8_105)
                void* x8_107 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x9_59 = sx.q(*(x8_107 + 0x400))
                *(x8_107 + 0x404) = 7
                *(x8_107 + 0x400) = x9_59.d + 1
                *(x8_107 + (x9_59 << 2)) = 0xc04
                *(arg3 + 0x810) += 1
            
        label_af0760:
            uint64_t x8_110 = zx.q(x20_1 - 0xc0b)
            
            if (x8_110.d u> 0x1f)
                goto label_af090c
            
            switch (x8_110)
                case 0
                    goto label_af0784
                case 1
                    goto label_af07f4
                case 2, 3, 4, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 
                        0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e
                    goto label_af090c
                case 5
                    goto label_af0858
                case 6
                    goto label_af08b4
                case 0x1f
                    goto label_af0980
        case 2
            uint64_t x8_100 = zx.q(*(arg1 + 0x1528))
            
            if (x8_100.d s>= 1)
                int64_t x9_100
                
                if (*(arg1 + 0x1a70) != 0xc07)
                    x9_100 = 0
                    void* __offset(DomGame, 0x1ad8) x10_98 = arg1 + 0x1ad8
                    int32_t i_10
                    
                    do
                        if (x8_100 - 1 == x9_100)
                            goto label_af090c
                        
                        i_10 = *x10_98
                        x10_98 += 0x68
                        x9_100 += 1
                    while (i_10 != 0xc07)
                
                if (*(arg1 + 0x1a70) == 0xc07 || x9_100 u< x8_100)
                    void* x8_102 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                    int64_t x9_42 = sx.q(*(x8_102 + 0x400))
                    *(x8_102 + 0x404) = 7
                    *(x8_102 + 0x400) = x9_42.d + 1
                    *(x8_102 + (x9_42 << 2)) = 0xc07
                    *(arg3 + 0x810) += 1
            
            goto label_af090c
        case 3
            uint64_t x9_43 = zx.q(*(arg1 + 0x1528))
            
            if (x9_43.d s< 1)
                goto label_af090c
            
            int64_t x10_99
            
            if (*(arg1 + 0x1a70) != 0xc06)
                x10_99 = 0
                void* __offset(DomGame, 0x1ad8) x11_52 = arg1 + 0x1ad8
                int32_t i_11
                
                do
                    if (x9_43 - 1 == x10_99)
                        goto label_af061c
                    
                    i_11 = *x11_52
                    x11_52 += 0x68
                    x10_99 += 1
                while (i_11 != 0xc06)
            
            if (*(arg1 + 0x1a70) == 0xc06 || x10_99 u< x9_43)
                void* x9_45 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x10_44 = sx.q(*(x9_45 + 0x400))
                *(x9_45 + 0x404) = 7
                *(x9_45 + 0x400) = x10_44.d + 1
                *(x9_45 + (x10_44 << 2)) = 0xc06
                *(arg3 + 0x810) += 1
            
        label_af061c:
            
            if (x8_87.d u> 0x26)
                goto label_af090c
            
            switch (x8_87)
                case 0
                    goto label_af0404
                case 1
                    goto label_af0714
                case 2, 3, 6, 9, 0xa, 0xb, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 
                        0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 
                        0x23, 0x24, 0x25
                    goto label_af090c
                case 4
                    goto label_af063c
                case 5
                    goto label_af06a8
                case 7
                    goto label_af0784
                case 8
                    goto label_af07f4
                case 0xc
                    goto label_af0858
                case 0xd
                    goto label_af08b4
                case 0x26
                    goto label_af0980
        case 4
        label_af063c:
            uint64_t x9_48 = zx.q(*(arg1 + 0x1528))
            
            if (x9_48.d s< 1)
                goto label_af090c
            
            int64_t x10_94
            
            if (*(arg1 + 0x1a70) != 0xc09)
                x10_94 = 0
                void* __offset(DomGame, 0x1ad8) x11_48 = arg1 + 0x1ad8
                int32_t i_12
                
                do
                    if (x9_48 - 1 == x10_94)
                        goto label_af0688
                    
                    i_12 = *x11_48
                    x11_48 += 0x68
                    x10_94 += 1
                while (i_12 != 0xc09)
            
            if (*(arg1 + 0x1a70) == 0xc09 || x10_94 u< x9_48)
                void* x9_50 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x10_47 = sx.q(*(x9_50 + 0x400))
                *(x9_50 + 0x404) = 7
                *(x9_50 + 0x400) = x10_47.d + 1
                *(x9_50 + (x10_47 << 2)) = 0xc09
                *(arg3 + 0x810) += 1
            
        label_af0688:
            
            if (x8_87.d u> 0x26)
                goto label_af090c
            
            switch (x8_87)
                case 0
                    goto label_af0404
                case 1
                    goto label_af0714
                case 2, 3, 4, 6, 9, 0xa, 0xb, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 
                        0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 
                        0x23, 0x24, 0x25
                    goto label_af090c
                case 5
                    goto label_af06a8
                case 7
                    goto label_af0784
                case 8
                    goto label_af07f4
                case 0xc
                    goto label_af0858
                case 0xd
                    goto label_af08b4
                case 0x26
                    goto label_af0980
        case 5
        label_af06a8:
            uint64_t x9_53 = zx.q(*(arg1 + 0x1528))
            
            if (x9_53.d s< 1)
                goto label_af090c
            
            int64_t x10_90
            
            if (*(arg1 + 0x1a70) != 0xc08)
                x10_90 = 0
                void* __offset(DomGame, 0x1ad8) x11_44 = arg1 + 0x1ad8
                int32_t i_13
                
                do
                    if (x9_53 - 1 == x10_90)
                        goto label_af06f4
                    
                    i_13 = *x11_44
                    x11_44 += 0x68
                    x10_90 += 1
                while (i_13 != 0xc08)
            
            if (*(arg1 + 0x1a70) == 0xc08 || x10_90 u< x9_53)
                void* x9_55 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x10_50 = sx.q(*(x9_55 + 0x400))
                *(x9_55 + 0x404) = 7
                *(x9_55 + 0x400) = x10_50.d + 1
                *(x9_55 + (x10_50 << 2)) = 0xc08
                *(arg3 + 0x810) += 1
            
        label_af06f4:
            
            if (x8_87.d u> 0x26)
                goto label_af090c
            
            switch (x8_87)
                case 0
                    goto label_af0404
                case 1
                    goto label_af0714
                case 2, 3, 4, 5, 6, 9, 0xa, 0xb, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 
                        0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 
                        0x22, 0x23, 0x24, 0x25
                    goto label_af090c
                case 7
                    goto label_af0784
                case 8
                    goto label_af07f4
                case 0xc
                    goto label_af0858
                case 0xd
                    goto label_af08b4
                case 0x26
                    goto label_af0980
        case 6, 9, 0xa, 0xb, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 
                0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25
            goto label_af090c
        case 7
        label_af0784:
            uint64_t x8_111 = zx.q(*(arg1 + 0x1528))
            
            if (x8_111.d s< 1)
                goto label_af090c
            
            int64_t x9_91
            
            if (*(arg1 + 0x1a70) != 0xc0c)
                x9_91 = 0
                void* __offset(DomGame, 0x1ad8) x10_86 = arg1 + 0x1ad8
                int32_t i_14
                
                do
                    if (x8_111 - 1 == x9_91)
                        goto label_af07d0
                    
                    i_14 = *x10_86
                    x10_86 += 0x68
                    x9_91 += 1
                while (i_14 != 0xc0c)
            
            if (*(arg1 + 0x1a70) == 0xc0c || x9_91 u< x8_111)
                void* x8_113 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x9_61 = sx.q(*(x8_113 + 0x400))
                *(x8_113 + 0x404) = 7
                *(x8_113 + 0x400) = x9_61.d + 1
                *(x8_113 + (x9_61 << 2)) = 0xc0c
                *(arg3 + 0x810) += 1
            
        label_af07d0:
            uint64_t x8_116 = zx.q(x20_1 - 0xc0c)
            
            if (x8_116.d u> 0x1e)
                goto label_af090c
            
            switch (x8_116)
                case 0
                    goto label_af07f4
                case 1, 2, 3, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 
                        0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d
                    goto label_af090c
                case 4
                    goto label_af0858
                case 5
                    goto label_af08b4
                case 0x1e
                    goto label_af0980
        case 8
        label_af07f4:
            uint64_t x8_117 = zx.q(*(arg1 + 0x1528))
            
            if (x8_117.d s< 1)
                goto label_af090c
            
            int64_t x9_90
            
            if (*(arg1 + 0x1a70) != 0xc0b)
                x9_90 = 0
                void* __offset(DomGame, 0x1ad8) x10_84 = arg1 + 0x1ad8
                int32_t i_15
                
                do
                    if (x8_117 - 1 == x9_90)
                        goto label_af0840
                    
                    i_15 = *x10_84
                    x10_84 += 0x68
                    x9_90 += 1
                while (i_15 != 0xc0b)
            
            if (*(arg1 + 0x1a70) == 0xc0b || x9_90 u< x8_117)
                void* x8_119 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x9_63 = sx.q(*(x8_119 + 0x400))
                *(x8_119 + 0x404) = 7
                *(x8_119 + 0x400) = x9_63.d + 1
                *(x8_119 + (x9_63 << 2)) = 0xc0b
                *(arg3 + 0x810) += 1
            
        label_af0840:
            
            if (x20_1 == 0xc2a)
                goto label_af0980
            
            if (x20_1 == 0xc11)
                goto label_af08b4
            
            if (x20_1 != 0xc10)
                goto label_af090c
            
            goto label_af0858
        case 0xc
        label_af0858:
            uint64_t x8_122 = zx.q(*(arg1 + 0x1528))
            
            if (x8_122.d s< 1)
                goto label_af090c
            
            int64_t x9_88
            
            if (*(arg1 + 0x1a70) != 0xc11)
                x9_88 = 0
                void* __offset(DomGame, 0x1ad8) x10_82 = arg1 + 0x1ad8
                int32_t i_16
                
                do
                    if (x8_122 - 1 == x9_88)
                        goto label_af08a4
                    
                    i_16 = *x10_82
                    x10_82 += 0x68
                    x9_88 += 1
                while (i_16 != 0xc11)
            
            if (*(arg1 + 0x1a70) == 0xc11 || x9_88 u< x8_122)
                void* x8_124 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x9_65 = sx.q(*(x8_124 + 0x400))
                *(x8_124 + 0x404) = 7
                *(x8_124 + 0x400) = x9_65.d + 1
                *(x8_124 + (x9_65 << 2)) = 0xc11
                *(arg3 + 0x810) += 1
            
        label_af08a4:
            
            if (x20_1 == 0xc2a)
                goto label_af0980
            
            if (x20_1 != 0xc11)
                goto label_af090c
            
            goto label_af08b4
        case 0xd
        label_af08b4:
            uint64_t x8_127 = zx.q(*(arg1 + 0x1528))
            
            if (x8_127.d s< 1)
                goto label_af090c
            
            int64_t x9_84
            
            if (*(arg1 + 0x1a70) != 0xc10)
                x9_84 = 0
                void* __offset(DomGame, 0x1ad8) x10_78 = arg1 + 0x1ad8
                int32_t i_17
                
                do
                    if (x8_127 - 1 == x9_84)
                        goto label_af0900
                    
                    i_17 = *x10_78
                    x10_78 += 0x68
                    x9_84 += 1
                while (i_17 != 0xc10)
            
            if (*(arg1 + 0x1a70) == 0xc10 || x9_84 u< x8_127)
                void* x8_129 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x9_67 = sx.q(*(x8_129 + 0x400))
                *(x8_129 + 0x404) = 7
                *(x8_129 + 0x400) = x9_67.d + 1
                *(x8_129 + (x9_67 << 2)) = 0xc10
                *(arg3 + 0x810) += 1
            
        label_af0900:
            
            if (x20_1 == 0xc2a)
                goto label_af0980
            
            goto label_af090c
        case 0x26
        label_af0980:
            void* x8_136 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
            int64_t x9_69 = sx.q(*(x8_136 + 0x400))
            *(x8_136 + 0x404) = 6
            *(x8_136 + 0x400) = x9_69.d + 1
            *(x8_136 + (x9_69 << 2)) = 0xc2b
            
            if (x20_1 != 0xc2c)
            label_af09b0:
                void* x8_138 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x9_70 = sx.q(*(x8_138 + 0x400))
                *(x8_138 + 0x404) = 6
                *(x8_138 + 0x400) = x9_70.d + 1
                *(x8_138 + (x9_70 << 2)) = 0xc2c
                
                if (x20_1 == 0xc2d)
                    goto label_af0a10
                
                goto label_af09e0
            
        label_af09e0:
            void* x8_140 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
            int64_t x9_71 = sx.q(*(x8_140 + 0x400))
            *(x8_140 + 0x404) = 6
            *(x8_140 + 0x400) = x9_71.d + 1
            *(x8_140 + (x9_71 << 2)) = 0xc2d
            
            if (x20_1 != 0xc2e)
            label_af0a10:
                void* x8_142 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x9_72 = sx.q(*(x8_142 + 0x400))
                *(x8_142 + 0x404) = 6
                *(x8_142 + 0x400) = x9_72.d + 1
                *(x8_142 + (x9_72 << 2)) = 0xc2e
                
                if (x20_1 == 0xc2f)
                    goto label_af0a70
                
                goto label_af0a40
            
        label_af0a40:
            void* x8_144 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
            int64_t x9_73 = sx.q(*(x8_144 + 0x400))
            *(x8_144 + 0x404) = 6
            *(x8_144 + 0x400) = x9_73.d + 1
            *(x8_144 + (x9_73 << 2)) = 0xc2f
            
            if (x20_1 == 0xc30)
            label_af0aa0:
                void* x8_148 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x9_75 = sx.q(*(x8_148 + 0x400))
                *(x8_148 + 0x404) = 6
                *(x8_148 + 0x400) = x9_75.d + 1
                *(x8_148 + (x9_75 << 2)) = 0xc31
                *(arg3 + 0x810) += 1
            else
            label_af0a70:
                void* x8_146 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x9_74 = sx.q(*(x8_146 + 0x400))
                *(x8_146 + 0x404) = 6
                *(x8_146 + 0x400) = x9_74.d + 1
                *(x8_146 + (x9_74 << 2)) = 0xc30
                
                if (x20_1 != 0xc31)
                    goto label_af0aa0
                
                *(arg3 + 0x810) += 1

label_af0ae8:
TestSet(arg1, zx.q(x20_1), 0xe00, 0x7ef2bc, 2, 0, 0xb, arg3)
uint64_t x8_151 = zx.q(x20_1 - 0xe07)
int32_t x22
int32_t x25
int32_t x26
int32_t x27
int64_t x8_153
int32_t x10_70
int32_t x11_26

if (x8_151.d u> 0x16)
    uint64_t x8_154 = zx.q(x20_1 - 0xd3f)
    
    if (x8_154.d u> 0xd)
        goto label_af13f4
    
    switch (x8_154)
        case 0
        label_af1330:
            uint64_t x8_196 = zx.q(*(arg1 + 0x1528))
            
            if (x8_196.d s< 1)
                goto label_af1470
            
            int64_t x9_145
            
            if (*(arg1 + 0x1a70) != 0xd4b)
                x9_145 = 0
                void* __offset(DomGame, 0x1ad8) x10_124 = arg1 + 0x1ad8
                int32_t i_18
                
                do
                    if (x8_196 - 1 == x9_145)
                        goto label_af137c
                    
                    i_18 = *x10_124
                    x10_124 += 0x68
                    x9_145 += 1
                while (i_18 != 0xd4b)
            
            if (*(arg1 + 0x1a70) == 0xd4b || x9_145 u< x8_196)
                void* x8_198 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x9_109 = sx.q(*(x8_198 + 0x400))
                *(x8_198 + 0x404) = 0xc
                *(x8_198 + 0x400) = x9_109.d + 1
                *(x8_198 + (x9_109 << 2)) = 0xd4b
                *(arg3 + 0x810) += 1
            
        label_af137c:
            
            if (x20_1 != 0xd4b)
                goto label_af13f4
            
            goto label_af1384
        case 1
        label_af0b60:
            uint64_t x8_155 = zx.q(*(arg1 + 0x1528))
            
            if (x8_155.d s< 1)
                goto label_af1470
            
            int64_t x9_89
            
            if (*(arg1 + 0x1a70) != 0xd4c)
                x9_89 = 0
                void* __offset(DomGame, 0x1ad8) x10_83 = arg1 + 0x1ad8
                int32_t i_19
                
                do
                    if (x8_155 - 1 == x9_89)
                        goto label_af0bac
                    
                    i_19 = *x10_83
                    x10_83 += 0x68
                    x9_89 += 1
                while (i_19 != 0xd4c)
            
            if (*(arg1 + 0x1a70) == 0xd4c || x9_89 u< x8_155)
                void* x8_157 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x9_78 = sx.q(*(x8_157 + 0x400))
                *(x8_157 + 0x404) = 0xc
                *(x8_157 + 0x400) = x9_78.d + 1
                *(x8_157 + (x9_78 << 2)) = 0xd4c
                *(arg3 + 0x810) += 1
            
        label_af0bac:
            
            if (x20_1 == 0xd3f)
                goto label_af1330
            
            if (x20_1 == 0xd4b)
                goto label_af1384
            
            if (x20_1 != 0xd4c)
                goto label_af13f4
            
            goto label_af12d4
        case 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb
            goto label_af13f4
        case 0xc
        label_af1384:
            uint64_t x8_201 = zx.q(*(arg1 + 0x1528))
            
            if (x8_201.d s< 1)
                goto label_af1470
            
            int64_t x9_139
            
            if (*(arg1 + 0x1a70) != 0xd3f)
                x9_139 = 0
                void* __offset(DomGame, 0x1ad8) x10_118 = arg1 + 0x1ad8
                int32_t i_20
                
                do
                    if (x8_201 - 1 == x9_139)
                        goto label_af13f4
                    
                    i_20 = *x10_118
                    x10_118 += 0x68
                    x9_139 += 1
                while (i_20 != 0xd3f)
            
            if (*(arg1 + 0x1a70) != 0xd3f && x9_139 u>= x8_201)
                goto label_af13f4
            
            x8_153 = sx.q(*(arg3 + 0x810))
            x10_70 = 0xc
            x11_26 = 0xd3f
            goto label_af13ac
        case 0xd
        label_af12d4:
            uint64_t x8_191 = zx.q(*(arg1 + 0x1528))
            
            if (x8_191.d s< 1)
                goto label_af1470
            
            int64_t x9_236
            
            if (*(arg1 + 0x1a70) != 0xd40)
                x9_236 = 0
                void* __offset(DomGame, 0x1ad8) x10_193 = arg1 + 0x1ad8
                int32_t i_21
                
                do
                    if (x8_191 - 1 == x9_236)
                        goto label_af1320
                    
                    i_21 = *x10_193
                    x10_193 += 0x68
                    x9_236 += 1
                while (i_21 != 0xd40)
            
            if (*(arg1 + 0x1a70) == 0xd40 || x9_236 u< x8_191)
                void* x8_193 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x9_107 = sx.q(*(x8_193 + 0x400))
                *(x8_193 + 0x404) = 0xc
                *(x8_193 + 0x400) = x9_107.d + 1
                *(x8_193 + (x9_107 << 2)) = 0xd40
                *(arg3 + 0x810) += 1
            
        label_af1320:
            
            if (x20_1 == 0xd4b)
                goto label_af1384
            
            if (x20_1 != 0xd3f)
                goto label_af13f4
            
            goto label_af1330
else
    switch (x8_151)
        case 0
            uint64_t x8_152 = zx.q(*(arg1 + 0x1528))
            
            if (x8_152.d s< 1)
            label_af1470:
                TestSet(arg1, zx.q(x20_1), 0xd46, 0x7ef2c4, 2, 0, 0xc, arg3)
            label_af1474:
                int64_t x8_209
                int32_t x10_108
                int32_t x11_58
                
                if (x20_1 == 0xd0b)
                    uint64_t x8_210 = zx.q(*(arg1 + 0x1528))
                    
                    if (x8_210.d s< 1)
                        goto label_af1810
                    
                    int64_t x9_144
                    
                    if (*(arg1 + 0x1a70) != 0xd22)
                        x9_144 = 0
                        void* __offset(DomGame, 0x1ad8) x10_123 = arg1 + 0x1ad8
                        int32_t i_22
                        
                        do
                            if (x8_210 - 1 == x9_144)
                                goto label_af1504
                            
                            i_22 = *x10_123
                            x10_123 += 0x68
                            x9_144 += 1
                        while (i_22 != 0xd22)
                    
                    if (*(arg1 + 0x1a70) != 0xd22 && x9_144 u>= x8_210)
                        goto label_af1504
                    
                    x8_209 = sx.q(*(arg3 + 0x810))
                    x10_108 = 1
                    x11_58 = 0xd22
                label_af14e0:
                    void* x8_211 = arg3 + x8_209 * 0x408
                    int64_t x9_116 = sx.q(*(x8_211 + 0x400))
                    *(x8_211 + 0x404) = x10_108
                    *(x8_211 + 0x400) = x9_116.d + 1
                    *(x8_211 + (x9_116 << 2)) = x11_58
                    *(arg3 + 0x810) += 1
                label_af1504:
                    
                    if (x20_1 != 0xd22)
                        goto label_af1564
                    
                    goto label_af150c
                
                if (x20_1 == 0xd22)
                label_af150c:
                    uint64_t x8_214 = zx.q(*(arg1 + 0x1528))
                    
                    if (x8_214.d s>= 1)
                        int64_t x9_121
                        
                        if (*(arg1 + 0x1a70) != 0xd0b)
                            x9_121 = 0
                            void* __offset(DomGame, 0x1ad8) x10_111 = arg1 + 0x1ad8
                            int32_t i_23
                            
                            do
                                if (x8_214 - 1 == x9_121)
                                    goto label_af1628
                                
                                i_23 = *x10_111
                                x10_111 += 0x68
                                x9_121 += 1
                            while (i_23 != 0xd0b)
                        
                        if (*(arg1 + 0x1a70) != 0xd0b && x9_121 u>= x8_214)
                        label_af1628:
                            x22 = 1
                            
                            if (x20_1 != 0xd21)
                                goto label_af1570
                            
                            goto label_af1634
                        
                        x22 = 1
                        void* x8_216 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                        int64_t x9_118 = sx.q(*(x8_216 + 0x400))
                        *(x8_216 + 0x404) = 1
                        *(x8_216 + 0x400) = x9_118.d + 1
                        *(x8_216 + (x9_118 << 2)) = 0xd0b
                        *(arg3 + 0x810) += 1
                        
                        if (x20_1 != 0xd21)
                            goto label_af1570
                        
                        goto label_af1634
                    
                    x27 = 0
                    x26 = 0
                    x25 = 0
                    x22 = 1
                else
                    if (x20_1 == 0xd4a)
                        uint64_t x8_208 = zx.q(*(arg1 + 0x1528))
                        
                        if (x8_208.d s< 1)
                            goto label_af1810
                        
                        int64_t x9_143
                        
                        if (*(arg1 + 0x1a70) != 0xd07)
                            x9_143 = 0
                            void* __offset(DomGame, 0x1ad8) x10_122 = arg1 + 0x1ad8
                            int32_t i_24
                            
                            do
                                if (x8_208 - 1 == x9_143)
                                    goto label_af1504
                                
                                i_24 = *x10_122
                                x10_122 += 0x68
                                x9_143 += 1
                            while (i_24 != 0xd07)
                        
                        if (*(arg1 + 0x1a70) != 0xd07 && x9_143 u>= x8_208)
                            goto label_af1504
                        
                        x8_209 = sx.q(*(arg3 + 0x810))
                        x10_108 = 0xc
                        x11_58 = 0xd07
                        goto label_af14e0
                    
                label_af1564:
                    x22 = 0
                    uint64_t x8_224
                    
                    if (x20_1 == 0xd21)
                    label_af1634:
                        uint64_t x8_225 = zx.q(*(arg1 + 0x1528))
                        
                        if (x8_225.d s>= 1)
                            int64_t x9_140
                            
                            if (*(arg1 + 0x1a70) != 0xd0e)
                                x9_140 = 0
                                void* __offset(DomGame, 0x1ad8) x10_119 = arg1 + 0x1ad8
                                int32_t i_25
                                
                                do
                                    if (x8_225 - 1 == x9_140)
                                        goto label_af18e8
                                    
                                    i_25 = *x10_119
                                    x10_119 += 0x68
                                    x9_140 += 1
                                while (i_25 != 0xd0e)
                            
                            if (*(arg1 + 0x1a70) != 0xd0e && x9_140 u>= x8_225)
                            label_af18e8:
                                x25 = 1
                                x8_224 = zx.q(x20_1 - 0xd09)
                                x26 = 0
                                
                                if (x8_224.d u> 0x20)
                                    goto label_af1c04
                                
                                goto label_af1908
                            
                            x25 = 1
                            void* x8_227 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                            int64_t x9_123 = sx.q(*(x8_227 + 0x400))
                            *(x8_227 + 0x404) = 1
                            *(x8_227 + 0x400) = x9_123.d + 1
                            *(x8_227 + (x9_123 << 2)) = 0xd0e
                            *(arg3 + 0x810) += 1
                            x8_224 = zx.q(x20_1 - 0xd09)
                            x26 = 0
                            
                            if (x8_224.d u<= 0x20)
                                goto label_af1908
                            
                            goto label_af1c04
                        
                        x27 = 0
                        x26 = 0
                        x25 = 1
                    else
                    label_af1570:
                        
                        if (x20_1 != 0xd0e)
                        label_af15cc:
                            x25 = 0
                            x8_224 = zx.q(x20_1 - 0xd09)
                            x26 = 0
                            
                            if (x8_224.d u<= 0x20)
                            label_af1908:
                                
                                switch (x8_224)
                                    case 0
                                    label_af1b68:
                                        uint64_t x8_259 = zx.q(*(arg1 + 0x1528))
                                        
                                        if (x8_259.d s>= 1)
                                            int64_t x9_245
                                            
                                            if (*(arg1 + 0x1a70) != 0xd29)
                                                x9_245 = 0
                                                void* __offset(DomGame, 0x1ad8) x10_202 =
                                                    arg1 + 0x1ad8
                                                int32_t i_26
                                                
                                                do
                                                    if (x8_259 - 1 == x9_245)
                                                        goto label_af1bb0
                                                    
                                                    i_26 = *x10_202
                                                    x10_202 += 0x68
                                                    x9_245 += 1
                                                while (i_26 != 0xd29)
                                            
                                            if (*(arg1 + 0x1a70) != 0xd29 && x9_245 u>= x8_259)
                                                goto label_af1bb0
                                            
                                            void* x8_261 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                                            int64_t x9_157 = sx.q(*(x8_261 + 0x400))
                                            *(x8_261 + 0x404) = 0
                                            *(x8_261 + 0x400) = x9_157.d + 1
                                            *(x8_261 + (x9_157 << 2)) = 0xd29
                                            goto label_af1bac
                                        
                                        x27 = 0
                                        x26 = 0
                                    case 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 
                                            0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 
                                            0x1c, 0x1e, 0x1f
                                        goto label_af1c04
                                    case 0xa
                                        uint64_t x8_246 = zx.q(*(arg1 + 0x1528))
                                        
                                        if (x8_246.d s>= 1)
                                            int64_t x9_251
                                            
                                            if (*(arg1 + 0x1a70) != 0xd24)
                                                x9_251 = 0
                                                void* __offset(DomGame, 0x1ad8) x10_208 =
                                                    arg1 + 0x1ad8
                                                int32_t i_27
                                                
                                                do
                                                    if (x8_246 - 1 == x9_251)
                                                        goto label_af1bb0
                                                    
                                                    i_27 = *x10_208
                                                    x10_208 += 0x68
                                                    x9_251 += 1
                                                while (i_27 != 0xd24)
                                            
                                            if (*(arg1 + 0x1a70) != 0xd24 && x9_251 u>= x8_246)
                                                goto label_af1bb0
                                            
                                            void* x8_248 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                                            int64_t x9_142 = sx.q(*(x8_248 + 0x400))
                                            *(x8_248 + 0x404) = 1
                                            *(x8_248 + 0x400) = x9_142.d + 1
                                            *(x8_248 + (x9_142 << 2)) = 0xd24
                                        label_af1bac:
                                            *(arg3 + 0x810) += 1
                                        label_af1bb0:
                                            
                                            if (x20_1 == 0xd29)
                                                goto label_af1bb8
                                            
                                        label_af1c1c:
                                            x26 = 0
                                            
                                            if (x20_1 == 0xd2b)
                                                goto label_af1c80
                                            
                                            goto label_af1c28
                                        
                                        x27 = 0
                                        x26 = 0
                                    case 0x11
                                    label_af1aa8:
                                        uint64_t x8_249 = zx.q(*(arg1 + 0x1528))
                                        
                                        if (x8_249.d s>= 1)
                                            int64_t x9_250
                                            
                                            if (*(arg1 + 0x1a70) != 0xd26)
                                                x9_250 = 0
                                                void* __offset(DomGame, 0x1ad8) x10_207 =
                                                    arg1 + 0x1ad8
                                                int32_t i_28
                                                
                                                do
                                                    if (x8_249 - 1 == x9_250)
                                                        goto label_af1af4
                                                    
                                                    i_28 = *x10_207
                                                    x10_207 += 0x68
                                                    x9_250 += 1
                                                while (i_28 != 0xd26)
                                            
                                            if (*(arg1 + 0x1a70) == 0xd26 || x9_250 u< x8_249)
                                                void* x8_251 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                                                int64_t x9_153 = sx.q(*(x8_251 + 0x400))
                                                *(x8_251 + 0x404) = 1
                                                *(x8_251 + 0x400) = x9_153.d + 1
                                                *(x8_251 + (x9_153 << 2)) = 0xd26
                                                *(arg3 + 0x810) += 1
                                            
                                        label_af1af4:
                                            
                                            if (x20_1 == 0xd09)
                                                goto label_af1b68
                                            
                                            if (x20_1 == 0xd29)
                                                goto label_af1bb8
                                            
                                            if (x20_1 != 0xd26)
                                                goto label_af1c1c
                                            
                                            goto label_af1b0c
                                        
                                        x27 = 0
                                        x26 = 0
                                    case 0x1b
                                        uint64_t x9_147 = zx.q(*(arg1 + 0x1528))
                                        
                                        if (x9_147.d s< 1)
                                            x27 = 0
                                            x26 = 0
                                        else
                                            int64_t x10_209
                                            
                                            if (*(arg1 + 0x1a70) != 0xd13)
                                                x10_209 = 0
                                                void* __offset(DomGame, 0x1ad8) x11_127 =
                                                    arg1 + 0x1ad8
                                                int32_t i_29
                                                
                                                do
                                                    if (x9_147 - 1 == x10_209)
                                                        goto label_af1a88
                                                    
                                                    i_29 = *x11_127
                                                    x11_127 += 0x68
                                                    x10_209 += 1
                                                while (i_29 != 0xd13)
                                            
                                            if (*(arg1 + 0x1a70) == 0xd13 || x10_209 u< x9_147)
                                                void* x9_149 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                                                int64_t x10_127 = sx.q(*(x9_149 + 0x400))
                                                *(x9_149 + 0x404) = 1
                                                *(x9_149 + 0x400) = x10_127.d + 1
                                                *(x9_149 + (x10_127 << 2)) = 0xd13
                                                *(arg3 + 0x810) += 1
                                            
                                        label_af1a88:
                                            x26 = 0
                                            
                                            if (x8_224.d u> 0x20)
                                                goto label_af1c04
                                            
                                            switch (x8_224)
                                                case 0
                                                    goto label_af1b68
                                                case 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 
                                                        0xe, 0xf, 0x10, 0x12, 0x13, 0x14, 0x15, 
                                                        0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 
                                                        0x1e, 0x1f
                                                    goto label_af1c04
                                                case 0x11
                                                    goto label_af1aa8
                                                case 0x1d
                                                    goto label_af1b0c
                                                case 0x20
                                                    goto label_af1bb8
                                    case 0x1d
                                    label_af1b0c:
                                        uint64_t x8_254 = zx.q(*(arg1 + 0x1528))
                                        
                                        if (x8_254.d s>= 1)
                                            int64_t x9_248
                                            
                                            if (*(arg1 + 0x1a70) != 0xd1a)
                                                x9_248 = 0
                                                void* __offset(DomGame, 0x1ad8) x10_205 =
                                                    arg1 + 0x1ad8
                                                int32_t i_30
                                                
                                                do
                                                    if (x8_254 - 1 == x9_248)
                                                        goto label_af1b58
                                                    
                                                    i_30 = *x10_205
                                                    x10_205 += 0x68
                                                    x9_248 += 1
                                                while (i_30 != 0xd1a)
                                            
                                            if (*(arg1 + 0x1a70) == 0xd1a || x9_248 u< x8_254)
                                                void* x8_256 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                                                int64_t x9_155 = sx.q(*(x8_256 + 0x400))
                                                *(x8_256 + 0x404) = 1
                                                *(x8_256 + 0x400) = x9_155.d + 1
                                                *(x8_256 + (x9_155 << 2)) = 0xd1a
                                                *(arg3 + 0x810) += 1
                                            
                                        label_af1b58:
                                            
                                            if (x20_1 == 0xd29)
                                                goto label_af1bb8
                                            
                                            if (x20_1 != 0xd09)
                                                goto label_af1c1c
                                            
                                            goto label_af1b68
                                        
                                        x27 = 0
                                        x26 = 0
                                    case 0x20
                                    label_af1bb8:
                                        uint64_t x8_264 = zx.q(*(arg1 + 0x1528))
                                        
                                        if (x8_264.d s>= 1)
                                            int64_t x9_240
                                            
                                            if (*(arg1 + 0x1a70) != 0xd09)
                                                x9_240 = 0
                                                void* __offset(DomGame, 0x1ad8) x10_197 =
                                                    arg1 + 0x1ad8
                                                int32_t i_31
                                                
                                                do
                                                    if (x8_264 - 1 == x9_240)
                                                        goto label_af1c00
                                                    
                                                    i_31 = *x10_197
                                                    x10_197 += 0x68
                                                    x9_240 += 1
                                                while (i_31 != 0xd09)
                                            
                                            if (*(arg1 + 0x1a70) == 0xd09 || x9_240 u< x8_264)
                                                void* x8_266 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                                                int64_t x9_159 = sx.q(*(x8_266 + 0x400))
                                                *(x8_266 + 0x404) = 0
                                                *(x8_266 + 0x400) = x9_159.d + 1
                                                *(x8_266 + (x9_159 << 2)) = 0xd09
                                                *(arg3 + 0x810) += 1
                                            
                                        label_af1c00:
                                            x26 = 1
                                            goto label_af1c04
                                        
                                        x27 = 0
                                        x26 = 1
                            else
                            label_af1c04:
                                
                                if (x20_1 != 0xd2b)
                                label_af1c28:
                                    
                                    if (x20_1 != 0xd10)
                                        x27 = 0
                                    else
                                        uint64_t x8_269 = zx.q(*(arg1 + 0x1528))
                                        
                                        if (x8_269.d s< 1)
                                            x27 = 0
                                        else
                                            int64_t x9_249
                                            
                                            if (*(arg1 + 0x1a70) != 0xd2b)
                                                x9_249 = 0
                                                void* __offset(DomGame, 0x1ad8) x10_206 =
                                                    arg1 + 0x1ad8
                                                int32_t i_32
                                                
                                                do
                                                    if (x8_269 - 1 == x9_249)
                                                        goto label_af1c78
                                                    
                                                    i_32 = *x10_206
                                                    x10_206 += 0x68
                                                    x9_249 += 1
                                                while (i_32 != 0xd2b)
                                            
                                            if (*(arg1 + 0x1a70) == 0xd2b || x9_249 u< x8_269)
                                                void* x8_271 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                                                int64_t x9_161 = sx.q(*(x8_271 + 0x400))
                                                *(x8_271 + 0x404) = 0
                                                *(x8_271 + 0x400) = x9_161.d + 1
                                                *(x8_271 + (x9_161 << 2)) = 0xd2b
                                                *(arg3 + 0x810) += 1
                                            
                                        label_af1c78:
                                            
                                            if (x20_1 == 0xd2b)
                                                goto label_af1c80
                                            
                                            x27 = 0
                                else
                                label_af1c80:
                                    uint64_t x8_274 = zx.q(*(arg1 + 0x1528))
                                    
                                    if (x8_274.d s>= 1)
                                        int64_t x9_243
                                        
                                        if (*(arg1 + 0x1a70) != 0xd10)
                                            x9_243 = 0
                                            void* __offset(DomGame, 0x1ad8) x10_200 = arg1 + 0x1ad8
                                            int32_t i_33
                                            
                                            do
                                                if (x8_274 - 1 == x9_243)
                                                    goto label_af1cc8
                                                
                                                i_33 = *x10_200
                                                x10_200 += 0x68
                                                x9_243 += 1
                                            while (i_33 != 0xd10)
                                        
                                        if (*(arg1 + 0x1a70) == 0xd10 || x9_243 u< x8_274)
                                            void* x8_276 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                                            int64_t x9_163 = sx.q(*(x8_276 + 0x400))
                                            *(x8_276 + 0x404) = 0
                                            *(x8_276 + 0x400) = x9_163.d + 1
                                            *(x8_276 + (x9_163 << 2)) = 0xd10
                                            *(arg3 + 0x810) += 1
                                    
                                label_af1cc8:
                                    x27 = 1
                        else
                            uint64_t x8_219 = zx.q(*(arg1 + 0x1528))
                            
                            if (x8_219.d s>= 1)
                                int64_t x9_146
                                
                                if (*(arg1 + 0x1a70) != 0xd21)
                                    x9_146 = 0
                                    void* __offset(DomGame, 0x1ad8) x10_125 = arg1 + 0x1ad8
                                    int32_t i_34
                                    
                                    do
                                        if (x8_219 - 1 == x9_146)
                                            goto label_af15c4
                                        
                                        i_34 = *x10_125
                                        x10_125 += 0x68
                                        x9_146 += 1
                                    while (i_34 != 0xd21)
                                
                                if (*(arg1 + 0x1a70) == 0xd21 || x9_146 u< x8_219)
                                    void* x8_221 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                                    int64_t x9_120 = sx.q(*(x8_221 + 0x400))
                                    *(x8_221 + 0x404) = 1
                                    *(x8_221 + 0x400) = x9_120.d + 1
                                    *(x8_221 + (x9_120 << 2)) = 0xd21
                                    *(arg3 + 0x810) += 1
                                
                            label_af15c4:
                                
                                if (x20_1 == 0xd21)
                                    goto label_af1634
                                
                                goto label_af15cc
                            
                            x27 = 0
                            x26 = 0
                            x25 = 0
            else
                int64_t x9_95
                
                if (*(arg1 + 0x1a70) != 0xe19)
                    x9_95 = 0
                    void* __offset(DomGame, 0x1ad8) x10_91 = arg1 + 0x1ad8
                    int32_t i_35
                    
                    do
                        if (x8_152 - 1 == x9_95)
                            goto label_af13f4
                        
                        i_35 = *x10_91
                        x10_91 += 0x68
                        x9_95 += 1
                    while (i_35 != 0xe19)
                
                if (*(arg1 + 0x1a70) != 0xe19 && x9_95 u>= x8_152)
                    goto label_af13f4
                
                x8_153 = sx.q(*(arg3 + 0x810))
                x10_70 = 0xb
                x11_26 = 0xe19
            label_af13ac:
                void* x8_202 = arg3 + x8_153 * 0x408
                int64_t x9_111 = sx.q(*(x8_202 + 0x400))
                *(x8_202 + 0x404) = x10_70
                *(x8_202 + 0x400) = x9_111.d + 1
                *(x8_202 + (x9_111 << 2)) = x11_26
                *(arg3 + 0x810) += 1
            label_af13f4:
                TestSet(arg1, zx.q(x20_1), 0xd46, 0x7ef2c4, 2, 0, 0xc, arg3)
                uint64_t x9_112 = zx.q(x20_1 - 0xd04)
                int32_t x8_205 = 0
                
                if (x9_112.d u> 0x21)
                    goto label_af1828
                
                int64_t x8_207
                int32_t x11_57
                
                switch (x9_112)
                    case 0
                        uint64_t x8_206 = zx.q(*(arg1 + 0x1528))
                        
                        if (x8_206.d s>= 1)
                            int64_t x9_246
                            
                            if (*(arg1 + 0x1a70) != 0xd23)
                                x9_246 = 0
                                void* __offset(DomGame, 0x1ad8) x10_203 = arg1 + 0x1ad8
                                int32_t i_36
                                
                                do
                                    if (x8_206 - 1 == x9_246)
                                        goto label_af17b0
                                    
                                    i_36 = *x10_203
                                    x10_203 += 0x68
                                    x9_246 += 1
                                while (i_36 != 0xd23)
                            
                            if (*(arg1 + 0x1a70) != 0xd23 && x9_246 u>= x8_206)
                                goto label_af17b0
                            
                            x8_207 = sx.q(*(arg3 + 0x810))
                            x11_57 = 0xd23
                        label_af178c:
                            void* x8_241 = arg3 + x8_207 * 0x408
                            int64_t x9_129 = sx.q(*(x8_241 + 0x400))
                            *(x8_241 + 0x404) = 1
                            *(x8_241 + 0x400) = x9_129.d + 1
                            *(x8_241 + (x9_129 << 2)) = x11_57
                            *(arg3 + 0x810) += 1
                        label_af17b0:
                            
                            if (x20_1 == 0xd07)
                                goto label_af17b8
                            
                        label_af1824:
                            x8_205 = 0
                        label_af1828:
                            
                            if (x20_1 != 0xd27)
                            label_af2e78:
                                
                                if (x8_205 == 0)
                                    goto label_af1474
                                
                                goto label_af2e7c
                            
                        label_af1830:
                            uint64_t x9_134 = zx.q(*(arg1 + 0x1528))
                            
                            if (x9_134.d s< 1)
                                goto label_af2e78
                            
                            int64_t x10_194
                            
                            if (*(arg1 + 0x1a70) != 0xd07)
                                x10_194 = 0
                                void* __offset(DomGame, 0x1ad8) x11_113 = arg1 + 0x1ad8
                                int32_t i_37
                                
                                do
                                    if (x9_134 - 1 == x10_194)
                                        if ((x8_205 & 1) == 0)
                                            goto label_af1474
                                        
                                        goto label_af2e7c
                                    
                                    i_37 = *x11_113
                                    x11_113 += 0x68
                                    x10_194 += 1
                                while (i_37 != 0xd07)
                            
                            if (*(arg1 + 0x1a70) != 0xd07 && x10_194 u>= x9_134)
                                goto label_af2e78
                            
                            void* x9_136 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                            int64_t x10_117 = sx.q(*(x9_136 + 0x400))
                            *(x9_136 + 0x404) = 1
                            *(x9_136 + 0x400) = x10_117.d + 1
                            *(x9_136 + (x10_117 << 2)) = 0xd07
                            *(arg3 + 0x810) += 1
                            
                            if ((x8_205 & 1) == 0)
                                goto label_af1474
                            
                            goto label_af2e7c
                        
                    label_af1810:
                        x27 = 0
                        x26 = 0
                        x25 = 0
                        x22 = 0
                    case 1
                    label_af1708:
                        uint64_t x8_235 = zx.q(*(arg1 + 0x1528))
                        
                        if (x8_235.d s< 1)
                            goto label_af1810
                        
                        int64_t x9_244
                        
                        if (*(arg1 + 0x1a70) != 0xd25)
                            x9_244 = 0
                            void* __offset(DomGame, 0x1ad8) x10_201 = arg1 + 0x1ad8
                            int32_t i_38
                            
                            do
                                if (x8_235 - 1 == x9_244)
                                    goto label_af1754
                                
                                i_38 = *x10_201
                                x10_201 += 0x68
                                x9_244 += 1
                            while (i_38 != 0xd25)
                        
                        if (*(arg1 + 0x1a70) == 0xd25 || x9_244 u< x8_235)
                            void* x8_237 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                            int64_t x9_127 = sx.q(*(x8_237 + 0x400))
                            *(x8_237 + 0x404) = 1
                            *(x8_237 + 0x400) = x9_127.d + 1
                            *(x8_237 + (x9_127 << 2)) = 0xd25
                            *(arg3 + 0x810) += 1
                        
                    label_af1754:
                        
                        if (x20_1 == 0xd07)
                            goto label_af17b8
                        
                        if (x20_1 != 0xd25)
                            goto label_af1824
                        
                        goto label_af1764
                    case 2, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 
                            0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x20
                        goto label_af1828
                    case 3
                    label_af17b8:
                        uint64_t x8_244 = zx.q(*(arg1 + 0x1528))
                        
                        if (x8_244.d s< 1)
                        label_af2e7c:
                            uint64_t x8_405 = zx.q(*(arg1 + 0x1528))
                            
                            if (x8_405.d s>= 1)
                                int64_t x9_239
                                
                                if (*(arg1 + 0x1a70) != 0xd4a)
                                    x9_239 = 0
                                    void* __offset(DomGame, 0x1ad8) x10_196 = arg1 + 0x1ad8
                                    int32_t i_39
                                    
                                    do
                                        if (x8_405 - 1 == x9_239)
                                            goto label_af1474
                                        
                                        i_39 = *x10_196
                                        x10_196 += 0x68
                                        x9_239 += 1
                                    while (i_39 != 0xd4a)
                                
                                if (*(arg1 + 0x1a70) == 0xd4a || x9_239 u< x8_405)
                                    void* x8_407 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                                    int64_t x9_238 = sx.q(*(x8_407 + 0x400))
                                    *(x8_407 + 0x404) = 0xc
                                    *(x8_407 + 0x400) = x9_238.d + 1
                                    *(x8_407 + (x9_238 << 2)) = 0xd4a
                                    *(arg3 + 0x810) += 1
                            
                            goto label_af1474
                        
                        int64_t x9_164
                        
                        if (*(arg1 + 0x1a70) != 0xd27)
                            x9_164 = 0
                            void* __offset(DomGame, 0x1ad8) x10_131 = arg1 + 0x1ad8
                            int32_t i_40
                            
                            do
                                if (x8_244 - 1 == x9_164)
                                    goto label_af1d08
                                
                                i_40 = *x10_131
                                x10_131 += 0x68
                                x9_164 += 1
                            while (i_40 != 0xd27)
                        
                        if (*(arg1 + 0x1a70) != 0xd27 && x9_164 u>= x8_244)
                        label_af1d08:
                            x8_205 = 1
                            
                            if (x20_1 != 0xd27)
                                goto label_af2e78
                            
                            goto label_af1830
                        
                        void* x9_131 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                        int64_t x10_115 = sx.q(*(x9_131 + 0x400))
                        x8_205 = 1
                        *(x9_131 + 0x404) = 1
                        *(x9_131 + 0x400) = x10_115.d + 1
                        *(x9_131 + (x10_115 << 2)) = 0xd27
                        *(arg3 + 0x810) += 1
                        
                        if (x20_1 != 0xd27)
                            goto label_af2e78
                        
                        goto label_af1830
                    case 0x1f
                        uint64_t x8_230 = zx.q(*(arg1 + 0x1528))
                        
                        if (x8_230.d s< 1)
                            goto label_af1810
                        
                        int64_t x9_247
                        
                        if (*(arg1 + 0x1a70) != 0xd04)
                            x9_247 = 0
                            void* __offset(DomGame, 0x1ad8) x10_204 = arg1 + 0x1ad8
                            int32_t i_41
                            
                            do
                                if (x8_230 - 1 == x9_247)
                                    goto label_af16f0
                                
                                i_41 = *x10_204
                                x10_204 += 0x68
                                x9_247 += 1
                            while (i_41 != 0xd04)
                        
                        if (*(arg1 + 0x1a70) == 0xd04 || x9_247 u< x8_230)
                            void* x8_232 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                            int64_t x9_125 = sx.q(*(x8_232 + 0x400))
                            *(x8_232 + 0x404) = 1
                            *(x8_232 + 0x400) = x9_125.d + 1
                            *(x8_232 + (x9_125 << 2)) = 0xd04
                            *(arg3 + 0x810) += 1
                        
                    label_af16f0:
                        
                        if (x20_1 == 0xd25)
                            goto label_af1764
                        
                        if (x20_1 == 0xd07)
                            goto label_af17b8
                        
                        if (x20_1 != 0xd05)
                            goto label_af1824
                        
                        goto label_af1708
                    case 0x21
                    label_af1764:
                        uint64_t x8_240 = zx.q(*(arg1 + 0x1528))
                        
                        if (x8_240.d s< 1)
                            goto label_af1810
                        
                        int64_t x9_242
                        
                        if (*(arg1 + 0x1a70) != 0xd05)
                            x9_242 = 0
                            void* __offset(DomGame, 0x1ad8) x10_199 = arg1 + 0x1ad8
                            int32_t i_42
                            
                            do
                                if (x8_240 - 1 == x9_242)
                                    goto label_af17b0
                                
                                i_42 = *x10_199
                                x10_199 += 0x68
                                x9_242 += 1
                            while (i_42 != 0xd05)
                        
                        if (*(arg1 + 0x1a70) != 0xd05 && x9_242 u>= x8_240)
                            goto label_af17b0
                        
                        x8_207 = sx.q(*(arg3 + 0x810))
                        x11_57 = 0xd05
                        goto label_af178c
        case 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0x11, 0x13, 0x15
            goto label_af13f4
        case 0xf
        label_af0c44:
            uint64_t x8_167 = zx.q(*(arg1 + 0x1528))
            
            if (x8_167.d s< 1)
                goto label_af1470
            
            int64_t x9_94
            
            if (*(arg1 + 0x1a70) != 0xe1d)
                x9_94 = 0
                void* __offset(DomGame, 0x1ad8) x10_89 = arg1 + 0x1ad8
                int32_t i_43
                
                do
                    if (x8_167 - 1 == x9_94)
                        goto label_af0c90
                    
                    i_43 = *x10_89
                    x10_89 += 0x68
                    x9_94 += 1
                while (i_43 != 0xe1d)
            
            if (*(arg1 + 0x1a70) == 0xe1d || x9_94 u< x8_167)
                void* x8_169 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x9_82 = sx.q(*(x8_169 + 0x400))
                *(x8_169 + 0x404) = 0xb
                *(x8_169 + 0x400) = x9_82.d + 1
                *(x8_169 + (x9_82 << 2)) = 0xe1d
                *(arg3 + 0x810) += 1
            
        label_af0c90:
            
            if (x20_1 s> 0xe16)
                if (x20_1 == 0xe17)
                    goto label_af11b8
                
                if (x20_1 == 0xe1b)
                    goto label_af1264
                
                if (x20_1 != 0xe1d)
                    goto label_af13f4
                
                goto label_af109c
            
            uint64_t x8_172 = zx.q(x20_1 - 0xd3f)
            
            if (x8_172.d u> 0xd)
                goto label_af13f4
            
            switch (x8_172)
                case 0
                    goto label_af1330
                case 1
                    goto label_af0b60
                case 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb
                    goto label_af13f4
                case 0xc
                    goto label_af1384
                case 0xd
                    goto label_af12d4
        case 0x10
        label_af11b8:
            uint64_t x8_179 = zx.q(*(arg1 + 0x1528))
            
            if (x8_179.d s< 1)
                goto label_af1470
            
            int64_t x9_103
            
            if (*(arg1 + 0x1a70) != 0xe1b)
                x9_103 = 0
                void* __offset(DomGame, 0x1ad8) x10_102 = arg1 + 0x1ad8
                int32_t i_44
                
                do
                    if (x8_179 - 1 == x9_103)
                        goto label_af1204
                    
                    i_44 = *x10_102
                    x10_102 += 0x68
                    x9_103 += 1
                while (i_44 != 0xe1b)
            
            if (*(arg1 + 0x1a70) == 0xe1b || x9_103 u< x8_179)
                void* x8_181 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x9_102 = sx.q(*(x8_181 + 0x400))
                *(x8_181 + 0x404) = 0xb
                *(x8_181 + 0x400) = x9_102.d + 1
                *(x8_181 + (x9_102 << 2)) = 0xe1b
                *(arg3 + 0x810) += 1
            
        label_af1204:
            uint64_t x8_184 = zx.q(x20_1 - 0xd3f)
            
            if (x8_184.d u> 0xd)
                if (x20_1 != 0xe1b)
                    goto label_af13f4
                
                goto label_af1264
            
            switch (x8_184)
                case 0
                    goto label_af1330
                case 1
                    goto label_af0b60
                case 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb
                    goto label_af13f4
                case 0xc
                    goto label_af1384
                case 0xd
                    goto label_af12d4
        case 0x12
            uint64_t x8_160 = zx.q(*(arg1 + 0x1528))
            
            if (x8_160.d s< 1)
                goto label_af1470
            
            int64_t x9_96
            
            if (*(arg1 + 0x1a70) != 0xe07)
                x9_96 = 0
                void* __offset(DomGame, 0x1ad8) x10_92 = arg1 + 0x1ad8
                int32_t i_45
                
                do
                    if (x8_160 - 1 == x9_96)
                        goto label_af0c14
                    
                    i_45 = *x10_92
                    x10_92 += 0x68
                    x9_96 += 1
                while (i_45 != 0xe07)
            
            if (*(arg1 + 0x1a70) == 0xe07 || x9_96 u< x8_160)
                void* x8_162 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x9_80 = sx.q(*(x8_162 + 0x400))
                *(x8_162 + 0x404) = 0xb
                *(x8_162 + 0x400) = x9_80.d + 1
                *(x8_162 + (x9_80 << 2)) = 0xe07
                *(arg3 + 0x810) += 1
            
        label_af0c14:
            uint64_t x8_165 = zx.q(x20_1 - 0xd3f)
            
            if (x8_165.d u<= 0xd)
                switch (x8_165)
                    case 0
                        goto label_af1330
                    case 1
                        goto label_af0b60
                    case 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb
                        goto label_af13f4
                    case 0xc
                        goto label_af1384
                    case 0xd
                        goto label_af12d4
            else
                uint64_t x8_166 = zx.q(x20_1 - 0xe16)
                
                if (x8_166.d u> 7)
                    goto label_af13f4
                
                switch (x8_166)
                    case 0
                        goto label_af0c44
                    case 1
                        goto label_af11b8
                    case 2, 3, 4, 6
                        goto label_af13f4
                    case 5
                        goto label_af1264
                    case 7
                        goto label_af109c
        case 0x14
        label_af1264:
            uint64_t x8_185 = zx.q(*(arg1 + 0x1528))
            
            if (x8_185.d s< 1)
                goto label_af1470
            
            int64_t x9_241
            
            if (*(arg1 + 0x1a70) != 0xe17)
                x9_241 = 0
                void* __offset(DomGame, 0x1ad8) x10_198 = arg1 + 0x1ad8
                int32_t i_46
                
                do
                    if (x8_185 - 1 == x9_241)
                        goto label_af12b0
                    
                    i_46 = *x10_198
                    x10_198 += 0x68
                    x9_241 += 1
                while (i_46 != 0xe17)
            
            if (*(arg1 + 0x1a70) == 0xe17 || x9_241 u< x8_185)
                void* x8_187 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x9_105 = sx.q(*(x8_187 + 0x400))
                *(x8_187 + 0x404) = 0xb
                *(x8_187 + 0x400) = x9_105.d + 1
                *(x8_187 + (x9_105 << 2)) = 0xe17
                *(arg3 + 0x810) += 1
            
        label_af12b0:
            uint64_t x8_190 = zx.q(x20_1 - 0xd3f)
            
            if (x8_190.d u> 0xd)
                goto label_af13f4
            
            switch (x8_190)
                case 0
                    goto label_af1330
                case 1
                    goto label_af0b60
                case 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb
                    goto label_af13f4
                case 0xc
                    goto label_af1384
                case 0xd
                    goto label_af12d4
        case 0x16
        label_af109c:
            uint64_t x8_173 = zx.q(*(arg1 + 0x1528))
            
            if (x8_173.d s< 1)
                goto label_af1470
            
            int64_t x9_99
            
            if (*(arg1 + 0x1a70) != 0xe16)
                x9_99 = 0
                void* __offset(DomGame, 0x1ad8) x10_97 = arg1 + 0x1ad8
                int32_t i_47
                
                do
                    if (x8_173 - 1 == x9_99)
                        goto label_af10e8
                    
                    i_47 = *x10_97
                    x10_97 += 0x68
                    x9_99 += 1
                while (i_47 != 0xe16)
            
            if (*(arg1 + 0x1a70) == 0xe16 || x9_99 u< x8_173)
                void* x8_175 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x9_98 = sx.q(*(x8_175 + 0x400))
                *(x8_175 + 0x404) = 0xb
                *(x8_175 + 0x400) = x9_98.d + 1
                *(x8_175 + (x9_98 << 2)) = 0xe16
                *(arg3 + 0x810) += 1
            
        label_af10e8:
            uint64_t x8_178 = zx.q(x20_1 - 0xd3f)
            
            if (x8_178.d u> 0xd)
                if (x20_1 == 0xe1b)
                    goto label_af1264
                
                if (x20_1 != 0xe17)
                    goto label_af13f4
                
                goto label_af11b8
            
            switch (x8_178)
                case 0
                    goto label_af1330
                case 1
                    goto label_af0b60
                case 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb
                    goto label_af13f4
                case 0xc
                    goto label_af1384
                case 0xd
                    goto label_af12d4
TestSet(arg1, zx.q(x20_1), 0xd11, 0x7ef2cc, 3, 0, 9, arg3)
TestSet(arg1, zx.q(x20_1), 0xd12, 0x7ef2d8, 3, 0, 0xa, arg3)

if (x20_1 == 0xd1c)
    uint64_t x8_279 = zx.q(*(arg1 + 0x1528))
    
    if (x8_279.d s>= 1)
        int64_t x9_228
        
        if (*(arg1 + 0x1a70) != 0xd2b)
            x9_228 = 0
            void* __offset(DomGame, 0x1ad8) x10_183 = arg1 + 0x1ad8
            int32_t i_48
            
            do
                if (x8_279 - 1 == x9_228)
                    goto label_af1dc0
                
                i_48 = *x10_183
                x10_183 += 0x68
                x9_228 += 1
            while (i_48 != 0xd2b)
        
        if (*(arg1 + 0x1a70) == 0xd2b || x9_228 u< x8_279)
            void* x8_281 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
            int64_t x9_166 = sx.q(*(x8_281 + 0x400))
            *(x8_281 + 0x404) = 0
            *(x8_281 + 0x400) = x9_166.d + 1
            *(x8_281 + (x9_166 << 2)) = 0xd2b
            *(arg3 + 0x810) += 1

label_af1dc0:

if (x27 != 0)
    uint64_t x8_284 = zx.q(*(arg1 + 0x1528))
    
    if (x8_284.d s>= 1)
        int64_t x9_229
        
        if (*(arg1 + 0x1a70) != 0xd1c)
            x9_229 = 0
            void* __offset(DomGame, 0x1ad8) x10_184 = arg1 + 0x1ad8
            int32_t i_49
            
            do
                if (x8_284 - 1 == x9_229)
                    goto label_af1e0c
                
                i_49 = *x10_184
                x10_184 += 0x68
                x9_229 += 1
            while (i_49 != 0xd1c)
        
        if (*(arg1 + 0x1a70) == 0xd1c || x9_229 u< x8_284)
            void* x8_286 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
            int64_t x9_168 = sx.q(*(x8_286 + 0x400))
            *(x8_286 + 0x404) = 0
            *(x8_286 + 0x400) = x9_168.d + 1
            *(x8_286 + (x9_168 << 2)) = 0xd1c
            *(arg3 + 0x810) += 1

label_af1e0c:

if (x25 != 0)
    uint64_t x8_289 = zx.q(*(arg1 + 0x1528))
    
    if (x8_289.d s>= 1)
        int64_t x9_230
        
        if (*(arg1 + 0x1a70) != 0xd2f)
            x9_230 = 0
            void* __offset(DomGame, 0x1ad8) x10_185 = arg1 + 0x1ad8
            int32_t i_50
            
            do
                if (x8_289 - 1 == x9_230)
                    goto label_af1e58
                
                i_50 = *x10_185
                x10_185 += 0x68
                x9_230 += 1
            while (i_50 != 0xd2f)
        
        if (*(arg1 + 0x1a70) == 0xd2f || x9_230 u< x8_289)
            void* x8_291 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
            int64_t x9_170 = sx.q(*(x8_291 + 0x400))
            *(x8_291 + 0x404) = 0
            *(x8_291 + 0x400) = x9_170.d + 1
            *(x8_291 + (x9_170 << 2)) = 0xd2f
            *(arg3 + 0x810) += 1

label_af1e58:

if (x20_1 == 0xd2f)
    uint64_t x8_294 = zx.q(*(arg1 + 0x1528))
    
    if (x8_294.d s>= 1)
        int64_t x9_231
        
        if (*(arg1 + 0x1a70) != 0xd21)
            x9_231 = 0
            void* __offset(DomGame, 0x1ad8) x10_186 = arg1 + 0x1ad8
            int32_t i_51
            
            do
                if (x8_294 - 1 == x9_231)
                    goto label_af1ea8
                
                i_51 = *x10_186
                x10_186 += 0x68
                x9_231 += 1
            while (i_51 != 0xd21)
        
        if (*(arg1 + 0x1a70) == 0xd21 || x9_231 u< x8_294)
            void* x8_296 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
            int64_t x9_172 = sx.q(*(x8_296 + 0x400))
            *(x8_296 + 0x404) = 0
            *(x8_296 + 0x400) = x9_172.d + 1
            *(x8_296 + (x9_172 << 2)) = 0xd21
            *(arg3 + 0x810) += 1

label_af1ea8:

if (x22 != 0)
    uint64_t x8_299 = zx.q(*(arg1 + 0x1528))
    
    if (x8_299.d s>= 1)
        int64_t x9_232
        
        if (*(arg1 + 0x1a70) != 0xd29)
            x9_232 = 0
            void* __offset(DomGame, 0x1ad8) x10_187 = arg1 + 0x1ad8
            int32_t i_52
            
            do
                if (x8_299 - 1 == x9_232)
                    goto label_af1ef4
                
                i_52 = *x10_187
                x10_187 += 0x68
                x9_232 += 1
            while (i_52 != 0xd29)
        
        if (*(arg1 + 0x1a70) == 0xd29 || x9_232 u< x8_299)
            void* x8_301 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
            int64_t x9_174 = sx.q(*(x8_301 + 0x400))
            *(x8_301 + 0x404) = 0
            *(x8_301 + 0x400) = x9_174.d + 1
            *(x8_301 + (x9_174 << 2)) = 0xd29
            *(arg3 + 0x810) += 1

label_af1ef4:

if (x26 != 0)
    uint64_t x8_304 = zx.q(*(arg1 + 0x1528))
    
    if (x8_304.d s>= 1)
        int64_t x9_233
        
        if (*(arg1 + 0x1a70) != 0xd22)
            x9_233 = 0
            void* __offset(DomGame, 0x1ad8) x10_188 = arg1 + 0x1ad8
            int32_t i_53
            
            do
                if (x8_304 - 1 == x9_233)
                    goto label_af1f40
                
                i_53 = *x10_188
                x10_188 += 0x68
                x9_233 += 1
            while (i_53 != 0xd22)
        
        if (*(arg1 + 0x1a70) == 0xd22 || x9_233 u< x8_304)
            void* x8_306 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
            int64_t x9_176 = sx.q(*(x8_306 + 0x400))
            *(x8_306 + 0x404) = 0
            *(x8_306 + 0x400) = x9_176.d + 1
            *(x8_306 + (x9_176 << 2)) = 0xd22
            *(arg3 + 0x810) += 1

label_af1f40:

if (x20_1 s> 0xf00)
label_af1fec:
    
    if (x20_1 != 0xf01)
        if (x20_1 != 0xf46)
            goto label_af20b4
        
        int64_t x9_181 = sx.q(*(arg3 + 0x810))
        void* x13_6 = arg3 + x9_181 * 0x408
        *(x13_6 + 0x404) = 0xf
        
        for (int64_t i_54 = 0; i_54 != 0xc; i_54 += 1)
            uint64_t x15_2 = zx.q(*(arg1 + 0x1528))
            
            if (x15_2.d s>= 1)
                int32_t x14_2 = *(&data_7ef28c + (i_54 << 2))
                int64_t x16_3
                
                if (*(arg1 + 0x1a70) != x14_2)
                    x16_3 = 0
                    void* __offset(DomGame, 0x1ad8) x0_10 = arg1 + 0x1ad8
                    int32_t x1_9
                    
                    do
                        if (x15_2 - 1 == x16_3)
                            goto label_af2044
                        
                        x1_9 = *x0_10
                        x0_10 += 0x68
                        x16_3 += 1
                    while (x1_9 != x14_2)
                
                if (*(arg1 + 0x1a70) == x14_2 || x16_3 u< x15_2)
                    int64_t x15_1 = sx.q(*(x13_6 + 0x400))
                    *(x13_6 + 0x400) = x15_1.d + 1
                    *(arg3 + x9_181 * 0x408 + (x15_1 << 2)) = x14_2
            
        label_af2044:
        
        *(arg3 + 0x810) += 1
        
        if (x20_1 == 0xf01)
            goto label_af20ec
        
        goto label_af20b4
    
label_af20ec:
    void* x8_323 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
    int64_t x9_182 = sx.q(*(x8_323 + 0x400))
    *(x8_323 + 0x404) = 0
    *(x8_323 + 0x400) = x9_182.d + 1
    *(x8_323 + (x9_182 << 2)) = 0xf46
    *(arg3 + 0x810) += 1
else
    if (x20_1 != 0xd28)
        if (x20_1 == 0xd3b)
            uint64_t x8_309 = zx.q(*(arg1 + 0x1528))
            
            if (x8_309.d s>= 1)
                int64_t x9_234
                
                if (*(arg1 + 0x1a70) != 0xd28)
                    x9_234 = 0
                    void* __offset(DomGame, 0x1ad8) x10_191 = arg1 + 0x1ad8
                    int32_t i_55
                    
                    do
                        if (x8_309 - 1 == x9_234)
                            goto label_af20b4
                        
                        i_55 = *x10_191
                        x10_191 += 0x68
                        x9_234 += 1
                    while (i_55 != 0xd28)
                
                if (*(arg1 + 0x1a70) == 0xd28 || x9_234 u< x8_309)
                    void* x8_311 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                    int64_t x9_178 = sx.q(*(x8_311 + 0x400))
                    *(x8_311 + 0x404) = 0
                    *(x8_311 + 0x400) = x9_178.d + 1
                    *(x8_311 + (x9_178 << 2)) = 0xd28
                    *(arg3 + 0x810) += 1
        
        goto label_af20b4
    
    uint64_t x8_314 = zx.q(*(arg1 + 0x1528))
    
    if (x8_314.d s>= 1)
        int64_t x9_235
        
        if (*(arg1 + 0x1a70) != 0xd3b)
            x9_235 = 0
            void* __offset(DomGame, 0x1ad8) x10_192 = arg1 + 0x1ad8
            int32_t i_56
            
            do
                if (x8_314 - 1 == x9_235)
                    goto label_af1fec
                
                i_56 = *x10_192
                x10_192 += 0x68
                x9_235 += 1
            while (i_56 != 0xd3b)
        
        if (*(arg1 + 0x1a70) == 0xd3b || x9_235 u< x8_314)
            void* x8_316 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
            int64_t x9_180 = sx.q(*(x8_316 + 0x400))
            *(x8_316 + 0x404) = 0
            *(x8_316 + 0x400) = x9_180.d + 1
            *(x8_316 + (x9_180 << 2)) = 0xd3b
            *(arg3 + 0x810) += 1
        
        goto label_af1fec
    
label_af20b4:
    int64_t x8_321 = 0
    int32_t x10_133
    
    do
        if (x8_321 == 0xb)
            goto label_af2114
        
        x10_133 = *((x8_321 << 2) + 0x7ef290)
        x8_321 += 1
    while (x10_133 != x20_1)
    
    if (x8_321 u<= 0xb)
        goto label_af20ec

label_af2114:

if (x20_1 == 0x101a)
label_af2258:
    void* x8_332 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
    int64_t x9_191 = sx.q(*(x8_332 + 0x400))
    *(x8_332 + 0x404) = 7
    *(x8_332 + 0x400) = x9_191.d + 1
    *(x8_332 + (x9_191 << 2)) = 0x101b
    
    if (x20_1 == 0x101c)
    label_af22c0:
        void* x8_336 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
        int64_t x9_193 = sx.q(*(x8_336 + 0x400))
        *(x8_336 + 0x404) = 7
        *(x8_336 + 0x400) = x9_193.d + 1
        *(x8_336 + (x9_193 << 2)) = 0x101d
        *(arg3 + 0x810) += 1
    else
    label_af228c:
        void* x8_334 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
        int64_t x9_192 = sx.q(*(x8_334 + 0x400))
        *(x8_334 + 0x404) = 7
        *(x8_334 + 0x400) = x9_192.d + 1
        *(x8_334 + (x9_192 << 2)) = 0x101c
        
        if (x20_1 != 0x101d)
            goto label_af22c0
        
        *(arg3 + 0x810) += 1
else
    if (x20_1 == 0x1306)
        uint64_t x9_186 = zx.q(*(arg1 + 0x1528))
        
        if (x9_186.d s>= 1)
            int64_t x10_190
            
            if (*(arg1 + 0x1a70) != 0x1305)
                x10_190 = 0
                void* __offset(DomGame, 0x1ad8) x11_109 = arg1 + 0x1ad8
                int32_t i_57
                
                do
                    if (x9_186 - 1 == x10_190)
                        goto label_af21d4
                    
                    i_57 = *x11_109
                    x11_109 += 0x68
                    x10_190 += 1
                while (i_57 != 0x1305)
            
            if (*(arg1 + 0x1a70) == 0x1305 || x10_190 u< x9_186)
                void* x9_188 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x10_137 = sx.q(*(x9_188 + 0x400))
                *(x9_188 + 0x404) = 7
                *(x9_188 + 0x400) = x10_137.d + 1
                *(x9_188 + (x10_137 << 2)) = 0x1305
                *(arg3 + 0x810) += 1
            
        label_af21d4:
            
            if (x20_1 == 0x101a)
                goto label_af2258
    else if (x20_1 == 0x1305)
        uint64_t x9_183 = zx.q(*(arg1 + 0x1528))
        
        if (x9_183.d s>= 1)
            int64_t x10_189
            
            if (*(arg1 + 0x1a70) != 0x1306)
                x10_189 = 0
                void* __offset(DomGame, 0x1ad8) x11_108 = arg1 + 0x1ad8
                int32_t i_58
                
                do
                    if (x9_183 - 1 == x10_189)
                        goto label_af21e0
                    
                    i_58 = *x11_108
                    x11_108 += 0x68
                    x10_189 += 1
                while (i_58 != 0x1306)
            
            if (*(arg1 + 0x1a70) == 0x1306 || x10_189 u< x9_183)
                void* x9_185 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
                int64_t x10_135 = sx.q(*(x9_185 + 0x400))
                *(x9_185 + 0x404) = 7
                *(x9_185 + 0x400) = x10_135.d + 1
                *(x9_185 + (x10_135 << 2)) = 0x1306
                *(arg3 + 0x810) += 1
    
label_af21e0:
    int64_t x8_330 = 0
    int32_t x10_139
    
    do
        if (x8_330 == 3)
            goto label_af22e8
        
        x10_139 = *((x8_330 << 2) + 0x71c124)
        x8_330 += 1
    while (x10_139 != x20_1)
    
    if (x8_330 u<= 3)
        if (x20_1 == 0x101a)
            goto label_af2258
        
        void* x9_190 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
        int64_t x10_140 = sx.q(*(x9_190 + 0x400))
        *(x9_190 + 0x404) = 7
        *(x9_190 + 0x400) = x10_140.d + 1
        *(x9_190 + (x10_140 << 2)) = 0x101a
        
        if (x20_1 == 0x101b)
            goto label_af228c
        
        goto label_af2258

label_af22e8:

if (x20_1 != 0x101f)
    int64_t x8_383 = 0
    int32_t x10_161
    
    do
        if (x8_383 == 3)
            goto label_af2390
        
        x10_161 = *((x8_383 << 2) + 0x71a6d4)
        x8_383 += 1
    while (x10_161 != x20_1)
    
    if (x8_383 u<= 3)
        if (x20_1 == 0x101f)
            goto label_af2300
        
        void* x9_214 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
        int64_t x10_162 = sx.q(*(x9_214 + 0x400))
        *(x9_214 + 0x404) = 7
        *(x9_214 + 0x400) = x10_162.d + 1
        *(x9_214 + (x10_162 << 2)) = 0x101f
        
        if (x20_1 != 0x1020)
            goto label_af2300
        
        goto label_af2334
else
label_af2300:
    void* x8_340 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
    int64_t x9_194 = sx.q(*(x8_340 + 0x400))
    *(x8_340 + 0x404) = 7
    *(x8_340 + 0x400) = x9_194.d + 1
    *(x8_340 + (x9_194 << 2)) = 0x1020
    
    if (x20_1 == 0x1021)
    label_af2368:
        void* x8_344 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
        int64_t x9_196 = sx.q(*(x8_344 + 0x400))
        *(x8_344 + 0x404) = 7
        *(x8_344 + 0x400) = x9_196.d + 1
        *(x8_344 + (x9_196 << 2)) = 0x1022
        *(arg3 + 0x810) += 1
    else
    label_af2334:
        void* x8_342 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
        int64_t x9_195 = sx.q(*(x8_342 + 0x400))
        *(x8_342 + 0x404) = 7
        *(x8_342 + 0x400) = x9_195.d + 1
        *(x8_342 + (x9_195 << 2)) = 0x1021
        
        if (x20_1 != 0x1022)
            goto label_af2368
        
        *(arg3 + 0x810) += 1

label_af2390:

if (x20_1 != 0x1024)
    int64_t x8_384 = 0
    int32_t x10_164
    
    do
        if (x8_384 == 3)
            goto label_af2438
        
        x10_164 = *((x8_384 << 2) + 0x71ae74)
        x8_384 += 1
    while (x10_164 != x20_1)
    
    if (x8_384 u<= 3)
        if (x20_1 == 0x1024)
            goto label_af23a8
        
        void* x9_216 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
        int64_t x10_165 = sx.q(*(x9_216 + 0x400))
        *(x9_216 + 0x404) = 7
        *(x9_216 + 0x400) = x10_165.d + 1
        *(x9_216 + (x10_165 << 2)) = 0x1024
        
        if (x20_1 != 0x1025)
            goto label_af23a8
        
        goto label_af23dc
else
label_af23a8:
    void* x8_348 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
    int64_t x9_197 = sx.q(*(x8_348 + 0x400))
    *(x8_348 + 0x404) = 7
    *(x8_348 + 0x400) = x9_197.d + 1
    *(x8_348 + (x9_197 << 2)) = 0x1025
    
    if (x20_1 == 0x1026)
    label_af2410:
        void* x8_352 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
        int64_t x9_199 = sx.q(*(x8_352 + 0x400))
        *(x8_352 + 0x404) = 7
        *(x8_352 + 0x400) = x9_199.d + 1
        *(x8_352 + (x9_199 << 2)) = 0x1027
        *(arg3 + 0x810) += 1
    else
    label_af23dc:
        void* x8_350 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
        int64_t x9_198 = sx.q(*(x8_350 + 0x400))
        *(x8_350 + 0x404) = 7
        *(x8_350 + 0x400) = x9_198.d + 1
        *(x8_350 + (x9_198 << 2)) = 0x1026
        
        if (x20_1 != 0x1027)
            goto label_af2410
        
        *(arg3 + 0x810) += 1

label_af2438:

if (x20_1 != 0x1029)
    int64_t x8_385 = 0
    int32_t x10_167
    
    do
        if (x8_385 == 3)
            goto label_af24e0
        
        x10_167 = *((x8_385 << 2) + 0x71b174)
        x8_385 += 1
    while (x10_167 != x20_1)
    
    if (x8_385 u<= 3)
        if (x20_1 == 0x1029)
            goto label_af2450
        
        void* x9_218 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
        int64_t x10_168 = sx.q(*(x9_218 + 0x400))
        *(x9_218 + 0x404) = 7
        *(x9_218 + 0x400) = x10_168.d + 1
        *(x9_218 + (x10_168 << 2)) = 0x1029
        
        if (x20_1 != 0x102a)
            goto label_af2450
        
        goto label_af2484
else
label_af2450:
    void* x8_356 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
    int64_t x9_200 = sx.q(*(x8_356 + 0x400))
    *(x8_356 + 0x404) = 7
    *(x8_356 + 0x400) = x9_200.d + 1
    *(x8_356 + (x9_200 << 2)) = 0x102a
    
    if (x20_1 == 0x102b)
    label_af24b8:
        void* x8_360 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
        int64_t x9_202 = sx.q(*(x8_360 + 0x400))
        *(x8_360 + 0x404) = 7
        *(x8_360 + 0x400) = x9_202.d + 1
        *(x8_360 + (x9_202 << 2)) = 0x102c
        *(arg3 + 0x810) += 1
    else
    label_af2484:
        void* x8_358 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
        int64_t x9_201 = sx.q(*(x8_358 + 0x400))
        *(x8_358 + 0x404) = 7
        *(x8_358 + 0x400) = x9_201.d + 1
        *(x8_358 + (x9_201 << 2)) = 0x102b
        
        if (x20_1 != 0x102c)
            goto label_af24b8
        
        *(arg3 + 0x810) += 1

label_af24e0:

if (x20_1 != 0x102e)
    int64_t x8_386 = 0
    int32_t x10_170
    
    do
        if (x8_386 == 3)
            goto label_af2588
        
        x10_170 = *((x8_386 << 2) + 0x71cac4)
        x8_386 += 1
    while (x10_170 != x20_1)
    
    if (x8_386 u<= 3)
        if (x20_1 == 0x102e)
            goto label_af24f8
        
        void* x9_220 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
        int64_t x10_171 = sx.q(*(x9_220 + 0x400))
        *(x9_220 + 0x404) = 7
        *(x9_220 + 0x400) = x10_171.d + 1
        *(x9_220 + (x10_171 << 2)) = 0x102e
        
        if (x20_1 != 0x102f)
            goto label_af24f8
        
        goto label_af252c
else
label_af24f8:
    void* x8_364 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
    int64_t x9_203 = sx.q(*(x8_364 + 0x400))
    *(x8_364 + 0x404) = 7
    *(x8_364 + 0x400) = x9_203.d + 1
    *(x8_364 + (x9_203 << 2)) = 0x102f
    
    if (x20_1 == 0x1030)
    label_af2560:
        void* x8_368 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
        int64_t x9_205 = sx.q(*(x8_368 + 0x400))
        *(x8_368 + 0x404) = 7
        *(x8_368 + 0x400) = x9_205.d + 1
        *(x8_368 + (x9_205 << 2)) = 0x1031
        *(arg3 + 0x810) += 1
    else
    label_af252c:
        void* x8_366 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
        int64_t x9_204 = sx.q(*(x8_366 + 0x400))
        *(x8_366 + 0x404) = 7
        *(x8_366 + 0x400) = x9_204.d + 1
        *(x8_366 + (x9_204 << 2)) = 0x1030
        
        if (x20_1 != 0x1031)
            goto label_af2560
        
        *(arg3 + 0x810) += 1

label_af2588:

if (x20_1 != 0x1033)
    int64_t x8_387 = 0
    int32_t x10_173
    
    do
        if (x8_387 == 3)
            goto label_af262c
        
        x10_173 = *((x8_387 << 2) + 0x71b034)
        x8_387 += 1
    while (x10_173 != x20_1)
    
    if (x8_387 u<= 3)
        if (x20_1 == 0x1033)
            goto label_af25a0
        
        void* x9_222 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
        int64_t x10_174 = sx.q(*(x9_222 + 0x400))
        *(x9_222 + 0x404) = 7
        *(x9_222 + 0x400) = x10_174.d + 1
        *(x9_222 + (x10_174 << 2)) = 0x1033
        
        if (x20_1 != 0x1034)
            goto label_af25a0
        
        goto label_af25d4
else
label_af25a0:
    void* x8_372 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
    int64_t x9_206 = sx.q(*(x8_372 + 0x400))
    *(x8_372 + 0x404) = 7
    *(x8_372 + 0x400) = x9_206.d + 1
    *(x8_372 + (x9_206 << 2)) = 0x1034
    
    if (x20_1 == 0x1035)
    label_af2608:
        void* x8_376 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
        int64_t x9_208 = sx.q(*(x8_376 + 0x400))
        *(x8_376 + 0x404) = 7
        *(x8_376 + 0x400) = x9_208.d + 1
        *(x8_376 + (x9_208 << 2)) = 0x1036
        *(arg3 + 0x810) += 1
    else
    label_af25d4:
        void* x8_374 = arg3 + sx.q(*(arg3 + 0x810)) * 0x408
        int64_t x9_207 = sx.q(*(x8_374 + 0x400))
        *(x8_374 + 0x404) = 7
        *(x8_374 + 0x400) = x9_207.d + 1
        *(x8_374 + (x9_207 << 2)) = 0x1035
        
        if (x20_1 != 0x1036)
            goto label_af2608
        
        *(arg3 + 0x810) += 1

label_af262c:

if (x20_1 == 0xe28)
    int64_t x8_379 = sx.q(*(arg3 + 0x810))
    *(arg3 + x8_379 * 0x408 + 0x404) = 0xe
    
    if (*(arg1 + 0x1528) s< 1)
        *(arg3 + 0x810) = x8_379.d + 1
    else
        int64_t i_59 = 0
        
        do
            void* x28_1 = arg1 + i_59 * 0x68
            
            if ((CardIsAffectedByCapitalism(zx.q(*(x28_1 + 0x1a70))) & 1) != 0)
                int64_t x8_382 = sx.q(*(arg3 + 0x810))
                int32_t x9_212 = *(x28_1 + 0x1a70)
                void* x11_91 = arg3 + x8_382 * 0x408
                int64_t j_4 = sx.q(*(x11_91 + 0x400))
                int64_t j_3 = j_4
                
                if (j_4.d s> 0)
                    j_3 = j_4 & 0xffffffff
                    int32_t* x13_7 = arg3 + x8_382 * 0x408
                    int64_t j_2 = j_3
                    int64_t j
                    
                    do
                        if (*x13_7 == x9_212)
                            goto label_af2680
                        
                        j = j_2
                        j_2 -= 1
                        x13_7 = &x13_7[1]
                    while (j != 1)
                
                *(x11_91 + 0x400) = j_4.d + 1
                *(arg3 + x8_382 * 0x408 + (j_3 << 2)) = x9_212
            
        label_af2680:
            i_59 += 1
        while (i_59 s< sx.q(*(arg1 + 0x1528)))
        
        x8_379 = sx.q(*(arg3 + 0x810))
        
        if (*(arg3 + x8_379 * 0x408 + 0x404) != 0)
            *(arg3 + 0x810) = x8_379.d + 1

DomCardDef* x0_14 = DomDefGet(zx.q(x20_1), zx.q(*(arg1 + 0xd50)))
int32_t var_54
int64_t result = HasRandomExtraPileSetup(x0_14, &var_54, nullptr, nullptr)

if (result.d != 0 && x20_1 != 0x121a && x20_1 != 0x121c)
    uint64_t x14_3 = sx.q(*(arg3 + 0x810))
    *(arg3 + x14_3 * 0x408 + 0x404) = 0xd
    
    if (result.d s>= 1)
        int64_t x10_176 = sx.q(var_54)
        int64_t x9_225 = 0
        uint64_t x11_97 = zx.q(result.d)
        
        do
            void* x15_5 = arg3 + muls.dp.d(x14_3.d, 0x408)
            int64_t result_3 = sx.q(*(x15_5 + 0x400))
            int32_t i_60 = *(arg1 + ((x9_225 + x10_176) << 2) + 0xe6c)
            int64_t x14_5 = sx.q(x14_3.d)
            int64_t result_1 = result_3
            
            if (result_3.d s<= 0)
            label_af29ac:
                *(x15_5 + 0x400) = result_3.d + 1
                *(arg3 + x14_5 * 0x408 + (result_1 << 2)) = i_60
            else
                result_1 = result_3 & 0xffffffff
                int32_t* x17_3 = arg3 + x14_5 * 0x408
                result = result_1
                
                while (*x17_3 != i_60)
                    int64_t result_2 = result
                    result -= 1
                    x17_3 = &x17_3[1]
                    
                    if (result_2 == 1)
                        goto label_af29ac
            
            x14_3 = zx.q(*(arg3 + 0x810))
            x9_225 += 1
        while (x9_225 != x11_97)
    
    *(arg3 + 0x810) = x14_3.d + 1

if (*(gDomClient + 0x215f0) == x20_1)
    int32_t x8_391 = *(arg3 + 0x810)
    void* x10_177 = arg3 + muls.dp.d(x8_391, 0x408)
    int64_t x11_98 = sx.q(*(x10_177 + 0x400))
    int64_t x9_226 = sx.q(x8_391)
    *(x10_177 + 0x404) = 0xf
    int64_t x12_12 = x11_98
    
    if (x11_98.d s<= 0)
    label_af2a8c:
        *(x10_177 + 0x400) = x11_98.d + 1
        *(arg3 + x9_226 * 0x408 + (x12_12 << 2)) = 0x123b
        x8_391 = *(arg3 + 0x810)
    else
        x12_12 = x11_98 & 0xffffffff
        int32_t* x13_9 = arg3 + x9_226 * 0x408
        int64_t x15_6 = x12_12
        
        while (*x13_9 != 0x123b)
            int64_t temp0_1 = x15_6
            x15_6 -= 1
            x13_9 = &x13_9[1]
            
            if (temp0_1 == 1)
                goto label_af2a8c
    
    *(arg3 + 0x810) = x8_391 + 1

if (*(gDomClient + 0x215a8) == x20_1)
    int32_t x8_396 = *(arg3 + 0x810)
    void* x10_179 = arg3 + muls.dp.d(x8_396, 0x408)
    int64_t x11_99 = sx.q(*(x10_179 + 0x400))
    int64_t x9_227 = sx.q(x8_396)
    *(x10_179 + 0x404) = 0xf
    int64_t x12_13 = x11_99
    
    if (x11_99.d s<= 0)
    label_af2b1c:
        *(x10_179 + 0x400) = x11_99.d + 1
        *(arg3 + x9_227 * 0x408 + (x12_13 << 2)) = 0x716
        x8_396 = *(arg3 + 0x810)
    else
        x12_13 = x11_99 & 0xffffffff
        int32_t* x13_10 = arg3 + x9_227 * 0x408
        int64_t x14_6 = x12_13
        
        while (*x13_10 != 0x716)
            int64_t temp1_1 = x14_6
            x14_6 -= 1
            x13_10 = &x13_10[1]
            
            if (temp1_1 == 1)
                goto label_af2b1c
    
    *(arg3 + 0x810) = x8_396 + 1

if ((zx.d(*(x0_14 + 0xcd)) & 1) != 0)
    *(arg3 + sx.q(*(arg3 + 0x810)) * 0x408 + 0x404) = 0xe
    result = LandscapeRefPiles(gDomClient + 0x2147c, zx.q(x20_1))
    
    for (int64_t i_61 = 0; i_61 != 0xe; i_61 += 1)
        int32_t j_1 = *(result + (i_61 << 2))
        
        if (j_1 == 0)
            break
        
        int64_t x10_182 = sx.q(*(arg3 + 0x810))
        void* x12_15 = arg3 + x10_182 * 0x408
        int64_t x11_101 = sx.q(*(x12_15 + 0x400))
        int64_t x13_11 = x11_101
        
        if (x11_101.d s<= 0)
        label_af2b80:
            *(x12_15 + 0x400) = x11_101.d + 1
            *(arg3 + x10_182 * 0x408 + (x13_11 << 2)) = j_1
        else
            x13_11 = x11_101 & 0xffffffff
            int32_t* x14_7 = arg3 + x10_182 * 0x408
            int64_t x15_8 = x13_11
            
            while (*x14_7 != j_1)
                int64_t temp4_1 = x15_8
                x15_8 -= 1
                x14_7 = &x14_7[1]
                
                if (temp4_1 == 1)
                    goto label_af2b80
    
    *(arg3 + 0x810) += 1

return result
