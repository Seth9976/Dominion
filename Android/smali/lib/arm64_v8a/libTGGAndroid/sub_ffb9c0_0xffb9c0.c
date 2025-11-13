// 函数: sub_ffb9c0
// 地址: 0xffb9c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x19 = arg1

if (arg3 != arg2)
    if (arg3 - 1 u>= 4)
        __assert2("C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image.h", 
            0x626, 
            "stbi__uint16 *stbi__convert_format16(stbi__uint16 *, int, int, unsigned int, unsigned int)", 
            "req_comp >= 1 && req_comp <= 4")
    label_ffc32c:
        return sub_ffc330(__assert2(
            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image.h", 0x643, 
            "stbi__uint16 *stbi__convert_format16(stbi__uint16 *, int, int, unsigned int, unsigned int)", 
            &data_75c628)) __tailcall
    
    int64_t x0_1
    uint128_t v0_1
    int128_t v2_1
    int128_t v3_1
    int128_t v4_1
    uint128_t v5_1
    uint128_t v6_1
    uint128_t v7_1
    uint128_t v16_1
    uint128_t v17_1
    uint128_t v18_1
    uint128_t v19_1
    uint128_t v20_1
    uint128_t v21_1
    uint128_t v22_1
    int128_t v23_1
    x0_1, v0_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1, v16_1, v17_1, v18_1, v19_1, v20_1, v21_1, 
        v22_1, v23_1 = malloc(zx.q((arg3 * arg4 * arg5) << 1))
    
    if (x0_1 != 0)
        if (arg5 s>= 1)
            uint64_t x11_1 = zx.q(arg4 - 1)
            int64_t j_36 = (x11_1 + 1) & 0x1fffffff8
            int64_t j_38 = (x11_1 + 1) & 0x1fffffff0
            uint64_t x24_2 = zx.q(arg3 + (arg2 << 3) - 0xa)
            int32_t x26_2 = x11_1.d - j_38.d
            int64_t x13_3
            
            if (((x11_1 + 1) & 0xf) == 0)
                x13_3 = 0x10
            else
                x13_3 = (x11_1 + 1) & 0xf
            
            int32_t x0_2 = x11_1.d - j_36.d
            int64_t x26_3 = j_38 << 2
            int64_t x0_3 = j_36 << 1
            int64_t x26_4 = j_38 << 1
            int64_t j_39 = x11_1 + 1 - x13_3
            int64_t x13_4
            
            if (((x11_1 + 1) & 7) == 0)
                x13_4 = 8
            else
                x13_4 = (x11_1 + 1) & 7
            
            int64_t x0_4 = x0_3 + j_36
            int64_t j_37 = x11_1 + 1 - x13_4
            int64_t x13_5 = x26_4 + j_38
            int32_t x13_6 = x11_1.d - j_39.d
            int64_t x13_7 = j_39 << 1
            int64_t x13_8 = x13_7 + j_39
            int32_t x8_6 = 0
            int32_t x9_1 = 0
            int64_t i = 0
            v2_1.w = 0x4d
            v2_1:2.w = 0x4d
            v2_1:4.w = 0x4d
            v2_1:6.w = 0x4d
            v3_1.w = 0x96
            v3_1:2.w = 0x96
            v3_1:4.w = 0x96
            v3_1:6.w = 0x96
            v4_1.w = 0x1d
            v4_1:2.w = 0x1d
            v4_1:4.w = 0x1d
            v4_1:6.w = 0x1d
            
            do
                if (x24_2.d u> 0x19)
                    goto label_ffc32c
                
                int32_t x25_1 = i.d * arg4
                uint64_t x26_5 = zx.q(x9_1) << 1
                uint64_t x7_3 = zx.q(x8_6) << 1
                int128_t* x25_2 = x19 + 0x10 + x26_5
                int16_t* x27_1 = x0_1 + x7_3
                int16_t* lr_1 = x0_1 + 0x40 + x7_3
                void* x2_1 = x19 + 0x20 + x26_5
                int16_t* fp_1 = x19 + x26_5
                int16_t* x28_1 = x19 + (zx.q(x25_1 * arg2) << 1)
                int16_t* x0_8 = x0_1 + (zx.q(x25_1 * arg3) << 1)
                
                switch (x24_2)
                    case 0
                        if ((x11_1.d & 0x80000000) == 0)
                            int32_t x2_2 = x11_1.d
                            
                            if (x11_1.d u>= 0xf)
                                int16_t* x2_3 = x0_1 + 0x20 + x7_3
                                int64_t j_31 = j_38
                                x0_8 = &x0_8[x26_4]
                                x28_1 = &x28_1[j_31]
                                int64_t j
                                
                                do
                                    v5_1 = x25_2[-1]
                                    v16_1 = *x25_2
                                    *(x2_3 - 0x20) = v5_1.w
                                    *(x2_3 - 0x1e) = 0xffff
                                    *(x2_3 - 0x1c) = v5_1:2.w
                                    *(x2_3 - 0x1a) = 0xffff
                                    *(x2_3 - 0x18) = v5_1:4.w
                                    *(x2_3 - 0x16) = 0xffff
                                    *(x2_3 - 0x14) = v5_1:6.w
                                    *(x2_3 - 0x12) = 0xffff
                                    *(x2_3 - 0x10) = v5_1:8.w
                                    *(x2_3 - 0xe) = 0xffff
                                    *(x2_3 - 0xc) = v5_1:0xa.w
                                    *(x2_3 - 0xa) = 0xffff
                                    *(x2_3 - 8) = v5_1:0xc.w
                                    *(x2_3 - 6) = 0xffff
                                    *(x2_3 - 4) = v5_1:0xe.w
                                    *(x2_3 - 2) = 0xffff
                                    *x2_3 = v16_1.w
                                    x2_3[1] = 0xffff
                                    x2_3[2] = v16_1:2.w
                                    x2_3[3] = 0xffff
                                    x2_3[4] = v16_1:4.w
                                    x2_3[5] = 0xffff
                                    x2_3[6] = v16_1:6.w
                                    x2_3[7] = 0xffff
                                    x2_3[8] = v16_1:8.w
                                    x2_3[9] = 0xffff
                                    x2_3[0xa] = v16_1:0xa.w
                                    x2_3[0xb] = 0xffff
                                    x2_3[0xc] = v16_1:0xc.w
                                    x2_3[0xd] = 0xffff
                                    x2_3[0xe] = v16_1:0xe.w
                                    x2_3[0xf] = 0xffff
                                    x25_2 = &x25_2[2]
                                    j = j_31
                                    j_31 -= 0x10
                                    x2_3 = &x2_3[0x20]
                                while (j != 0x10)
                                x2_2 = x26_2
                            
                            if (x11_1.d u< 0xf || x11_1 + 1 != j_38)
                                int32_t j_1 = x2_2 + 1
                                
                                do
                                    int16_t x12_11 = *x28_1
                                    x28_1 = &x28_1[1]
                                    j_1 -= 1
                                    x0_8[1] = 0xffff
                                    *x0_8 = x12_11
                                    x0_8 = &x0_8[2]
                                while (j_1 s> 0)
                    case 1
                        if ((x11_1.d & 0x80000000) == 0)
                            int32_t x2_5 = x11_1.d
                            
                            if (x11_1.d u>= 0xf)
                                int64_t j_24 = j_38
                                x0_8 = &x0_8[x13_5]
                                x28_1 = &x28_1[j_24]
                                int64_t j_2
                                
                                do
                                    v5_1 = x25_2[-1]
                                    v16_1 = *x25_2
                                    j_2 = j_24
                                    j_24 -= 0x10
                                    x25_2 = &x25_2[2]
                                    *x27_1 = v5_1.w
                                    x27_1[1] = v5_1.w
                                    x27_1[2] = v5_1.w
                                    x27_1[3] = v5_1:2.w
                                    x27_1[4] = v5_1:2.w
                                    x27_1[5] = v5_1:2.w
                                    x27_1[6] = v5_1:4.w
                                    x27_1[7] = v5_1:4.w
                                    x27_1[8] = v5_1:4.w
                                    x27_1[9] = v5_1:6.w
                                    x27_1[0xa] = v5_1:6.w
                                    x27_1[0xb] = v5_1:6.w
                                    x27_1[0xc] = v5_1:8.w
                                    x27_1[0xd] = v5_1:8.w
                                    x27_1[0xe] = v5_1:8.w
                                    x27_1[0xf] = v5_1:0xa.w
                                    x27_1[0x10] = v5_1:0xa.w
                                    x27_1[0x11] = v5_1:0xa.w
                                    x27_1[0x12] = v5_1:0xc.w
                                    x27_1[0x13] = v5_1:0xc.w
                                    x27_1[0x14] = v5_1:0xc.w
                                    x27_1[0x15] = v5_1:0xe.w
                                    x27_1[0x16] = v5_1:0xe.w
                                    x27_1[0x17] = v5_1:0xe.w
                                    x27_1[0x18] = v16_1.w
                                    x27_1[0x19] = v16_1.w
                                    x27_1[0x1a] = v16_1.w
                                    x27_1[0x1b] = v16_1:2.w
                                    x27_1[0x1c] = v16_1:2.w
                                    x27_1[0x1d] = v16_1:2.w
                                    x27_1[0x1e] = v16_1:4.w
                                    x27_1[0x1f] = v16_1:4.w
                                    x27_1[0x20] = v16_1:4.w
                                    x27_1[0x21] = v16_1:6.w
                                    x27_1[0x22] = v16_1:6.w
                                    x27_1[0x23] = v16_1:6.w
                                    x27_1[0x24] = v16_1:8.w
                                    x27_1[0x25] = v16_1:8.w
                                    x27_1[0x26] = v16_1:8.w
                                    x27_1[0x27] = v16_1:0xa.w
                                    x27_1[0x28] = v16_1:0xa.w
                                    x27_1[0x29] = v16_1:0xa.w
                                    x27_1[0x2a] = v16_1:0xc.w
                                    x27_1[0x2b] = v16_1:0xc.w
                                    x27_1[0x2c] = v16_1:0xc.w
                                    x27_1[0x2d] = v16_1:0xe.w
                                    x27_1[0x2e] = v16_1:0xe.w
                                    x27_1[0x2f] = v16_1:0xe.w
                                    x27_1 = &x27_1[0x30]
                                while (j_2 != 0x10)
                                x2_5 = x26_2
                            
                            if (x11_1.d u< 0xf || x11_1 + 1 != j_38)
                                int32_t j_3 = x2_5 + 1
                                void* x0_9 = &x0_8[2]
                                
                                do
                                    int16_t x12_15 = *x28_1
                                    x28_1 = &x28_1[1]
                                    j_3 -= 1
                                    *x0_9 = x12_15
                                    *(x0_9 - 2) = x12_15
                                    *(x0_9 - 4) = x12_15
                                    x0_9 += 6
                                while (j_3 s> 0)
                    case 2
                        if ((x11_1.d & 0x80000000) == 0)
                            int32_t x2_7 = x11_1.d
                            
                            if (x11_1.d u>= 0xf)
                                int64_t j_25 = j_38
                                x0_8 = &x0_8[x26_3]
                                x28_1 = &x28_1[j_25]
                                int64_t j_4
                                
                                do
                                    v16_1 = x25_2[-1]
                                    v20_1 = *x25_2
                                    x25_2 = &x25_2[2]
                                    j_4 = j_25
                                    j_25 -= 0x10
                                    *(lr_1 - 0x40) = v16_1.w
                                    *(lr_1 - 0x3e) = v16_1.w
                                    *(lr_1 - 0x3c) = v16_1.w
                                    *(lr_1 - 0x3a) = 0xffff
                                    *(lr_1 - 0x38) = v16_1:2.w
                                    *(lr_1 - 0x36) = v16_1:2.w
                                    *(lr_1 - 0x34) = v16_1:2.w
                                    *(lr_1 - 0x32) = 0xffff
                                    *(lr_1 - 0x30) = v16_1:4.w
                                    *(lr_1 - 0x2e) = v16_1:4.w
                                    *(lr_1 - 0x2c) = v16_1:4.w
                                    *(lr_1 - 0x2a) = 0xffff
                                    *(lr_1 - 0x28) = v16_1:6.w
                                    *(lr_1 - 0x26) = v16_1:6.w
                                    *(lr_1 - 0x24) = v16_1:6.w
                                    *(lr_1 - 0x22) = 0xffff
                                    *(lr_1 - 0x20) = v16_1:8.w
                                    *(lr_1 - 0x1e) = v16_1:8.w
                                    *(lr_1 - 0x1c) = v16_1:8.w
                                    *(lr_1 - 0x1a) = 0xffff
                                    *(lr_1 - 0x18) = v16_1:0xa.w
                                    *(lr_1 - 0x16) = v16_1:0xa.w
                                    *(lr_1 - 0x14) = v16_1:0xa.w
                                    *(lr_1 - 0x12) = 0xffff
                                    *(lr_1 - 0x10) = v16_1:0xc.w
                                    *(lr_1 - 0xe) = v16_1:0xc.w
                                    *(lr_1 - 0xc) = v16_1:0xc.w
                                    *(lr_1 - 0xa) = 0xffff
                                    *(lr_1 - 8) = v16_1:0xe.w
                                    *(lr_1 - 6) = v16_1:0xe.w
                                    *(lr_1 - 4) = v16_1:0xe.w
                                    *(lr_1 - 2) = 0xffff
                                    *lr_1 = v20_1.w
                                    lr_1[1] = v20_1.w
                                    lr_1[2] = v20_1.w
                                    lr_1[3] = 0xffff
                                    lr_1[4] = v20_1:2.w
                                    lr_1[5] = v20_1:2.w
                                    lr_1[6] = v20_1:2.w
                                    lr_1[7] = 0xffff
                                    lr_1[8] = v20_1:4.w
                                    lr_1[9] = v20_1:4.w
                                    lr_1[0xa] = v20_1:4.w
                                    lr_1[0xb] = 0xffff
                                    lr_1[0xc] = v20_1:6.w
                                    lr_1[0xd] = v20_1:6.w
                                    lr_1[0xe] = v20_1:6.w
                                    lr_1[0xf] = 0xffff
                                    lr_1[0x10] = v20_1:8.w
                                    lr_1[0x11] = v20_1:8.w
                                    lr_1[0x12] = v20_1:8.w
                                    lr_1[0x13] = 0xffff
                                    lr_1[0x14] = v20_1:0xa.w
                                    lr_1[0x15] = v20_1:0xa.w
                                    lr_1[0x16] = v20_1:0xa.w
                                    lr_1[0x17] = 0xffff
                                    lr_1[0x18] = v20_1:0xc.w
                                    lr_1[0x19] = v20_1:0xc.w
                                    lr_1[0x1a] = v20_1:0xc.w
                                    lr_1[0x1b] = 0xffff
                                    lr_1[0x1c] = v20_1:0xe.w
                                    lr_1[0x1d] = v20_1:0xe.w
                                    lr_1[0x1e] = v20_1:0xe.w
                                    lr_1[0x1f] = 0xffff
                                    lr_1 = &lr_1[0x40]
                                while (j_4 != 0x10)
                                x2_7 = x26_2
                            
                            if (x11_1.d u< 0xf || x11_1 + 1 != j_38)
                                int32_t j_5 = x2_7 + 1
                                void* x0_10 = &x0_8[2]
                                
                                do
                                    int16_t x12_19 = *x28_1
                                    x28_1 = &x28_1[1]
                                    j_5 -= 1
                                    *(x0_10 + 2) = 0xffff
                                    *x0_10 = x12_19
                                    *(x0_10 - 2) = x12_19
                                    *(x0_10 - 4) = x12_19
                                    x0_10 += 8
                                while (j_5 s> 0)
                    case 3, 4, 5, 6, 8, 0xb, 0xc, 0xd, 0xe, 0x11, 0x13, 0x14, 0x15, 0x16
                        goto label_ffc32c
                    case 7
                        if ((x11_1.d & 0x80000000) == 0)
                            int32_t x25_3 = x11_1.d
                            
                            if (x11_1.d u> 0xf)
                                void* x25_4 = x0_1 + 0x10 + x7_3
                                int64_t j_32 = j_39
                                x0_8 = &x0_8[j_32]
                                x28_1 = &x28_1[x13_7]
                                int64_t j_6
                                
                                do
                                    v5_1.w = *x2_1
                                    v6_1.w = *(x2_1 + 2)
                                    v5_1:2.w = *(x2_1 + 4)
                                    v6_1:2.w = *(x2_1 + 6)
                                    v5_1:4.w = *(x2_1 + 8)
                                    v6_1:4.w = *(x2_1 + 0xa)
                                    v5_1:6.w = *(x2_1 + 0xc)
                                    v6_1:6.w = *(x2_1 + 0xe)
                                    v5_1:8.w = *(x2_1 + 0x10)
                                    v6_1:8.w = *(x2_1 + 0x12)
                                    v5_1:0xa.w = *(x2_1 + 0x14)
                                    v6_1:0xa.w = *(x2_1 + 0x16)
                                    v5_1:0xc.w = *(x2_1 + 0x18)
                                    v6_1:0xc.w = *(x2_1 + 0x1a)
                                    v5_1:0xe.w = *(x2_1 + 0x1c)
                                    v6_1:0xe.w = *(x2_1 + 0x1e)
                                    v16_1.w = *(x2_1 - 0x20)
                                    v17_1.w = *(x2_1 - 0x1e)
                                    v16_1:2.w = *(x2_1 - 0x1c)
                                    v17_1:2.w = *(x2_1 - 0x1a)
                                    v16_1:4.w = *(x2_1 - 0x18)
                                    v17_1:4.w = *(x2_1 - 0x16)
                                    v16_1:6.w = *(x2_1 - 0x14)
                                    v17_1:6.w = *(x2_1 - 0x12)
                                    v16_1:8.w = *(x2_1 - 0x10)
                                    v17_1:8.w = *(x2_1 - 0xe)
                                    v16_1:0xa.w = *(x2_1 - 0xc)
                                    v17_1:0xa.w = *(x2_1 - 0xa)
                                    v16_1:0xc.w = *(x2_1 - 8)
                                    v17_1:0xc.w = *(x2_1 - 6)
                                    v16_1:0xe.w = *(x2_1 - 4)
                                    v17_1:0xe.w = *(x2_1 - 2)
                                    x2_1 += 0x40
                                    j_6 = j_32
                                    j_32 -= 0x10
                                    *(x25_4 - 0x10) = v16_1
                                    *x25_4 = v5_1
                                    x25_4 += 0x20
                                while (j_6 != 0x10)
                                x25_3 = x13_6
                            
                            int32_t j_7 = x25_3 + 1
                            
                            do
                                int16_t x12_23 = *x28_1
                                x28_1 = &x28_1[2]
                                j_7 -= 1
                                *x0_8 = x12_23
                                x0_8 = &x0_8[1]
                            while (j_7 s> 0)
                    case 9
                        if ((x11_1.d & 0x80000000) == 0)
                            int32_t x7_4 = x11_1.d
                            
                            if (x11_1.d u> 0xf)
                                int64_t j_33 = j_39
                                x0_8 = &x0_8[x13_8]
                                x28_1 = &x28_1[x13_7]
                                int64_t j_8
                                
                                do
                                    v16_1.w = *(x2_1 - 0x20)
                                    v16_1:2.w = *(x2_1 - 0x1c)
                                    v16_1:4.w = *(x2_1 - 0x18)
                                    v16_1:6.w = *(x2_1 - 0x14)
                                    v16_1:8.w = *(x2_1 - 0x10)
                                    v16_1:0xa.w = *(x2_1 - 0xc)
                                    v16_1:0xc.w = *(x2_1 - 8)
                                    v16_1:0xe.w = *(x2_1 - 4)
                                    v5_1.w = *x2_1
                                    v5_1:2.w = *(x2_1 + 4)
                                    v5_1:4.w = *(x2_1 + 8)
                                    v5_1:6.w = *(x2_1 + 0xc)
                                    v5_1:8.w = *(x2_1 + 0x10)
                                    v5_1:0xa.w = *(x2_1 + 0x14)
                                    v5_1:0xc.w = *(x2_1 + 0x18)
                                    v5_1:0xe.w = *(x2_1 + 0x1c)
                                    j_8 = j_33
                                    j_33 -= 0x10
                                    *x27_1 = v16_1.w
                                    x27_1[1] = v16_1.w
                                    x27_1[2] = v16_1.w
                                    x27_1[3] = v16_1:2.w
                                    x27_1[4] = v16_1:2.w
                                    x27_1[5] = v16_1:2.w
                                    x27_1[6] = v16_1:4.w
                                    x27_1[7] = v16_1:4.w
                                    x27_1[8] = v16_1:4.w
                                    x27_1[9] = v16_1:6.w
                                    x27_1[0xa] = v16_1:6.w
                                    x27_1[0xb] = v16_1:6.w
                                    x27_1[0xc] = v16_1:8.w
                                    x27_1[0xd] = v16_1:8.w
                                    x27_1[0xe] = v16_1:8.w
                                    x27_1[0xf] = v16_1:0xa.w
                                    x27_1[0x10] = v16_1:0xa.w
                                    x27_1[0x11] = v16_1:0xa.w
                                    x27_1[0x12] = v16_1:0xc.w
                                    x27_1[0x13] = v16_1:0xc.w
                                    x27_1[0x14] = v16_1:0xc.w
                                    x27_1[0x15] = v16_1:0xe.w
                                    x27_1[0x16] = v16_1:0xe.w
                                    x27_1[0x17] = v16_1:0xe.w
                                    x27_1[0x18] = v5_1.w
                                    x27_1[0x19] = v5_1.w
                                    x27_1[0x1a] = v5_1.w
                                    x27_1[0x1b] = v5_1:2.w
                                    x27_1[0x1c] = v5_1:2.w
                                    x27_1[0x1d] = v5_1:2.w
                                    x27_1[0x1e] = v5_1:4.w
                                    x27_1[0x1f] = v5_1:4.w
                                    x27_1[0x20] = v5_1:4.w
                                    x27_1[0x21] = v5_1:6.w
                                    x27_1[0x22] = v5_1:6.w
                                    x27_1[0x23] = v5_1:6.w
                                    x27_1[0x24] = v5_1:8.w
                                    x27_1[0x25] = v5_1:8.w
                                    x27_1[0x26] = v5_1:8.w
                                    x27_1[0x27] = v5_1:0xa.w
                                    x27_1[0x28] = v5_1:0xa.w
                                    x27_1[0x29] = v5_1:0xa.w
                                    x27_1[0x2a] = v5_1:0xc.w
                                    x27_1[0x2b] = v5_1:0xc.w
                                    x27_1[0x2c] = v5_1:0xc.w
                                    x27_1[0x2d] = v5_1:0xe.w
                                    x27_1[0x2e] = v5_1:0xe.w
                                    x27_1[0x2f] = v5_1:0xe.w
                                    x2_1 += 0x40
                                    x27_1 = &x27_1[0x30]
                                while (j_8 != 0x10)
                                x7_4 = x13_6
                            
                            int32_t j_9 = x7_4 + 1
                            void* x0_11 = &x0_8[2]
                            
                            do
                                int16_t x12_28 = *x28_1
                                x28_1 = &x28_1[2]
                                j_9 -= 1
                                *x0_11 = x12_28
                                *(x0_11 - 2) = x12_28
                                *(x0_11 - 4) = x12_28
                                x0_11 += 6
                            while (j_9 s> 0)
                    case 0xa
                        if ((x11_1.d & 0x80000000) == 0)
                            int32_t x7_5 = x11_1.d
                            
                            if (x11_1.d u>= 0xf)
                                int64_t j_34 = j_38
                                x0_8 = &x0_8[x26_3]
                                x28_1 = &x28_1[x26_4]
                                int64_t j_10
                                
                                do
                                    v18_1.w = *x2_1
                                    v19_1.w = *(x2_1 + 2)
                                    v18_1:2.w = *(x2_1 + 4)
                                    v19_1:2.w = *(x2_1 + 6)
                                    v18_1:4.w = *(x2_1 + 8)
                                    v19_1:4.w = *(x2_1 + 0xa)
                                    v18_1:6.w = *(x2_1 + 0xc)
                                    v19_1:6.w = *(x2_1 + 0xe)
                                    v18_1:8.w = *(x2_1 + 0x10)
                                    v19_1:8.w = *(x2_1 + 0x12)
                                    v18_1:0xa.w = *(x2_1 + 0x14)
                                    v19_1:0xa.w = *(x2_1 + 0x16)
                                    v18_1:0xc.w = *(x2_1 + 0x18)
                                    v19_1:0xc.w = *(x2_1 + 0x1a)
                                    v18_1:0xe.w = *(x2_1 + 0x1c)
                                    v19_1:0xe.w = *(x2_1 + 0x1e)
                                    v22_1.w = *(x2_1 - 0x20)
                                    v23_1.w = *(x2_1 - 0x1e)
                                    v22_1:2.w = *(x2_1 - 0x1c)
                                    v23_1:2.w = *(x2_1 - 0x1a)
                                    v22_1:4.w = *(x2_1 - 0x18)
                                    v23_1:4.w = *(x2_1 - 0x16)
                                    v22_1:6.w = *(x2_1 - 0x14)
                                    v23_1:6.w = *(x2_1 - 0x12)
                                    v22_1:8.w = *(x2_1 - 0x10)
                                    v23_1:8.w = *(x2_1 - 0xe)
                                    v22_1:0xa.w = *(x2_1 - 0xc)
                                    v23_1:0xa.w = *(x2_1 - 0xa)
                                    v22_1:0xc.w = *(x2_1 - 8)
                                    v23_1:0xc.w = *(x2_1 - 6)
                                    v22_1:0xe.w = *(x2_1 - 4)
                                    v23_1:0xe.w = *(x2_1 - 2)
                                    x2_1 += 0x40
                                    j_10 = j_34
                                    j_34 -= 0x10
                                    *(lr_1 - 0x40) = v22_1.w
                                    *(lr_1 - 0x3e) = v22_1.w
                                    *(lr_1 - 0x3c) = v22_1.w
                                    *(lr_1 - 0x3a) = v23_1.w
                                    *(lr_1 - 0x38) = v22_1:2.w
                                    *(lr_1 - 0x36) = v22_1:2.w
                                    *(lr_1 - 0x34) = v22_1:2.w
                                    *(lr_1 - 0x32) = v23_1:2.w
                                    *(lr_1 - 0x30) = v22_1:4.w
                                    *(lr_1 - 0x2e) = v22_1:4.w
                                    *(lr_1 - 0x2c) = v22_1:4.w
                                    *(lr_1 - 0x2a) = v23_1:4.w
                                    *(lr_1 - 0x28) = v22_1:6.w
                                    *(lr_1 - 0x26) = v22_1:6.w
                                    *(lr_1 - 0x24) = v22_1:6.w
                                    *(lr_1 - 0x22) = v23_1:6.w
                                    *(lr_1 - 0x20) = v22_1:8.w
                                    *(lr_1 - 0x1e) = v22_1:8.w
                                    *(lr_1 - 0x1c) = v22_1:8.w
                                    *(lr_1 - 0x1a) = v23_1:8.w
                                    *(lr_1 - 0x18) = v22_1:0xa.w
                                    *(lr_1 - 0x16) = v22_1:0xa.w
                                    *(lr_1 - 0x14) = v22_1:0xa.w
                                    *(lr_1 - 0x12) = v23_1:0xa.w
                                    *(lr_1 - 0x10) = v22_1:0xc.w
                                    *(lr_1 - 0xe) = v22_1:0xc.w
                                    *(lr_1 - 0xc) = v22_1:0xc.w
                                    *(lr_1 - 0xa) = v23_1:0xc.w
                                    *(lr_1 - 8) = v22_1:0xe.w
                                    *(lr_1 - 6) = v22_1:0xe.w
                                    *(lr_1 - 4) = v22_1:0xe.w
                                    *(lr_1 - 2) = v23_1:0xe.w
                                    *lr_1 = v18_1.w
                                    lr_1[1] = v18_1.w
                                    lr_1[2] = v18_1.w
                                    lr_1[3] = v19_1.w
                                    lr_1[4] = v18_1:2.w
                                    lr_1[5] = v18_1:2.w
                                    lr_1[6] = v18_1:2.w
                                    lr_1[7] = v19_1:2.w
                                    lr_1[8] = v18_1:4.w
                                    lr_1[9] = v18_1:4.w
                                    lr_1[0xa] = v18_1:4.w
                                    lr_1[0xb] = v19_1:4.w
                                    lr_1[0xc] = v18_1:6.w
                                    lr_1[0xd] = v18_1:6.w
                                    lr_1[0xe] = v18_1:6.w
                                    lr_1[0xf] = v19_1:6.w
                                    lr_1[0x10] = v18_1:8.w
                                    lr_1[0x11] = v18_1:8.w
                                    lr_1[0x12] = v18_1:8.w
                                    lr_1[0x13] = v19_1:8.w
                                    lr_1[0x14] = v18_1:0xa.w
                                    lr_1[0x15] = v18_1:0xa.w
                                    lr_1[0x16] = v18_1:0xa.w
                                    lr_1[0x17] = v19_1:0xa.w
                                    lr_1[0x18] = v18_1:0xc.w
                                    lr_1[0x19] = v18_1:0xc.w
                                    lr_1[0x1a] = v18_1:0xc.w
                                    lr_1[0x1b] = v19_1:0xc.w
                                    lr_1[0x1c] = v18_1:0xe.w
                                    lr_1[0x1d] = v18_1:0xe.w
                                    lr_1[0x1e] = v18_1:0xe.w
                                    lr_1[0x1f] = v19_1:0xe.w
                                    lr_1 = &lr_1[0x40]
                                while (j_10 != 0x10)
                                x7_5 = x26_2
                            
                            if (x11_1.d u< 0xf || x11_1 + 1 != j_38)
                                int32_t j_11 = x7_5 + 1
                                
                                do
                                    j_11 -= 1
                                    v5_1.d = float.s(zx.d(*x28_1))
                                    v5_1:4.d = zx.d(x28_1[1])
                                    uint128_t v5_2 = vuzp1_s16(v5_1, v0_1)
                                    *x0_8 = vext_s8(vdup_laneq_s16(v5_2, 0), v5_2, 4).q
                                    x0_8 = &x0_8[4]
                                    x28_1 = &x28_1[2]
                                while (j_11 s> 0)
                    case 0xf
                        if ((x11_1.d & 0x80000000) == 0)
                            int32_t x2_10 = x11_1.d
                            
                            if (x11_1.d u>= 7)
                                int64_t j_26 = j_36
                                x0_8 = &x0_8[j_26]
                                x28_1 = &x28_1[x0_4]
                                int64_t j_12
                                
                                do
                                    v5_1.w = *fp_1
                                    v6_1.w = fp_1[1]
                                    v7_1.w = fp_1[2]
                                    v5_1:2.w = fp_1[3]
                                    v6_1:2.w = fp_1[4]
                                    v7_1:2.w = fp_1[5]
                                    v5_1:4.w = fp_1[6]
                                    v6_1:4.w = fp_1[7]
                                    v7_1:4.w = fp_1[8]
                                    v5_1:6.w = fp_1[9]
                                    v6_1:6.w = fp_1[0xa]
                                    v7_1:6.w = fp_1[0xb]
                                    v5_1:8.w = fp_1[0xc]
                                    v6_1:8.w = fp_1[0xd]
                                    v7_1:8.w = fp_1[0xe]
                                    v5_1:0xa.w = fp_1[0xf]
                                    v6_1:0xa.w = fp_1[0x10]
                                    v7_1:0xa.w = fp_1[0x11]
                                    v5_1:0xc.w = fp_1[0x12]
                                    v6_1:0xc.w = fp_1[0x13]
                                    v7_1:0xc.w = fp_1[0x14]
                                    v5_1:0xe.w = fp_1[0x15]
                                    v6_1:0xe.w = fp_1[0x16]
                                    v7_1:0xe.w = fp_1[0x17]
                                    fp_1 = &fp_1[0x18]
                                    j_12 = j_26
                                    j_26 -= 8
                                    uint128_t v17_2 = vextq_s8(v6_1, v6_1, 8)
                                    v16_1 = vextq_s8(v5_1, v5_1, 8)
                                    uint128_t v19_3 = vmlal_u16(mulu.dp.o(v6_1, v3_1), v5_1, v2_1)
                                    v18_1 = vextq_s8(v7_1, v7_1, 8)
                                    uint128_t v17_4 = vmlal_u16(mulu.dp.o(v17_2, v3_1), v16_1, v2_1)
                                    v19_1 = vmlal_u16(v19_3, v7_1, v4_1)
                                    v17_1 = vmlal_u16(v17_4, v18_1, v4_1)
                                    vshrn_n_u32(v19_1, 8)
                                    *x27_1 = vshrn_high_n_u32(v17_1, 8)
                                    x27_1 = &x27_1[8]
                                while (j_12 != 8)
                                x2_10 = x0_2
                            
                            if (x11_1.d u< 7 || x11_1 + 1 != j_36)
                                int32_t j_13 = x2_10 + 1
                                
                                do
                                    j_13 -= 1
                                    *x0_8 = ((zx.d(*x28_1) * 0x4d + zx.d(x28_1[1]) * 0x96
                                        + zx.d(x28_1[2]) * 0x1d) u>> 8).w
                                    x0_8 = &x0_8[1]
                                    x28_1 = &x28_1[3]
                                while (j_13 s> 0)
                    case 0x10
                        if ((x11_1.d & 0x80000000) == 0)
                            int32_t x2_12 = x11_1.d
                            
                            if (x11_1.d u>= 7)
                                int64_t j_27 = j_36
                                x0_8 = &x0_8[x0_3]
                                x28_1 = &x28_1[x0_4]
                                int64_t j_14
                                
                                do
                                    v5_1.w = *fp_1
                                    v6_1.w = fp_1[1]
                                    v7_1.w = fp_1[2]
                                    v5_1:2.w = fp_1[3]
                                    v6_1:2.w = fp_1[4]
                                    v7_1:2.w = fp_1[5]
                                    v5_1:4.w = fp_1[6]
                                    v6_1:4.w = fp_1[7]
                                    v7_1:4.w = fp_1[8]
                                    v5_1:6.w = fp_1[9]
                                    v6_1:6.w = fp_1[0xa]
                                    v7_1:6.w = fp_1[0xb]
                                    v5_1:8.w = fp_1[0xc]
                                    v6_1:8.w = fp_1[0xd]
                                    v7_1:8.w = fp_1[0xe]
                                    v5_1:0xa.w = fp_1[0xf]
                                    v6_1:0xa.w = fp_1[0x10]
                                    v7_1:0xa.w = fp_1[0x11]
                                    v5_1:0xc.w = fp_1[0x12]
                                    v6_1:0xc.w = fp_1[0x13]
                                    v7_1:0xc.w = fp_1[0x14]
                                    v5_1:0xe.w = fp_1[0x15]
                                    v6_1:0xe.w = fp_1[0x16]
                                    v7_1:0xe.w = fp_1[0x17]
                                    fp_1 = &fp_1[0x18]
                                    j_14 = j_27
                                    j_27 -= 8
                                    uint128_t v17_5 = vextq_s8(v6_1, v6_1, 8)
                                    v16_1 = vextq_s8(v5_1, v5_1, 8)
                                    uint128_t v19_5 = vmlal_u16(mulu.dp.o(v6_1, v3_1), v5_1, v2_1)
                                    v18_1 = vextq_s8(v7_1, v7_1, 8)
                                    uint128_t v17_7 = vmlal_u16(mulu.dp.o(v17_5, v3_1), v16_1, v2_1)
                                    v19_1 = vmlal_u16(v19_5, v7_1, v4_1)
                                    v17_1 = vmlal_u16(v17_7, v18_1, v4_1)
                                    vshrn_n_u32(v19_1, 8)
                                    v0_1 = vshrn_high_n_u32(v17_1, 8)
                                    *x27_1 = v0_1.w
                                    x27_1[1] = 0xffff
                                    x27_1[2] = v0_1:2.w
                                    x27_1[3] = 0xffff
                                    x27_1[4] = v0_1:4.w
                                    x27_1[5] = 0xffff
                                    x27_1[6] = v0_1:6.w
                                    x27_1[7] = 0xffff
                                    x27_1[8] = v0_1:8.w
                                    x27_1[9] = 0xffff
                                    x27_1[0xa] = v0_1:0xa.w
                                    x27_1[0xb] = 0xffff
                                    x27_1[0xc] = v0_1:0xc.w
                                    x27_1[0xd] = 0xffff
                                    x27_1[0xe] = v0_1:0xe.w
                                    x27_1[0xf] = 0xffff
                                    x27_1 = &x27_1[0x10]
                                while (j_14 != 8)
                                x2_12 = x0_2
                            
                            if (x11_1.d u< 7 || x11_1 + 1 != j_36)
                                int32_t j_15 = x2_12 + 1
                                
                                do
                                    j_15 -= 1
                                    uint16_t x12_49 = ((zx.d(*x28_1) * 0x4d + zx.d(x28_1[1]) * 0x96
                                        + zx.d(x28_1[2]) * 0x1d) u>> 8).w
                                    x0_8[1] = 0xffff
                                    x28_1 = &x28_1[3]
                                    *x0_8 = x12_49
                                    x0_8 = &x0_8[2]
                                while (j_15 s> 0)
                    case 0x12
                        if ((x11_1.d & 0x80000000) == 0)
                            int32_t x2_14 = x11_1.d
                            
                            if (x11_1.d u>= 0xf)
                                int64_t j_28 = j_38
                                x0_8 = &x0_8[x26_3]
                                x28_1 = &x28_1[x13_5]
                                int64_t j_16
                                
                                do
                                    v16_1.w = *fp_1
                                    v17_1.w = fp_1[1]
                                    v18_1.w = fp_1[2]
                                    v16_1:2.w = fp_1[3]
                                    v17_1:2.w = fp_1[4]
                                    v18_1:2.w = fp_1[5]
                                    v16_1:4.w = fp_1[6]
                                    v17_1:4.w = fp_1[7]
                                    v18_1:4.w = fp_1[8]
                                    v16_1:6.w = fp_1[9]
                                    v17_1:6.w = fp_1[0xa]
                                    v18_1:6.w = fp_1[0xb]
                                    v16_1:8.w = fp_1[0xc]
                                    v17_1:8.w = fp_1[0xd]
                                    v18_1:8.w = fp_1[0xe]
                                    v16_1:0xa.w = fp_1[0xf]
                                    v17_1:0xa.w = fp_1[0x10]
                                    v18_1:0xa.w = fp_1[0x11]
                                    v16_1:0xc.w = fp_1[0x12]
                                    v17_1:0xc.w = fp_1[0x13]
                                    v18_1:0xc.w = fp_1[0x14]
                                    v16_1:0xe.w = fp_1[0x15]
                                    v17_1:0xe.w = fp_1[0x16]
                                    v18_1:0xe.w = fp_1[0x17]
                                    void* x12_53 = &fp_1[0x18]
                                    fp_1 = &fp_1[0x30]
                                    v20_1.w = *x12_53
                                    v21_1.w = *(x12_53 + 2)
                                    v22_1.w = *(x12_53 + 4)
                                    v20_1:2.w = *(x12_53 + 6)
                                    v21_1:2.w = *(x12_53 + 8)
                                    v22_1:2.w = *(x12_53 + 0xa)
                                    v20_1:4.w = *(x12_53 + 0xc)
                                    v21_1:4.w = *(x12_53 + 0xe)
                                    v22_1:4.w = *(x12_53 + 0x10)
                                    v20_1:6.w = *(x12_53 + 0x12)
                                    v21_1:6.w = *(x12_53 + 0x14)
                                    v22_1:6.w = *(x12_53 + 0x16)
                                    v20_1:8.w = *(x12_53 + 0x18)
                                    v21_1:8.w = *(x12_53 + 0x1a)
                                    v22_1:8.w = *(x12_53 + 0x1c)
                                    v20_1:0xa.w = *(x12_53 + 0x1e)
                                    v21_1:0xa.w = *(x12_53 + 0x20)
                                    v22_1:0xa.w = *(x12_53 + 0x22)
                                    v20_1:0xc.w = *(x12_53 + 0x24)
                                    v21_1:0xc.w = *(x12_53 + 0x26)
                                    v22_1:0xc.w = *(x12_53 + 0x28)
                                    v20_1:0xe.w = *(x12_53 + 0x2a)
                                    v21_1:0xe.w = *(x12_53 + 0x2c)
                                    v22_1:0xe.w = *(x12_53 + 0x2e)
                                    *(lr_1 - 0x40) = v16_1.w
                                    *(lr_1 - 0x3e) = v17_1.w
                                    *(lr_1 - 0x3c) = v18_1.w
                                    *(lr_1 - 0x3a) = 0xffff
                                    *(lr_1 - 0x38) = v16_1:2.w
                                    *(lr_1 - 0x36) = v17_1:2.w
                                    *(lr_1 - 0x34) = v18_1:2.w
                                    *(lr_1 - 0x32) = 0xffff
                                    *(lr_1 - 0x30) = v16_1:4.w
                                    *(lr_1 - 0x2e) = v17_1:4.w
                                    *(lr_1 - 0x2c) = v18_1:4.w
                                    *(lr_1 - 0x2a) = 0xffff
                                    *(lr_1 - 0x28) = v16_1:6.w
                                    *(lr_1 - 0x26) = v17_1:6.w
                                    *(lr_1 - 0x24) = v18_1:6.w
                                    *(lr_1 - 0x22) = 0xffff
                                    *(lr_1 - 0x20) = v16_1:8.w
                                    *(lr_1 - 0x1e) = v17_1:8.w
                                    *(lr_1 - 0x1c) = v18_1:8.w
                                    *(lr_1 - 0x1a) = 0xffff
                                    *(lr_1 - 0x18) = v16_1:0xa.w
                                    *(lr_1 - 0x16) = v17_1:0xa.w
                                    *(lr_1 - 0x14) = v18_1:0xa.w
                                    *(lr_1 - 0x12) = 0xffff
                                    *(lr_1 - 0x10) = v16_1:0xc.w
                                    *(lr_1 - 0xe) = v17_1:0xc.w
                                    *(lr_1 - 0xc) = v18_1:0xc.w
                                    *(lr_1 - 0xa) = 0xffff
                                    *(lr_1 - 8) = v16_1:0xe.w
                                    *(lr_1 - 6) = v17_1:0xe.w
                                    *(lr_1 - 4) = v18_1:0xe.w
                                    *(lr_1 - 2) = 0xffff
                                    *lr_1 = v20_1.w
                                    lr_1[1] = v21_1.w
                                    lr_1[2] = v22_1.w
                                    lr_1[3] = 0xffff
                                    lr_1[4] = v20_1:2.w
                                    lr_1[5] = v21_1:2.w
                                    lr_1[6] = v22_1:2.w
                                    lr_1[7] = 0xffff
                                    lr_1[8] = v20_1:4.w
                                    lr_1[9] = v21_1:4.w
                                    lr_1[0xa] = v22_1:4.w
                                    lr_1[0xb] = 0xffff
                                    lr_1[0xc] = v20_1:6.w
                                    lr_1[0xd] = v21_1:6.w
                                    lr_1[0xe] = v22_1:6.w
                                    lr_1[0xf] = 0xffff
                                    lr_1[0x10] = v20_1:8.w
                                    lr_1[0x11] = v21_1:8.w
                                    lr_1[0x12] = v22_1:8.w
                                    lr_1[0x13] = 0xffff
                                    lr_1[0x14] = v20_1:0xa.w
                                    lr_1[0x15] = v21_1:0xa.w
                                    lr_1[0x16] = v22_1:0xa.w
                                    lr_1[0x17] = 0xffff
                                    lr_1[0x18] = v20_1:0xc.w
                                    lr_1[0x19] = v21_1:0xc.w
                                    lr_1[0x1a] = v22_1:0xc.w
                                    lr_1[0x1b] = 0xffff
                                    lr_1[0x1c] = v20_1:0xe.w
                                    lr_1[0x1d] = v21_1:0xe.w
                                    lr_1[0x1e] = v22_1:0xe.w
                                    lr_1[0x1f] = 0xffff
                                    j_16 = j_28
                                    j_28 -= 0x10
                                    lr_1 = &lr_1[0x40]
                                while (j_16 != 0x10)
                                x2_14 = x26_2
                            
                            if (x11_1.d u< 0xf || x11_1 + 1 != j_38)
                                int32_t j_17 = x2_14 + 1
                                
                                do
                                    j_17 -= 1
                                    *x0_8 = *x28_1
                                    x0_8[1] = x28_1[1]
                                    int16_t x12_57 = x28_1[2]
                                    x0_8[3] = 0xffff
                                    x28_1 = &x28_1[3]
                                    x0_8[2] = x12_57
                                    x0_8 = &x0_8[4]
                                while (j_17 s> 0)
                    case 0x17
                        if ((x11_1.d & 0x80000000) == 0)
                            int32_t x2_16 = x11_1.d
                            
                            if (x11_1.d u> 7)
                                int64_t j_29 = j_37
                                x0_8 = &x0_8[j_29]
                                x28_1 = &x28_1[j_37 * 4]
                                int64_t j_18
                                
                                do
                                    v16_1.w = *fp_1
                                    v17_1.w = fp_1[1]
                                    v18_1.w = fp_1[2]
                                    v19_1.w = fp_1[3]
                                    v16_1:2.w = fp_1[4]
                                    v17_1:2.w = fp_1[5]
                                    v18_1:2.w = fp_1[6]
                                    v19_1:2.w = fp_1[7]
                                    v16_1:4.w = fp_1[8]
                                    v17_1:4.w = fp_1[9]
                                    v18_1:4.w = fp_1[0xa]
                                    v19_1:4.w = fp_1[0xb]
                                    v16_1:6.w = fp_1[0xc]
                                    v17_1:6.w = fp_1[0xd]
                                    v18_1:6.w = fp_1[0xe]
                                    v19_1:6.w = fp_1[0xf]
                                    v16_1:8.w = fp_1[0x10]
                                    v17_1:8.w = fp_1[0x11]
                                    v18_1:8.w = fp_1[0x12]
                                    v19_1:8.w = fp_1[0x13]
                                    v16_1:0xa.w = fp_1[0x14]
                                    v17_1:0xa.w = fp_1[0x15]
                                    v18_1:0xa.w = fp_1[0x16]
                                    v19_1:0xa.w = fp_1[0x17]
                                    v16_1:0xc.w = fp_1[0x18]
                                    v17_1:0xc.w = fp_1[0x19]
                                    v18_1:0xc.w = fp_1[0x1a]
                                    v19_1:0xc.w = fp_1[0x1b]
                                    v16_1:0xe.w = fp_1[0x1c]
                                    v17_1:0xe.w = fp_1[0x1d]
                                    v18_1:0xe.w = fp_1[0x1e]
                                    v19_1:0xe.w = fp_1[0x1f]
                                    fp_1 = &fp_1[0x20]
                                    j_18 = j_29
                                    j_29 -= 8
                                    uint128_t v6_2 = vextq_s8(v17_1, v17_1, 8)
                                    uint128_t v5_4 = vextq_s8(v16_1, v16_1, 8)
                                    uint128_t v20_3 = vmlal_u16(mulu.dp.o(v17_1, v3_1), v16_1, v2_1)
                                    v7_1 = vextq_s8(v18_1, v18_1, 8)
                                    uint128_t v6_4 = vmlal_u16(mulu.dp.o(v6_2, v3_1), v5_4, v2_1)
                                    v20_1 = vmlal_u16(v20_3, v18_1, v4_1)
                                    v6_1 = vmlal_u16(v6_4, v7_1, v4_1)
                                    vshrn_n_u32(v20_1, 8)
                                    *x27_1 = vshrn_high_n_u32(v6_1, 8)
                                    x27_1 = &x27_1[8]
                                while (j_18 != 8)
                                x2_16 = x11_1.d - j_37.d
                            
                            int32_t j_19 = x2_16 + 1
                            
                            do
                                j_19 -= 1
                                *x0_8 = ((zx.d(*x28_1) * 0x4d + zx.d(x28_1[1]) * 0x96
                                    + zx.d(x28_1[2]) * 0x1d) u>> 8).w
                                x0_8 = &x0_8[1]
                                x28_1 = &x28_1[4]
                            while (j_19 s> 0)
                    case 0x18
                        if ((x11_1.d & 0x80000000) == 0)
                            int32_t x2_17 = x11_1.d
                            
                            if (x11_1.d u>= 7)
                                int64_t j_30 = j_36
                                x0_8 = &x0_8[x0_3]
                                x28_1 = &x28_1[j_36 * 4]
                                int64_t j_20
                                
                                do
                                    v16_1.w = *fp_1
                                    v17_1.w = fp_1[1]
                                    v18_1.w = fp_1[2]
                                    v19_1.w = fp_1[3]
                                    v16_1:2.w = fp_1[4]
                                    v17_1:2.w = fp_1[5]
                                    v18_1:2.w = fp_1[6]
                                    v19_1:2.w = fp_1[7]
                                    v16_1:4.w = fp_1[8]
                                    v17_1:4.w = fp_1[9]
                                    v18_1:4.w = fp_1[0xa]
                                    v19_1:4.w = fp_1[0xb]
                                    v16_1:6.w = fp_1[0xc]
                                    v17_1:6.w = fp_1[0xd]
                                    v18_1:6.w = fp_1[0xe]
                                    v19_1:6.w = fp_1[0xf]
                                    v16_1:8.w = fp_1[0x10]
                                    v17_1:8.w = fp_1[0x11]
                                    v18_1:8.w = fp_1[0x12]
                                    v19_1:8.w = fp_1[0x13]
                                    v16_1:0xa.w = fp_1[0x14]
                                    v17_1:0xa.w = fp_1[0x15]
                                    v18_1:0xa.w = fp_1[0x16]
                                    v19_1:0xa.w = fp_1[0x17]
                                    v16_1:0xc.w = fp_1[0x18]
                                    v17_1:0xc.w = fp_1[0x19]
                                    v18_1:0xc.w = fp_1[0x1a]
                                    v19_1:0xc.w = fp_1[0x1b]
                                    v16_1:0xe.w = fp_1[0x1c]
                                    v17_1:0xe.w = fp_1[0x1d]
                                    v18_1:0xe.w = fp_1[0x1e]
                                    v19_1:0xe.w = fp_1[0x1f]
                                    fp_1 = &fp_1[0x20]
                                    j_20 = j_30
                                    j_30 -= 8
                                    uint128_t v6_5 = vextq_s8(v17_1, v17_1, 8)
                                    v5_1 = vextq_s8(v16_1, v16_1, 8)
                                    uint128_t v20_5 = vmlal_u16(mulu.dp.o(v17_1, v3_1), v16_1, v2_1)
                                    v7_1 = vextq_s8(v18_1, v18_1, 8)
                                    uint128_t v6_7 = vmlal_u16(mulu.dp.o(v6_5, v3_1), v5_1, v2_1)
                                    v20_1 = vmlal_u16(v20_5, v18_1, v4_1)
                                    v6_1 = vmlal_u16(v6_7, v7_1, v4_1)
                                    vshrn_n_u32(v20_1, 8)
                                    v18_1 = vshrn_high_n_u32(v6_1, 8)
                                    *x27_1 = v18_1.w
                                    x27_1[1] = v19_1.w
                                    x27_1[2] = v18_1:2.w
                                    x27_1[3] = v19_1:2.w
                                    x27_1[4] = v18_1:4.w
                                    x27_1[5] = v19_1:4.w
                                    x27_1[6] = v18_1:6.w
                                    x27_1[7] = v19_1:6.w
                                    x27_1[8] = v18_1:8.w
                                    x27_1[9] = v19_1:8.w
                                    x27_1[0xa] = v18_1:0xa.w
                                    x27_1[0xb] = v19_1:0xa.w
                                    x27_1[0xc] = v18_1:0xc.w
                                    x27_1[0xd] = v19_1:0xc.w
                                    x27_1[0xe] = v18_1:0xe.w
                                    x27_1[0xf] = v19_1:0xe.w
                                    x27_1 = &x27_1[0x10]
                                while (j_20 != 8)
                                x2_17 = x0_2
                            
                            if (x11_1.d u< 7 || x11_1 + 1 != j_36)
                                int32_t j_21 = x2_17 + 1
                                
                                do
                                    j_21 -= 1
                                    *x0_8 = ((zx.d(*x28_1) * 0x4d + zx.d(x28_1[1]) * 0x96
                                        + zx.d(x28_1[2]) * 0x1d) u>> 8).w
                                    int16_t x12_72 = x28_1[3]
                                    x28_1 = &x28_1[4]
                                    x0_8[1] = x12_72
                                    x0_8 = &x0_8[2]
                                while (j_21 s> 0)
                    case 0x19
                        if ((x11_1.d & 0x80000000) == 0)
                            int32_t x2_19 = x11_1.d
                            
                            if (x11_1.d u> 0xf)
                                int64_t j_35 = j_39
                                int16_t* x2_20 = x19 + 0x40 + x26_5
                                x0_8 = &x0_8[x13_8]
                                x28_1 = &x28_1[j_39 * 4]
                                int64_t j_22
                                
                                do
                                    v16_1.w = *(x2_20 - 0x40)
                                    v17_1.w = *(x2_20 - 0x3e)
                                    v18_1.w = *(x2_20 - 0x3c)
                                    v19_1.w = *(x2_20 - 0x3a)
                                    v16_1:2.w = *(x2_20 - 0x38)
                                    v17_1:2.w = *(x2_20 - 0x36)
                                    v18_1:2.w = *(x2_20 - 0x34)
                                    v19_1:2.w = *(x2_20 - 0x32)
                                    v16_1:4.w = *(x2_20 - 0x30)
                                    v17_1:4.w = *(x2_20 - 0x2e)
                                    v18_1:4.w = *(x2_20 - 0x2c)
                                    v19_1:4.w = *(x2_20 - 0x2a)
                                    v16_1:6.w = *(x2_20 - 0x28)
                                    v17_1:6.w = *(x2_20 - 0x26)
                                    v18_1:6.w = *(x2_20 - 0x24)
                                    v19_1:6.w = *(x2_20 - 0x22)
                                    v16_1:8.w = *(x2_20 - 0x20)
                                    v17_1:8.w = *(x2_20 - 0x1e)
                                    v18_1:8.w = *(x2_20 - 0x1c)
                                    v19_1:8.w = *(x2_20 - 0x1a)
                                    v16_1:0xa.w = *(x2_20 - 0x18)
                                    v17_1:0xa.w = *(x2_20 - 0x16)
                                    v18_1:0xa.w = *(x2_20 - 0x14)
                                    v19_1:0xa.w = *(x2_20 - 0x12)
                                    v16_1:0xc.w = *(x2_20 - 0x10)
                                    v17_1:0xc.w = *(x2_20 - 0xe)
                                    v18_1:0xc.w = *(x2_20 - 0xc)
                                    v19_1:0xc.w = *(x2_20 - 0xa)
                                    v16_1:0xe.w = *(x2_20 - 8)
                                    v17_1:0xe.w = *(x2_20 - 6)
                                    v18_1:0xe.w = *(x2_20 - 4)
                                    v19_1:0xe.w = *(x2_20 - 2)
                                    v20_1.w = *x2_20
                                    v21_1.w = x2_20[1]
                                    v22_1.w = x2_20[2]
                                    v23_1.w = x2_20[3]
                                    v20_1:2.w = x2_20[4]
                                    v21_1:2.w = x2_20[5]
                                    v22_1:2.w = x2_20[6]
                                    v23_1:2.w = x2_20[7]
                                    v20_1:4.w = x2_20[8]
                                    v21_1:4.w = x2_20[9]
                                    v22_1:4.w = x2_20[0xa]
                                    v23_1:4.w = x2_20[0xb]
                                    v20_1:6.w = x2_20[0xc]
                                    v21_1:6.w = x2_20[0xd]
                                    v22_1:6.w = x2_20[0xe]
                                    v23_1:6.w = x2_20[0xf]
                                    v20_1:8.w = x2_20[0x10]
                                    v21_1:8.w = x2_20[0x11]
                                    v22_1:8.w = x2_20[0x12]
                                    v23_1:8.w = x2_20[0x13]
                                    v20_1:0xa.w = x2_20[0x14]
                                    v21_1:0xa.w = x2_20[0x15]
                                    v22_1:0xa.w = x2_20[0x16]
                                    v23_1:0xa.w = x2_20[0x17]
                                    v20_1:0xc.w = x2_20[0x18]
                                    v21_1:0xc.w = x2_20[0x19]
                                    v22_1:0xc.w = x2_20[0x1a]
                                    v23_1:0xc.w = x2_20[0x1b]
                                    v20_1:0xe.w = x2_20[0x1c]
                                    v21_1:0xe.w = x2_20[0x1d]
                                    v22_1:0xe.w = x2_20[0x1e]
                                    v23_1:0xe.w = x2_20[0x1f]
                                    j_22 = j_35
                                    j_35 -= 0x10
                                    *x27_1 = v16_1.w
                                    x27_1[1] = v17_1.w
                                    x27_1[2] = v18_1.w
                                    x27_1[3] = v16_1:2.w
                                    x27_1[4] = v17_1:2.w
                                    x27_1[5] = v18_1:2.w
                                    x27_1[6] = v16_1:4.w
                                    x27_1[7] = v17_1:4.w
                                    x27_1[8] = v18_1:4.w
                                    x27_1[9] = v16_1:6.w
                                    x27_1[0xa] = v17_1:6.w
                                    x27_1[0xb] = v18_1:6.w
                                    x27_1[0xc] = v16_1:8.w
                                    x27_1[0xd] = v17_1:8.w
                                    x27_1[0xe] = v18_1:8.w
                                    x27_1[0xf] = v16_1:0xa.w
                                    x27_1[0x10] = v17_1:0xa.w
                                    x27_1[0x11] = v18_1:0xa.w
                                    x27_1[0x12] = v16_1:0xc.w
                                    x27_1[0x13] = v17_1:0xc.w
                                    x27_1[0x14] = v18_1:0xc.w
                                    x27_1[0x15] = v16_1:0xe.w
                                    x27_1[0x16] = v17_1:0xe.w
                                    x27_1[0x17] = v18_1:0xe.w
                                    x27_1[0x18] = v20_1.w
                                    x27_1[0x19] = v21_1.w
                                    x27_1[0x1a] = v22_1.w
                                    x27_1[0x1b] = v20_1:2.w
                                    x27_1[0x1c] = v21_1:2.w
                                    x27_1[0x1d] = v22_1:2.w
                                    x27_1[0x1e] = v20_1:4.w
                                    x27_1[0x1f] = v21_1:4.w
                                    x27_1[0x20] = v22_1:4.w
                                    x27_1[0x21] = v20_1:6.w
                                    x27_1[0x22] = v21_1:6.w
                                    x27_1[0x23] = v22_1:6.w
                                    x27_1[0x24] = v20_1:8.w
                                    x27_1[0x25] = v21_1:8.w
                                    x27_1[0x26] = v22_1:8.w
                                    x27_1[0x27] = v20_1:0xa.w
                                    x27_1[0x28] = v21_1:0xa.w
                                    x27_1[0x29] = v22_1:0xa.w
                                    x27_1[0x2a] = v20_1:0xc.w
                                    x27_1[0x2b] = v21_1:0xc.w
                                    x27_1[0x2c] = v22_1:0xc.w
                                    x27_1[0x2d] = v20_1:0xe.w
                                    x27_1[0x2e] = v21_1:0xe.w
                                    x27_1[0x2f] = v22_1:0xe.w
                                    x2_20 = &x2_20[0x40]
                                    x27_1 = &x27_1[0x30]
                                while (j_22 != 0x10)
                                x2_19 = x13_6
                            
                            int32_t j_23 = x2_19 + 1
                            
                            do
                                j_23 -= 1
                                *x0_8 = *x28_1
                                x0_8[1] = x28_1[1]
                                int16_t x12_80 = x28_1[2]
                                x28_1 = &x28_1[4]
                                x0_8[2] = x12_80
                                x0_8 = &x0_8[3]
                            while (j_23 s> 0)
                
                i += 1
                x9_1 += arg4 * arg2
                x8_6 += arg4 * arg3
            while (i != zx.q(arg5))
        
        free(x19)
        return x0_1
    
    free(x19)
    x19 = 0
    data_2423720 = "outofmem"

return x19
