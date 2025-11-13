// 函数: sub_ff88e0
// 地址: 0xff88e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x4824) s<= 0xf)
    int32_t i
    
    do
        uint32_t x8_1
        
        if (*(arg1 + 0x482c) != 0)
            x8_1 = 0
        else
            void* x23_1 = *arg1
            char* x8_5 = *(x23_1 + 0xb8)
            
            if (x8_5 u>= *(x23_1 + 0xc0))
                x8_1 = *(x23_1 + 0x30)
                
                if (x8_1 != 0)
                    int32_t x0_1 =
                        (*(x23_1 + 0x10))(*(x23_1 + 0x28), x23_1 + 0x38, zx.q(*(x23_1 + 0x34)))
                    
                    if (x0_1 == 0)
                        x8_1 = 0
                        *(x23_1 + 0x30) = 0
                        *(x23_1 + 0x38) = 0
                        *(x23_1 + 0xb8) = x23_1 + 0x39
                        *(x23_1 + 0xc0) = x23_1 + 0x39
                    else
                        x8_1 = zx.d(*(x23_1 + 0x38))
                        *(x23_1 + 0xb8) = x23_1 + 0x39
                        *(x23_1 + 0xc0) = &(x23_1 + 0x38)[sx.q(x0_1)]
                        
                        if (x8_1 == 0xff)
                            goto label_ff89c8
            else
                *(x23_1 + 0xb8) = &x8_5[1]
                x8_1 = zx.d(*x8_5)
                
                if (x8_1 == 0xff)
                label_ff89c8:
                    void* x23_2 = *arg1
                    char* x8_7 = *(x23_2 + 0xb8)
                    uint32_t x8_8
                    
                    if (x8_7 u>= *(x23_2 + 0xc0))
                        x8_8 = *(x23_2 + 0x30)
                        
                        if (x8_8 == 0)
                            goto label_ff8a30
                        
                    label_ff8a00:
                        int32_t x0_3 =
                            (*(x23_2 + 0x10))(*(x23_2 + 0x28), x23_2 + 0x38, zx.q(*(x23_2 + 0x34)))
                        void* x9_11
                        
                        if (x0_3 == 0)
                            x8_8 = 0
                            *(x23_2 + 0x30) = 0
                            x9_11 = x23_2 + 0x39
                            *(x23_2 + 0x38) = 0
                        else
                            x8_8 = zx.d(*(x23_2 + 0x38))
                            x9_11 = x23_2 + 0x38 + sx.q(x0_3)
                        
                        *(x23_2 + 0xb8) = x23_2 + 0x39
                        *(x23_2 + 0xc0) = x9_11
                        goto label_ff8a30
                    
                    int32_t x9_12
                    
                    while (true)
                        *(x23_2 + 0xb8) = &x8_7[1]
                        x8_8 = zx.d(*x8_7)
                    label_ff8a30:
                        x9_12 = x8_8 & 0xff
                        
                        if (x9_12 != 0xff)
                            break
                        
                        x23_2 = *arg1
                        x8_7 = *(x23_2 + 0xb8)
                        
                        if (x8_7 u>= *(x23_2 + 0xc0))
                            x8_8 = 0
                            
                            if (*(x23_2 + 0x30) != 0)
                                goto label_ff8a00
                            
                            goto label_ff8a30
                    
                    if (x9_12 != 0)
                        arg1[0x905].b = x8_8.b
                        *(arg1 + 0x482c) = 1
                        break
                    
                    x8_1 = 0xff
        
        i = *(arg1 + 0x4824)
        arg1[0x904].d |= x8_1 << (0x18 - i)
        *(arg1 + 0x4824) = i + 8
    while (i s< 0x11)

uint64_t x8_10 = zx.q(arg1[0x904].d)
uint64_t x9_16 = zx.q(*(arg2 + (x8_10 u>> 0x17)))

if (x9_16 == 0xff)
    int64_t x9_18 = 0
    int32_t i_1
    
    do
        i_1 = *(arg2 + 0x62c + (x9_18 << 2))
        x9_18 += 1
    while (x8_10.d u>> 0x10 u>= i_1)
    int32_t x10_7 = *(arg1 + 0x4824)
    
    if (x9_18.d == 8)
        *(arg1 + 0x4824) = x10_7 - 0x10
    else if (x10_7 s>= x9_18.d + 9)
        uint64_t x12_3 = zx.q(x9_18.d + 9) << 2
        int32_t x13_3 =
            (*(&data_868654 + x12_3) & x8_10.d u>> (0x17 - x9_18.d)) + *(arg2 + x12_3 + 0x64c)
        void* x12_7 = arg2 + sx.q(x13_3)
        uint64_t x15_1 = zx.q(*(x12_7 + 0x500))
        
        if ((x8_10.d u>> neg.d(x15_1.d) & *(&data_868654 + (x15_1 << 2)))
                != zx.d(*(arg2 + (sx.q(x13_3) << 1) + 0x200)))
            return sub_ff8bac(__assert2(
                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image.h", 
                0x75e, "int stbi__jpeg_huff_decode(stbi__jpeg *, stbi__huffman *)", 
                "(((j->code_buffer) >> (32 - h->size[c])) & stbi__bmask[h->size[c]]) == h->code[c]"))
                __tailcall
        
        arg1[0x904].d = x8_10.d << (x9_18.d + 9)
        *(arg1 + 0x4824) = x10_7 - x9_18.d - 9
        return zx.q(*(x12_7 + 0x400))
else
    void* x9_17 = arg2 + x9_16
    uint32_t x10_5 = zx.d(*(x9_17 + 0x500))
    int32_t x11_2 = *(arg1 + 0x4824)
    
    if (x11_2 s>= x10_5)
        arg1[0x904].d = x8_10.d << x10_5
        *(arg1 + 0x4824) = x11_2 - x10_5
        return zx.q(*(x9_17 + 0x400))

return 0xffffffff
