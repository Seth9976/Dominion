// 函数: _ZN5Botan3TLS21check_tls_cbc_paddingEPKhm
// 地址: 0xe8629c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 - 1 u> 0xfffe)
    return 0

uint32_t x8 = zx.d(arg1[arg2 - 1])
int32_t x12 = arg2.d & 0xffff
int32_t x9

x9 = x12 u> 0x100 ? x12 : 0x100

int32_t x10 = x9 - 0x100
int32_t x11_2 = ((arg2.d - (x8 + 1)) & not.d(arg2.d) & 0x8000) << 0x10 s>> 0x1f

if (x12 != zx.d(x10.w))
    int16_t x12_1
    
    x12_1 = x12 u< 0x100 ? arg2.w : 0x100
    
    uint32_t x12_3 = zx.d(x12_1 - 1)
    
    if (x12_3 u< 0xf)
    label_e8641c:
        
        do
            int16_t x12_5 = arg2.w - x10.w
            int16_t x13_9 = (zx.w(arg1[zx.q(x10.w)]) ^ x8.w) - 1
            x10 += 1
            x11_2 |= not.d(sx.d(((x8 + 1).w - x12_5) | x12_5 | x13_9) s>> 0xf)
        while ((x10 & 0xffff) != zx.d((arg2.d).w))
    else
        int16_t x13_2
        
        if ((arg2.d & 0xffff) u< 0x100)
            x13_2 = arg2.w
        else
            x13_2 = 0x100
        
        if ((((x10 & 0xffff) + zx.d(x13_2 - 1)) & 0x10000) != 0)
            goto label_e8641c
        
        int128_t v7
        v7.w = x10.w
        v7:2.w = x10.w
        v7:4.w = x10.w
        v7:6.w = x10.w
        v7:8.w = x10.w
        v7:0xa.w = x10.w
        v7:0xc.w = x10.w
        v7:0xe.w = x10.w
        uint128_t v1
        v1.q = 0
        v1:8.q = 0
        int32_t x15_1 = (x12_3 + 1) & 0x1fff0
        int32_t x13_5 = 0
        uint128_t v0
        v0.q = 0
        v0:8.q = 0
        int128_t v2
        v2.w = (arg2.d).w
        v2:2.w = (arg2.d).w
        v2:4.w = (arg2.d).w
        v2:6.w = (arg2.d).w
        v2:8.w = (arg2.d).w
        v2:0xa.w = (arg2.d).w
        v2:0xc.w = (arg2.d).w
        v2:0xe.w = (arg2.d).w
        int128_t v3
        v3.w = (x8 + 1).w
        v3:2.w = (x8 + 1).w
        v3:4.w = (x8 + 1).w
        v3:6.w = (x8 + 1).w
        v3:8.w = (x8 + 1).w
        v3:0xa.w = (x8 + 1).w
        v3:0xc.w = (x8 + 1).w
        v3:0xe.w = (x8 + 1).w
        int128_t v4
        v4.b = x8.b
        v4:1.b = x8.b
        v4:2.b = x8.b
        v4:3.b = x8.b
        v4:4.b = x8.b
        v4:5.b = x8.b
        v4:6.b = x8.b
        v4:7.b = x8.b
        int128_t v5
        v5.w = 8
        v5:2.w = 8
        v5:4.w = 8
        v5:6.w = 8
        v5:8.w = 8
        v5:0xa.w = 8
        v5:0xc.w = 8
        v5:0xe.w = 8
        v1.w = x11_2
        int128_t v7_1 = v7 + data_71a7d0
        int128_t v16
        v16.w = 0x10
        v16:2.w = 0x10
        v16:4.w = 0x10
        v16:6.w = 0x10
        v16:8.w = 0x10
        v16:0xa.w = 0x10
        v16:0xc.w = 0x10
        v16:0xe.w = 0x10
        
        do
            uint128_t v17_1 = v2 - v7_1
            uint128_t v18_1 = v17_1 - v5
            void* x11_4 = &arg1[zx.q(x10.w + x13_5.w)]
            uint128_t v17_2 = vorrq_s8(v3 - v17_1, v17_1)
            uint128_t v18_2 = vorrq_s8(v3 - v18_1, v18_1)
            uint128_t v19_1
            v19_1.q = *x11_4
            uint128_t v20_1
            v20_1.q = *(x11_4 + 8)
            x13_5 += 0x10
            v7_1 += v16
            uint128_t v19_3 = vaddw_u8(sx.o(-1), v19_1 ^ v4)
            uint128_t v20_3 = vaddw_u8(sx.o(-1), v20_1 ^ v4)
            uint128_t v17_3 = vorrq_s8(v17_2, v19_3)
            uint128_t v18_3 = vorrq_s8(v18_2, v20_3)
            uint128_t v17_4 = vcgezq_s16(v17_3)
            uint128_t v18_4 = vcgezq_s16(v18_3)
            v1 = vorrq_s8(v1, v17_4)
            v0 = vorrq_s8(v0, v18_4)
        while (x15_1 != x13_5)
        
        uint128_t v0_1 = vorrq_s8(v0, v1)
        uint128_t v0_2 = vorrq_s8(v0_1, vdupq_laneq_s64(v0_1, 1))
        uint128_t v0_3 = vorrq_s8(v0_2, vdupq_laneq_s32(v0_2, 1))
        x11_2 = zx.d(vorrq_s8(v0_3, vdupq_laneq_s16(v0_3, 1)))
        x10 += x15_1
        
        if (x12_3 + 1 != x15_1)
            goto label_e8641c

return zx.q(x8 + 1) & zx.q(not.d(x11_2))
