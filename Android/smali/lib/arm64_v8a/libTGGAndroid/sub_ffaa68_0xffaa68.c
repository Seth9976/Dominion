// 函数: sub_ffaa68
// 地址: 0xffaa68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* const x19 = arg1

if (arg3 != arg2)
    if (arg3 - 1 u>= 4)
        __assert2("C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image.h", 
            0x5f5, 
            "unsigned char *stbi__convert_format(unsigned char *, int, int, unsigned int, unsigned int)", 
            "req_comp >= 1 && req_comp <= 4")
    label_ffb9bc:
        int64_t x0_87
        int32_t x1_1
        int32_t x2
        int32_t x3
        int32_t x4_1
        x0_87, x1_1, x2, x3, x4_1 = __assert2(
            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image.h", 0x612, 
            "unsigned char *stbi__convert_format(unsigned char *, int, int, unsigned int, unsigned int)", 
            &data_75c628)
        return sub_ffb9c0(x0_87, x1_1, x2, x3, x4_1) __tailcall
    
    if (((arg4 | arg3) & 0x80000000) == 0 && (arg4 == 0 || 0x7fffffff s/ arg4 s>= arg3))
        int32_t x25_1 = arg4 * arg3
        
        if (((x25_1 | arg5) & 0x80000000) == 0 && (arg5 == 0 || 0x7fffffff s/ arg5 s>= x25_1))
            void* x0_1
            int128_t v4_1
            int128_t v5_1
            int128_t v6_1
            uint128_t v16_1
            uint128_t v17_1
            uint128_t v18_1
            uint128_t v19_1
            uint128_t v20_1
            uint128_t v21_1
            uint128_t v22_1
            uint128_t v23_1
            x0_1, v4_1, v5_1, v6_1, v16_1, v17_1, v18_1, v19_1, v20_1, v21_1, v22_1, v23_1 =
                malloc(sx.q(x25_1 * arg5))
            
            if (x0_1 != 0)
                if (arg5 s>= 1)
                    uint64_t x9_1 = zx.q(arg4 - 1)
                    uint64_t x5_1 = zx.q(arg3 + (arg2 << 3) - 0xa)
                    int64_t j_60 = (x9_1 + 1) & 0x1fffffff0
                    int64_t x6_1 = (x9_1 + 1) & 0x18
                    int64_t x6_2
                    
                    if (((x9_1 + 1) & 0x1f) == 0)
                        x6_2 = 0x20
                    else
                        x6_2 = (x9_1 + 1) & 0x1f
                    
                    int64_t j_63 = (x9_1 + 1) & 0x1ffffffe0
                    int64_t x11_4
                    
                    if (((x9_1 + 1) & 7) == 0)
                        x11_4 = 8
                    else
                        x11_4 = (x9_1 + 1) & 7
                    
                    int64_t x7_1 = (x9_1 + 1) & 0x1fffffff8
                    int64_t x10_1 = j_60 << 1
                    int32_t x28_2 = x9_1.d - j_60.d
                    int64_t x26_1
                    
                    if (((x9_1 + 1) & 0xf) == 0)
                        x26_1 = 0x10
                    else
                        x26_1 = (x9_1 + 1) & 0xf
                    
                    int64_t fp_2 = j_63 << 2
                    int32_t x28_3 = x9_1.d - x7_1.d
                    int64_t x27_2 = not.q(x9_1) + x11_4
                    int32_t fp_3 = x9_1.d - j_63.d
                    int64_t x27_3 = x7_1 << 1
                    int64_t x28_4 = x7_1 << 2
                    int64_t fp_4 = neg.q(x7_1)
                    int64_t x11_5 = x9_1 + 1 - x11_4
                    int64_t x28_5 = j_63 << 1
                    int64_t x10_2 = x10_1 + j_60
                    int64_t x0_3 = x27_3 + x7_1
                    int64_t j_61 = x9_1 + 1 - x6_2
                    int64_t x0_4 = x28_5 + j_63
                    int64_t x0_5 = j_61 << 1
                    int64_t x0_6 = x0_5 + j_61
                    int32_t x0_7 = x9_1.d - x11_5.d
                    int32_t x7_2 = x9_1.d - j_61.d
                    int64_t x0_8 = x11_5 << 1
                    int64_t x6_3 = x11_5 << 2
                    int64_t j_62 = x9_1 + 1 - x26_1
                    int64_t x11_6 = x0_8 + x11_5
                    int32_t x17_1 = 0
                    int32_t x15_1 = 0
                    int64_t i = 0
                    v4_1.b = 0x4d
                    v4_1:1.b = 0x4d
                    v4_1:2.b = 0x4d
                    v4_1:3.b = 0x4d
                    v4_1:4.b = 0x4d
                    v4_1:5.b = 0x4d
                    v4_1:6.b = 0x4d
                    v4_1:7.b = 0x4d
                    v5_1.b = 0x96
                    v5_1:1.b = 0x96
                    v5_1:2.b = 0x96
                    v5_1:3.b = 0x96
                    v5_1:4.b = 0x96
                    v5_1:5.b = 0x96
                    v5_1:6.b = 0x96
                    v5_1:7.b = 0x96
                    v6_1.b = 0x1d
                    v6_1:1.b = 0x1d
                    v6_1:2.b = 0x1d
                    v6_1:3.b = 0x1d
                    v6_1:4.b = 0x1d
                    v6_1:5.b = 0x1d
                    v6_1:6.b = 0x1d
                    v6_1:7.b = 0x1d
                    
                    do
                        if (x5_1.d u> 0x19)
                            goto label_ffb9bc
                        
                        uint64_t x26_2 = zx.q(x17_1)
                        int32_t x17_2 = i.d * arg4
                        uint64_t x27_4 = zx.q(x15_1)
                        int128_t* x24_3 = x19 + 0x10 + x27_4
                        char* lr_1 = x0_1 + x26_2
                        char* x28_6 = x0_1 + 0x40 + x26_2
                        void* x6_4 = x19 + 0x20 + x27_4
                        char* x15_3 = x19 + x27_4
                        char* x17_3 = x19 + zx.q(x17_2 * arg2)
                        char* fp_6 = x0_1 + zx.q(x17_2 * arg3)
                        
                        switch (x5_1)
                            case 0
                                if ((x9_1.d & 0x80000000) == 0)
                                    int32_t x15_4 = x9_1.d
                                    
                                    if (x9_1.d u< 7)
                                        goto label_ffb7f8
                                    
                                    int64_t j_64
                                    
                                    if (x9_1.d u>= 0x1f)
                                        int64_t j_36 = j_63
                                        char* x15_28 = x0_1 + 0x20 + x26_2
                                        int64_t j
                                        
                                        do
                                            v16_1 = x24_3[-1]
                                            v18_1 = *x24_3
                                            *(x15_28 - 0x20) = v16_1.b
                                            *(x15_28 - 0x1f) = 0xff
                                            *(x15_28 - 0x1e) = v16_1:1.b
                                            *(x15_28 - 0x1d) = 0xff
                                            *(x15_28 - 0x1c) = v16_1:2.b
                                            *(x15_28 - 0x1b) = 0xff
                                            *(x15_28 - 0x1a) = v16_1:3.b
                                            *(x15_28 - 0x19) = 0xff
                                            *(x15_28 - 0x18) = v16_1:4.b
                                            *(x15_28 - 0x17) = 0xff
                                            *(x15_28 - 0x16) = v16_1:5.b
                                            *(x15_28 - 0x15) = 0xff
                                            *(x15_28 - 0x14) = v16_1:6.b
                                            *(x15_28 - 0x13) = 0xff
                                            *(x15_28 - 0x12) = v16_1:7.b
                                            *(x15_28 - 0x11) = 0xff
                                            *(x15_28 - 0x10) = v16_1:8.b
                                            *(x15_28 - 0xf) = 0xff
                                            *(x15_28 - 0xe) = v16_1:9.b
                                            *(x15_28 - 0xd) = 0xff
                                            *(x15_28 - 0xc) = v16_1:0xa.b
                                            *(x15_28 - 0xb) = 0xff
                                            *(x15_28 - 0xa) = v16_1:0xb.b
                                            *(x15_28 - 9) = 0xff
                                            *(x15_28 - 8) = v16_1:0xc.b
                                            *(x15_28 - 7) = 0xff
                                            *(x15_28 - 6) = v16_1:0xd.b
                                            *(x15_28 - 5) = 0xff
                                            *(x15_28 - 4) = v16_1:0xe.b
                                            *(x15_28 - 3) = 0xff
                                            *(x15_28 - 2) = v16_1:0xf.b
                                            *(x15_28 - 1) = 0xff
                                            *x15_28 = v18_1.b
                                            x15_28[1] = 0xff
                                            x15_28[2] = v18_1:1.b
                                            x15_28[3] = 0xff
                                            x15_28[4] = v18_1:2.b
                                            x15_28[5] = 0xff
                                            x15_28[6] = v18_1:3.b
                                            x15_28[7] = 0xff
                                            x15_28[8] = v18_1:4.b
                                            x15_28[9] = 0xff
                                            x15_28[0xa] = v18_1:5.b
                                            x15_28[0xb] = 0xff
                                            x15_28[0xc] = v18_1:6.b
                                            x15_28[0xd] = 0xff
                                            x15_28[0xe] = v18_1:7.b
                                            x15_28[0xf] = 0xff
                                            x15_28[0x10] = v18_1:8.b
                                            x15_28[0x11] = 0xff
                                            x15_28[0x12] = v18_1:9.b
                                            x15_28[0x13] = 0xff
                                            x15_28[0x14] = v18_1:0xa.b
                                            x15_28[0x15] = 0xff
                                            x15_28[0x16] = v18_1:0xb.b
                                            x15_28[0x17] = 0xff
                                            x15_28[0x18] = v18_1:0xc.b
                                            x15_28[0x19] = 0xff
                                            x15_28[0x1a] = v18_1:0xd.b
                                            x15_28[0x1b] = 0xff
                                            x15_28[0x1c] = v18_1:0xe.b
                                            x15_28[0x1d] = 0xff
                                            x15_28[0x1e] = v18_1:0xf.b
                                            x15_28[0x1f] = 0xff
                                            x24_3 = &x24_3[2]
                                            j = j_36
                                            j_36 -= 0x20
                                            x15_28 = &x15_28[0x40]
                                        while (j != 0x20)
                                        
                                        if (x9_1 + 1 != j_63)
                                            j_64 = j_63
                                            
                                            if (x6_1 != 0)
                                                goto label_ffafd4
                                            
                                            x17_3 = &x17_3[j_63]
                                            fp_6 = &fp_6[x28_5]
                                            x15_4 = fp_3
                                        label_ffb7f8:
                                            int32_t j_1 = x15_4 + 1
                                            
                                            do
                                                char x0_76 = *x17_3
                                                x17_3 = &x17_3[1]
                                                j_1 -= 1
                                                fp_6[1] = 0xff
                                                *fp_6 = x0_76
                                                fp_6 = &fp_6[2]
                                            while (j_1 s> 0)
                                    else
                                        j_64 = 0
                                    label_ffafd4:
                                        void* x6_14 = x0_1 + x26_2 + (j_64 << 1)
                                        fp_6 = &fp_6[x27_3]
                                        x17_3 = &x17_3[x7_1]
                                        void* x15_34 = x19 + j_64 + x27_4
                                        int64_t j_50 = fp_4 + j_64
                                        int64_t j_2
                                        
                                        do
                                            int64_t v2_1 = *x15_34
                                            x15_34 += 8
                                            j_2 = j_50
                                            j_50 += 8
                                            *x6_14 = v2_1.b
                                            *(x6_14 + 1) = 0xff
                                            *(x6_14 + 2) = v2_1:1.b
                                            *(x6_14 + 3) = 0xff
                                            *(x6_14 + 4) = v2_1:2.b
                                            *(x6_14 + 5) = 0xff
                                            *(x6_14 + 6) = v2_1:3.b
                                            *(x6_14 + 7) = 0xff
                                            *(x6_14 + 8) = v2_1:4.b
                                            *(x6_14 + 9) = 0xff
                                            *(x6_14 + 0xa) = v2_1:5.b
                                            *(x6_14 + 0xb) = 0xff
                                            *(x6_14 + 0xc) = v2_1:6.b
                                            *(x6_14 + 0xd) = 0xff
                                            *(x6_14 + 0xe) = v2_1:7.b
                                            *(x6_14 + 0xf) = 0xff
                                            x6_14 += 0x10
                                        while (j_2 != -8)
                                        x15_4 = x28_3
                                        
                                        if (x9_1 + 1 != x7_1)
                                            goto label_ffb7f8
                            case 1
                                if ((x9_1.d & 0x80000000) == 0)
                                    int32_t x15_5 = x9_1.d
                                    
                                    if (x9_1.d u< 7)
                                        goto label_ffb82c
                                    
                                    int64_t j_65
                                    
                                    if (x9_1.d u>= 0x1f)
                                        int64_t j_43 = j_63
                                        int64_t j_3
                                        
                                        do
                                            v16_1 = x24_3[-1]
                                            v19_1 = *x24_3
                                            j_3 = j_43
                                            j_43 -= 0x20
                                            x24_3 = &x24_3[2]
                                            *lr_1 = v16_1.b
                                            lr_1[1] = v16_1.b
                                            lr_1[2] = v16_1.b
                                            lr_1[3] = v16_1:1.b
                                            lr_1[4] = v16_1:1.b
                                            lr_1[5] = v16_1:1.b
                                            lr_1[6] = v16_1:2.b
                                            lr_1[7] = v16_1:2.b
                                            lr_1[8] = v16_1:2.b
                                            lr_1[9] = v16_1:3.b
                                            lr_1[0xa] = v16_1:3.b
                                            lr_1[0xb] = v16_1:3.b
                                            lr_1[0xc] = v16_1:4.b
                                            lr_1[0xd] = v16_1:4.b
                                            lr_1[0xe] = v16_1:4.b
                                            lr_1[0xf] = v16_1:5.b
                                            lr_1[0x10] = v16_1:5.b
                                            lr_1[0x11] = v16_1:5.b
                                            lr_1[0x12] = v16_1:6.b
                                            lr_1[0x13] = v16_1:6.b
                                            lr_1[0x14] = v16_1:6.b
                                            lr_1[0x15] = v16_1:7.b
                                            lr_1[0x16] = v16_1:7.b
                                            lr_1[0x17] = v16_1:7.b
                                            lr_1[0x18] = v16_1:8.b
                                            lr_1[0x19] = v16_1:8.b
                                            lr_1[0x1a] = v16_1:8.b
                                            lr_1[0x1b] = v16_1:9.b
                                            lr_1[0x1c] = v16_1:9.b
                                            lr_1[0x1d] = v16_1:9.b
                                            lr_1[0x1e] = v16_1:0xa.b
                                            lr_1[0x1f] = v16_1:0xa.b
                                            lr_1[0x20] = v16_1:0xa.b
                                            lr_1[0x21] = v16_1:0xb.b
                                            lr_1[0x22] = v16_1:0xb.b
                                            lr_1[0x23] = v16_1:0xb.b
                                            lr_1[0x24] = v16_1:0xc.b
                                            lr_1[0x25] = v16_1:0xc.b
                                            lr_1[0x26] = v16_1:0xc.b
                                            lr_1[0x27] = v16_1:0xd.b
                                            lr_1[0x28] = v16_1:0xd.b
                                            lr_1[0x29] = v16_1:0xd.b
                                            lr_1[0x2a] = v16_1:0xe.b
                                            lr_1[0x2b] = v16_1:0xe.b
                                            lr_1[0x2c] = v16_1:0xe.b
                                            lr_1[0x2d] = v16_1:0xf.b
                                            lr_1[0x2e] = v16_1:0xf.b
                                            lr_1[0x2f] = v16_1:0xf.b
                                            lr_1[0x30] = v19_1.b
                                            lr_1[0x31] = v19_1.b
                                            lr_1[0x32] = v19_1.b
                                            lr_1[0x33] = v19_1:1.b
                                            lr_1[0x34] = v19_1:1.b
                                            lr_1[0x35] = v19_1:1.b
                                            lr_1[0x36] = v19_1:2.b
                                            lr_1[0x37] = v19_1:2.b
                                            lr_1[0x38] = v19_1:2.b
                                            lr_1[0x39] = v19_1:3.b
                                            lr_1[0x3a] = v19_1:3.b
                                            lr_1[0x3b] = v19_1:3.b
                                            lr_1[0x3c] = v19_1:4.b
                                            lr_1[0x3d] = v19_1:4.b
                                            lr_1[0x3e] = v19_1:4.b
                                            lr_1[0x3f] = v19_1:5.b
                                            lr_1[0x40] = v19_1:5.b
                                            lr_1[0x41] = v19_1:5.b
                                            lr_1[0x42] = v19_1:6.b
                                            lr_1[0x43] = v19_1:6.b
                                            lr_1[0x44] = v19_1:6.b
                                            lr_1[0x45] = v19_1:7.b
                                            lr_1[0x46] = v19_1:7.b
                                            lr_1[0x47] = v19_1:7.b
                                            lr_1[0x48] = v19_1:8.b
                                            lr_1[0x49] = v19_1:8.b
                                            lr_1[0x4a] = v19_1:8.b
                                            lr_1[0x4b] = v19_1:9.b
                                            lr_1[0x4c] = v19_1:9.b
                                            lr_1[0x4d] = v19_1:9.b
                                            lr_1[0x4e] = v19_1:0xa.b
                                            lr_1[0x4f] = v19_1:0xa.b
                                            lr_1[0x50] = v19_1:0xa.b
                                            lr_1[0x51] = v19_1:0xb.b
                                            lr_1[0x52] = v19_1:0xb.b
                                            lr_1[0x53] = v19_1:0xb.b
                                            lr_1[0x54] = v19_1:0xc.b
                                            lr_1[0x55] = v19_1:0xc.b
                                            lr_1[0x56] = v19_1:0xc.b
                                            lr_1[0x57] = v19_1:0xd.b
                                            lr_1[0x58] = v19_1:0xd.b
                                            lr_1[0x59] = v19_1:0xd.b
                                            lr_1[0x5a] = v19_1:0xe.b
                                            lr_1[0x5b] = v19_1:0xe.b
                                            lr_1[0x5c] = v19_1:0xe.b
                                            lr_1[0x5d] = v19_1:0xf.b
                                            lr_1[0x5e] = v19_1:0xf.b
                                            lr_1[0x5f] = v19_1:0xf.b
                                            lr_1 = &lr_1[0x60]
                                        while (j_3 != 0x20)
                                        
                                        if (x9_1 + 1 != j_63)
                                            j_65 = j_63
                                            
                                            if (x6_1 != 0)
                                                goto label_ffb070
                                            
                                            x17_3 = &x17_3[j_63]
                                            fp_6 = &fp_6[x0_4]
                                            x15_5 = fp_3
                                        label_ffb82c:
                                            int32_t j_4 = x15_5 + 1
                                            void* x6_30 = &fp_6[2]
                                            
                                            do
                                                char x0_77 = *x17_3
                                                x17_3 = &x17_3[1]
                                                j_4 -= 1
                                                *x6_30 = x0_77
                                                *(x6_30 - 1) = x0_77
                                                *(x6_30 - 2) = x0_77
                                                x6_30 += 3
                                            while (j_4 s> 0)
                                    else
                                        j_65 = 0
                                    label_ffb070:
                                        void* x6_15 = x0_1 + j_65 * 3 + x26_2
                                        fp_6 = &fp_6[x0_3]
                                        x17_3 = &x17_3[x7_1]
                                        void* x15_41 = x19 + j_65 + x27_4
                                        int64_t j_51 = fp_4 + j_65
                                        int64_t j_5
                                        
                                        do
                                            v16_1.q = *x15_41
                                            x15_41 += 8
                                            j_5 = j_51
                                            j_51 += 8
                                            *x6_15 = v16_1.b
                                            *(x6_15 + 1) = v16_1.b
                                            *(x6_15 + 2) = v16_1.b
                                            *(x6_15 + 3) = v16_1:1.b
                                            *(x6_15 + 4) = v16_1:1.b
                                            *(x6_15 + 5) = v16_1:1.b
                                            *(x6_15 + 6) = v16_1:2.b
                                            *(x6_15 + 7) = v16_1:2.b
                                            *(x6_15 + 8) = v16_1:2.b
                                            *(x6_15 + 9) = v16_1:3.b
                                            *(x6_15 + 0xa) = v16_1:3.b
                                            *(x6_15 + 0xb) = v16_1:3.b
                                            *(x6_15 + 0xc) = v16_1:4.b
                                            *(x6_15 + 0xd) = v16_1:4.b
                                            *(x6_15 + 0xe) = v16_1:4.b
                                            *(x6_15 + 0xf) = v16_1:5.b
                                            *(x6_15 + 0x10) = v16_1:5.b
                                            *(x6_15 + 0x11) = v16_1:5.b
                                            *(x6_15 + 0x12) = v16_1:6.b
                                            *(x6_15 + 0x13) = v16_1:6.b
                                            *(x6_15 + 0x14) = v16_1:6.b
                                            *(x6_15 + 0x15) = v16_1:7.b
                                            *(x6_15 + 0x16) = v16_1:7.b
                                            *(x6_15 + 0x17) = v16_1:7.b
                                            x6_15 += 0x18
                                        while (j_5 != -8)
                                        x15_5 = x28_3
                                        
                                        if (x9_1 + 1 != x7_1)
                                            goto label_ffb82c
                            case 2
                                if ((x9_1.d & 0x80000000) == 0)
                                    int32_t x15_6 = x9_1.d
                                    
                                    if (x9_1.d u< 7)
                                        goto label_ffb86c
                                    
                                    int64_t j_66
                                    
                                    if (x9_1.d u>= 0x1f)
                                        int64_t j_44 = j_63
                                        int64_t j_6
                                        
                                        do
                                            v16_1 = x24_3[-1]
                                            v20_1 = *x24_3
                                            x24_3 = &x24_3[2]
                                            j_6 = j_44
                                            j_44 -= 0x20
                                            *(x28_6 - 0x40) = v16_1.b
                                            *(x28_6 - 0x3f) = v16_1.b
                                            *(x28_6 - 0x3e) = v16_1.b
                                            *(x28_6 - 0x3d) = 0xff
                                            *(x28_6 - 0x3c) = v16_1:1.b
                                            *(x28_6 - 0x3b) = v16_1:1.b
                                            *(x28_6 - 0x3a) = v16_1:1.b
                                            *(x28_6 - 0x39) = 0xff
                                            *(x28_6 - 0x38) = v16_1:2.b
                                            *(x28_6 - 0x37) = v16_1:2.b
                                            *(x28_6 - 0x36) = v16_1:2.b
                                            *(x28_6 - 0x35) = 0xff
                                            *(x28_6 - 0x34) = v16_1:3.b
                                            *(x28_6 - 0x33) = v16_1:3.b
                                            *(x28_6 - 0x32) = v16_1:3.b
                                            *(x28_6 - 0x31) = 0xff
                                            *(x28_6 - 0x30) = v16_1:4.b
                                            *(x28_6 - 0x2f) = v16_1:4.b
                                            *(x28_6 - 0x2e) = v16_1:4.b
                                            *(x28_6 - 0x2d) = 0xff
                                            *(x28_6 - 0x2c) = v16_1:5.b
                                            *(x28_6 - 0x2b) = v16_1:5.b
                                            *(x28_6 - 0x2a) = v16_1:5.b
                                            *(x28_6 - 0x29) = 0xff
                                            *(x28_6 - 0x28) = v16_1:6.b
                                            *(x28_6 - 0x27) = v16_1:6.b
                                            *(x28_6 - 0x26) = v16_1:6.b
                                            *(x28_6 - 0x25) = 0xff
                                            *(x28_6 - 0x24) = v16_1:7.b
                                            *(x28_6 - 0x23) = v16_1:7.b
                                            *(x28_6 - 0x22) = v16_1:7.b
                                            *(x28_6 - 0x21) = 0xff
                                            *(x28_6 - 0x20) = v16_1:8.b
                                            *(x28_6 - 0x1f) = v16_1:8.b
                                            *(x28_6 - 0x1e) = v16_1:8.b
                                            *(x28_6 - 0x1d) = 0xff
                                            *(x28_6 - 0x1c) = v16_1:9.b
                                            *(x28_6 - 0x1b) = v16_1:9.b
                                            *(x28_6 - 0x1a) = v16_1:9.b
                                            *(x28_6 - 0x19) = 0xff
                                            *(x28_6 - 0x18) = v16_1:0xa.b
                                            *(x28_6 - 0x17) = v16_1:0xa.b
                                            *(x28_6 - 0x16) = v16_1:0xa.b
                                            *(x28_6 - 0x15) = 0xff
                                            *(x28_6 - 0x14) = v16_1:0xb.b
                                            *(x28_6 - 0x13) = v16_1:0xb.b
                                            *(x28_6 - 0x12) = v16_1:0xb.b
                                            *(x28_6 - 0x11) = 0xff
                                            *(x28_6 - 0x10) = v16_1:0xc.b
                                            *(x28_6 - 0xf) = v16_1:0xc.b
                                            *(x28_6 - 0xe) = v16_1:0xc.b
                                            *(x28_6 - 0xd) = 0xff
                                            *(x28_6 - 0xc) = v16_1:0xd.b
                                            *(x28_6 - 0xb) = v16_1:0xd.b
                                            *(x28_6 - 0xa) = v16_1:0xd.b
                                            *(x28_6 - 9) = 0xff
                                            *(x28_6 - 8) = v16_1:0xe.b
                                            *(x28_6 - 7) = v16_1:0xe.b
                                            *(x28_6 - 6) = v16_1:0xe.b
                                            *(x28_6 - 5) = 0xff
                                            *(x28_6 - 4) = v16_1:0xf.b
                                            *(x28_6 - 3) = v16_1:0xf.b
                                            *(x28_6 - 2) = v16_1:0xf.b
                                            *(x28_6 - 1) = 0xff
                                            *x28_6 = v20_1.b
                                            x28_6[1] = v20_1.b
                                            x28_6[2] = v20_1.b
                                            x28_6[3] = 0xff
                                            x28_6[4] = v20_1:1.b
                                            x28_6[5] = v20_1:1.b
                                            x28_6[6] = v20_1:1.b
                                            x28_6[7] = 0xff
                                            x28_6[8] = v20_1:2.b
                                            x28_6[9] = v20_1:2.b
                                            x28_6[0xa] = v20_1:2.b
                                            x28_6[0xb] = 0xff
                                            x28_6[0xc] = v20_1:3.b
                                            x28_6[0xd] = v20_1:3.b
                                            x28_6[0xe] = v20_1:3.b
                                            x28_6[0xf] = 0xff
                                            x28_6[0x10] = v20_1:4.b
                                            x28_6[0x11] = v20_1:4.b
                                            x28_6[0x12] = v20_1:4.b
                                            x28_6[0x13] = 0xff
                                            x28_6[0x14] = v20_1:5.b
                                            x28_6[0x15] = v20_1:5.b
                                            x28_6[0x16] = v20_1:5.b
                                            x28_6[0x17] = 0xff
                                            x28_6[0x18] = v20_1:6.b
                                            x28_6[0x19] = v20_1:6.b
                                            x28_6[0x1a] = v20_1:6.b
                                            x28_6[0x1b] = 0xff
                                            x28_6[0x1c] = v20_1:7.b
                                            x28_6[0x1d] = v20_1:7.b
                                            x28_6[0x1e] = v20_1:7.b
                                            x28_6[0x1f] = 0xff
                                            x28_6[0x20] = v20_1:8.b
                                            x28_6[0x21] = v20_1:8.b
                                            x28_6[0x22] = v20_1:8.b
                                            x28_6[0x23] = 0xff
                                            x28_6[0x24] = v20_1:9.b
                                            x28_6[0x25] = v20_1:9.b
                                            x28_6[0x26] = v20_1:9.b
                                            x28_6[0x27] = 0xff
                                            x28_6[0x28] = v20_1:0xa.b
                                            x28_6[0x29] = v20_1:0xa.b
                                            x28_6[0x2a] = v20_1:0xa.b
                                            x28_6[0x2b] = 0xff
                                            x28_6[0x2c] = v20_1:0xb.b
                                            x28_6[0x2d] = v20_1:0xb.b
                                            x28_6[0x2e] = v20_1:0xb.b
                                            x28_6[0x2f] = 0xff
                                            x28_6[0x30] = v20_1:0xc.b
                                            x28_6[0x31] = v20_1:0xc.b
                                            x28_6[0x32] = v20_1:0xc.b
                                            x28_6[0x33] = 0xff
                                            x28_6[0x34] = v20_1:0xd.b
                                            x28_6[0x35] = v20_1:0xd.b
                                            x28_6[0x36] = v20_1:0xd.b
                                            x28_6[0x37] = 0xff
                                            x28_6[0x38] = v20_1:0xe.b
                                            x28_6[0x39] = v20_1:0xe.b
                                            x28_6[0x3a] = v20_1:0xe.b
                                            x28_6[0x3b] = 0xff
                                            x28_6[0x3c] = v20_1:0xf.b
                                            x28_6[0x3d] = v20_1:0xf.b
                                            x28_6[0x3e] = v20_1:0xf.b
                                            x28_6[0x3f] = 0xff
                                            x28_6 = &x28_6[0x80]
                                        while (j_6 != 0x20)
                                        
                                        if (x9_1 + 1 != j_63)
                                            j_66 = j_63
                                            
                                            if (x6_1 != 0)
                                                goto label_ffb118
                                            
                                            x17_3 = &x17_3[j_63]
                                            fp_6 = &fp_6[fp_2]
                                            x15_6 = fp_3
                                        label_ffb86c:
                                            int32_t j_7 = x15_6 + 1
                                            void* x6_31 = &fp_6[3]
                                            
                                            do
                                                char x0_78 = *x17_3
                                                x17_3 = &x17_3[1]
                                                j_7 -= 1
                                                *x6_31 = 0xff
                                                *(x6_31 - 1) = x0_78
                                                *(x6_31 - 2) = x0_78
                                                *(x6_31 - 3) = x0_78
                                                x6_31 += 4
                                            while (j_7 s> 0)
                                    else
                                        j_66 = 0
                                    label_ffb118:
                                        void* x6_16 = x0_1 + x26_2 + (j_66 << 2)
                                        fp_6 = &fp_6[x28_4]
                                        x17_3 = &x17_3[x7_1]
                                        void* x15_48 = x19 + j_66 + x27_4
                                        int64_t j_52 = fp_4 + j_66
                                        int64_t j_8
                                        
                                        do
                                            v16_1.q = *x15_48
                                            x15_48 += 8
                                            j_8 = j_52
                                            j_52 += 8
                                            *x6_16 = v16_1.b
                                            *(x6_16 + 1) = v16_1.b
                                            *(x6_16 + 2) = v16_1.b
                                            *(x6_16 + 3) = 0xff
                                            *(x6_16 + 4) = v16_1:1.b
                                            *(x6_16 + 5) = v16_1:1.b
                                            *(x6_16 + 6) = v16_1:1.b
                                            *(x6_16 + 7) = 0xff
                                            *(x6_16 + 8) = v16_1:2.b
                                            *(x6_16 + 9) = v16_1:2.b
                                            *(x6_16 + 0xa) = v16_1:2.b
                                            *(x6_16 + 0xb) = 0xff
                                            *(x6_16 + 0xc) = v16_1:3.b
                                            *(x6_16 + 0xd) = v16_1:3.b
                                            *(x6_16 + 0xe) = v16_1:3.b
                                            *(x6_16 + 0xf) = 0xff
                                            *(x6_16 + 0x10) = v16_1:4.b
                                            *(x6_16 + 0x11) = v16_1:4.b
                                            *(x6_16 + 0x12) = v16_1:4.b
                                            *(x6_16 + 0x13) = 0xff
                                            *(x6_16 + 0x14) = v16_1:5.b
                                            *(x6_16 + 0x15) = v16_1:5.b
                                            *(x6_16 + 0x16) = v16_1:5.b
                                            *(x6_16 + 0x17) = 0xff
                                            *(x6_16 + 0x18) = v16_1:6.b
                                            *(x6_16 + 0x19) = v16_1:6.b
                                            *(x6_16 + 0x1a) = v16_1:6.b
                                            *(x6_16 + 0x1b) = 0xff
                                            *(x6_16 + 0x1c) = v16_1:7.b
                                            *(x6_16 + 0x1d) = v16_1:7.b
                                            *(x6_16 + 0x1e) = v16_1:7.b
                                            *(x6_16 + 0x1f) = 0xff
                                            x6_16 += 0x20
                                        while (j_8 != -8)
                                        x15_6 = x28_3
                                        
                                        if (x9_1 + 1 != x7_1)
                                            goto label_ffb86c
                            case 3, 4, 5, 6, 8, 0xb, 0xc, 0xd, 0xe, 0x11, 0x13, 0x14, 0x15, 0x16
                                goto label_ffb9bc
                            case 7
                                if ((x9_1.d & 0x80000000) == 0)
                                    int32_t x15_7 = x9_1.d
                                    
                                    if (x9_1.d u>= 8)
                                        int64_t j_67
                                        
                                        if (x9_1.d u>= 0x20)
                                            int64_t j_53 = j_61
                                            void* x15_51 = x0_1 + 0x10 + x26_2
                                            int64_t j_9
                                            
                                            do
                                                v16_1.b = *x6_4
                                                v17_1.b = *(x6_4 + 1)
                                                v16_1:1.b = *(x6_4 + 2)
                                                v17_1:1.b = *(x6_4 + 3)
                                                v16_1:2.b = *(x6_4 + 4)
                                                v17_1:2.b = *(x6_4 + 5)
                                                v16_1:3.b = *(x6_4 + 6)
                                                v17_1:3.b = *(x6_4 + 7)
                                                v16_1:4.b = *(x6_4 + 8)
                                                v17_1:4.b = *(x6_4 + 9)
                                                v16_1:5.b = *(x6_4 + 0xa)
                                                v17_1:5.b = *(x6_4 + 0xb)
                                                v16_1:6.b = *(x6_4 + 0xc)
                                                v17_1:6.b = *(x6_4 + 0xd)
                                                v16_1:7.b = *(x6_4 + 0xe)
                                                v17_1:7.b = *(x6_4 + 0xf)
                                                v16_1:8.b = *(x6_4 + 0x10)
                                                v17_1:8.b = *(x6_4 + 0x11)
                                                v16_1:9.b = *(x6_4 + 0x12)
                                                v17_1:9.b = *(x6_4 + 0x13)
                                                v16_1:0xa.b = *(x6_4 + 0x14)
                                                v17_1:0xa.b = *(x6_4 + 0x15)
                                                v16_1:0xb.b = *(x6_4 + 0x16)
                                                v17_1:0xb.b = *(x6_4 + 0x17)
                                                v16_1:0xc.b = *(x6_4 + 0x18)
                                                v17_1:0xc.b = *(x6_4 + 0x19)
                                                v16_1:0xd.b = *(x6_4 + 0x1a)
                                                v17_1:0xd.b = *(x6_4 + 0x1b)
                                                v16_1:0xe.b = *(x6_4 + 0x1c)
                                                v17_1:0xe.b = *(x6_4 + 0x1d)
                                                v16_1:0xf.b = *(x6_4 + 0x1e)
                                                v17_1:0xf.b = *(x6_4 + 0x1f)
                                                v18_1.b = *(x6_4 - 0x20)
                                                v19_1.b = *(x6_4 - 0x1f)
                                                v18_1:1.b = *(x6_4 - 0x1e)
                                                v19_1:1.b = *(x6_4 - 0x1d)
                                                v18_1:2.b = *(x6_4 - 0x1c)
                                                v19_1:2.b = *(x6_4 - 0x1b)
                                                v18_1:3.b = *(x6_4 - 0x1a)
                                                v19_1:3.b = *(x6_4 - 0x19)
                                                v18_1:4.b = *(x6_4 - 0x18)
                                                v19_1:4.b = *(x6_4 - 0x17)
                                                v18_1:5.b = *(x6_4 - 0x16)
                                                v19_1:5.b = *(x6_4 - 0x15)
                                                v18_1:6.b = *(x6_4 - 0x14)
                                                v19_1:6.b = *(x6_4 - 0x13)
                                                v18_1:7.b = *(x6_4 - 0x12)
                                                v19_1:7.b = *(x6_4 - 0x11)
                                                v18_1:8.b = *(x6_4 - 0x10)
                                                v19_1:8.b = *(x6_4 - 0xf)
                                                v18_1:9.b = *(x6_4 - 0xe)
                                                v19_1:9.b = *(x6_4 - 0xd)
                                                v18_1:0xa.b = *(x6_4 - 0xc)
                                                v19_1:0xa.b = *(x6_4 - 0xb)
                                                v18_1:0xb.b = *(x6_4 - 0xa)
                                                v19_1:0xb.b = *(x6_4 - 9)
                                                v18_1:0xc.b = *(x6_4 - 8)
                                                v19_1:0xc.b = *(x6_4 - 7)
                                                v18_1:0xd.b = *(x6_4 - 6)
                                                v19_1:0xd.b = *(x6_4 - 5)
                                                v18_1:0xe.b = *(x6_4 - 4)
                                                v19_1:0xe.b = *(x6_4 - 3)
                                                v18_1:0xf.b = *(x6_4 - 2)
                                                v19_1:0xf.b = *(x6_4 - 1)
                                                x6_4 += 0x40
                                                j_9 = j_53
                                                j_53 -= 0x20
                                                *(x15_51 - 0x10) = v18_1
                                                *x15_51 = v16_1
                                                x15_51 += 0x20
                                            while (j_9 != 0x20)
                                            j_67 = j_61
                                            
                                            if (x6_2 u> 8)
                                                goto label_ffb1c4
                                            
                                            x17_3 = &x17_3[x0_5]
                                            fp_6 = &fp_6[j_61]
                                            x15_7 = x7_2
                                        else
                                            j_67 = 0
                                        label_ffb1c4:
                                            void* x6_17 = x0_1 + j_67 + x26_2
                                            fp_6 = &fp_6[x11_5]
                                            x17_3 = &x17_3[x0_8]
                                            void* x15_58 = x19 + x27_4 + (j_67 << 1)
                                            int64_t j_54 = x27_2 + j_67
                                            int64_t j_10
                                            
                                            do
                                                v16_1.b = *x15_58
                                                v17_1.b = *(x15_58 + 1)
                                                v16_1:1.b = *(x15_58 + 2)
                                                v17_1:1.b = *(x15_58 + 3)
                                                v16_1:2.b = *(x15_58 + 4)
                                                v17_1:2.b = *(x15_58 + 5)
                                                v16_1:3.b = *(x15_58 + 6)
                                                v17_1:3.b = *(x15_58 + 7)
                                                v16_1:4.b = *(x15_58 + 8)
                                                v17_1:4.b = *(x15_58 + 9)
                                                v16_1:5.b = *(x15_58 + 0xa)
                                                v17_1:5.b = *(x15_58 + 0xb)
                                                v16_1:6.b = *(x15_58 + 0xc)
                                                v17_1:6.b = *(x15_58 + 0xd)
                                                v16_1:7.b = *(x15_58 + 0xe)
                                                v17_1:7.b = *(x15_58 + 0xf)
                                                x15_58 += 0x10
                                                j_10 = j_54
                                                j_54 += 8
                                                *x6_17 = v16_1.q
                                                x6_17 += 8
                                            while (j_10 != -8)
                                            x15_7 = x0_7
                                    
                                    int32_t j_11 = x15_7 + 1
                                    
                                    do
                                        char x0_30 = *x17_3
                                        x17_3 = &x17_3[2]
                                        j_11 -= 1
                                        *fp_6 = x0_30
                                        fp_6 = &fp_6[1]
                                    while (j_11 s> 0)
                            case 9
                                if ((x9_1.d & 0x80000000) == 0)
                                    int32_t x15_8 = x9_1.d
                                    
                                    if (x9_1.d u>= 8)
                                        int64_t j_68
                                        
                                        if (x9_1.d u>= 0x20)
                                            int64_t j_45 = j_61
                                            int64_t j_12
                                            
                                            do
                                                v19_1.b = *(x6_4 - 0x20)
                                                v19_1:1.b = *(x6_4 - 0x1e)
                                                v19_1:2.b = *(x6_4 - 0x1c)
                                                v19_1:3.b = *(x6_4 - 0x1a)
                                                v19_1:4.b = *(x6_4 - 0x18)
                                                v19_1:5.b = *(x6_4 - 0x16)
                                                v19_1:6.b = *(x6_4 - 0x14)
                                                v19_1:7.b = *(x6_4 - 0x12)
                                                v19_1:8.b = *(x6_4 - 0x10)
                                                v19_1:9.b = *(x6_4 - 0xe)
                                                v19_1:0xa.b = *(x6_4 - 0xc)
                                                v19_1:0xb.b = *(x6_4 - 0xa)
                                                v19_1:0xc.b = *(x6_4 - 8)
                                                v19_1:0xd.b = *(x6_4 - 6)
                                                v19_1:0xe.b = *(x6_4 - 4)
                                                v19_1:0xf.b = *(x6_4 - 2)
                                                v16_1.b = *x6_4
                                                v16_1:1.b = *(x6_4 + 2)
                                                v16_1:2.b = *(x6_4 + 4)
                                                v16_1:3.b = *(x6_4 + 6)
                                                v16_1:4.b = *(x6_4 + 8)
                                                v16_1:5.b = *(x6_4 + 0xa)
                                                v16_1:6.b = *(x6_4 + 0xc)
                                                v16_1:7.b = *(x6_4 + 0xe)
                                                v16_1:8.b = *(x6_4 + 0x10)
                                                v16_1:9.b = *(x6_4 + 0x12)
                                                v16_1:0xa.b = *(x6_4 + 0x14)
                                                v16_1:0xb.b = *(x6_4 + 0x16)
                                                v16_1:0xc.b = *(x6_4 + 0x18)
                                                v16_1:0xd.b = *(x6_4 + 0x1a)
                                                v16_1:0xe.b = *(x6_4 + 0x1c)
                                                v16_1:0xf.b = *(x6_4 + 0x1e)
                                                j_12 = j_45
                                                j_45 -= 0x20
                                                *lr_1 = v19_1.b
                                                lr_1[1] = v19_1.b
                                                lr_1[2] = v19_1.b
                                                lr_1[3] = v19_1:1.b
                                                lr_1[4] = v19_1:1.b
                                                lr_1[5] = v19_1:1.b
                                                lr_1[6] = v19_1:2.b
                                                lr_1[7] = v19_1:2.b
                                                lr_1[8] = v19_1:2.b
                                                lr_1[9] = v19_1:3.b
                                                lr_1[0xa] = v19_1:3.b
                                                lr_1[0xb] = v19_1:3.b
                                                lr_1[0xc] = v19_1:4.b
                                                lr_1[0xd] = v19_1:4.b
                                                lr_1[0xe] = v19_1:4.b
                                                lr_1[0xf] = v19_1:5.b
                                                lr_1[0x10] = v19_1:5.b
                                                lr_1[0x11] = v19_1:5.b
                                                lr_1[0x12] = v19_1:6.b
                                                lr_1[0x13] = v19_1:6.b
                                                lr_1[0x14] = v19_1:6.b
                                                lr_1[0x15] = v19_1:7.b
                                                lr_1[0x16] = v19_1:7.b
                                                lr_1[0x17] = v19_1:7.b
                                                lr_1[0x18] = v19_1:8.b
                                                lr_1[0x19] = v19_1:8.b
                                                lr_1[0x1a] = v19_1:8.b
                                                lr_1[0x1b] = v19_1:9.b
                                                lr_1[0x1c] = v19_1:9.b
                                                lr_1[0x1d] = v19_1:9.b
                                                lr_1[0x1e] = v19_1:0xa.b
                                                lr_1[0x1f] = v19_1:0xa.b
                                                lr_1[0x20] = v19_1:0xa.b
                                                lr_1[0x21] = v19_1:0xb.b
                                                lr_1[0x22] = v19_1:0xb.b
                                                lr_1[0x23] = v19_1:0xb.b
                                                lr_1[0x24] = v19_1:0xc.b
                                                lr_1[0x25] = v19_1:0xc.b
                                                lr_1[0x26] = v19_1:0xc.b
                                                lr_1[0x27] = v19_1:0xd.b
                                                lr_1[0x28] = v19_1:0xd.b
                                                lr_1[0x29] = v19_1:0xd.b
                                                lr_1[0x2a] = v19_1:0xe.b
                                                lr_1[0x2b] = v19_1:0xe.b
                                                lr_1[0x2c] = v19_1:0xe.b
                                                lr_1[0x2d] = v19_1:0xf.b
                                                lr_1[0x2e] = v19_1:0xf.b
                                                lr_1[0x2f] = v19_1:0xf.b
                                                lr_1[0x30] = v16_1.b
                                                lr_1[0x31] = v16_1.b
                                                lr_1[0x32] = v16_1.b
                                                lr_1[0x33] = v16_1:1.b
                                                lr_1[0x34] = v16_1:1.b
                                                lr_1[0x35] = v16_1:1.b
                                                lr_1[0x36] = v16_1:2.b
                                                lr_1[0x37] = v16_1:2.b
                                                lr_1[0x38] = v16_1:2.b
                                                lr_1[0x39] = v16_1:3.b
                                                lr_1[0x3a] = v16_1:3.b
                                                lr_1[0x3b] = v16_1:3.b
                                                lr_1[0x3c] = v16_1:4.b
                                                lr_1[0x3d] = v16_1:4.b
                                                lr_1[0x3e] = v16_1:4.b
                                                lr_1[0x3f] = v16_1:5.b
                                                lr_1[0x40] = v16_1:5.b
                                                lr_1[0x41] = v16_1:5.b
                                                lr_1[0x42] = v16_1:6.b
                                                lr_1[0x43] = v16_1:6.b
                                                lr_1[0x44] = v16_1:6.b
                                                lr_1[0x45] = v16_1:7.b
                                                lr_1[0x46] = v16_1:7.b
                                                lr_1[0x47] = v16_1:7.b
                                                lr_1[0x48] = v16_1:8.b
                                                lr_1[0x49] = v16_1:8.b
                                                lr_1[0x4a] = v16_1:8.b
                                                lr_1[0x4b] = v16_1:9.b
                                                lr_1[0x4c] = v16_1:9.b
                                                lr_1[0x4d] = v16_1:9.b
                                                lr_1[0x4e] = v16_1:0xa.b
                                                lr_1[0x4f] = v16_1:0xa.b
                                                lr_1[0x50] = v16_1:0xa.b
                                                lr_1[0x51] = v16_1:0xb.b
                                                lr_1[0x52] = v16_1:0xb.b
                                                lr_1[0x53] = v16_1:0xb.b
                                                lr_1[0x54] = v16_1:0xc.b
                                                lr_1[0x55] = v16_1:0xc.b
                                                lr_1[0x56] = v16_1:0xc.b
                                                lr_1[0x57] = v16_1:0xd.b
                                                lr_1[0x58] = v16_1:0xd.b
                                                lr_1[0x59] = v16_1:0xd.b
                                                lr_1[0x5a] = v16_1:0xe.b
                                                lr_1[0x5b] = v16_1:0xe.b
                                                lr_1[0x5c] = v16_1:0xe.b
                                                lr_1[0x5d] = v16_1:0xf.b
                                                lr_1[0x5e] = v16_1:0xf.b
                                                lr_1[0x5f] = v16_1:0xf.b
                                                x6_4 += 0x40
                                                lr_1 = &lr_1[0x60]
                                            while (j_12 != 0x20)
                                            j_68 = j_61
                                            
                                            if (x6_2 u> 8)
                                                goto label_ffb27c
                                            
                                            x17_3 = &x17_3[x0_5]
                                            fp_6 = &fp_6[x0_6]
                                            x15_8 = x7_2
                                        else
                                            j_68 = 0
                                        label_ffb27c:
                                            fp_6 = &fp_6[x11_6]
                                            x17_3 = &x17_3[x0_8]
                                            int64_t x15_64 = j_68 << 1
                                            void* x15_65 = x19 + x15_64 + x27_4
                                            void* x6_19 = x0_1 + x15_64 + j_68 + x26_2
                                            int64_t j_55 = x27_2 + j_68
                                            int64_t j_13
                                            
                                            do
                                                v16_1.b = *x15_65
                                                v16_1:1.b = *(x15_65 + 2)
                                                v16_1:2.b = *(x15_65 + 4)
                                                v16_1:3.b = *(x15_65 + 6)
                                                v16_1:4.b = *(x15_65 + 8)
                                                v16_1:5.b = *(x15_65 + 0xa)
                                                v16_1:6.b = *(x15_65 + 0xc)
                                                v16_1:7.b = *(x15_65 + 0xe)
                                                x15_65 += 0x10
                                                j_13 = j_55
                                                j_55 += 8
                                                *x6_19 = v16_1.b
                                                *(x6_19 + 1) = v16_1.b
                                                *(x6_19 + 2) = v16_1.b
                                                *(x6_19 + 3) = v16_1:1.b
                                                *(x6_19 + 4) = v16_1:1.b
                                                *(x6_19 + 5) = v16_1:1.b
                                                *(x6_19 + 6) = v16_1:2.b
                                                *(x6_19 + 7) = v16_1:2.b
                                                *(x6_19 + 8) = v16_1:2.b
                                                *(x6_19 + 9) = v16_1:3.b
                                                *(x6_19 + 0xa) = v16_1:3.b
                                                *(x6_19 + 0xb) = v16_1:3.b
                                                *(x6_19 + 0xc) = v16_1:4.b
                                                *(x6_19 + 0xd) = v16_1:4.b
                                                *(x6_19 + 0xe) = v16_1:4.b
                                                *(x6_19 + 0xf) = v16_1:5.b
                                                *(x6_19 + 0x10) = v16_1:5.b
                                                *(x6_19 + 0x11) = v16_1:5.b
                                                *(x6_19 + 0x12) = v16_1:6.b
                                                *(x6_19 + 0x13) = v16_1:6.b
                                                *(x6_19 + 0x14) = v16_1:6.b
                                                *(x6_19 + 0x15) = v16_1:7.b
                                                *(x6_19 + 0x16) = v16_1:7.b
                                                *(x6_19 + 0x17) = v16_1:7.b
                                                x6_19 += 0x18
                                            while (j_13 != -8)
                                            x15_8 = x0_7
                                    
                                    int32_t j_14 = x15_8 + 1
                                    void* x6_20 = &fp_6[2]
                                    
                                    do
                                        char x0_36 = *x17_3
                                        x17_3 = &x17_3[2]
                                        j_14 -= 1
                                        *x6_20 = x0_36
                                        *(x6_20 - 1) = x0_36
                                        *(x6_20 - 2) = x0_36
                                        x6_20 += 3
                                    while (j_14 s> 0)
                            case 0xa
                                if ((x9_1.d & 0x80000000) == 0)
                                    int32_t x15_9 = x9_1.d
                                    
                                    if (x9_1.d u< 7)
                                        goto label_ffb8b0
                                    
                                    int64_t j_69
                                    
                                    if (x9_1.d u>= 0x1f)
                                        int64_t j_46 = j_63
                                        int64_t j_15
                                        
                                        do
                                            v18_1.b = *x6_4
                                            v19_1.b = *(x6_4 + 1)
                                            v18_1:1.b = *(x6_4 + 2)
                                            v19_1:1.b = *(x6_4 + 3)
                                            v18_1:2.b = *(x6_4 + 4)
                                            v19_1:2.b = *(x6_4 + 5)
                                            v18_1:3.b = *(x6_4 + 6)
                                            v19_1:3.b = *(x6_4 + 7)
                                            v18_1:4.b = *(x6_4 + 8)
                                            v19_1:4.b = *(x6_4 + 9)
                                            v18_1:5.b = *(x6_4 + 0xa)
                                            v19_1:5.b = *(x6_4 + 0xb)
                                            v18_1:6.b = *(x6_4 + 0xc)
                                            v19_1:6.b = *(x6_4 + 0xd)
                                            v18_1:7.b = *(x6_4 + 0xe)
                                            v19_1:7.b = *(x6_4 + 0xf)
                                            v18_1:8.b = *(x6_4 + 0x10)
                                            v19_1:8.b = *(x6_4 + 0x11)
                                            v18_1:9.b = *(x6_4 + 0x12)
                                            v19_1:9.b = *(x6_4 + 0x13)
                                            v18_1:0xa.b = *(x6_4 + 0x14)
                                            v19_1:0xa.b = *(x6_4 + 0x15)
                                            v18_1:0xb.b = *(x6_4 + 0x16)
                                            v19_1:0xb.b = *(x6_4 + 0x17)
                                            v18_1:0xc.b = *(x6_4 + 0x18)
                                            v19_1:0xc.b = *(x6_4 + 0x19)
                                            v18_1:0xd.b = *(x6_4 + 0x1a)
                                            v19_1:0xd.b = *(x6_4 + 0x1b)
                                            v18_1:0xe.b = *(x6_4 + 0x1c)
                                            v19_1:0xe.b = *(x6_4 + 0x1d)
                                            v18_1:0xf.b = *(x6_4 + 0x1e)
                                            v19_1:0xf.b = *(x6_4 + 0x1f)
                                            v22_1.b = *(x6_4 - 0x20)
                                            v23_1.b = *(x6_4 - 0x1f)
                                            v22_1:1.b = *(x6_4 - 0x1e)
                                            v23_1:1.b = *(x6_4 - 0x1d)
                                            v22_1:2.b = *(x6_4 - 0x1c)
                                            v23_1:2.b = *(x6_4 - 0x1b)
                                            v22_1:3.b = *(x6_4 - 0x1a)
                                            v23_1:3.b = *(x6_4 - 0x19)
                                            v22_1:4.b = *(x6_4 - 0x18)
                                            v23_1:4.b = *(x6_4 - 0x17)
                                            v22_1:5.b = *(x6_4 - 0x16)
                                            v23_1:5.b = *(x6_4 - 0x15)
                                            v22_1:6.b = *(x6_4 - 0x14)
                                            v23_1:6.b = *(x6_4 - 0x13)
                                            v22_1:7.b = *(x6_4 - 0x12)
                                            v23_1:7.b = *(x6_4 - 0x11)
                                            v22_1:8.b = *(x6_4 - 0x10)
                                            v23_1:8.b = *(x6_4 - 0xf)
                                            v22_1:9.b = *(x6_4 - 0xe)
                                            v23_1:9.b = *(x6_4 - 0xd)
                                            v22_1:0xa.b = *(x6_4 - 0xc)
                                            v23_1:0xa.b = *(x6_4 - 0xb)
                                            v22_1:0xb.b = *(x6_4 - 0xa)
                                            v23_1:0xb.b = *(x6_4 - 9)
                                            v22_1:0xc.b = *(x6_4 - 8)
                                            v23_1:0xc.b = *(x6_4 - 7)
                                            v22_1:0xd.b = *(x6_4 - 6)
                                            v23_1:0xd.b = *(x6_4 - 5)
                                            v22_1:0xe.b = *(x6_4 - 4)
                                            v23_1:0xe.b = *(x6_4 - 3)
                                            v22_1:0xf.b = *(x6_4 - 2)
                                            v23_1:0xf.b = *(x6_4 - 1)
                                            x6_4 += 0x40
                                            j_15 = j_46
                                            j_46 -= 0x20
                                            *(x28_6 - 0x40) = v22_1.b
                                            *(x28_6 - 0x3f) = v22_1.b
                                            *(x28_6 - 0x3e) = v22_1.b
                                            *(x28_6 - 0x3d) = v23_1.b
                                            *(x28_6 - 0x3c) = v22_1:1.b
                                            *(x28_6 - 0x3b) = v22_1:1.b
                                            *(x28_6 - 0x3a) = v22_1:1.b
                                            *(x28_6 - 0x39) = v23_1:1.b
                                            *(x28_6 - 0x38) = v22_1:2.b
                                            *(x28_6 - 0x37) = v22_1:2.b
                                            *(x28_6 - 0x36) = v22_1:2.b
                                            *(x28_6 - 0x35) = v23_1:2.b
                                            *(x28_6 - 0x34) = v22_1:3.b
                                            *(x28_6 - 0x33) = v22_1:3.b
                                            *(x28_6 - 0x32) = v22_1:3.b
                                            *(x28_6 - 0x31) = v23_1:3.b
                                            *(x28_6 - 0x30) = v22_1:4.b
                                            *(x28_6 - 0x2f) = v22_1:4.b
                                            *(x28_6 - 0x2e) = v22_1:4.b
                                            *(x28_6 - 0x2d) = v23_1:4.b
                                            *(x28_6 - 0x2c) = v22_1:5.b
                                            *(x28_6 - 0x2b) = v22_1:5.b
                                            *(x28_6 - 0x2a) = v22_1:5.b
                                            *(x28_6 - 0x29) = v23_1:5.b
                                            *(x28_6 - 0x28) = v22_1:6.b
                                            *(x28_6 - 0x27) = v22_1:6.b
                                            *(x28_6 - 0x26) = v22_1:6.b
                                            *(x28_6 - 0x25) = v23_1:6.b
                                            *(x28_6 - 0x24) = v22_1:7.b
                                            *(x28_6 - 0x23) = v22_1:7.b
                                            *(x28_6 - 0x22) = v22_1:7.b
                                            *(x28_6 - 0x21) = v23_1:7.b
                                            *(x28_6 - 0x20) = v22_1:8.b
                                            *(x28_6 - 0x1f) = v22_1:8.b
                                            *(x28_6 - 0x1e) = v22_1:8.b
                                            *(x28_6 - 0x1d) = v23_1:8.b
                                            *(x28_6 - 0x1c) = v22_1:9.b
                                            *(x28_6 - 0x1b) = v22_1:9.b
                                            *(x28_6 - 0x1a) = v22_1:9.b
                                            *(x28_6 - 0x19) = v23_1:9.b
                                            *(x28_6 - 0x18) = v22_1:0xa.b
                                            *(x28_6 - 0x17) = v22_1:0xa.b
                                            *(x28_6 - 0x16) = v22_1:0xa.b
                                            *(x28_6 - 0x15) = v23_1:0xa.b
                                            *(x28_6 - 0x14) = v22_1:0xb.b
                                            *(x28_6 - 0x13) = v22_1:0xb.b
                                            *(x28_6 - 0x12) = v22_1:0xb.b
                                            *(x28_6 - 0x11) = v23_1:0xb.b
                                            *(x28_6 - 0x10) = v22_1:0xc.b
                                            *(x28_6 - 0xf) = v22_1:0xc.b
                                            *(x28_6 - 0xe) = v22_1:0xc.b
                                            *(x28_6 - 0xd) = v23_1:0xc.b
                                            *(x28_6 - 0xc) = v22_1:0xd.b
                                            *(x28_6 - 0xb) = v22_1:0xd.b
                                            *(x28_6 - 0xa) = v22_1:0xd.b
                                            *(x28_6 - 9) = v23_1:0xd.b
                                            *(x28_6 - 8) = v22_1:0xe.b
                                            *(x28_6 - 7) = v22_1:0xe.b
                                            *(x28_6 - 6) = v22_1:0xe.b
                                            *(x28_6 - 5) = v23_1:0xe.b
                                            *(x28_6 - 4) = v22_1:0xf.b
                                            *(x28_6 - 3) = v22_1:0xf.b
                                            *(x28_6 - 2) = v22_1:0xf.b
                                            *(x28_6 - 1) = v23_1:0xf.b
                                            *x28_6 = v18_1.b
                                            x28_6[1] = v18_1.b
                                            x28_6[2] = v18_1.b
                                            x28_6[3] = v19_1.b
                                            x28_6[4] = v18_1:1.b
                                            x28_6[5] = v18_1:1.b
                                            x28_6[6] = v18_1:1.b
                                            x28_6[7] = v19_1:1.b
                                            x28_6[8] = v18_1:2.b
                                            x28_6[9] = v18_1:2.b
                                            x28_6[0xa] = v18_1:2.b
                                            x28_6[0xb] = v19_1:2.b
                                            x28_6[0xc] = v18_1:3.b
                                            x28_6[0xd] = v18_1:3.b
                                            x28_6[0xe] = v18_1:3.b
                                            x28_6[0xf] = v19_1:3.b
                                            x28_6[0x10] = v18_1:4.b
                                            x28_6[0x11] = v18_1:4.b
                                            x28_6[0x12] = v18_1:4.b
                                            x28_6[0x13] = v19_1:4.b
                                            x28_6[0x14] = v18_1:5.b
                                            x28_6[0x15] = v18_1:5.b
                                            x28_6[0x16] = v18_1:5.b
                                            x28_6[0x17] = v19_1:5.b
                                            x28_6[0x18] = v18_1:6.b
                                            x28_6[0x19] = v18_1:6.b
                                            x28_6[0x1a] = v18_1:6.b
                                            x28_6[0x1b] = v19_1:6.b
                                            x28_6[0x1c] = v18_1:7.b
                                            x28_6[0x1d] = v18_1:7.b
                                            x28_6[0x1e] = v18_1:7.b
                                            x28_6[0x1f] = v19_1:7.b
                                            x28_6[0x20] = v18_1:8.b
                                            x28_6[0x21] = v18_1:8.b
                                            x28_6[0x22] = v18_1:8.b
                                            x28_6[0x23] = v19_1:8.b
                                            x28_6[0x24] = v18_1:9.b
                                            x28_6[0x25] = v18_1:9.b
                                            x28_6[0x26] = v18_1:9.b
                                            x28_6[0x27] = v19_1:9.b
                                            x28_6[0x28] = v18_1:0xa.b
                                            x28_6[0x29] = v18_1:0xa.b
                                            x28_6[0x2a] = v18_1:0xa.b
                                            x28_6[0x2b] = v19_1:0xa.b
                                            x28_6[0x2c] = v18_1:0xb.b
                                            x28_6[0x2d] = v18_1:0xb.b
                                            x28_6[0x2e] = v18_1:0xb.b
                                            x28_6[0x2f] = v19_1:0xb.b
                                            x28_6[0x30] = v18_1:0xc.b
                                            x28_6[0x31] = v18_1:0xc.b
                                            x28_6[0x32] = v18_1:0xc.b
                                            x28_6[0x33] = v19_1:0xc.b
                                            x28_6[0x34] = v18_1:0xd.b
                                            x28_6[0x35] = v18_1:0xd.b
                                            x28_6[0x36] = v18_1:0xd.b
                                            x28_6[0x37] = v19_1:0xd.b
                                            x28_6[0x38] = v18_1:0xe.b
                                            x28_6[0x39] = v18_1:0xe.b
                                            x28_6[0x3a] = v18_1:0xe.b
                                            x28_6[0x3b] = v19_1:0xe.b
                                            x28_6[0x3c] = v18_1:0xf.b
                                            x28_6[0x3d] = v18_1:0xf.b
                                            x28_6[0x3e] = v18_1:0xf.b
                                            x28_6[0x3f] = v19_1:0xf.b
                                            x28_6 = &x28_6[0x80]
                                        while (j_15 != 0x20)
                                        
                                        if (x9_1 + 1 != j_63)
                                            j_69 = j_63
                                            
                                            if (x6_1 != 0)
                                                goto label_ffb34c
                                            
                                            x17_3 = &x17_3[x28_5]
                                            fp_6 = &fp_6[fp_2]
                                            x15_9 = fp_3
                                        label_ffb8b0:
                                            int32_t j_16 = x15_9 + 1
                                            void* x6_32 = &fp_6[3]
                                            
                                            do
                                                char x0_79 = *x17_3
                                                j_16 -= 1
                                                *(x6_32 - 1) = x0_79
                                                *(x6_32 - 2) = x0_79
                                                *(x6_32 - 3) = x0_79
                                                char x0_80 = x17_3[1]
                                                x17_3 = &x17_3[2]
                                                *x6_32 = x0_80
                                                x6_32 += 4
                                            while (j_16 s> 0)
                                    else
                                        j_69 = 0
                                    label_ffb34c:
                                        void* x6_21 = x0_1 + x26_2 + (j_69 << 2)
                                        fp_6 = &fp_6[x28_4]
                                        x17_3 = &x17_3[x27_3]
                                        void* x15_71 = x19 + x27_4 + (j_69 << 1)
                                        int64_t j_56 = fp_4 + j_69
                                        int64_t j_17
                                        
                                        do
                                            v18_1.b = *x15_71
                                            v19_1.b = *(x15_71 + 1)
                                            v18_1:1.b = *(x15_71 + 2)
                                            v19_1:1.b = *(x15_71 + 3)
                                            v18_1:2.b = *(x15_71 + 4)
                                            v19_1:2.b = *(x15_71 + 5)
                                            v18_1:3.b = *(x15_71 + 6)
                                            v19_1:3.b = *(x15_71 + 7)
                                            v18_1:4.b = *(x15_71 + 8)
                                            v19_1:4.b = *(x15_71 + 9)
                                            v18_1:5.b = *(x15_71 + 0xa)
                                            v19_1:5.b = *(x15_71 + 0xb)
                                            v18_1:6.b = *(x15_71 + 0xc)
                                            v19_1:6.b = *(x15_71 + 0xd)
                                            v18_1:7.b = *(x15_71 + 0xe)
                                            v19_1:7.b = *(x15_71 + 0xf)
                                            x15_71 += 0x10
                                            j_17 = j_56
                                            j_56 += 8
                                            *x6_21 = v18_1.b
                                            *(x6_21 + 1) = v18_1.b
                                            *(x6_21 + 2) = v18_1.b
                                            *(x6_21 + 3) = v19_1.b
                                            *(x6_21 + 4) = v18_1:1.b
                                            *(x6_21 + 5) = v18_1:1.b
                                            *(x6_21 + 6) = v18_1:1.b
                                            *(x6_21 + 7) = v19_1:1.b
                                            *(x6_21 + 8) = v18_1:2.b
                                            *(x6_21 + 9) = v18_1:2.b
                                            *(x6_21 + 0xa) = v18_1:2.b
                                            *(x6_21 + 0xb) = v19_1:2.b
                                            *(x6_21 + 0xc) = v18_1:3.b
                                            *(x6_21 + 0xd) = v18_1:3.b
                                            *(x6_21 + 0xe) = v18_1:3.b
                                            *(x6_21 + 0xf) = v19_1:3.b
                                            *(x6_21 + 0x10) = v18_1:4.b
                                            *(x6_21 + 0x11) = v18_1:4.b
                                            *(x6_21 + 0x12) = v18_1:4.b
                                            *(x6_21 + 0x13) = v19_1:4.b
                                            *(x6_21 + 0x14) = v18_1:5.b
                                            *(x6_21 + 0x15) = v18_1:5.b
                                            *(x6_21 + 0x16) = v18_1:5.b
                                            *(x6_21 + 0x17) = v19_1:5.b
                                            *(x6_21 + 0x18) = v18_1:6.b
                                            *(x6_21 + 0x19) = v18_1:6.b
                                            *(x6_21 + 0x1a) = v18_1:6.b
                                            *(x6_21 + 0x1b) = v19_1:6.b
                                            *(x6_21 + 0x1c) = v18_1:7.b
                                            *(x6_21 + 0x1d) = v18_1:7.b
                                            *(x6_21 + 0x1e) = v18_1:7.b
                                            *(x6_21 + 0x1f) = v19_1:7.b
                                            x6_21 += 0x20
                                        while (j_17 != -8)
                                        x15_9 = x28_3
                                        
                                        if (x9_1 + 1 != x7_1)
                                            goto label_ffb8b0
                            case 0xf
                                if ((x9_1.d & 0x80000000) == 0)
                                    int32_t x6_5 = x9_1.d
                                    
                                    if (x9_1.d u< 7)
                                        goto label_ffb400
                                    
                                    int64_t j_70
                                    
                                    if (x9_1.d u>= 0xf)
                                        int64_t j_37 = j_60
                                        int64_t j_18
                                        
                                        do
                                            v16_1.b = *x15_3
                                            v17_1.b = x15_3[1]
                                            v18_1.b = x15_3[2]
                                            v16_1:1.b = x15_3[3]
                                            v17_1:1.b = x15_3[4]
                                            v18_1:1.b = x15_3[5]
                                            v16_1:2.b = x15_3[6]
                                            v17_1:2.b = x15_3[7]
                                            v18_1:2.b = x15_3[8]
                                            v16_1:3.b = x15_3[9]
                                            v17_1:3.b = x15_3[0xa]
                                            v18_1:3.b = x15_3[0xb]
                                            v16_1:4.b = x15_3[0xc]
                                            v17_1:4.b = x15_3[0xd]
                                            v18_1:4.b = x15_3[0xe]
                                            v16_1:5.b = x15_3[0xf]
                                            v17_1:5.b = x15_3[0x10]
                                            v18_1:5.b = x15_3[0x11]
                                            v16_1:6.b = x15_3[0x12]
                                            v17_1:6.b = x15_3[0x13]
                                            v18_1:6.b = x15_3[0x14]
                                            v16_1:7.b = x15_3[0x15]
                                            v17_1:7.b = x15_3[0x16]
                                            v18_1:7.b = x15_3[0x17]
                                            v16_1:8.b = x15_3[0x18]
                                            v17_1:8.b = x15_3[0x19]
                                            v18_1:8.b = x15_3[0x1a]
                                            v16_1:9.b = x15_3[0x1b]
                                            v17_1:9.b = x15_3[0x1c]
                                            v18_1:9.b = x15_3[0x1d]
                                            v16_1:0xa.b = x15_3[0x1e]
                                            v17_1:0xa.b = x15_3[0x1f]
                                            v18_1:0xa.b = x15_3[0x20]
                                            v16_1:0xb.b = x15_3[0x21]
                                            v17_1:0xb.b = x15_3[0x22]
                                            v18_1:0xb.b = x15_3[0x23]
                                            v16_1:0xc.b = x15_3[0x24]
                                            v17_1:0xc.b = x15_3[0x25]
                                            v18_1:0xc.b = x15_3[0x26]
                                            v16_1:0xd.b = x15_3[0x27]
                                            v17_1:0xd.b = x15_3[0x28]
                                            v18_1:0xd.b = x15_3[0x29]
                                            v16_1:0xe.b = x15_3[0x2a]
                                            v17_1:0xe.b = x15_3[0x2b]
                                            v18_1:0xe.b = x15_3[0x2c]
                                            v16_1:0xf.b = x15_3[0x2d]
                                            v17_1:0xf.b = x15_3[0x2e]
                                            v18_1:0xf.b = x15_3[0x2f]
                                            x15_3 = &x15_3[0x30]
                                            j_18 = j_37
                                            j_37 -= 0x10
                                            uint128_t v19_2 = vextq_s8(v17_1, v17_1, 8)
                                            uint128_t v7_8 = vextq_s8(v16_1, v16_1, 8)
                                            v20_1 = vextq_s8(v18_1, v18_1, 8)
                                            v21_1 = vmlal_u8(mulu.dp.o(v17_1, v5_1), v16_1, v4_1)
                                            v19_1 = vmlal_u8(mulu.dp.o(v19_2, v5_1), v7_8, v4_1)
                                            vaddhn_u16(v21_1, mulu.dp.o(v18_1, v6_1))
                                            *lr_1 = vaddhn_high_u16(v19_1, mulu.dp.o(v20_1, v6_1))
                                            lr_1 = &lr_1[0x10]
                                        while (j_18 != 0x10)
                                        
                                        if (x9_1 + 1 != j_60)
                                            j_70 = j_60
                                            
                                            if (((x9_1 + 1).d & 8) != 0)
                                                goto label_ffadcc
                                            
                                            x6_5 = x28_2
                                            x17_3 = &x17_3[x10_2]
                                            fp_6 = &fp_6[j_60]
                                        label_ffb400:
                                            int32_t j_19 = x6_5 + 1
                                            
                                            do
                                                j_19 -= 1
                                                *fp_6 = ((zx.d(*x17_3) * 0x4d
                                                    + zx.d(x17_3[1]) * 0x96
                                                    + zx.d(x17_3[2]) * 0x1d) u>> 8).b
                                                fp_6 = &fp_6[1]
                                                x17_3 = &x17_3[3]
                                            while (j_19 s> 0)
                                    else
                                        j_70 = 0
                                    label_ffadcc:
                                        fp_6 = &fp_6[x7_1]
                                        x17_3 = &x17_3[x0_3]
                                        uint64_t* x15_13 = x0_1 + j_70 + x26_2
                                        void* x6_7 = x19 + j_70 * 3 + x27_4
                                        int64_t j_47 = fp_4 + j_70
                                        int64_t j_20
                                        
                                        do
                                            v16_1.b = *x6_7
                                            v17_1.b = *(x6_7 + 1)
                                            v18_1.b = *(x6_7 + 2)
                                            v16_1:1.b = *(x6_7 + 3)
                                            v17_1:1.b = *(x6_7 + 4)
                                            v18_1:1.b = *(x6_7 + 5)
                                            v16_1:2.b = *(x6_7 + 6)
                                            v17_1:2.b = *(x6_7 + 7)
                                            v18_1:2.b = *(x6_7 + 8)
                                            v16_1:3.b = *(x6_7 + 9)
                                            v17_1:3.b = *(x6_7 + 0xa)
                                            v18_1:3.b = *(x6_7 + 0xb)
                                            v16_1:4.b = *(x6_7 + 0xc)
                                            v17_1:4.b = *(x6_7 + 0xd)
                                            v18_1:4.b = *(x6_7 + 0xe)
                                            v16_1:5.b = *(x6_7 + 0xf)
                                            v17_1:5.b = *(x6_7 + 0x10)
                                            v18_1:5.b = *(x6_7 + 0x11)
                                            v16_1:6.b = *(x6_7 + 0x12)
                                            v17_1:6.b = *(x6_7 + 0x13)
                                            v18_1:6.b = *(x6_7 + 0x14)
                                            v16_1:7.b = *(x6_7 + 0x15)
                                            v17_1:7.b = *(x6_7 + 0x16)
                                            v18_1:7.b = *(x6_7 + 0x17)
                                            x6_7 += 0x18
                                            j_20 = j_47
                                            j_47 += 8
                                            *x15_13 = vaddhn_u16(
                                                vmlal_u8(mulu.dp.o(v17_1, v5_1), v16_1, v4_1), 
                                                mulu.dp.o(v18_1, v6_1))
                                            x15_13 = &x15_13[1]
                                        while (j_20 != -8)
                                        x6_5 = x28_3
                                        
                                        if (x9_1 + 1 != x7_1)
                                            goto label_ffb400
                            case 0x10
                                if ((x9_1.d & 0x80000000) == 0)
                                    int32_t x6_8 = x9_1.d
                                    
                                    if (x9_1.d u< 7)
                                        goto label_ffb4a0
                                    
                                    int64_t j_71
                                    
                                    if (x9_1.d u>= 0xf)
                                        int64_t j_38 = j_60
                                        int64_t j_21
                                        
                                        do
                                            v16_1.b = *x15_3
                                            v17_1.b = x15_3[1]
                                            v18_1.b = x15_3[2]
                                            v16_1:1.b = x15_3[3]
                                            v17_1:1.b = x15_3[4]
                                            v18_1:1.b = x15_3[5]
                                            v16_1:2.b = x15_3[6]
                                            v17_1:2.b = x15_3[7]
                                            v18_1:2.b = x15_3[8]
                                            v16_1:3.b = x15_3[9]
                                            v17_1:3.b = x15_3[0xa]
                                            v18_1:3.b = x15_3[0xb]
                                            v16_1:4.b = x15_3[0xc]
                                            v17_1:4.b = x15_3[0xd]
                                            v18_1:4.b = x15_3[0xe]
                                            v16_1:5.b = x15_3[0xf]
                                            v17_1:5.b = x15_3[0x10]
                                            v18_1:5.b = x15_3[0x11]
                                            v16_1:6.b = x15_3[0x12]
                                            v17_1:6.b = x15_3[0x13]
                                            v18_1:6.b = x15_3[0x14]
                                            v16_1:7.b = x15_3[0x15]
                                            v17_1:7.b = x15_3[0x16]
                                            v18_1:7.b = x15_3[0x17]
                                            v16_1:8.b = x15_3[0x18]
                                            v17_1:8.b = x15_3[0x19]
                                            v18_1:8.b = x15_3[0x1a]
                                            v16_1:9.b = x15_3[0x1b]
                                            v17_1:9.b = x15_3[0x1c]
                                            v18_1:9.b = x15_3[0x1d]
                                            v16_1:0xa.b = x15_3[0x1e]
                                            v17_1:0xa.b = x15_3[0x1f]
                                            v18_1:0xa.b = x15_3[0x20]
                                            v16_1:0xb.b = x15_3[0x21]
                                            v17_1:0xb.b = x15_3[0x22]
                                            v18_1:0xb.b = x15_3[0x23]
                                            v16_1:0xc.b = x15_3[0x24]
                                            v17_1:0xc.b = x15_3[0x25]
                                            v18_1:0xc.b = x15_3[0x26]
                                            v16_1:0xd.b = x15_3[0x27]
                                            v17_1:0xd.b = x15_3[0x28]
                                            v18_1:0xd.b = x15_3[0x29]
                                            v16_1:0xe.b = x15_3[0x2a]
                                            v17_1:0xe.b = x15_3[0x2b]
                                            v18_1:0xe.b = x15_3[0x2c]
                                            v16_1:0xf.b = x15_3[0x2d]
                                            v17_1:0xf.b = x15_3[0x2e]
                                            v18_1:0xf.b = x15_3[0x2f]
                                            x15_3 = &x15_3[0x30]
                                            j_21 = j_38
                                            j_38 -= 0x10
                                            uint128_t v19_4 = vextq_s8(v17_1, v17_1, 8)
                                            uint128_t v7_11 = vextq_s8(v16_1, v16_1, 8)
                                            v20_1 = vextq_s8(v18_1, v18_1, 8)
                                            v21_1 = vmlal_u8(mulu.dp.o(v17_1, v5_1), v16_1, v4_1)
                                            v19_1 = vmlal_u8(mulu.dp.o(v19_4, v5_1), v7_11, v4_1)
                                            vaddhn_u16(v21_1, mulu.dp.o(v18_1, v6_1))
                                            uint128_t v0_2 =
                                                vaddhn_high_u16(v19_1, mulu.dp.o(v20_1, v6_1))
                                            *lr_1 = v0_2.b
                                            lr_1[1] = 0xff
                                            lr_1[2] = v0_2:1.b
                                            lr_1[3] = 0xff
                                            lr_1[4] = v0_2:2.b
                                            lr_1[5] = 0xff
                                            lr_1[6] = v0_2:3.b
                                            lr_1[7] = 0xff
                                            lr_1[8] = v0_2:4.b
                                            lr_1[9] = 0xff
                                            lr_1[0xa] = v0_2:5.b
                                            lr_1[0xb] = 0xff
                                            lr_1[0xc] = v0_2:6.b
                                            lr_1[0xd] = 0xff
                                            lr_1[0xe] = v0_2:7.b
                                            lr_1[0xf] = 0xff
                                            lr_1[0x10] = v0_2:8.b
                                            lr_1[0x11] = 0xff
                                            lr_1[0x12] = v0_2:9.b
                                            lr_1[0x13] = 0xff
                                            lr_1[0x14] = v0_2:0xa.b
                                            lr_1[0x15] = 0xff
                                            lr_1[0x16] = v0_2:0xb.b
                                            lr_1[0x17] = 0xff
                                            lr_1[0x18] = v0_2:0xc.b
                                            lr_1[0x19] = 0xff
                                            lr_1[0x1a] = v0_2:0xd.b
                                            lr_1[0x1b] = 0xff
                                            lr_1[0x1c] = v0_2:0xe.b
                                            lr_1[0x1d] = 0xff
                                            lr_1[0x1e] = v0_2:0xf.b
                                            lr_1[0x1f] = 0xff
                                            lr_1 = &lr_1[0x20]
                                        while (j_21 != 0x10)
                                        
                                        if (x9_1 + 1 != j_60)
                                            j_71 = j_60
                                            
                                            if (((x9_1 + 1).d & 8) != 0)
                                                goto label_ffae44
                                            
                                            x6_8 = x28_2
                                            x17_3 = &x17_3[x10_2]
                                            fp_6 = &fp_6[x10_1]
                                        label_ffb4a0:
                                            int32_t j_22 = x6_8 + 1
                                            
                                            do
                                                j_22 -= 1
                                                uint8_t x0_50 = ((zx.d(*x17_3) * 0x4d
                                                    + zx.d(x17_3[1]) * 0x96
                                                    + zx.d(x17_3[2]) * 0x1d) u>> 8).b
                                                fp_6[1] = 0xff
                                                x17_3 = &x17_3[3]
                                                *fp_6 = x0_50
                                                fp_6 = &fp_6[2]
                                            while (j_22 s> 0)
                                    else
                                        j_71 = 0
                                    label_ffae44:
                                        fp_6 = &fp_6[x27_3]
                                        x17_3 = &x17_3[x0_3]
                                        int64_t x15_17 = j_71 << 1
                                        void* x6_9 = x19 + x15_17 + j_71 + x27_4
                                        void* x15_19 = x0_1 + x15_17 + x26_2
                                        int64_t j_48 = fp_4 + j_71
                                        int64_t j_23
                                        
                                        do
                                            v16_1.b = *x6_9
                                            v17_1.b = *(x6_9 + 1)
                                            v18_1.b = *(x6_9 + 2)
                                            v16_1:1.b = *(x6_9 + 3)
                                            v17_1:1.b = *(x6_9 + 4)
                                            v18_1:1.b = *(x6_9 + 5)
                                            v16_1:2.b = *(x6_9 + 6)
                                            v17_1:2.b = *(x6_9 + 7)
                                            v18_1:2.b = *(x6_9 + 8)
                                            v16_1:3.b = *(x6_9 + 9)
                                            v17_1:3.b = *(x6_9 + 0xa)
                                            v18_1:3.b = *(x6_9 + 0xb)
                                            v16_1:4.b = *(x6_9 + 0xc)
                                            v17_1:4.b = *(x6_9 + 0xd)
                                            v18_1:4.b = *(x6_9 + 0xe)
                                            v16_1:5.b = *(x6_9 + 0xf)
                                            v17_1:5.b = *(x6_9 + 0x10)
                                            v18_1:5.b = *(x6_9 + 0x11)
                                            v16_1:6.b = *(x6_9 + 0x12)
                                            v17_1:6.b = *(x6_9 + 0x13)
                                            v18_1:6.b = *(x6_9 + 0x14)
                                            v16_1:7.b = *(x6_9 + 0x15)
                                            v17_1:7.b = *(x6_9 + 0x16)
                                            v18_1:7.b = *(x6_9 + 0x17)
                                            x6_9 += 0x18
                                            j_23 = j_48
                                            j_48 += 8
                                            v16_1 = vaddhn_u16(
                                                vmlal_u8(mulu.dp.o(v17_1, v5_1), v16_1, v4_1), 
                                                mulu.dp.o(v18_1, v6_1))
                                            *x15_19 = v16_1.b
                                            *(x15_19 + 1) = 0xff
                                            *(x15_19 + 2) = v16_1:1.b
                                            *(x15_19 + 3) = 0xff
                                            *(x15_19 + 4) = v16_1:2.b
                                            *(x15_19 + 5) = 0xff
                                            *(x15_19 + 6) = v16_1:3.b
                                            *(x15_19 + 7) = 0xff
                                            *(x15_19 + 8) = v16_1:4.b
                                            *(x15_19 + 9) = 0xff
                                            *(x15_19 + 0xa) = v16_1:5.b
                                            *(x15_19 + 0xb) = 0xff
                                            *(x15_19 + 0xc) = v16_1:6.b
                                            *(x15_19 + 0xd) = 0xff
                                            *(x15_19 + 0xe) = v16_1:7.b
                                            *(x15_19 + 0xf) = 0xff
                                            x15_19 += 0x10
                                        while (j_23 != -8)
                                        x6_8 = x28_3
                                        
                                        if (x9_1 + 1 != x7_1)
                                            goto label_ffb4a0
                            case 0x12
                                if ((x9_1.d & 0x80000000) == 0)
                                    int32_t x6_10 = x9_1.d
                                    
                                    if (x9_1.d u< 7)
                                        goto label_ffb8f8
                                    
                                    int64_t j_72
                                    
                                    if (x9_1.d u>= 0x1f)
                                        int64_t j_39 = j_63
                                        int64_t j_24
                                        
                                        do
                                            v16_1.b = *x15_3
                                            v17_1.b = x15_3[1]
                                            v18_1.b = x15_3[2]
                                            v16_1:1.b = x15_3[3]
                                            v17_1:1.b = x15_3[4]
                                            v18_1:1.b = x15_3[5]
                                            v16_1:2.b = x15_3[6]
                                            v17_1:2.b = x15_3[7]
                                            v18_1:2.b = x15_3[8]
                                            v16_1:3.b = x15_3[9]
                                            v17_1:3.b = x15_3[0xa]
                                            v18_1:3.b = x15_3[0xb]
                                            v16_1:4.b = x15_3[0xc]
                                            v17_1:4.b = x15_3[0xd]
                                            v18_1:4.b = x15_3[0xe]
                                            v16_1:5.b = x15_3[0xf]
                                            v17_1:5.b = x15_3[0x10]
                                            v18_1:5.b = x15_3[0x11]
                                            v16_1:6.b = x15_3[0x12]
                                            v17_1:6.b = x15_3[0x13]
                                            v18_1:6.b = x15_3[0x14]
                                            v16_1:7.b = x15_3[0x15]
                                            v17_1:7.b = x15_3[0x16]
                                            v18_1:7.b = x15_3[0x17]
                                            v16_1:8.b = x15_3[0x18]
                                            v17_1:8.b = x15_3[0x19]
                                            v18_1:8.b = x15_3[0x1a]
                                            v16_1:9.b = x15_3[0x1b]
                                            v17_1:9.b = x15_3[0x1c]
                                            v18_1:9.b = x15_3[0x1d]
                                            v16_1:0xa.b = x15_3[0x1e]
                                            v17_1:0xa.b = x15_3[0x1f]
                                            v18_1:0xa.b = x15_3[0x20]
                                            v16_1:0xb.b = x15_3[0x21]
                                            v17_1:0xb.b = x15_3[0x22]
                                            v18_1:0xb.b = x15_3[0x23]
                                            v16_1:0xc.b = x15_3[0x24]
                                            v17_1:0xc.b = x15_3[0x25]
                                            v18_1:0xc.b = x15_3[0x26]
                                            v16_1:0xd.b = x15_3[0x27]
                                            v17_1:0xd.b = x15_3[0x28]
                                            v18_1:0xd.b = x15_3[0x29]
                                            v16_1:0xe.b = x15_3[0x2a]
                                            v17_1:0xe.b = x15_3[0x2b]
                                            v18_1:0xe.b = x15_3[0x2c]
                                            v16_1:0xf.b = x15_3[0x2d]
                                            v17_1:0xf.b = x15_3[0x2e]
                                            v18_1:0xf.b = x15_3[0x2f]
                                            void* x0_52 = &x15_3[0x30]
                                            x15_3 = &x15_3[0x60]
                                            v20_1.b = *x0_52
                                            v21_1.b = *(x0_52 + 1)
                                            v22_1.b = *(x0_52 + 2)
                                            v20_1:1.b = *(x0_52 + 3)
                                            v21_1:1.b = *(x0_52 + 4)
                                            v22_1:1.b = *(x0_52 + 5)
                                            v20_1:2.b = *(x0_52 + 6)
                                            v21_1:2.b = *(x0_52 + 7)
                                            v22_1:2.b = *(x0_52 + 8)
                                            v20_1:3.b = *(x0_52 + 9)
                                            v21_1:3.b = *(x0_52 + 0xa)
                                            v22_1:3.b = *(x0_52 + 0xb)
                                            v20_1:4.b = *(x0_52 + 0xc)
                                            v21_1:4.b = *(x0_52 + 0xd)
                                            v22_1:4.b = *(x0_52 + 0xe)
                                            v20_1:5.b = *(x0_52 + 0xf)
                                            v21_1:5.b = *(x0_52 + 0x10)
                                            v22_1:5.b = *(x0_52 + 0x11)
                                            v20_1:6.b = *(x0_52 + 0x12)
                                            v21_1:6.b = *(x0_52 + 0x13)
                                            v22_1:6.b = *(x0_52 + 0x14)
                                            v20_1:7.b = *(x0_52 + 0x15)
                                            v21_1:7.b = *(x0_52 + 0x16)
                                            v22_1:7.b = *(x0_52 + 0x17)
                                            v20_1:8.b = *(x0_52 + 0x18)
                                            v21_1:8.b = *(x0_52 + 0x19)
                                            v22_1:8.b = *(x0_52 + 0x1a)
                                            v20_1:9.b = *(x0_52 + 0x1b)
                                            v21_1:9.b = *(x0_52 + 0x1c)
                                            v22_1:9.b = *(x0_52 + 0x1d)
                                            v20_1:0xa.b = *(x0_52 + 0x1e)
                                            v21_1:0xa.b = *(x0_52 + 0x1f)
                                            v22_1:0xa.b = *(x0_52 + 0x20)
                                            v20_1:0xb.b = *(x0_52 + 0x21)
                                            v21_1:0xb.b = *(x0_52 + 0x22)
                                            v22_1:0xb.b = *(x0_52 + 0x23)
                                            v20_1:0xc.b = *(x0_52 + 0x24)
                                            v21_1:0xc.b = *(x0_52 + 0x25)
                                            v22_1:0xc.b = *(x0_52 + 0x26)
                                            v20_1:0xd.b = *(x0_52 + 0x27)
                                            v21_1:0xd.b = *(x0_52 + 0x28)
                                            v22_1:0xd.b = *(x0_52 + 0x29)
                                            v20_1:0xe.b = *(x0_52 + 0x2a)
                                            v21_1:0xe.b = *(x0_52 + 0x2b)
                                            v22_1:0xe.b = *(x0_52 + 0x2c)
                                            v20_1:0xf.b = *(x0_52 + 0x2d)
                                            v21_1:0xf.b = *(x0_52 + 0x2e)
                                            v22_1:0xf.b = *(x0_52 + 0x2f)
                                            *(x28_6 - 0x40) = v16_1.b
                                            *(x28_6 - 0x3f) = v17_1.b
                                            *(x28_6 - 0x3e) = v18_1.b
                                            *(x28_6 - 0x3d) = 0xff
                                            *(x28_6 - 0x3c) = v16_1:1.b
                                            *(x28_6 - 0x3b) = v17_1:1.b
                                            *(x28_6 - 0x3a) = v18_1:1.b
                                            *(x28_6 - 0x39) = 0xff
                                            *(x28_6 - 0x38) = v16_1:2.b
                                            *(x28_6 - 0x37) = v17_1:2.b
                                            *(x28_6 - 0x36) = v18_1:2.b
                                            *(x28_6 - 0x35) = 0xff
                                            *(x28_6 - 0x34) = v16_1:3.b
                                            *(x28_6 - 0x33) = v17_1:3.b
                                            *(x28_6 - 0x32) = v18_1:3.b
                                            *(x28_6 - 0x31) = 0xff
                                            *(x28_6 - 0x30) = v16_1:4.b
                                            *(x28_6 - 0x2f) = v17_1:4.b
                                            *(x28_6 - 0x2e) = v18_1:4.b
                                            *(x28_6 - 0x2d) = 0xff
                                            *(x28_6 - 0x2c) = v16_1:5.b
                                            *(x28_6 - 0x2b) = v17_1:5.b
                                            *(x28_6 - 0x2a) = v18_1:5.b
                                            *(x28_6 - 0x29) = 0xff
                                            *(x28_6 - 0x28) = v16_1:6.b
                                            *(x28_6 - 0x27) = v17_1:6.b
                                            *(x28_6 - 0x26) = v18_1:6.b
                                            *(x28_6 - 0x25) = 0xff
                                            *(x28_6 - 0x24) = v16_1:7.b
                                            *(x28_6 - 0x23) = v17_1:7.b
                                            *(x28_6 - 0x22) = v18_1:7.b
                                            *(x28_6 - 0x21) = 0xff
                                            *(x28_6 - 0x20) = v16_1:8.b
                                            *(x28_6 - 0x1f) = v17_1:8.b
                                            *(x28_6 - 0x1e) = v18_1:8.b
                                            *(x28_6 - 0x1d) = 0xff
                                            *(x28_6 - 0x1c) = v16_1:9.b
                                            *(x28_6 - 0x1b) = v17_1:9.b
                                            *(x28_6 - 0x1a) = v18_1:9.b
                                            *(x28_6 - 0x19) = 0xff
                                            *(x28_6 - 0x18) = v16_1:0xa.b
                                            *(x28_6 - 0x17) = v17_1:0xa.b
                                            *(x28_6 - 0x16) = v18_1:0xa.b
                                            *(x28_6 - 0x15) = 0xff
                                            *(x28_6 - 0x14) = v16_1:0xb.b
                                            *(x28_6 - 0x13) = v17_1:0xb.b
                                            *(x28_6 - 0x12) = v18_1:0xb.b
                                            *(x28_6 - 0x11) = 0xff
                                            *(x28_6 - 0x10) = v16_1:0xc.b
                                            *(x28_6 - 0xf) = v17_1:0xc.b
                                            *(x28_6 - 0xe) = v18_1:0xc.b
                                            *(x28_6 - 0xd) = 0xff
                                            *(x28_6 - 0xc) = v16_1:0xd.b
                                            *(x28_6 - 0xb) = v17_1:0xd.b
                                            *(x28_6 - 0xa) = v18_1:0xd.b
                                            *(x28_6 - 9) = 0xff
                                            *(x28_6 - 8) = v16_1:0xe.b
                                            *(x28_6 - 7) = v17_1:0xe.b
                                            *(x28_6 - 6) = v18_1:0xe.b
                                            *(x28_6 - 5) = 0xff
                                            *(x28_6 - 4) = v16_1:0xf.b
                                            *(x28_6 - 3) = v17_1:0xf.b
                                            *(x28_6 - 2) = v18_1:0xf.b
                                            *(x28_6 - 1) = 0xff
                                            *x28_6 = v20_1.b
                                            x28_6[1] = v21_1.b
                                            x28_6[2] = v22_1.b
                                            x28_6[3] = 0xff
                                            x28_6[4] = v20_1:1.b
                                            x28_6[5] = v21_1:1.b
                                            x28_6[6] = v22_1:1.b
                                            x28_6[7] = 0xff
                                            x28_6[8] = v20_1:2.b
                                            x28_6[9] = v21_1:2.b
                                            x28_6[0xa] = v22_1:2.b
                                            x28_6[0xb] = 0xff
                                            x28_6[0xc] = v20_1:3.b
                                            x28_6[0xd] = v21_1:3.b
                                            x28_6[0xe] = v22_1:3.b
                                            x28_6[0xf] = 0xff
                                            x28_6[0x10] = v20_1:4.b
                                            x28_6[0x11] = v21_1:4.b
                                            x28_6[0x12] = v22_1:4.b
                                            x28_6[0x13] = 0xff
                                            x28_6[0x14] = v20_1:5.b
                                            x28_6[0x15] = v21_1:5.b
                                            x28_6[0x16] = v22_1:5.b
                                            x28_6[0x17] = 0xff
                                            x28_6[0x18] = v20_1:6.b
                                            x28_6[0x19] = v21_1:6.b
                                            x28_6[0x1a] = v22_1:6.b
                                            x28_6[0x1b] = 0xff
                                            x28_6[0x1c] = v20_1:7.b
                                            x28_6[0x1d] = v21_1:7.b
                                            x28_6[0x1e] = v22_1:7.b
                                            x28_6[0x1f] = 0xff
                                            x28_6[0x20] = v20_1:8.b
                                            x28_6[0x21] = v21_1:8.b
                                            x28_6[0x22] = v22_1:8.b
                                            x28_6[0x23] = 0xff
                                            x28_6[0x24] = v20_1:9.b
                                            x28_6[0x25] = v21_1:9.b
                                            x28_6[0x26] = v22_1:9.b
                                            x28_6[0x27] = 0xff
                                            x28_6[0x28] = v20_1:0xa.b
                                            x28_6[0x29] = v21_1:0xa.b
                                            x28_6[0x2a] = v22_1:0xa.b
                                            x28_6[0x2b] = 0xff
                                            x28_6[0x2c] = v20_1:0xb.b
                                            x28_6[0x2d] = v21_1:0xb.b
                                            x28_6[0x2e] = v22_1:0xb.b
                                            x28_6[0x2f] = 0xff
                                            x28_6[0x30] = v20_1:0xc.b
                                            x28_6[0x31] = v21_1:0xc.b
                                            x28_6[0x32] = v22_1:0xc.b
                                            x28_6[0x33] = 0xff
                                            x28_6[0x34] = v20_1:0xd.b
                                            x28_6[0x35] = v21_1:0xd.b
                                            x28_6[0x36] = v22_1:0xd.b
                                            x28_6[0x37] = 0xff
                                            x28_6[0x38] = v20_1:0xe.b
                                            x28_6[0x39] = v21_1:0xe.b
                                            x28_6[0x3a] = v22_1:0xe.b
                                            x28_6[0x3b] = 0xff
                                            x28_6[0x3c] = v20_1:0xf.b
                                            x28_6[0x3d] = v21_1:0xf.b
                                            x28_6[0x3e] = v22_1:0xf.b
                                            x28_6[0x3f] = 0xff
                                            j_24 = j_39
                                            j_39 -= 0x20
                                            x28_6 = &x28_6[0x80]
                                        while (j_24 != 0x20)
                                        
                                        if (x9_1 + 1 != j_63)
                                            j_72 = j_63
                                            
                                            if (x6_1 != 0)
                                                goto label_ffb530
                                            
                                            x6_10 = fp_3
                                            x17_3 = &x17_3[x0_4]
                                            fp_6 = &fp_6[fp_2]
                                        label_ffb8f8:
                                            int32_t j_25 = x6_10 + 1
                                            
                                            do
                                                j_25 -= 1
                                                *fp_6 = *x17_3
                                                fp_6[1] = x17_3[1]
                                                char x0_83 = x17_3[2]
                                                fp_6[3] = 0xff
                                                x17_3 = &x17_3[3]
                                                fp_6[2] = x0_83
                                                fp_6 = &fp_6[4]
                                            while (j_25 s> 0)
                                    else
                                        j_72 = 0
                                    label_ffb530:
                                        fp_6 = &fp_6[x28_4]
                                        x17_3 = &x17_3[x0_3]
                                        void* x15_84 = x0_1 + x26_2 + (j_72 << 2)
                                        void* x6_25 = x19 + j_72 * 3 + x27_4
                                        int64_t j_57 = fp_4 + j_72
                                        int64_t j_26
                                        
                                        do
                                            v16_1.b = *x6_25
                                            v17_1.b = *(x6_25 + 1)
                                            v18_1.b = *(x6_25 + 2)
                                            v16_1:1.b = *(x6_25 + 3)
                                            v17_1:1.b = *(x6_25 + 4)
                                            v18_1:1.b = *(x6_25 + 5)
                                            v16_1:2.b = *(x6_25 + 6)
                                            v17_1:2.b = *(x6_25 + 7)
                                            v18_1:2.b = *(x6_25 + 8)
                                            v16_1:3.b = *(x6_25 + 9)
                                            v17_1:3.b = *(x6_25 + 0xa)
                                            v18_1:3.b = *(x6_25 + 0xb)
                                            v16_1:4.b = *(x6_25 + 0xc)
                                            v17_1:4.b = *(x6_25 + 0xd)
                                            v18_1:4.b = *(x6_25 + 0xe)
                                            v16_1:5.b = *(x6_25 + 0xf)
                                            v17_1:5.b = *(x6_25 + 0x10)
                                            v18_1:5.b = *(x6_25 + 0x11)
                                            v16_1:6.b = *(x6_25 + 0x12)
                                            v17_1:6.b = *(x6_25 + 0x13)
                                            v18_1:6.b = *(x6_25 + 0x14)
                                            v16_1:7.b = *(x6_25 + 0x15)
                                            v17_1:7.b = *(x6_25 + 0x16)
                                            v18_1:7.b = *(x6_25 + 0x17)
                                            x6_25 += 0x18
                                            j_26 = j_57
                                            j_57 += 8
                                            *x15_84 = v16_1.b
                                            *(x15_84 + 1) = v17_1.b
                                            *(x15_84 + 2) = v18_1.b
                                            *(x15_84 + 3) = 0xff
                                            *(x15_84 + 4) = v16_1:1.b
                                            *(x15_84 + 5) = v17_1:1.b
                                            *(x15_84 + 6) = v18_1:1.b
                                            *(x15_84 + 7) = 0xff
                                            *(x15_84 + 8) = v16_1:2.b
                                            *(x15_84 + 9) = v17_1:2.b
                                            *(x15_84 + 0xa) = v18_1:2.b
                                            *(x15_84 + 0xb) = 0xff
                                            *(x15_84 + 0xc) = v16_1:3.b
                                            *(x15_84 + 0xd) = v17_1:3.b
                                            *(x15_84 + 0xe) = v18_1:3.b
                                            *(x15_84 + 0xf) = 0xff
                                            *(x15_84 + 0x10) = v16_1:4.b
                                            *(x15_84 + 0x11) = v17_1:4.b
                                            *(x15_84 + 0x12) = v18_1:4.b
                                            *(x15_84 + 0x13) = 0xff
                                            *(x15_84 + 0x14) = v16_1:5.b
                                            *(x15_84 + 0x15) = v17_1:5.b
                                            *(x15_84 + 0x16) = v18_1:5.b
                                            *(x15_84 + 0x17) = 0xff
                                            *(x15_84 + 0x18) = v16_1:6.b
                                            *(x15_84 + 0x19) = v17_1:6.b
                                            *(x15_84 + 0x1a) = v18_1:6.b
                                            *(x15_84 + 0x1b) = 0xff
                                            *(x15_84 + 0x1c) = v16_1:7.b
                                            *(x15_84 + 0x1d) = v17_1:7.b
                                            *(x15_84 + 0x1e) = v18_1:7.b
                                            *(x15_84 + 0x1f) = 0xff
                                            x15_84 += 0x20
                                        while (j_26 != -8)
                                        x6_10 = x28_3
                                        
                                        if (x9_1 + 1 != x7_1)
                                            goto label_ffb8f8
                            case 0x17
                                if ((x9_1.d & 0x80000000) == 0)
                                    int32_t x6_11 = x9_1.d
                                    
                                    if (x9_1.d u>= 8)
                                        int64_t j_73
                                        
                                        if (x9_1.d u>= 0x10)
                                            int64_t j_40 = j_62
                                            int64_t j_27
                                            
                                            do
                                                v16_1.b = *x15_3
                                                v17_1.b = x15_3[1]
                                                v18_1.b = x15_3[2]
                                                v19_1.b = x15_3[3]
                                                v16_1:1.b = x15_3[4]
                                                v17_1:1.b = x15_3[5]
                                                v18_1:1.b = x15_3[6]
                                                v19_1:1.b = x15_3[7]
                                                v16_1:2.b = x15_3[8]
                                                v17_1:2.b = x15_3[9]
                                                v18_1:2.b = x15_3[0xa]
                                                v19_1:2.b = x15_3[0xb]
                                                v16_1:3.b = x15_3[0xc]
                                                v17_1:3.b = x15_3[0xd]
                                                v18_1:3.b = x15_3[0xe]
                                                v19_1:3.b = x15_3[0xf]
                                                v16_1:4.b = x15_3[0x10]
                                                v17_1:4.b = x15_3[0x11]
                                                v18_1:4.b = x15_3[0x12]
                                                v19_1:4.b = x15_3[0x13]
                                                v16_1:5.b = x15_3[0x14]
                                                v17_1:5.b = x15_3[0x15]
                                                v18_1:5.b = x15_3[0x16]
                                                v19_1:5.b = x15_3[0x17]
                                                v16_1:6.b = x15_3[0x18]
                                                v17_1:6.b = x15_3[0x19]
                                                v18_1:6.b = x15_3[0x1a]
                                                v19_1:6.b = x15_3[0x1b]
                                                v16_1:7.b = x15_3[0x1c]
                                                v17_1:7.b = x15_3[0x1d]
                                                v18_1:7.b = x15_3[0x1e]
                                                v19_1:7.b = x15_3[0x1f]
                                                v16_1:8.b = x15_3[0x20]
                                                v17_1:8.b = x15_3[0x21]
                                                v18_1:8.b = x15_3[0x22]
                                                v19_1:8.b = x15_3[0x23]
                                                v16_1:9.b = x15_3[0x24]
                                                v17_1:9.b = x15_3[0x25]
                                                v18_1:9.b = x15_3[0x26]
                                                v19_1:9.b = x15_3[0x27]
                                                v16_1:0xa.b = x15_3[0x28]
                                                v17_1:0xa.b = x15_3[0x29]
                                                v18_1:0xa.b = x15_3[0x2a]
                                                v19_1:0xa.b = x15_3[0x2b]
                                                v16_1:0xb.b = x15_3[0x2c]
                                                v17_1:0xb.b = x15_3[0x2d]
                                                v18_1:0xb.b = x15_3[0x2e]
                                                v19_1:0xb.b = x15_3[0x2f]
                                                v16_1:0xc.b = x15_3[0x30]
                                                v17_1:0xc.b = x15_3[0x31]
                                                v18_1:0xc.b = x15_3[0x32]
                                                v19_1:0xc.b = x15_3[0x33]
                                                v16_1:0xd.b = x15_3[0x34]
                                                v17_1:0xd.b = x15_3[0x35]
                                                v18_1:0xd.b = x15_3[0x36]
                                                v19_1:0xd.b = x15_3[0x37]
                                                v16_1:0xe.b = x15_3[0x38]
                                                v17_1:0xe.b = x15_3[0x39]
                                                v18_1:0xe.b = x15_3[0x3a]
                                                v19_1:0xe.b = x15_3[0x3b]
                                                v16_1:0xf.b = x15_3[0x3c]
                                                v17_1:0xf.b = x15_3[0x3d]
                                                v18_1:0xf.b = x15_3[0x3e]
                                                v19_1:0xf.b = x15_3[0x3f]
                                                x15_3 = &x15_3[0x40]
                                                j_27 = j_40
                                                j_40 -= 0x10
                                                uint128_t v20_2 = vextq_s8(v17_1, v17_1, 8)
                                                uint128_t v7_12 = vextq_s8(v16_1, v16_1, 8)
                                                v21_1 = vextq_s8(v18_1, v18_1, 8)
                                                v22_1 =
                                                    vmlal_u8(mulu.dp.o(v17_1, v5_1), v16_1, v4_1)
                                                v20_1 =
                                                    vmlal_u8(mulu.dp.o(v20_2, v5_1), v7_12, v4_1)
                                                vaddhn_u16(v22_1, mulu.dp.o(v18_1, v6_1))
                                                *lr_1 =
                                                    vaddhn_high_u16(v20_1, mulu.dp.o(v21_1, v6_1))
                                                lr_1 = &lr_1[0x10]
                                            while (j_27 != 0x10)
                                            j_73 = j_62
                                            
                                            if (x26_1 u> 8)
                                                goto label_ffb5ec
                                            
                                            x6_11 = x9_1.d - j_62.d
                                            x17_3 = &x17_3[j_62 << 2]
                                            fp_6 = &fp_6[j_62]
                                        else
                                            j_73 = 0
                                        label_ffb5ec:
                                            void* x6_26 = x0_1 + j_73 + x26_2
                                            fp_6 = &fp_6[x11_5]
                                            x17_3 = &x17_3[x6_3]
                                            void* x15_92 = x19 + x27_4 + (j_73 << 2)
                                            int64_t j_58 = x27_2 + j_73
                                            int64_t j_28
                                            
                                            do
                                                v16_1.b = *x15_92
                                                v17_1.b = *(x15_92 + 1)
                                                v18_1.b = *(x15_92 + 2)
                                                v19_1.b = *(x15_92 + 3)
                                                v16_1:1.b = *(x15_92 + 4)
                                                v17_1:1.b = *(x15_92 + 5)
                                                v18_1:1.b = *(x15_92 + 6)
                                                v19_1:1.b = *(x15_92 + 7)
                                                v16_1:2.b = *(x15_92 + 8)
                                                v17_1:2.b = *(x15_92 + 9)
                                                v18_1:2.b = *(x15_92 + 0xa)
                                                v19_1:2.b = *(x15_92 + 0xb)
                                                v16_1:3.b = *(x15_92 + 0xc)
                                                v17_1:3.b = *(x15_92 + 0xd)
                                                v18_1:3.b = *(x15_92 + 0xe)
                                                v19_1:3.b = *(x15_92 + 0xf)
                                                v16_1:4.b = *(x15_92 + 0x10)
                                                v17_1:4.b = *(x15_92 + 0x11)
                                                v18_1:4.b = *(x15_92 + 0x12)
                                                v19_1:4.b = *(x15_92 + 0x13)
                                                v16_1:5.b = *(x15_92 + 0x14)
                                                v17_1:5.b = *(x15_92 + 0x15)
                                                v18_1:5.b = *(x15_92 + 0x16)
                                                v19_1:5.b = *(x15_92 + 0x17)
                                                v16_1:6.b = *(x15_92 + 0x18)
                                                v17_1:6.b = *(x15_92 + 0x19)
                                                v18_1:6.b = *(x15_92 + 0x1a)
                                                v19_1:6.b = *(x15_92 + 0x1b)
                                                v16_1:7.b = *(x15_92 + 0x1c)
                                                v17_1:7.b = *(x15_92 + 0x1d)
                                                v18_1:7.b = *(x15_92 + 0x1e)
                                                v19_1:7.b = *(x15_92 + 0x1f)
                                                x15_92 += 0x20
                                                j_28 = j_58
                                                j_58 += 8
                                                *x6_26 = vaddhn_u16(
                                                    vmlal_u8(mulu.dp.o(v17_1, v5_1), v16_1, v4_1), 
                                                    mulu.dp.o(v18_1, v6_1))
                                                x6_26 += 8
                                            while (j_28 != -8)
                                            x6_11 = x0_7
                                    
                                    int32_t j_29 = x6_11 + 1
                                    
                                    do
                                        j_29 -= 1
                                        *fp_6 = ((zx.d(*x17_3) * 0x4d + zx.d(x17_3[1]) * 0x96
                                            + zx.d(x17_3[2]) * 0x1d) u>> 8).b
                                        fp_6 = &fp_6[1]
                                        x17_3 = &x17_3[4]
                                    while (j_29 s> 0)
                            case 0x18
                                if ((x9_1.d & 0x80000000) == 0)
                                    int32_t x6_12 = x9_1.d
                                    
                                    if (x9_1.d u< 7)
                                        goto label_ffb6d0
                                    
                                    int64_t j_74
                                    
                                    if (x9_1.d u>= 0xf)
                                        int64_t j_41 = j_60
                                        int64_t j_30
                                        
                                        do
                                            v16_1.b = *x15_3
                                            v17_1.b = x15_3[1]
                                            v18_1.b = x15_3[2]
                                            v19_1.b = x15_3[3]
                                            v16_1:1.b = x15_3[4]
                                            v17_1:1.b = x15_3[5]
                                            v18_1:1.b = x15_3[6]
                                            v19_1:1.b = x15_3[7]
                                            v16_1:2.b = x15_3[8]
                                            v17_1:2.b = x15_3[9]
                                            v18_1:2.b = x15_3[0xa]
                                            v19_1:2.b = x15_3[0xb]
                                            v16_1:3.b = x15_3[0xc]
                                            v17_1:3.b = x15_3[0xd]
                                            v18_1:3.b = x15_3[0xe]
                                            v19_1:3.b = x15_3[0xf]
                                            v16_1:4.b = x15_3[0x10]
                                            v17_1:4.b = x15_3[0x11]
                                            v18_1:4.b = x15_3[0x12]
                                            v19_1:4.b = x15_3[0x13]
                                            v16_1:5.b = x15_3[0x14]
                                            v17_1:5.b = x15_3[0x15]
                                            v18_1:5.b = x15_3[0x16]
                                            v19_1:5.b = x15_3[0x17]
                                            v16_1:6.b = x15_3[0x18]
                                            v17_1:6.b = x15_3[0x19]
                                            v18_1:6.b = x15_3[0x1a]
                                            v19_1:6.b = x15_3[0x1b]
                                            v16_1:7.b = x15_3[0x1c]
                                            v17_1:7.b = x15_3[0x1d]
                                            v18_1:7.b = x15_3[0x1e]
                                            v19_1:7.b = x15_3[0x1f]
                                            v16_1:8.b = x15_3[0x20]
                                            v17_1:8.b = x15_3[0x21]
                                            v18_1:8.b = x15_3[0x22]
                                            v19_1:8.b = x15_3[0x23]
                                            v16_1:9.b = x15_3[0x24]
                                            v17_1:9.b = x15_3[0x25]
                                            v18_1:9.b = x15_3[0x26]
                                            v19_1:9.b = x15_3[0x27]
                                            v16_1:0xa.b = x15_3[0x28]
                                            v17_1:0xa.b = x15_3[0x29]
                                            v18_1:0xa.b = x15_3[0x2a]
                                            v19_1:0xa.b = x15_3[0x2b]
                                            v16_1:0xb.b = x15_3[0x2c]
                                            v17_1:0xb.b = x15_3[0x2d]
                                            v18_1:0xb.b = x15_3[0x2e]
                                            v19_1:0xb.b = x15_3[0x2f]
                                            v16_1:0xc.b = x15_3[0x30]
                                            v17_1:0xc.b = x15_3[0x31]
                                            v18_1:0xc.b = x15_3[0x32]
                                            v19_1:0xc.b = x15_3[0x33]
                                            v16_1:0xd.b = x15_3[0x34]
                                            v17_1:0xd.b = x15_3[0x35]
                                            v18_1:0xd.b = x15_3[0x36]
                                            v19_1:0xd.b = x15_3[0x37]
                                            v16_1:0xe.b = x15_3[0x38]
                                            v17_1:0xe.b = x15_3[0x39]
                                            v18_1:0xe.b = x15_3[0x3a]
                                            v19_1:0xe.b = x15_3[0x3b]
                                            v16_1:0xf.b = x15_3[0x3c]
                                            v17_1:0xf.b = x15_3[0x3d]
                                            v18_1:0xf.b = x15_3[0x3e]
                                            v19_1:0xf.b = x15_3[0x3f]
                                            x15_3 = &x15_3[0x40]
                                            j_30 = j_41
                                            j_41 -= 0x10
                                            uint128_t v20_4 = vextq_s8(v17_1, v17_1, 8)
                                            uint128_t v7_18 = vextq_s8(v16_1, v16_1, 8)
                                            uint128_t v21_4 = vextq_s8(v18_1, v18_1, 8)
                                            v22_1 = vmlal_u8(mulu.dp.o(v17_1, v5_1), v16_1, v4_1)
                                            v20_1 = vmlal_u8(mulu.dp.o(v20_4, v5_1), v7_18, v4_1)
                                            vaddhn_u16(v22_1, mulu.dp.o(v18_1, v6_1))
                                            v18_1 = vaddhn_high_u16(v20_1, mulu.dp.o(v21_4, v6_1))
                                            *lr_1 = v18_1.b
                                            lr_1[1] = v19_1.b
                                            lr_1[2] = v18_1:1.b
                                            lr_1[3] = v19_1:1.b
                                            lr_1[4] = v18_1:2.b
                                            lr_1[5] = v19_1:2.b
                                            lr_1[6] = v18_1:3.b
                                            lr_1[7] = v19_1:3.b
                                            lr_1[8] = v18_1:4.b
                                            lr_1[9] = v19_1:4.b
                                            lr_1[0xa] = v18_1:5.b
                                            lr_1[0xb] = v19_1:5.b
                                            lr_1[0xc] = v18_1:6.b
                                            lr_1[0xd] = v19_1:6.b
                                            lr_1[0xe] = v18_1:7.b
                                            lr_1[0xf] = v19_1:7.b
                                            lr_1[0x10] = v18_1:8.b
                                            lr_1[0x11] = v19_1:8.b
                                            lr_1[0x12] = v18_1:9.b
                                            lr_1[0x13] = v19_1:9.b
                                            lr_1[0x14] = v18_1:0xa.b
                                            lr_1[0x15] = v19_1:0xa.b
                                            lr_1[0x16] = v18_1:0xb.b
                                            lr_1[0x17] = v19_1:0xb.b
                                            lr_1[0x18] = v18_1:0xc.b
                                            lr_1[0x19] = v19_1:0xc.b
                                            lr_1[0x1a] = v18_1:0xd.b
                                            lr_1[0x1b] = v19_1:0xd.b
                                            lr_1[0x1c] = v18_1:0xe.b
                                            lr_1[0x1d] = v19_1:0xe.b
                                            lr_1[0x1e] = v18_1:0xf.b
                                            lr_1[0x1f] = v19_1:0xf.b
                                            lr_1 = &lr_1[0x20]
                                        while (j_30 != 0x10)
                                        
                                        if (x9_1 + 1 != j_60)
                                            j_74 = j_60
                                            
                                            if (((x9_1 + 1).d & 8) != 0)
                                                goto label_ffaf0c
                                            
                                            x6_12 = x28_2
                                            x17_3 = &x17_3[j_60 << 2]
                                            fp_6 = &fp_6[x10_1]
                                        label_ffb6d0:
                                            int32_t j_31 = x6_12 + 1
                                            
                                            do
                                                j_31 -= 1
                                                *fp_6 = ((zx.d(*x17_3) * 0x4d
                                                    + zx.d(x17_3[1]) * 0x96
                                                    + zx.d(x17_3[2]) * 0x1d) u>> 8).b
                                                char x0_67 = x17_3[3]
                                                x17_3 = &x17_3[4]
                                                fp_6[1] = x0_67
                                                fp_6 = &fp_6[2]
                                            while (j_31 s> 0)
                                    else
                                        j_74 = 0
                                    label_ffaf0c:
                                        void* x6_13 = x0_1 + x26_2 + (j_74 << 1)
                                        fp_6 = &fp_6[x27_3]
                                        x17_3 = &x17_3[x28_4]
                                        void* x15_24 = x19 + x27_4 + (j_74 << 2)
                                        int64_t j_49 = fp_4 + j_74
                                        int64_t j_32
                                        
                                        do
                                            v16_1.b = *x15_24
                                            v17_1.b = *(x15_24 + 1)
                                            v18_1.b = *(x15_24 + 2)
                                            v19_1.b = *(x15_24 + 3)
                                            v16_1:1.b = *(x15_24 + 4)
                                            v17_1:1.b = *(x15_24 + 5)
                                            v18_1:1.b = *(x15_24 + 6)
                                            v19_1:1.b = *(x15_24 + 7)
                                            v16_1:2.b = *(x15_24 + 8)
                                            v17_1:2.b = *(x15_24 + 9)
                                            v18_1:2.b = *(x15_24 + 0xa)
                                            v19_1:2.b = *(x15_24 + 0xb)
                                            v16_1:3.b = *(x15_24 + 0xc)
                                            v17_1:3.b = *(x15_24 + 0xd)
                                            v18_1:3.b = *(x15_24 + 0xe)
                                            v19_1:3.b = *(x15_24 + 0xf)
                                            v16_1:4.b = *(x15_24 + 0x10)
                                            v17_1:4.b = *(x15_24 + 0x11)
                                            v18_1:4.b = *(x15_24 + 0x12)
                                            v19_1:4.b = *(x15_24 + 0x13)
                                            v16_1:5.b = *(x15_24 + 0x14)
                                            v17_1:5.b = *(x15_24 + 0x15)
                                            v18_1:5.b = *(x15_24 + 0x16)
                                            v19_1:5.b = *(x15_24 + 0x17)
                                            v16_1:6.b = *(x15_24 + 0x18)
                                            v17_1:6.b = *(x15_24 + 0x19)
                                            v18_1:6.b = *(x15_24 + 0x1a)
                                            v19_1:6.b = *(x15_24 + 0x1b)
                                            v16_1:7.b = *(x15_24 + 0x1c)
                                            v17_1:7.b = *(x15_24 + 0x1d)
                                            v18_1:7.b = *(x15_24 + 0x1e)
                                            v19_1:7.b = *(x15_24 + 0x1f)
                                            x15_24 += 0x20
                                            j_32 = j_49
                                            j_49 += 8
                                            v18_1 = vaddhn_u16(
                                                vmlal_u8(mulu.dp.o(v17_1, v5_1), v16_1, v4_1), 
                                                mulu.dp.o(v18_1, v6_1))
                                            *x6_13 = v18_1.b
                                            *(x6_13 + 1) = v19_1.b
                                            *(x6_13 + 2) = v18_1:1.b
                                            *(x6_13 + 3) = v19_1:1.b
                                            *(x6_13 + 4) = v18_1:2.b
                                            *(x6_13 + 5) = v19_1:2.b
                                            *(x6_13 + 6) = v18_1:3.b
                                            *(x6_13 + 7) = v19_1:3.b
                                            *(x6_13 + 8) = v18_1:4.b
                                            *(x6_13 + 9) = v19_1:4.b
                                            *(x6_13 + 0xa) = v18_1:5.b
                                            *(x6_13 + 0xb) = v19_1:5.b
                                            *(x6_13 + 0xc) = v18_1:6.b
                                            *(x6_13 + 0xd) = v19_1:6.b
                                            *(x6_13 + 0xe) = v18_1:7.b
                                            *(x6_13 + 0xf) = v19_1:7.b
                                            x6_13 += 0x10
                                        while (j_32 != -8)
                                        x6_12 = x28_3
                                        
                                        if (x9_1 + 1 != x7_1)
                                            goto label_ffb6d0
                            case 0x19
                                if ((x9_1.d & 0x80000000) == 0)
                                    int32_t x15_26 = x9_1.d
                                    
                                    if (x9_1.d u>= 8)
                                        int64_t j_75
                                        
                                        if (x9_1.d u>= 0x20)
                                            int64_t j_42 = j_61
                                            char* x15_97 = x19 + 0x40 + x27_4
                                            int64_t j_33
                                            
                                            do
                                                v16_1.b = *(x15_97 - 0x40)
                                                v17_1.b = *(x15_97 - 0x3f)
                                                v18_1.b = *(x15_97 - 0x3e)
                                                v19_1.b = *(x15_97 - 0x3d)
                                                v16_1:1.b = *(x15_97 - 0x3c)
                                                v17_1:1.b = *(x15_97 - 0x3b)
                                                v18_1:1.b = *(x15_97 - 0x3a)
                                                v19_1:1.b = *(x15_97 - 0x39)
                                                v16_1:2.b = *(x15_97 - 0x38)
                                                v17_1:2.b = *(x15_97 - 0x37)
                                                v18_1:2.b = *(x15_97 - 0x36)
                                                v19_1:2.b = *(x15_97 - 0x35)
                                                v16_1:3.b = *(x15_97 - 0x34)
                                                v17_1:3.b = *(x15_97 - 0x33)
                                                v18_1:3.b = *(x15_97 - 0x32)
                                                v19_1:3.b = *(x15_97 - 0x31)
                                                v16_1:4.b = *(x15_97 - 0x30)
                                                v17_1:4.b = *(x15_97 - 0x2f)
                                                v18_1:4.b = *(x15_97 - 0x2e)
                                                v19_1:4.b = *(x15_97 - 0x2d)
                                                v16_1:5.b = *(x15_97 - 0x2c)
                                                v17_1:5.b = *(x15_97 - 0x2b)
                                                v18_1:5.b = *(x15_97 - 0x2a)
                                                v19_1:5.b = *(x15_97 - 0x29)
                                                v16_1:6.b = *(x15_97 - 0x28)
                                                v17_1:6.b = *(x15_97 - 0x27)
                                                v18_1:6.b = *(x15_97 - 0x26)
                                                v19_1:6.b = *(x15_97 - 0x25)
                                                v16_1:7.b = *(x15_97 - 0x24)
                                                v17_1:7.b = *(x15_97 - 0x23)
                                                v18_1:7.b = *(x15_97 - 0x22)
                                                v19_1:7.b = *(x15_97 - 0x21)
                                                v16_1:8.b = *(x15_97 - 0x20)
                                                v17_1:8.b = *(x15_97 - 0x1f)
                                                v18_1:8.b = *(x15_97 - 0x1e)
                                                v19_1:8.b = *(x15_97 - 0x1d)
                                                v16_1:9.b = *(x15_97 - 0x1c)
                                                v17_1:9.b = *(x15_97 - 0x1b)
                                                v18_1:9.b = *(x15_97 - 0x1a)
                                                v19_1:9.b = *(x15_97 - 0x19)
                                                v16_1:0xa.b = *(x15_97 - 0x18)
                                                v17_1:0xa.b = *(x15_97 - 0x17)
                                                v18_1:0xa.b = *(x15_97 - 0x16)
                                                v19_1:0xa.b = *(x15_97 - 0x15)
                                                v16_1:0xb.b = *(x15_97 - 0x14)
                                                v17_1:0xb.b = *(x15_97 - 0x13)
                                                v18_1:0xb.b = *(x15_97 - 0x12)
                                                v19_1:0xb.b = *(x15_97 - 0x11)
                                                v16_1:0xc.b = *(x15_97 - 0x10)
                                                v17_1:0xc.b = *(x15_97 - 0xf)
                                                v18_1:0xc.b = *(x15_97 - 0xe)
                                                v19_1:0xc.b = *(x15_97 - 0xd)
                                                v16_1:0xd.b = *(x15_97 - 0xc)
                                                v17_1:0xd.b = *(x15_97 - 0xb)
                                                v18_1:0xd.b = *(x15_97 - 0xa)
                                                v19_1:0xd.b = *(x15_97 - 9)
                                                v16_1:0xe.b = *(x15_97 - 8)
                                                v17_1:0xe.b = *(x15_97 - 7)
                                                v18_1:0xe.b = *(x15_97 - 6)
                                                v19_1:0xe.b = *(x15_97 - 5)
                                                v16_1:0xf.b = *(x15_97 - 4)
                                                v17_1:0xf.b = *(x15_97 - 3)
                                                v18_1:0xf.b = *(x15_97 - 2)
                                                v19_1:0xf.b = *(x15_97 - 1)
                                                v20_1.b = *x15_97
                                                v21_1.b = x15_97[1]
                                                v22_1.b = x15_97[2]
                                                v23_1.b = x15_97[3]
                                                v20_1:1.b = x15_97[4]
                                                v21_1:1.b = x15_97[5]
                                                v22_1:1.b = x15_97[6]
                                                v23_1:1.b = x15_97[7]
                                                v20_1:2.b = x15_97[8]
                                                v21_1:2.b = x15_97[9]
                                                v22_1:2.b = x15_97[0xa]
                                                v23_1:2.b = x15_97[0xb]
                                                v20_1:3.b = x15_97[0xc]
                                                v21_1:3.b = x15_97[0xd]
                                                v22_1:3.b = x15_97[0xe]
                                                v23_1:3.b = x15_97[0xf]
                                                v20_1:4.b = x15_97[0x10]
                                                v21_1:4.b = x15_97[0x11]
                                                v22_1:4.b = x15_97[0x12]
                                                v23_1:4.b = x15_97[0x13]
                                                v20_1:5.b = x15_97[0x14]
                                                v21_1:5.b = x15_97[0x15]
                                                v22_1:5.b = x15_97[0x16]
                                                v23_1:5.b = x15_97[0x17]
                                                v20_1:6.b = x15_97[0x18]
                                                v21_1:6.b = x15_97[0x19]
                                                v22_1:6.b = x15_97[0x1a]
                                                v23_1:6.b = x15_97[0x1b]
                                                v20_1:7.b = x15_97[0x1c]
                                                v21_1:7.b = x15_97[0x1d]
                                                v22_1:7.b = x15_97[0x1e]
                                                v23_1:7.b = x15_97[0x1f]
                                                v20_1:8.b = x15_97[0x20]
                                                v21_1:8.b = x15_97[0x21]
                                                v22_1:8.b = x15_97[0x22]
                                                v23_1:8.b = x15_97[0x23]
                                                v20_1:9.b = x15_97[0x24]
                                                v21_1:9.b = x15_97[0x25]
                                                v22_1:9.b = x15_97[0x26]
                                                v23_1:9.b = x15_97[0x27]
                                                v20_1:0xa.b = x15_97[0x28]
                                                v21_1:0xa.b = x15_97[0x29]
                                                v22_1:0xa.b = x15_97[0x2a]
                                                v23_1:0xa.b = x15_97[0x2b]
                                                v20_1:0xb.b = x15_97[0x2c]
                                                v21_1:0xb.b = x15_97[0x2d]
                                                v22_1:0xb.b = x15_97[0x2e]
                                                v23_1:0xb.b = x15_97[0x2f]
                                                v20_1:0xc.b = x15_97[0x30]
                                                v21_1:0xc.b = x15_97[0x31]
                                                v22_1:0xc.b = x15_97[0x32]
                                                v23_1:0xc.b = x15_97[0x33]
                                                v20_1:0xd.b = x15_97[0x34]
                                                v21_1:0xd.b = x15_97[0x35]
                                                v22_1:0xd.b = x15_97[0x36]
                                                v23_1:0xd.b = x15_97[0x37]
                                                v20_1:0xe.b = x15_97[0x38]
                                                v21_1:0xe.b = x15_97[0x39]
                                                v22_1:0xe.b = x15_97[0x3a]
                                                v23_1:0xe.b = x15_97[0x3b]
                                                v20_1:0xf.b = x15_97[0x3c]
                                                v21_1:0xf.b = x15_97[0x3d]
                                                v22_1:0xf.b = x15_97[0x3e]
                                                v23_1:0xf.b = x15_97[0x3f]
                                                j_33 = j_42
                                                j_42 -= 0x20
                                                *lr_1 = v16_1.b
                                                lr_1[1] = v17_1.b
                                                lr_1[2] = v18_1.b
                                                lr_1[3] = v16_1:1.b
                                                lr_1[4] = v17_1:1.b
                                                lr_1[5] = v18_1:1.b
                                                lr_1[6] = v16_1:2.b
                                                lr_1[7] = v17_1:2.b
                                                lr_1[8] = v18_1:2.b
                                                lr_1[9] = v16_1:3.b
                                                lr_1[0xa] = v17_1:3.b
                                                lr_1[0xb] = v18_1:3.b
                                                lr_1[0xc] = v16_1:4.b
                                                lr_1[0xd] = v17_1:4.b
                                                lr_1[0xe] = v18_1:4.b
                                                lr_1[0xf] = v16_1:5.b
                                                lr_1[0x10] = v17_1:5.b
                                                lr_1[0x11] = v18_1:5.b
                                                lr_1[0x12] = v16_1:6.b
                                                lr_1[0x13] = v17_1:6.b
                                                lr_1[0x14] = v18_1:6.b
                                                lr_1[0x15] = v16_1:7.b
                                                lr_1[0x16] = v17_1:7.b
                                                lr_1[0x17] = v18_1:7.b
                                                lr_1[0x18] = v16_1:8.b
                                                lr_1[0x19] = v17_1:8.b
                                                lr_1[0x1a] = v18_1:8.b
                                                lr_1[0x1b] = v16_1:9.b
                                                lr_1[0x1c] = v17_1:9.b
                                                lr_1[0x1d] = v18_1:9.b
                                                lr_1[0x1e] = v16_1:0xa.b
                                                lr_1[0x1f] = v17_1:0xa.b
                                                lr_1[0x20] = v18_1:0xa.b
                                                lr_1[0x21] = v16_1:0xb.b
                                                lr_1[0x22] = v17_1:0xb.b
                                                lr_1[0x23] = v18_1:0xb.b
                                                lr_1[0x24] = v16_1:0xc.b
                                                lr_1[0x25] = v17_1:0xc.b
                                                lr_1[0x26] = v18_1:0xc.b
                                                lr_1[0x27] = v16_1:0xd.b
                                                lr_1[0x28] = v17_1:0xd.b
                                                lr_1[0x29] = v18_1:0xd.b
                                                lr_1[0x2a] = v16_1:0xe.b
                                                lr_1[0x2b] = v17_1:0xe.b
                                                lr_1[0x2c] = v18_1:0xe.b
                                                lr_1[0x2d] = v16_1:0xf.b
                                                lr_1[0x2e] = v17_1:0xf.b
                                                lr_1[0x2f] = v18_1:0xf.b
                                                lr_1[0x30] = v20_1.b
                                                lr_1[0x31] = v21_1.b
                                                lr_1[0x32] = v22_1.b
                                                lr_1[0x33] = v20_1:1.b
                                                lr_1[0x34] = v21_1:1.b
                                                lr_1[0x35] = v22_1:1.b
                                                lr_1[0x36] = v20_1:2.b
                                                lr_1[0x37] = v21_1:2.b
                                                lr_1[0x38] = v22_1:2.b
                                                lr_1[0x39] = v20_1:3.b
                                                lr_1[0x3a] = v21_1:3.b
                                                lr_1[0x3b] = v22_1:3.b
                                                lr_1[0x3c] = v20_1:4.b
                                                lr_1[0x3d] = v21_1:4.b
                                                lr_1[0x3e] = v22_1:4.b
                                                lr_1[0x3f] = v20_1:5.b
                                                lr_1[0x40] = v21_1:5.b
                                                lr_1[0x41] = v22_1:5.b
                                                lr_1[0x42] = v20_1:6.b
                                                lr_1[0x43] = v21_1:6.b
                                                lr_1[0x44] = v22_1:6.b
                                                lr_1[0x45] = v20_1:7.b
                                                lr_1[0x46] = v21_1:7.b
                                                lr_1[0x47] = v22_1:7.b
                                                lr_1[0x48] = v20_1:8.b
                                                lr_1[0x49] = v21_1:8.b
                                                lr_1[0x4a] = v22_1:8.b
                                                lr_1[0x4b] = v20_1:9.b
                                                lr_1[0x4c] = v21_1:9.b
                                                lr_1[0x4d] = v22_1:9.b
                                                lr_1[0x4e] = v20_1:0xa.b
                                                lr_1[0x4f] = v21_1:0xa.b
                                                lr_1[0x50] = v22_1:0xa.b
                                                lr_1[0x51] = v20_1:0xb.b
                                                lr_1[0x52] = v21_1:0xb.b
                                                lr_1[0x53] = v22_1:0xb.b
                                                lr_1[0x54] = v20_1:0xc.b
                                                lr_1[0x55] = v21_1:0xc.b
                                                lr_1[0x56] = v22_1:0xc.b
                                                lr_1[0x57] = v20_1:0xd.b
                                                lr_1[0x58] = v21_1:0xd.b
                                                lr_1[0x59] = v22_1:0xd.b
                                                lr_1[0x5a] = v20_1:0xe.b
                                                lr_1[0x5b] = v21_1:0xe.b
                                                lr_1[0x5c] = v22_1:0xe.b
                                                lr_1[0x5d] = v20_1:0xf.b
                                                lr_1[0x5e] = v21_1:0xf.b
                                                lr_1[0x5f] = v22_1:0xf.b
                                                x15_97 = &x15_97[0x80]
                                                lr_1 = &lr_1[0x60]
                                            while (j_33 != 0x20)
                                            j_75 = j_61
                                            
                                            if (x6_2 u> 8)
                                                goto label_ffb77c
                                            
                                            x17_3 = &x17_3[j_61 << 2]
                                            fp_6 = &fp_6[x0_6]
                                            x15_26 = x7_2
                                        else
                                            j_75 = 0
                                        label_ffb77c:
                                            char* x6_29 = x0_1 + j_75 * 3 + x26_2
                                            fp_6 = &fp_6[x11_6]
                                            x17_3 = &x17_3[x6_3]
                                            char* x15_104 = x19 + x27_4 + (j_75 << 2)
                                            int64_t j_59 = x27_2 + j_75
                                            int64_t j_34
                                            
                                            do
                                                v16_1.b = *x15_104
                                                v17_1.b = x15_104[1]
                                                v18_1.b = x15_104[2]
                                                v19_1.b = x15_104[3]
                                                v16_1:1.b = x15_104[4]
                                                v17_1:1.b = x15_104[5]
                                                v18_1:1.b = x15_104[6]
                                                v19_1:1.b = x15_104[7]
                                                v16_1:2.b = x15_104[8]
                                                v17_1:2.b = x15_104[9]
                                                v18_1:2.b = x15_104[0xa]
                                                v19_1:2.b = x15_104[0xb]
                                                v16_1:3.b = x15_104[0xc]
                                                v17_1:3.b = x15_104[0xd]
                                                v18_1:3.b = x15_104[0xe]
                                                v19_1:3.b = x15_104[0xf]
                                                v16_1:4.b = x15_104[0x10]
                                                v17_1:4.b = x15_104[0x11]
                                                v18_1:4.b = x15_104[0x12]
                                                v19_1:4.b = x15_104[0x13]
                                                v16_1:5.b = x15_104[0x14]
                                                v17_1:5.b = x15_104[0x15]
                                                v18_1:5.b = x15_104[0x16]
                                                v19_1:5.b = x15_104[0x17]
                                                v16_1:6.b = x15_104[0x18]
                                                v17_1:6.b = x15_104[0x19]
                                                v18_1:6.b = x15_104[0x1a]
                                                v19_1:6.b = x15_104[0x1b]
                                                v16_1:7.b = x15_104[0x1c]
                                                v17_1:7.b = x15_104[0x1d]
                                                v18_1:7.b = x15_104[0x1e]
                                                v19_1:7.b = x15_104[0x1f]
                                                x15_104 = &x15_104[0x20]
                                                j_34 = j_59
                                                j_59 += 8
                                                *x6_29 = v16_1.b
                                                x6_29[1] = v17_1.b
                                                x6_29[2] = v18_1.b
                                                x6_29[3] = v16_1:1.b
                                                x6_29[4] = v17_1:1.b
                                                x6_29[5] = v18_1:1.b
                                                x6_29[6] = v16_1:2.b
                                                x6_29[7] = v17_1:2.b
                                                x6_29[8] = v18_1:2.b
                                                x6_29[9] = v16_1:3.b
                                                x6_29[0xa] = v17_1:3.b
                                                x6_29[0xb] = v18_1:3.b
                                                x6_29[0xc] = v16_1:4.b
                                                x6_29[0xd] = v17_1:4.b
                                                x6_29[0xe] = v18_1:4.b
                                                x6_29[0xf] = v16_1:5.b
                                                x6_29[0x10] = v17_1:5.b
                                                x6_29[0x11] = v18_1:5.b
                                                x6_29[0x12] = v16_1:6.b
                                                x6_29[0x13] = v17_1:6.b
                                                x6_29[0x14] = v18_1:6.b
                                                x6_29[0x15] = v16_1:7.b
                                                x6_29[0x16] = v17_1:7.b
                                                x6_29[0x17] = v18_1:7.b
                                                x6_29 = &x6_29[0x18]
                                            while (j_34 != -8)
                                            x15_26 = x0_7
                                    
                                    int32_t j_35 = x15_26 + 1
                                    
                                    do
                                        j_35 -= 1
                                        *fp_6 = *x17_3
                                        fp_6[1] = x17_3[1]
                                        char x0_75 = x17_3[2]
                                        x17_3 = &x17_3[4]
                                        fp_6[2] = x0_75
                                        fp_6 = &fp_6[3]
                                    while (j_35 s> 0)
                        
                        i += 1
                        x15_1 = x27_4.d + arg4 * arg2
                        x17_1 = x26_2.d + x25_1
                    while (i != zx.q(arg5))
                
                free(x19)
                return x0_1
    
    free(x19)
    x19 = nullptr
    data_2423720 = "outofmem"

return x19
