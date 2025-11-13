// 函数: sub_f2a96c
// 地址: 0xf2a96c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(arg1 + 0x20)

if (x9 != 0)
    char* x11_1 = *(arg1 + 0x10)
    void* x10_1 = *(arg1 + 0x18)
    char x8_2
    
    if ((zx.d(*(arg1 + 8)) & 1) == 0)
        x8_2 = 0x41
    else
        x8_2 = 0x61
    
    int64_t i_6
    
    if (x9 u>= 8)
        int64_t x15_5 = (x9 - 1) * 2
        int32_t x13_5 = (x9 - 1) * 2 u< x9 - 1 ? 1 : 0
        i_6 = 0
        
        if (&x11_1[x15_5] u< x11_1 || (x13_5 & 1) != 0 || &x11_1[1 + x15_5] u< &x11_1[1]
                || (x13_5 & 1) != 0)
            goto label_f2a99c
        
        if (x11_1 u< x10_1 + x9 && x10_1 u< &x11_1[x9 << 1])
            goto label_f2a994
        
        int128_t v0
        int128_t v1
        int128_t v2
        uint128_t v3
        uint128_t v4
        uint128_t v5
        uint128_t v6
        
        if (x9 u>= 0x10)
            i_6 = x9 & 0xfffffffffffffff0
            v0.b = x8_2
            v0:1.b = x8_2
            v0:2.b = x8_2
            v0:3.b = x8_2
            v0:4.b = x8_2
            v0:5.b = x8_2
            v0:6.b = x8_2
            v0:7.b = x8_2
            v0:8.b = x8_2
            v0:9.b = x8_2
            v0:0xa.b = x8_2
            v0:0xb.b = x8_2
            v0:0xc.b = x8_2
            v0:0xd.b = x8_2
            v0:0xe.b = x8_2
            v0:0xf.b = x8_2
            v1.b = 0xf
            v1:1.b = 0xf
            v1:2.b = 0xf
            v1:3.b = 0xf
            v1:4.b = 0xf
            v1:5.b = 0xf
            v1:6.b = 0xf
            v1:7.b = 0xf
            v1:8.b = 0xf
            v1:9.b = 0xf
            v1:0xa.b = 0xf
            v1:0xb.b = 0xf
            v1:0xc.b = 0xf
            v1:0xd.b = 0xf
            v1:0xe.b = 0xf
            v1:0xf.b = 0xf
            v2.b = 0xf6
            v2:1.b = 0xf6
            v2:2.b = 0xf6
            v2:3.b = 0xf6
            v2:4.b = 0xf6
            v2:5.b = 0xf6
            v2:6.b = 0xf6
            v2:7.b = 0xf6
            v2:8.b = 0xf6
            v2:9.b = 0xf6
            v2:0xa.b = 0xf6
            v2:0xb.b = 0xf6
            v2:0xc.b = 0xf6
            v2:0xd.b = 0xf6
            v2:0xe.b = 0xf6
            v2:0xf.b = 0xf6
            v3.b = 0x30
            v3:1.b = 0x30
            v3:2.b = 0x30
            v3:3.b = 0x30
            v3:4.b = 0x30
            v3:5.b = 0x30
            v3:6.b = 0x30
            v3:7.b = 0x30
            v3:8.b = 0x30
            v3:9.b = 0x30
            v3:0xa.b = 0x30
            v3:0xb.b = 0x30
            v3:0xc.b = 0x30
            v3:0xd.b = 0x30
            v3:0xe.b = 0x30
            v3:0xf.b = 0x30
            int64_t i_4 = i_6
            char* x14_6 = x11_1
            void* x15_6 = x10_1
            int64_t i
            
            do
                v4 = *x15_6
                x15_6 += 0x10
                v5.b = 0xf6
                v5:1.b = 0xf6
                v5:2.b = 0xf6
                v5:3.b = 0xf6
                v5:4.b = 0xf6
                v5:5.b = 0xf6
                v5:6.b = 0xf6
                v5:7.b = 0xf6
                v5:8.b = 0xf6
                v5:9.b = 0xf6
                v5:0xa.b = 0xf6
                v5:0xb.b = 0xf6
                v5:0xc.b = 0xf6
                v5:0xd.b = 0xf6
                v5:0xe.b = 0xf6
                v5:0xf.b = 0xf6
                i = i_4
                i_4 -= 0x10
                v6.b = v4.b u>> 4
                v6:1.b = v4:1.b u>> 4
                v6:2.b = v4:2.b u>> 4
                v6:3.b = v4:3.b u>> 4
                v6:4.b = v4:4.b u>> 4
                v6:5.b = v4:5.b u>> 4
                v6:6.b = v4:6.b u>> 4
                v6:7.b = v4:7.b u>> 4
                v6:8.b = v4:8.b u>> 4
                v6:9.b = v4:9.b u>> 4
                v6:0xa.b = v4:0xa.b u>> 4
                v6:0xb.b = v4:0xb.b u>> 4
                v6:0xc.b = v4:0xc.b u>> 4
                v6:0xd.b = v4:0xd.b u>> 4
                v6:0xe.b = v4:0xe.b u>> 4
                v6:0xf.b = v4:0xf.b u>> 4
                uint128_t v7_1 = v4 & v1
                unimplemented  {usra v5.16b, v4.16b, #0x4}
                int128_t v16_1 = v7_1 + v2
                v4 = vbslq_s8(sx.o(-1), vorrq_s8(v6, v3), v5 + v0)
                v6.b = v16_1.b s>> 7
                v6:1.b = v16_1:1.b s>> 7
                v6:2.b = v16_1:2.b s>> 7
                v6:3.b = v16_1:3.b s>> 7
                v6:4.b = v16_1:4.b s>> 7
                v6:5.b = v16_1:5.b s>> 7
                v6:6.b = v16_1:6.b s>> 7
                v6:7.b = v16_1:7.b s>> 7
                v6:8.b = v16_1:8.b s>> 7
                v6:9.b = v16_1:9.b s>> 7
                v6:0xa.b = v16_1:0xa.b s>> 7
                v6:0xb.b = v16_1:0xb.b s>> 7
                v6:0xc.b = v16_1:0xc.b s>> 7
                v6:0xd.b = v16_1:0xd.b s>> 7
                v6:0xe.b = v16_1:0xe.b s>> 7
                v6:0xf.b = v16_1:0xf.b s>> 7
                v5 = vbslq_s8(v6, vorrq_s8(v7_1, v3), v16_1 + v0)
                *x14_6 = v4.b
                x14_6[1] = v5.b
                x14_6[2] = v4:1.b
                x14_6[3] = v5:1.b
                x14_6[4] = v4:2.b
                x14_6[5] = v5:2.b
                x14_6[6] = v4:3.b
                x14_6[7] = v5:3.b
                x14_6[8] = v4:4.b
                x14_6[9] = v5:4.b
                x14_6[0xa] = v4:5.b
                x14_6[0xb] = v5:5.b
                x14_6[0xc] = v4:6.b
                x14_6[0xd] = v5:6.b
                x14_6[0xe] = v4:7.b
                x14_6[0xf] = v5:7.b
                x14_6[0x10] = v4:8.b
                x14_6[0x11] = v5:8.b
                x14_6[0x12] = v4:9.b
                x14_6[0x13] = v5:9.b
                x14_6[0x14] = v4:0xa.b
                x14_6[0x15] = v5:0xa.b
                x14_6[0x16] = v4:0xb.b
                x14_6[0x17] = v5:0xb.b
                x14_6[0x18] = v4:0xc.b
                x14_6[0x19] = v5:0xc.b
                x14_6[0x1a] = v4:0xd.b
                x14_6[0x1b] = v5:0xd.b
                x14_6[0x1c] = v4:0xe.b
                x14_6[0x1d] = v5:0xe.b
                x14_6[0x1e] = v4:0xf.b
                x14_6[0x1f] = v5:0xf.b
                x14_6 = &x14_6[0x20]
            while (i != 0x10)
            
            if (x9 != i_6)
                if ((x9.d & 8) == 0)
                    goto label_f2a99c
                
                goto label_f2aad8
        else
            i_6 = 0
        label_f2aad8:
            int64_t i_7 = i_6
            i_6 = x9 & 0xfffffffffffffff8
            v0.b = x8_2
            v0:1.b = x8_2
            v0:2.b = x8_2
            v0:3.b = x8_2
            v0:4.b = x8_2
            v0:5.b = x8_2
            v0:6.b = x8_2
            v0:7.b = x8_2
            void* x13_6 = x10_1 + i_7
            char* x14_7 = &x11_1[i_7 << 1]
            v1.b = 0xf
            v1:1.b = 0xf
            v1:2.b = 0xf
            v1:3.b = 0xf
            v1:4.b = 0xf
            v1:5.b = 0xf
            v1:6.b = 0xf
            v1:7.b = 0xf
            v2.b = 0xf6
            v2:1.b = 0xf6
            v2:2.b = 0xf6
            v2:3.b = 0xf6
            v2:4.b = 0xf6
            v2:5.b = 0xf6
            v2:6.b = 0xf6
            v2:7.b = 0xf6
            int64_t i_5 = i_7 - i_6
            v3.b = 0x30
            v3:1.b = 0x30
            v3:2.b = 0x30
            v3:3.b = 0x30
            v3:4.b = 0x30
            v3:5.b = 0x30
            v3:6.b = 0x30
            v3:7.b = 0x30
            int64_t i_1
            
            do
                v4.q = *x13_6
                x13_6 += 8
                v5.b = 0xf6
                v5:1.b = 0xf6
                v5:2.b = 0xf6
                v5:3.b = 0xf6
                v5:4.b = 0xf6
                v5:5.b = 0xf6
                v5:6.b = 0xf6
                v5:7.b = 0xf6
                i_1 = i_5
                i_5 += 8
                v6.b = v4.b u>> 4
                v6:1.b = v4:1.b u>> 4
                v6:2.b = v4:2.b u>> 4
                v6:3.b = v4:3.b u>> 4
                v6:4.b = v4:4.b u>> 4
                v6:5.b = v4:5.b u>> 4
                v6:6.b = v4:6.b u>> 4
                v6:7.b = v4:7.b u>> 4
                int128_t v7_3 = v4 & v1
                int128_t v5_3 = vsra_n_u8(v5, v4, 4)
                v4.b = v5_3.b s>> 7
                v4:1.b = v5_3:1.b s>> 7
                v4:2.b = v5_3:2.b s>> 7
                v4:3.b = v5_3:3.b s>> 7
                v4:4.b = v5_3:4.b s>> 7
                v4:5.b = v5_3:5.b s>> 7
                v4:6.b = v5_3:6.b s>> 7
                v4:7.b = v5_3:7.b s>> 7
                int128_t v16_3 = v7_3 + v2
                v4 = vbsl_s8(v4, vorr_s8(v6, v3), v5_3 + v0)
                v6.b = v16_3.b s>> 7
                v6:1.b = v16_3:1.b s>> 7
                v6:2.b = v16_3:2.b s>> 7
                v6:3.b = v16_3:3.b s>> 7
                v6:4.b = v16_3:4.b s>> 7
                v6:5.b = v16_3:5.b s>> 7
                v6:6.b = v16_3:6.b s>> 7
                v6:7.b = v16_3:7.b s>> 7
                int128_t v5_4
                v5_4.q = v6.q
                v5 = vbsl_s8(v5_4, vorr_s8(v7_3, v3), v16_3 + v0)
                *x14_7 = v4.b
                x14_7[1] = v5.b
                x14_7[2] = v4:1.b
                x14_7[3] = v5:1.b
                x14_7[4] = v4:2.b
                x14_7[5] = v5:2.b
                x14_7[6] = v4:3.b
                x14_7[7] = v5:3.b
                x14_7[8] = v4:4.b
                x14_7[9] = v5:4.b
                x14_7[0xa] = v4:5.b
                x14_7[0xb] = v5:5.b
                x14_7[0xc] = v4:6.b
                x14_7[0xd] = v5:6.b
                x14_7[0xe] = v4:7.b
                x14_7[0xf] = v5:7.b
                x14_7 = &x14_7[0x10]
            while (i_1 != -8)
            
            if (x9 != i_6)
                goto label_f2a99c
    else
    label_f2a994:
        i_6 = 0
    label_f2a99c:
        int64_t i_3 = x9 - i_6
        void* x11_3 = &x11_1[(i_6 << 1) + 1]
        char* x10_2 = x10_1 + i_6
        int64_t i_2
        
        do
            uint32_t x12_1 = zx.d(*x10_2)
            x10_2 = &x10_2[1]
            i_2 = i_3
            i_3 -= 1
            uint32_t x14_1 = x12_1 u>> 4
            int32_t x16_1 = (x14_1 - 0xa) s>> 7
            int32_t x16_2 = ((x12_1 & 0xf) - 0xa) s>> 7
            *(x11_3 - 1) =
                ((x14_1.b | 0x30) & x16_1.b) | (((x14_1 - 0xa).b + x8_2) & (not.d(x16_1)).b)
            *x11_3 = ((0x30 | (x12_1 & 0xf).b) & x16_2.b)
                | ((((x12_1 & 0xf) - 0xa).b + x8_2) & (not.d(x16_2)).b)
            x11_3 += 2
        while (i_2 != 1)

return 0
