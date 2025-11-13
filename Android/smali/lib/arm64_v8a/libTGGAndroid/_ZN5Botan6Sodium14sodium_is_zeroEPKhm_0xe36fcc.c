// 函数: _ZN5Botan6Sodium14sodium_is_zeroEPKhm
// 地址: 0xe36fcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x9

if (arg2 == 0)
    x9 = 0
else
    int64_t i_4
    
    if (arg2 u>= 0x20)
        i_4 = arg2 & 0xffffffffffffffe0
        void* x9_1 = &arg1[0x10]
        uint128_t v0
        v0.q = 0
        v0:8.q = 0
        int64_t i_2 = i_4
        uint128_t v1
        v1.q = 0
        v1:8.q = 0
        int64_t i
        
        do
            uint128_t v2 = *(x9_1 - 0x10)
            uint128_t v3 = *x9_1
            i = i_2
            i_2 -= 0x20
            x9_1 += 0x20
            v0 = vorrq_s8(v2, v0)
            v1 = vorrq_s8(v3, v1)
        while (i != 0x20)
        uint128_t v0_1 = vorrq_s8(v1, v0)
        uint128_t v0_2 = vorrq_s8(v0_1, vdupq_laneq_s64(v0_1, 1))
        uint128_t v0_3 = vorrq_s8(v0_2, vdupq_laneq_s32(v0_2, 1))
        uint128_t v0_4 = vorrq_s8(v0_3, vdupq_laneq_s16(v0_3, 1))
        x9 = zx.d(vorrq_s8(v0_4, vdupq_laneq_s8(v0_4, 1)))
        
        if (i_4 != arg2)
            goto label_e37048
    else
        i_4 = 0
        x9 = 0
    label_e37048:
        int64_t i_3 = arg2 - i_4
        void* x8_1 = &arg1[i_4]
        int64_t i_1
        
        do
            uint32_t x11_1 = zx.d(*x8_1)
            x8_1 += 1
            i_1 = i_3
            i_3 -= 1
            x9 |= x11_1
        while (i_1 != 1)

return zx.q(((x9 - 1) & not.d(x9)) u>> 7) & 1
