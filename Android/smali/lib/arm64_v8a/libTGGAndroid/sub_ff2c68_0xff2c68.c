// 函数: sub_ff2c68
// 地址: 0xff2c68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x8_9 = zx.d(*arg2)

if (arg4 == 1)
    uint8_t x8_3 = ((zx.d(*arg3) + x8_9 * 3 + 2) u>> 2).b
    arg1[1] = x8_3
    *arg1 = x8_3
    return 

uint32_t x12 = x8_9 * 3 + zx.d(*arg3)
uint8_t x8_6 = ((x12 + 2) u>> 2).b
*arg1 = x8_6

if (arg4 s>= 2)
    uint64_t x8_7 = zx.q(arg4)
    uint32_t x14_4
    int64_t x10_1
    
    if (x8_7 - 1 u>= 0x10)
        x10_1 = 1
        
        if (((&arg1[1] u< &arg2[x8_7] ? 1 : 0) & (&arg2[1] u< &arg1[x8_7 << 1] - 1 ? 1 : 0) & 1)
                != 0 || ((&arg1[1] u< &arg3[x8_7] ? 1 : 0) & (&arg3[1] u< &arg1[x8_7 << 1] - 1 ? 1 : 0)
                & 1) != 0)
            goto label_ff2e30
        
        int64_t i_4 = (x8_7 - 1) & 0xfffffffffffffff0
        uint128_t v3
        v3.d = x12
        v3:4.d = x12
        v3:8.d = x12
        v3:0xc.d = x12
        void* x12_1 = &arg2[1]
        void* x13_4 = &arg3[1]
        void* x14_3 = &arg1[1]
        int128_t v0
        v0.w = 3
        v0:2.w = 3
        v0:4.w = 3
        v0:6.w = 3
        uint128_t v1
        v1.d = 3
        v1:4.d = 3
        v1:8.d = 3
        v1:0xc.d = 3
        x10_1 = i_4 | 1
        int128_t v2
        v2.d = 8
        v2:4.d = 8
        v2:8.d = 8
        v2:0xc.d = 8
        int64_t i_3 = i_4
        int64_t i
        
        do
            uint128_t v4 = *x12_1
            x12_1 += 0x10
            uint128_t v5 = *x13_4
            x13_4 += 0x10
            i = i_3
            i_3 -= 0x10
            uint128_t v6
            v6.w = zx.w(v4.b)
            v6:2.w = zx.w(v4:1.b)
            v6:4.w = zx.w(v4:2.b)
            v6:6.w = zx.w(v4:3.b)
            v6:8.w = zx.w(v4:4.b)
            v6:0xa.w = zx.w(v4:5.b)
            v6:0xc.w = zx.w(v4:6.b)
            v6:0xe.w = zx.w(v4:7.b)
            v4.w = zx.w(v4:8.b)
            v4:2.w = zx.w(v4:9.b)
            v4:4.w = zx.w(v4:0xa.b)
            v4:6.w = zx.w(v4:0xb.b)
            v4:8.w = zx.w(v4:0xc.b)
            v4:0xa.w = zx.w(v4:0xd.b)
            v4:0xc.w = zx.w(v4:0xe.b)
            v4:0xe.w = zx.w(v4:0xf.b)
            uint128_t v7
            v7.w = zx.w(v5:8.b)
            v7:2.w = zx.w(v5:9.b)
            v7:4.w = zx.w(v5:0xa.b)
            v7:6.w = zx.w(v5:0xb.b)
            v7:8.w = zx.w(v5:0xc.b)
            v7:0xa.w = zx.w(v5:0xd.b)
            v7:0xc.w = zx.w(v5:0xe.b)
            v7:0xe.w = zx.w(v5:0xf.b)
            v5.w = zx.w(v5.b)
            v5:2.w = zx.w(v5:1.b)
            v5:4.w = zx.w(v5:2.b)
            v5:6.w = zx.w(v5:3.b)
            v5:8.w = zx.w(v5:4.b)
            v5:0xa.w = zx.w(v5:5.b)
            v5:0xc.w = zx.w(v5:6.b)
            v5:0xe.w = zx.w(v5:7.b)
            uint128_t v16_1 = vextq_s8(v4, v4, 8)
            uint128_t v17_2 = mulu.dp.o(vextq_s8(v6, v6, 8), v0)
            uint128_t v6_2 = vaddw_u16(mulu.dp.o(v6, v0), v5)
            uint128_t v4_2 = vaddw_u16(mulu.dp.o(v4, v0), v7)
            uint128_t v18_1 = vextq_s8(v3, v6_2, 0xc)
            v3 = vaddw_high_u16(mulu.dp.o(v16_1, v0), v7)
            uint128_t v5_1 = vaddw_high_u16(v17_2, v5)
            uint128_t v17_3 = vextq_s8(v5_1, v4_2, 0xc)
            uint128_t v20_1 = vextq_s8(v6_2, v5_1, 0xc)
            uint128_t v16_4 = vmlaq_s32(v6_2, v18_1, v1)
            uint128_t v19_1 = vextq_s8(v4_2, v3, 0xc)
            uint128_t v18_2 = vmlaq_s32(v18_1, v6_2, v1)
            uint128_t v7_2 = vmlaq_s32(v4_2, v17_3, v1)
            uint128_t v22_2 = vmlaq_s32(v5_1, v20_1, v1)
            uint128_t v21_2 = vmlaq_s32(v3, v19_1, v1)
            uint128_t v17_4 = vmlaq_s32(v17_3, v4_2, v1)
            uint128_t v20_2 = vmlaq_s32(v20_1, v5_1, v1)
            vshrn_n_u32(v16_4 + v2, 4)
            vshrn_n_u32(v7_2 + v2, 4)
            v6 = vshrn_high_n_u32(v22_2 + v2, 4)
            uint128_t v19_2 = vmlaq_s32(v19_1, v3, v1)
            vshrn_n_u32(v18_2 + v2, 4)
            vshrn_n_u32(v17_4 + v2, 4)
            v7 = vshrn_high_n_u32(v21_2 + v2, 4)
            vmovn_s16(v6)
            v4 = vshrn_high_n_u32(v20_2 + v2, 4)
            uint128_t v16_7 = vmovn_high_s16(v7)
            v5 = vshrn_high_n_u32(v19_2 + v2, 4)
            vmovn_s16(v4)
            uint128_t v17_7 = vmovn_high_s16(v5)
            *x14_3 = v16_7.b
            *(x14_3 + 1) = v17_7.b
            *(x14_3 + 2) = v16_7:1.b
            *(x14_3 + 3) = v17_7:1.b
            *(x14_3 + 4) = v16_7:2.b
            *(x14_3 + 5) = v17_7:2.b
            *(x14_3 + 6) = v16_7:3.b
            *(x14_3 + 7) = v17_7:3.b
            *(x14_3 + 8) = v16_7:4.b
            *(x14_3 + 9) = v17_7:4.b
            *(x14_3 + 0xa) = v16_7:5.b
            *(x14_3 + 0xb) = v17_7:5.b
            *(x14_3 + 0xc) = v16_7:6.b
            *(x14_3 + 0xd) = v17_7:6.b
            *(x14_3 + 0xe) = v16_7:7.b
            *(x14_3 + 0xf) = v17_7:7.b
            *(x14_3 + 0x10) = v16_7:8.b
            *(x14_3 + 0x11) = v17_7:8.b
            *(x14_3 + 0x12) = v16_7:9.b
            *(x14_3 + 0x13) = v17_7:9.b
            *(x14_3 + 0x14) = v16_7:0xa.b
            *(x14_3 + 0x15) = v17_7:0xa.b
            *(x14_3 + 0x16) = v16_7:0xb.b
            *(x14_3 + 0x17) = v17_7:0xb.b
            *(x14_3 + 0x18) = v16_7:0xc.b
            *(x14_3 + 0x19) = v17_7:0xc.b
            *(x14_3 + 0x1a) = v16_7:0xd.b
            *(x14_3 + 0x1b) = v17_7:0xd.b
            *(x14_3 + 0x1c) = v16_7:0xe.b
            *(x14_3 + 0x1d) = v17_7:0xe.b
            *(x14_3 + 0x1e) = v16_7:0xf.b
            *(x14_3 + 0x1f) = v17_7:0xf.b
            x14_3 += 0x20
        while (i != 0x10)
        x12 = v3:0xc.d
        x14_4 = x12
        
        if (x8_7 - 1 != i_4)
            goto label_ff2e30
    else
        x10_1 = 1
    label_ff2e30:
        void* x9_3 = &arg3[x10_1]
        void* x11_5 = &arg2[x10_1]
        void* x13_5 = &arg1[x10_1 << 1]
        int64_t i_2 = x8_7 - x10_1
        int64_t i_1
        
        do
            uint32_t x10_3 = zx.d(*x11_5)
            x11_5 += 1
            uint32_t x14_5 = zx.d(*x9_3)
            x9_3 += 1
            i_1 = i_2
            i_2 -= 1
            x14_4 = x10_3 * 3 + x14_5
            *(x13_5 - 1) = ((x12 * 3 + x14_4 + 8) u>> 4).b
            *x13_5 = ((x12 + x14_4 * 3 + 8) u>> 4).b
            x13_5 += 2
            x12 = x14_4
        while (i_1 != 1)
    x8_6 = ((x14_4 + 2) u>> 2).b

arg1[sx.q(arg4 << 1) - 1] = x8_6
