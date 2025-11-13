// 函数: sub_1008f28
// 地址: 0x1008f28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_68 = 0

if (arg3 s< 1)
    return 

int32_t x25_1 = arg2 - arg5
char* x22_1 = arg1
int32_t x24_1 = 0
uint64_t x23_1 = zx.q(arg5)
uint64_t x27_1 = zx.q(arg5 - 2)
uint64_t x28_1 = zx.q(x25_1 + 1)

do
    memset(&var_68, 0, x23_1)
    int32_t x8_4
    
    if (x27_1.d u<= 3)
        switch (x27_1)
            case 0
                if ((x25_1 & 0x80000000) != 0)
                    goto label_1009164
                
                int64_t x9_2 = 0
                x8_4 = 0
                
                do
                    uint32_t x10_1 = zx.d(x22_1[x9_2])
                    uint32_t x11_2 = zx.d(*(&var_68 | (x9_2 & 7)))
                    *(&var_68 | (zx.q(x9_2.d + 2) & 7)) = x10_1.b
                    x8_4 += x10_1 - x11_2
                    x22_1[x9_2] = (x8_4 u>> 1).b
                    x9_2 += 1
                while (x28_1 != x9_2)
                
                goto label_1009154
            case 1
                if ((x25_1 & 0x80000000) != 0)
                    goto label_1009164
                
                int64_t x9_4 = 0
                x8_4 = 0
                
                do
                    uint32_t x10_7 = zx.d(x22_1[x9_4])
                    uint32_t x11_6 = zx.d(*(&var_68 | (x9_4 & 7)))
                    *(&var_68 | (zx.q(x9_4.d + 3) & 7)) = x10_7.b
                    x8_4 += x10_7 - x11_6
                    x22_1[x9_4] = (x8_4 u/ 3).b
                    x9_4 += 1
                while (x28_1 != x9_4)
                
                goto label_1009154
            case 2
                if ((x25_1 & 0x80000000) != 0)
                    goto label_1009164
                
                int64_t x9_5 = 0
                x8_4 = 0
                
                do
                    uint32_t x10_11 = zx.d(x22_1[x9_5])
                    uint32_t x11_8 = zx.d(*(&var_68 | (x9_5 & 7)))
                    *(&var_68 | (zx.q(x9_5.d + 4) & 7)) = x10_11.b
                    x8_4 += x10_11 - x11_8
                    x22_1[x9_5] = (x8_4 u>> 2).b
                    x9_5 += 1
                while (x28_1 != x9_5)
                
                goto label_1009154
            case 3
                if ((x25_1 & 0x80000000) != 0)
                    goto label_1009164
                
                int64_t x9_6 = 0
                x8_4 = 0
                
                do
                    uint32_t x10_14 = zx.d(x22_1[x9_6])
                    uint32_t x11_10 = zx.d(*(&var_68 | (x9_6 & 7)))
                    *(&var_68 | (zx.q(x9_6.d + 5) & 7)) = x10_14.b
                    x8_4 += x10_14 - x11_10
                    x22_1[x9_6] = (x8_4 u/ 5).b
                    x9_6 += 1
                while (x28_1 != x9_6)
                
                goto label_1009154
    else
        int32_t x9_7
        
        if ((x25_1 & 0x80000000) != 0)
        label_1009164:
            x9_7 = 0
            x8_4 = 0
            
            if (0 s< arg2)
            label_1009174:
                uint64_t x10_18 = zx.q(x9_7)
                int32_t i_1 = arg2 - x9_7
                int32_t i
                
                do
                    if (zx.d(x22_1[x10_18]) != 0)
                        char* x0_1
                        int32_t x1
                        int32_t x2_1
                        int32_t x3
                        int32_t x4
                        x0_1, x1, x2_1, x3, x4 = __assert2(
                            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/"
                        "ExternalCode/stb/stb_truetype.h", 
                            0xfa8, 
                            "void stbtt__h_prefilter(unsigned char *, int, int, int, unsigned int)", 
                            "pixels[i] == 0")
                        return sub_10091ec(x0_1, x1, x2_1, x3, x4) __tailcall
                    
                    i = i_1
                    i_1 -= 1
                    x8_4 -= zx.d(*(&var_68 | (x10_18 & 7)))
                    x22_1[x10_18] = (x8_4 u/ arg5).b
                    x10_18 += 1
                while (i != 1)
        else
            int64_t x9_3 = 0
            x8_4 = 0
            
            do
                uint32_t x10_4 = zx.d(x22_1[x9_3])
                uint32_t x11_4 = zx.d(*(&var_68 | (x9_3 & 7)))
                *(&var_68 | (zx.q(x23_1.d + x9_3.d) & 7)) = x10_4.b
                x8_4 += x10_4 - x11_4
                x22_1[x9_3] = (x8_4 u/ arg5).b
                x9_3 += 1
            while (x28_1 != x9_3)
            
        label_1009154:
            x9_7 = x28_1.d
            
            if (x9_7 s< arg2)
                goto label_1009174
    x24_1 += 1
    x22_1 = &x22_1[sx.q(arg4)]
while (x24_1 != arg3)
