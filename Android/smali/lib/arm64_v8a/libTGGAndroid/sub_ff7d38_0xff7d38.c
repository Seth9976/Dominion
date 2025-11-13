// 函数: sub_ff7d38
// 地址: 0xff7d38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char x9_9 = *arg2

if (arg4 == 1)
    arg1[1] = x9_9
    *arg1 = x9_9
    return 

*arg1 = x9_9
arg1[1] = ((zx.d(arg2[1]) + zx.d(*arg2) * 3 + 2) u>> 2).b
int32_t x9_6

if (arg4 s< 3)
    x9_6 = 2
else
    uint64_t x9_5 = zx.q(arg4 - 1)
    int64_t x12_3
    
    if (x9_5 - 1 u< 8 || (&arg1[2] u< &arg2[x9_5 + 1] && &arg1[x9_5 << 1] u> arg2))
        x12_3 = 1
    label_ff7db0:
        int64_t i_3 = x9_5 - x12_3
        void* x10_2 = &arg2[x12_3]
        void* x11_4 = &arg1[(x12_3 << 1) + 1]
        int64_t i
        
        do
            uint32_t x12_4 = zx.d(*x10_2)
            i = i_3
            i_3 -= 1
            *(x11_4 - 1) = ((x12_4 * 3 + 2 + zx.d(*(x10_2 - 1))) u>> 2).b
            x10_2 += 1
            *x11_4 = ((x12_4 * 3 + 2 + zx.d(*x10_2)) u>> 2).b
            x11_4 += 2
        while (i != 1)
    else
        void* i_6
        int128_t v0
        uint128_t v1
        uint128_t v2
        uint128_t v3
        uint128_t v4
        
        if (x9_5 - 1 u>= 0x10)
            i_6 = (x9_5 - 1) & 0xfffffffffffffff0
            void* x12_9 = &arg2[2]
            void* x13_6 = &arg1[2]
            v0.b = 3
            v0:1.b = 3
            v0:2.b = 3
            v0:3.b = 3
            v0:4.b = 3
            v0:5.b = 3
            v0:6.b = 3
            v0:7.b = 3
            void* i_5 = i_6
            void* i_1
            
            do
                v1 = *(x12_9 - 1)
                v4 = *(x12_9 - 2)
                uint128_t v5 = *x12_9
                x12_9 += 0x10
                v2.w = 2
                v2:2.w = 2
                v2:4.w = 2
                v2:6.w = 2
                v2:8.w = 2
                v2:0xa.w = 2
                v2:0xc.w = 2
                v2:0xe.w = 2
                v3.w = 2
                v3:2.w = 2
                v3:4.w = 2
                v3:6.w = 2
                v3:8.w = 2
                v3:0xa.w = 2
                v3:0xc.w = 2
                v3:0xe.w = 2
                uint128_t v2_2 = vmlal_u8(v2, v1, v0)
                uint128_t v3_1 = vmlal_u8(v3, vextq_s8(v1, v1, 8), v0)
                v1 = vaddw_u8(v2_2, v4)
                v2 = vaddw_u8(v2_2, v5)
                v4 = vaddw_high_u8(v3_1, v4)
                v3 = vaddw_high_u8(v3_1, v5)
                vshrn_n_u16(v1, 2)
                v5 = vshrn_high_n_u16(v4, 2)
                vshrn_n_u16(v2, 2)
                uint128_t v6_2 = vshrn_high_n_u16(v3, 2)
                i_1 = i_5
                i_5 -= 0x10
                *x13_6 = v5.b
                *(x13_6 + 1) = v6_2.b
                *(x13_6 + 2) = v5:1.b
                *(x13_6 + 3) = v6_2:1.b
                *(x13_6 + 4) = v5:2.b
                *(x13_6 + 5) = v6_2:2.b
                *(x13_6 + 6) = v5:3.b
                *(x13_6 + 7) = v6_2:3.b
                *(x13_6 + 8) = v5:4.b
                *(x13_6 + 9) = v6_2:4.b
                *(x13_6 + 0xa) = v5:5.b
                *(x13_6 + 0xb) = v6_2:5.b
                *(x13_6 + 0xc) = v5:6.b
                *(x13_6 + 0xd) = v6_2:6.b
                *(x13_6 + 0xe) = v5:7.b
                *(x13_6 + 0xf) = v6_2:7.b
                *(x13_6 + 0x10) = v5:8.b
                *(x13_6 + 0x11) = v6_2:8.b
                *(x13_6 + 0x12) = v5:9.b
                *(x13_6 + 0x13) = v6_2:9.b
                *(x13_6 + 0x14) = v5:0xa.b
                *(x13_6 + 0x15) = v6_2:0xa.b
                *(x13_6 + 0x16) = v5:0xb.b
                *(x13_6 + 0x17) = v6_2:0xb.b
                *(x13_6 + 0x18) = v5:0xc.b
                *(x13_6 + 0x19) = v6_2:0xc.b
                *(x13_6 + 0x1a) = v5:0xd.b
                *(x13_6 + 0x1b) = v6_2:0xd.b
                *(x13_6 + 0x1c) = v5:0xe.b
                *(x13_6 + 0x1d) = v6_2:0xe.b
                *(x13_6 + 0x1e) = v5:0xf.b
                *(x13_6 + 0x1f) = v6_2:0xf.b
                x13_6 += 0x20
            while (i_1 != 0x10)
            
            if (x9_5 - 1 != i_6)
                if (((x9_5 - 1).d & 8) != 0)
                    goto label_ff7e40
                
                x12_3 = i_6 | 1
                goto label_ff7db0
        else
            i_6 = nullptr
        label_ff7e40:
            int64_t x13_5 = (x9_5 - 1) & 0xfffffffffffffff8
            x12_3 = x13_5 | 1
            void* x14_2 = i_6 + arg2 + 2
            void* x15_2 = &arg1[(i_6 << 1) + 2]
            void* i_4 = i_6 - x13_5
            v0.b = 3
            v0:1.b = 3
            v0:2.b = 3
            v0:3.b = 3
            v0:4.b = 3
            v0:5.b = 3
            v0:6.b = 3
            v0:7.b = 3
            void* i_2
            
            do
                v1.q = *(x14_2 - 1)
                v3.q = *(x14_2 - 2)
                v4.q = *x14_2
                x14_2 += 8
                v2.w = 2
                v2:2.w = 2
                v2:4.w = 2
                v2:6.w = 2
                v2:8.w = 2
                v2:0xa.w = 2
                v2:0xc.w = 2
                v2:0xe.w = 2
                uint128_t v2_1 = vmlal_u8(v2, v1, v0)
                v1 = vaddw_u8(v2_1, v3)
                v2 = vaddw_u8(v2_1, v4)
                v3 = vshrn_n_u16(v1, 2)
                v4 = vshrn_n_u16(v2, 2)
                i_2 = i_4
                i_4 += 8
                *x15_2 = v3.b
                *(x15_2 + 1) = v4.b
                *(x15_2 + 2) = v3:1.b
                *(x15_2 + 3) = v4:1.b
                *(x15_2 + 4) = v3:2.b
                *(x15_2 + 5) = v4:2.b
                *(x15_2 + 6) = v3:3.b
                *(x15_2 + 7) = v4:3.b
                *(x15_2 + 8) = v3:4.b
                *(x15_2 + 9) = v4:4.b
                *(x15_2 + 0xa) = v3:5.b
                *(x15_2 + 0xb) = v4:5.b
                *(x15_2 + 0xc) = v3:6.b
                *(x15_2 + 0xd) = v4:6.b
                *(x15_2 + 0xe) = v3:7.b
                *(x15_2 + 0xf) = v4:7.b
                x15_2 += 0x10
            while (i_2 != -8)
            
            if (x9_5 - 1 != x13_5)
                goto label_ff7db0
    x9_6 = (arg4 - 1) << 1

int64_t x8_1 = sx.q(arg4 - 1)
uint64_t x9_7 = zx.q(x9_6)
arg1[x9_7] = ((zx.d(arg2[x8_1]) + zx.d(arg2[sx.q(arg4) - 2]) * 3 + 2) u>> 2).b
arg1[x9_7 | 1] = arg2[x8_1]
