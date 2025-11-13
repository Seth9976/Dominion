// 函数: sub_10091ec
// 地址: 0x10091ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_68 = 0

if (arg2 s< 1)
    return 

int32_t x8_1 = arg3 - arg5
char* x22_1 = arg1
int32_t x24_1 = 0
uint64_t x23_1 = zx.q(arg5)
int64_t x26_1 = sx.q(arg4)
uint64_t x27_1 = zx.q(arg5 - 2)
uint64_t x28_1 = zx.q(x8_1 + 1)

do
    memset(&var_68, 0, x23_1)
    int32_t x8_4
    
    if (x27_1.d u<= 3)
        switch (x27_1)
            case 0
                if ((x8_1 & 0x80000000) != 0)
                    goto label_1009460
                
                int64_t x9_2 = 0
                x8_4 = 0
                char* x10_1 = x22_1
                
                do
                    uint32_t x11_1 = zx.d(*x10_1)
                    uint32_t x12_2 = zx.d(*(&var_68 | (x9_2 & 7)))
                    *(&var_68 | (zx.q(x9_2.d + 2) & 7)) = x11_1.b
                    x8_4 += x11_1 - x12_2
                    x9_2 += 1
                    *x10_1 = (x8_4 u>> 1).b
                    x10_1 = &x10_1[x26_1]
                while (x28_1 != x9_2)
                
                goto label_1009450
            case 1
                if ((x8_1 & 0x80000000) != 0)
                    goto label_1009460
                
                int64_t x9_4 = 0
                x8_4 = 0
                char* x10_3 = x22_1
                
                do
                    uint8_t* x13_3 = &var_68 | (zx.q(x9_4.d + 3) & 7)
                    uint32_t x11_7 = zx.d(*x10_3)
                    uint32_t x12_7 = zx.d(*(&var_68 | (x9_4 & 7)))
                    x9_4 += 1
                    *x13_3 = x11_7.b
                    x8_4 += x11_7 - x12_7
                    *x10_3 = (x8_4 u/ 3).b
                    x10_3 = &x10_3[x26_1]
                while (x28_1 != x9_4)
                
                goto label_1009450
            case 2
                if ((x8_1 & 0x80000000) != 0)
                    goto label_1009460
                
                int64_t x9_5 = 0
                x8_4 = 0
                char* x10_4 = x22_1
                
                do
                    uint32_t x11_11 = zx.d(*x10_4)
                    uint32_t x12_9 = zx.d(*(&var_68 | (x9_5 & 7)))
                    *(&var_68 | (zx.q(x9_5.d + 4) & 7)) = x11_11.b
                    x8_4 += x11_11 - x12_9
                    x9_5 += 1
                    *x10_4 = (x8_4 u>> 2).b
                    x10_4 = &x10_4[x26_1]
                while (x28_1 != x9_5)
                
                goto label_1009450
            case 3
                if ((x8_1 & 0x80000000) != 0)
                    goto label_1009460
                
                int64_t x9_6 = 0
                x8_4 = 0
                char* x10_5 = x22_1
                
                do
                    uint8_t* x13_5 = &var_68 | (zx.q(x9_6.d + 5) & 7)
                    uint32_t x11_14 = zx.d(*x10_5)
                    uint32_t x12_12 = zx.d(*(&var_68 | (x9_6 & 7)))
                    x9_6 += 1
                    *x13_5 = x11_14.b
                    x8_4 += x11_14 - x12_12
                    *x10_5 = (x8_4 u/ 5).b
                    x10_5 = &x10_5[x26_1]
                while (x28_1 != x9_6)
                
                goto label_1009450
    else
        int32_t x9_7
        
        if ((x8_1 & 0x80000000) != 0)
        label_1009460:
            x9_7 = 0
            x8_4 = 0
            
            if (0 s< arg3)
            label_1009470:
                int64_t x10_6 = sx.q(x9_7)
                int64_t x11_18 = x26_1 * x10_6
                int32_t i_1 = arg3 - x9_7
                int32_t i
                
                do
                    if (zx.d(x22_1[x11_18]) != 0)
                        uint64_t x0_1
                        void* x1
                        int32_t* x2_1
                        int32_t x3
                        int64_t x4
                        x0_1, x1, x2_1, x3, x4 = __assert2(
                            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/"
                        "ExternalCode/stb/stb_truetype.h", 
                            0xfe6, 
                            "void stbtt__v_prefilter(unsigned char *, int, int, int, unsigned int)", 
                            "pixels[i*stride_in_bytes] == 0")
                        return stbtt_PackFontRangesRenderIntoRects(x0_1, x1, x2_1, x3, x4)
                            __tailcall
                    
                    uint32_t x12_15 = zx.d(*(&var_68 | (x10_6 & 7)))
                    i = i_1
                    i_1 -= 1
                    x10_6 += 1
                    x8_4 -= x12_15
                    x22_1[x11_18] = (x8_4 u/ arg5).b
                    x11_18 += x26_1
                while (i != 1)
        else
            int64_t x9_3 = 0
            x8_4 = 0
            char* x10_2 = x22_1
            
            do
                uint32_t x11_4 = zx.d(*x10_2)
                uint32_t x12_4 = zx.d(*(&var_68 | (x9_3 & 7)))
                *(&var_68 | (zx.q(x23_1.d + x9_3.d) & 7)) = x11_4.b
                x8_4 += x11_4 - x12_4
                x9_3 += 1
                *x10_2 = (x8_4 u/ arg5).b
                x10_2 = &x10_2[x26_1]
            while (x28_1 != x9_3)
            
        label_1009450:
            x9_7 = x28_1.d
            
            if (x9_7 s< arg3)
                goto label_1009470
    x24_1 += 1
    x22_1 = &x22_1[1]
while (x24_1 != arg2)
