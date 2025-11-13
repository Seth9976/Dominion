// 函数: sub_ff8020
// 地址: 0xff8020
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x4824) s<= 0xf)
    int32_t i
    
    do
        uint32_t x8_1
        
        if (*(arg1 + 0x482c) != 0)
            x8_1 = 0
        else
            void* x21_1 = *arg1
            char* x8_5 = *(x21_1 + 0xb8)
            
            if (x8_5 u>= *(x21_1 + 0xc0))
                x8_1 = *(x21_1 + 0x30)
                
                if (x8_1 != 0)
                    int32_t x0_1 =
                        (*(x21_1 + 0x10))(*(x21_1 + 0x28), x21_1 + 0x38, zx.q(*(x21_1 + 0x34)))
                    void* x9_5
                    
                    if (x0_1 == 0)
                        x8_1 = 0
                        *(x21_1 + 0x30) = 0
                        x9_5 = x21_1 + 0x39
                        *(x21_1 + 0x38) = 0
                    else
                        x8_1 = zx.d(*(x21_1 + 0x38))
                        x9_5 = &(x21_1 + 0x38)[sx.q(x0_1)]
                    
                    *(x21_1 + 0xb8) = x21_1 + 0x39
                    *(x21_1 + 0xc0) = x9_5
                    
                    if (x8_1 == 0xff)
                        goto label_ff811c
            else
                *(x21_1 + 0xb8) = &x8_5[1]
                x8_1 = zx.d(*x8_5)
                
                if (x8_1 == 0xff)
                label_ff811c:
                    void* x21_2 = *arg1
                    char* x8_7 = *(x21_2 + 0xb8)
                    uint32_t x8_8
                    
                    if (x8_7 u>= *(x21_2 + 0xc0))
                        x8_8 = *(x21_2 + 0x30)
                        
                        if (x8_8 != 0)
                            int32_t x0_3 = (*(x21_2 + 0x10))(*(x21_2 + 0x28), x21_2 + 0x38, 
                                zx.q(*(x21_2 + 0x34)))
                            void* x9_10
                            
                            if (x0_3 == 0)
                                x8_8 = 0
                                *(x21_2 + 0x30) = 0
                                x9_10 = x21_2 + 0x39
                                *(x21_2 + 0x38) = 0
                            else
                                x8_8 = zx.d(*(x21_2 + 0x38))
                                x9_10 = &(x21_2 + 0x38)[sx.q(x0_3)]
                            
                            *(x21_2 + 0xb8) = x21_2 + 0x39
                            *(x21_2 + 0xc0) = x9_10
                    else
                        *(x21_2 + 0xb8) = &x8_7[1]
                        x8_8 = zx.d(*x8_7)
                    
                    int32_t x9_12
                    
                    while (true)
                        x9_12 = x8_8 & 0xff
                        
                        if (x9_12 != 0xff)
                            break
                        
                        void* x28_1 = *arg1
                        char* x8_10 = *(x28_1 + 0xb8)
                        
                        if (x8_10 u< *(x28_1 + 0xc0))
                            *(x28_1 + 0xb8) = &x8_10[1]
                            x8_8 = zx.d(*x8_10)
                        else
                            x8_8 = 0
                            
                            if (*(x28_1 + 0x30) != 0)
                                int32_t x0_5 = (*(x28_1 + 0x10))(*(x28_1 + 0x28), x28_1 + 0x38, 
                                    zx.q(*(x28_1 + 0x34)))
                                void* x9_17
                                
                                if (x0_5 == 0)
                                    x8_8 = 0
                                    *(x28_1 + 0x30) = 0
                                    x9_17 = x28_1 + 0x39
                                    *(x28_1 + 0x38) = 0
                                else
                                    x8_8 = zx.d(*(x28_1 + 0x38))
                                    x9_17 = &(x28_1 + 0x38)[sx.q(x0_5)]
                                
                                *(x28_1 + 0xb8) = x28_1 + 0x39
                                *(x28_1 + 0xc0) = x9_17
                    
                    if (x9_12 != 0)
                        arg1[0x905].b = x8_8.b
                        *(arg1 + 0x482c) = 1
                        break
                    
                    x8_1 = 0xff
        
        i = *(arg1 + 0x4824)
        arg1[0x904].d |= x8_1 << (0x18 - i)
        *(arg1 + 0x4824) = i + 8
    while (i s< 0x11)

int32_t x0_7 = sub_ff88e0(arg1, arg3)

if ((x0_7 & 0x80000000) == 0)
    __builtin_memset(arg2, 0, 0x80)
    int32_t x8_24
    
    if (x0_7 == 0)
        x8_24 = 0
    else
        if (*(arg1 + 0x4824) s< x0_7)
            int32_t i_1
            
            do
                uint32_t x8_13
                
                if (*(arg1 + 0x482c) != 0)
                    x8_13 = 0
                else
                    void* x21_3 = *arg1
                    char* x8_17 = *(x21_3 + 0xb8)
                    
                    if (x8_17 u>= *(x21_3 + 0xc0))
                        x8_13 = *(x21_3 + 0x30)
                        
                        if (x8_13 != 0)
                            int32_t x0_9 = (*(x21_3 + 0x10))(*(x21_3 + 0x28), x21_3 + 0x38, 
                                zx.q(*(x21_3 + 0x34)))
                            void* x9_22
                            
                            if (x0_9 == 0)
                                x8_13 = 0
                                *(x21_3 + 0x30) = 0
                                x9_22 = x21_3 + 0x39
                                *(x21_3 + 0x38) = 0
                            else
                                x8_13 = zx.d(*(x21_3 + 0x38))
                                x9_22 = &(x21_3 + 0x38)[sx.q(x0_9)]
                            
                            *(x21_3 + 0xb8) = x21_3 + 0x39
                            *(x21_3 + 0xc0) = x9_22
                            
                            if (x8_13 == 0xff)
                                goto label_ff82fc
                    else
                        *(x21_3 + 0xb8) = &x8_17[1]
                        x8_13 = zx.d(*x8_17)
                        
                        if (x8_13 == 0xff)
                        label_ff82fc:
                            void* x21_4 = *arg1
                            char* x8_19 = *(x21_4 + 0xb8)
                            uint32_t x8_20
                            
                            if (x8_19 u>= *(x21_4 + 0xc0))
                                x8_20 = *(x21_4 + 0x30)
                                
                                if (x8_20 != 0)
                                    int32_t x0_11 = (*(x21_4 + 0x10))(*(x21_4 + 0x28), 
                                        x21_4 + 0x38, zx.q(*(x21_4 + 0x34)))
                                    void* x9_27
                                    
                                    if (x0_11 == 0)
                                        x8_20 = 0
                                        *(x21_4 + 0x30) = 0
                                        x9_27 = x21_4 + 0x39
                                        *(x21_4 + 0x38) = 0
                                    else
                                        x8_20 = zx.d(*(x21_4 + 0x38))
                                        x9_27 = &(x21_4 + 0x38)[sx.q(x0_11)]
                                    
                                    *(x21_4 + 0xb8) = x21_4 + 0x39
                                    *(x21_4 + 0xc0) = x9_27
                            else
                                *(x21_4 + 0xb8) = &x8_19[1]
                                x8_20 = zx.d(*x8_19)
                            
                            int32_t x9_29
                            
                            while (true)
                                x9_29 = x8_20 & 0xff
                                
                                if (x9_29 != 0xff)
                                    break
                                
                                void* x28_2 = *arg1
                                char* x8_22 = *(x28_2 + 0xb8)
                                
                                if (x8_22 u< *(x28_2 + 0xc0))
                                    *(x28_2 + 0xb8) = &x8_22[1]
                                    x8_20 = zx.d(*x8_22)
                                else
                                    x8_20 = 0
                                    
                                    if (*(x28_2 + 0x30) != 0)
                                        int32_t x0_13 = (*(x28_2 + 0x10))(*(x28_2 + 0x28), 
                                            x28_2 + 0x38, zx.q(*(x28_2 + 0x34)))
                                        void* x9_34
                                        
                                        if (x0_13 == 0)
                                            x8_20 = 0
                                            *(x28_2 + 0x30) = 0
                                            x9_34 = x28_2 + 0x39
                                            *(x28_2 + 0x38) = 0
                                        else
                                            x8_20 = zx.d(*(x28_2 + 0x38))
                                            x9_34 = &(x28_2 + 0x38)[sx.q(x0_13)]
                                        
                                        *(x28_2 + 0xb8) = x28_2 + 0x39
                                        *(x28_2 + 0xc0) = x9_34
                            
                            if (x9_29 != 0)
                                arg1[0x905].b = x8_20.b
                                *(arg1 + 0x482c) = 1
                                break
                            
                            x8_13 = 0xff
                
                i_1 = *(arg1 + 0x4824)
                arg1[0x904].d |= x8_13 << (0x18 - i_1)
                *(arg1 + 0x4824) = i_1 + 8
            while (i_1 s< 0x11)
        
        if (x0_7 u>= 0x11)
            int64_t* x0_27
            void* x1_13
            x0_27, x1_13 = __assert2(
                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image.h", 
                0x773, "int stbi__extend_receive(stbi__jpeg *, int)", 
                "n >= 0 && n < (int) (sizeof(stbi__bmask)/sizeof(*stbi__bmask))")
            return sub_ff88e0(x0_27, x1_13) __tailcall
        
        int32_t x10_9 = arg1[0x904].d
        uint64_t x9_36 = zx.q(x0_7) << 2
        int32_t x12_3 = *(&data_868654 + x9_36)
        int32_t x8_26 = ror.d(x10_9, neg.d(x0_7))
        x8_24 = (*(&data_868698 + x9_36) & not.d(x10_9 s>> 0x1f)) + (x12_3 & x8_26)
        arg1[0x904].d = x8_26 & not.d(x12_3)
        *(arg1 + 0x4824) -= x0_7
    
    void* x9_39 = arg1 + muls.dp.d(arg6, 0x60)
    int32_t x8_28 = *(x9_39 + 0x46b8) + x8_24
    *(x9_39 + 0x46b8) = x8_28
    int32_t x28_3 = 1
    *arg2 = *arg7 * x8_28.w
    
    while (true)
        if (*(arg1 + 0x4824) s<= 0xf)
            int32_t i_2
            
            do
                uint32_t x8_34
                
                if (*(arg1 + 0x482c) != 0)
                    x8_34 = 0
                else
                    void* x21_5 = *arg1
                    char* x8_38 = *(x21_5 + 0xb8)
                    
                    if (x8_38 u>= *(x21_5 + 0xc0))
                        x8_34 = *(x21_5 + 0x30)
                        
                        if (x8_34 != 0)
                            int32_t x0_15 = (*(x21_5 + 0x10))(*(x21_5 + 0x28), x21_5 + 0x38, 
                                zx.q(*(x21_5 + 0x34)))
                            void* x9_47
                            
                            if (x0_15 == 0)
                                x8_34 = 0
                                *(x21_5 + 0x30) = 0
                                x9_47 = x21_5 + 0x39
                                *(x21_5 + 0x38) = 0
                            else
                                x8_34 = zx.d(*(x21_5 + 0x38))
                                x9_47 = &(x21_5 + 0x38)[sx.q(x0_15)]
                            
                            *(x21_5 + 0xb8) = x21_5 + 0x39
                            *(x21_5 + 0xc0) = x9_47
                            
                            if (x8_34 == 0xff)
                                goto label_ff857c
                    else
                        *(x21_5 + 0xb8) = &x8_38[1]
                        x8_34 = zx.d(*x8_38)
                        
                        if (x8_34 == 0xff)
                        label_ff857c:
                            void* x21_6 = *arg1
                            char* x8_40 = *(x21_6 + 0xb8)
                            uint32_t x8_41
                            
                            if (x8_40 u>= *(x21_6 + 0xc0))
                                x8_41 = *(x21_6 + 0x30)
                                
                                if (x8_41 != 0)
                                    int32_t x0_17 = (*(x21_6 + 0x10))(*(x21_6 + 0x28), 
                                        x21_6 + 0x38, zx.q(*(x21_6 + 0x34)))
                                    void* x9_52
                                    
                                    if (x0_17 == 0)
                                        x8_41 = 0
                                        *(x21_6 + 0x30) = 0
                                        x9_52 = x21_6 + 0x39
                                        *(x21_6 + 0x38) = 0
                                    else
                                        x8_41 = zx.d(*(x21_6 + 0x38))
                                        x9_52 = &(x21_6 + 0x38)[sx.q(x0_17)]
                                    
                                    *(x21_6 + 0xb8) = x21_6 + 0x39
                                    *(x21_6 + 0xc0) = x9_52
                            else
                                *(x21_6 + 0xb8) = &x8_40[1]
                                x8_41 = zx.d(*x8_40)
                            
                            int32_t x9_54
                            
                            while (true)
                                x9_54 = x8_41 & 0xff
                                
                                if (x9_54 != 0xff)
                                    break
                                
                                void* x24_1 = *arg1
                                char* x8_43 = *(x24_1 + 0xb8)
                                
                                if (x8_43 u< *(x24_1 + 0xc0))
                                    *(x24_1 + 0xb8) = &x8_43[1]
                                    x8_41 = zx.d(*x8_43)
                                else
                                    x8_41 = 0
                                    
                                    if (*(x24_1 + 0x30) != 0)
                                        int32_t x0_19 = (*(x24_1 + 0x10))(*(x24_1 + 0x28), 
                                            x24_1 + 0x38, zx.q(*(x24_1 + 0x34)))
                                        void* x9_59
                                        
                                        if (x0_19 == 0)
                                            x8_41 = 0
                                            *(x24_1 + 0x30) = 0
                                            x9_59 = x24_1 + 0x39
                                            *(x24_1 + 0x38) = 0
                                        else
                                            x8_41 = zx.d(*(x24_1 + 0x38))
                                            x9_59 = &(x24_1 + 0x38)[sx.q(x0_19)]
                                        
                                        *(x24_1 + 0xb8) = x24_1 + 0x39
                                        *(x24_1 + 0xc0) = x9_59
                            
                            if (x9_54 != 0)
                                arg1[0x905].b = x8_41.b
                                *(arg1 + 0x482c) = 1
                                break
                            
                            x8_34 = 0xff
                
                i_2 = *(arg1 + 0x4824)
                arg1[0x904].d |= x8_34 << (0x18 - i_2)
                *(arg1 + 0x4824) = i_2 + 8
            while (i_2 s< 0x11)
        
        uint64_t x9_60 = zx.q(arg1[0x904].d)
        uint64_t x8_47 = zx.q(*(arg5 + (x9_60 u>> 0x16 & 0x3fe)))
        
        if (x8_47.d != 0)
            int64_t x10_11 = (x8_47 u>> 4 & 0xf) + sx.q(x28_3)
            uint64_t x13_2 = zx.q(*(&data_8685ff + x10_11))
            int32_t x11_6 = x8_47.d & 0xf
            arg1[0x904].d = x9_60.d << x11_6
            *(arg1 + 0x4824) -= x11_6
            x28_3 = x10_11.d + 1
            arg2[x13_2] = arg7[x13_2] * (sx.d((x8_47.d).w) u>> 8).w
        label_ff84c0:
            
            if (x28_3 s< 0x40)
                continue
        else
            int32_t x0_21 = sub_ff88e0(arg1, arg4)
            
            if ((x0_21 & 0x80000000) != 0)
                break
            
            int32_t x25_2 = x0_21 & 0xf
            
            if (x25_2 != 0)
                int32_t x9_61 = *(arg1 + 0x4824)
                
                if (x9_61 s< x25_2)
                    int32_t i_3
                    
                    do
                        uint32_t x8_48
                        
                        if (*(arg1 + 0x482c) != 0)
                            x8_48 = 0
                        else
                            void* x21_7 = *arg1
                            char* x8_52 = *(x21_7 + 0xb8)
                            
                            if (x8_52 u>= *(x21_7 + 0xc0))
                                x8_48 = *(x21_7 + 0x30)
                                
                                if (x8_48 != 0)
                                    int32_t x0_23 = (*(x21_7 + 0x10))(*(x21_7 + 0x28), 
                                        x21_7 + 0x38, zx.q(*(x21_7 + 0x34)))
                                    void* x9_66
                                    
                                    if (x0_23 == 0)
                                        x8_48 = 0
                                        *(x21_7 + 0x30) = 0
                                        x9_66 = x21_7 + 0x39
                                        *(x21_7 + 0x38) = 0
                                    else
                                        x8_48 = zx.d(*(x21_7 + 0x38))
                                        x9_66 = &(x21_7 + 0x38)[sx.q(x0_23)]
                                    
                                    *(x21_7 + 0xb8) = x21_7 + 0x39
                                    *(x21_7 + 0xc0) = x9_66
                                    
                                    if (x8_48 == 0xff)
                                        goto label_ff875c
                            else
                                *(x21_7 + 0xb8) = &x8_52[1]
                                x8_48 = zx.d(*x8_52)
                                
                                if (x8_48 == 0xff)
                                label_ff875c:
                                    void* x21_8 = *arg1
                                    char* x8_54 = *(x21_8 + 0xb8)
                                    uint32_t x8_55
                                    
                                    if (x8_54 u>= *(x21_8 + 0xc0))
                                        x8_55 = *(x21_8 + 0x30)
                                        
                                        if (x8_55 == 0)
                                            goto label_ff87c4
                                        
                                    label_ff8794:
                                        int32_t x0_25 = (*(x21_8 + 0x10))(*(x21_8 + 0x28), 
                                            x21_8 + 0x38, zx.q(*(x21_8 + 0x34)))
                                        void* x9_71
                                        
                                        if (x0_25 == 0)
                                            x8_55 = 0
                                            *(x21_8 + 0x30) = 0
                                            x9_71 = x21_8 + 0x39
                                            *(x21_8 + 0x38) = 0
                                        else
                                            x8_55 = zx.d(*(x21_8 + 0x38))
                                            x9_71 = x21_8 + 0x38 + sx.q(x0_25)
                                        
                                        *(x21_8 + 0xb8) = x21_8 + 0x39
                                        *(x21_8 + 0xc0) = x9_71
                                        goto label_ff87c4
                                    
                                    int32_t x9_72
                                    
                                    while (true)
                                        *(x21_8 + 0xb8) = &x8_54[1]
                                        x8_55 = zx.d(*x8_54)
                                    label_ff87c4:
                                        x9_72 = x8_55 & 0xff
                                        
                                        if (x9_72 != 0xff)
                                            break
                                        
                                        x21_8 = *arg1
                                        x8_54 = *(x21_8 + 0xb8)
                                        
                                        if (x8_54 u>= *(x21_8 + 0xc0))
                                            x8_55 = 0
                                            
                                            if (*(x21_8 + 0x30) != 0)
                                                goto label_ff8794
                                            
                                            goto label_ff87c4
                                    
                                    if (x9_72 != 0)
                                        x9_61 = *(arg1 + 0x4824)
                                        arg1[0x905].b = x8_55.b
                                        *(arg1 + 0x482c) = 1
                                        break
                                    
                                    x8_48 = 0xff
                        
                        i_3 = *(arg1 + 0x4824)
                        x9_61 = i_3 + 8
                        arg1[0x904].d |= x8_48 << (0x18 - i_3)
                        *(arg1 + 0x4824) = x9_61
                    while (i_3 s< 0x11)
                
                int32_t x10_18 = arg1[0x904].d
                uint64_t x12_8 = zx.q(x25_2) << 2
                int64_t x8_58 = zx.q(x0_21 u>> 4) + sx.q(x28_3)
                int32_t x13_3 = *(&data_868654 + x12_8)
                x28_3 = x8_58.d + 1
                uint64_t x8_59 = zx.q(*(&data_8685ff + x8_58))
                int32_t x11_12 = ror.d(x10_18, neg.d(x25_2))
                int16_t x12_9 = (*(&data_868698 + x12_8)).w
                arg1[0x904].d = x11_12 & not.d(x13_3)
                *(arg1 + 0x4824) = x9_61 - x25_2
                arg2[x8_59] =
                    arg7[x8_59] * ((x12_9 & (not.d(x10_18 s>> 0x1f)).w) + (x13_3.w & x11_12.w))
                goto label_ff84c0
            
            if (x0_21 == 0xf0)
                x28_3 += 0x10
                goto label_ff84c0
        
        return 1

data_2423720 = "bad huffman code"
return 0
