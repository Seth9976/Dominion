// 函数: _ZNK5Botan4IDEA9decrypt_nEPKhPhm
// 地址: 0xd8ec60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg1 + 0x20)

if (x8 == *(arg1 + 0x28))
    uint8_t* x0_1
    uint64_t x1_1
    x0_1, x1_1 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::IDEA::key_schedule(x0_1, x1_1) __tailcall

int64_t entry_x3

if (entry_x3 != 0)
    int64_t x8_2 = 0
    int128_t v0
    v0.q = 0xffff0000ffff
    int128_t v2
    v2.d = 1
    v2:4.d = 1
    
    do
        int64_t x10_2 = x8_2 << 3
        void* x11_2 = &arg2[x10_2]
        uint32_t x13_2 = zx.d(*(x11_2 + 2))
        uint32_t x14_2 = zx.d(*(x11_2 + 4))
        uint32_t x11_3 = zx.d(*(x11_2 + 6))
        uint32_t x15_2 = _byteswap(zx.d(*x11_2)) u>> 0x10
        uint32_t x12_4 = _byteswap(x13_2) u>> 0x10
        uint32_t x13_4 = _byteswap(x14_2) u>> 0x10
        uint32_t x11_5 = _byteswap(x11_3) u>> 0x10
        
        for (int64_t i = 0xa; i != 0x6a; )
            int16_t* x16_2 = x8 + i
            uint32_t x4_2 = zx.d(x16_2[-5])
            int32_t x17_3 = x4_2 * (x15_2 & 0xffff)
            uint32_t x4_3 = zx.d(x16_2[-4]) + x12_4
            uint32_t x12_5 = zx.d(x16_2[-3]) + x13_4
            int128_t v3
            v3.d = float.s(zx.d(x16_2[-1]))
            uint32_t x5_3 = x17_3 u>> 0x10
            v3:4.d = x11_5
            int32_t x13_6 = x17_3 - x5_3
            int32_t x11_7 = ((x17_3 - 1) & not.d(x17_3)) s>> 0x1f
            int32_t x13_7
            
            if (x5_3 u> zx.d(x17_3.w))
                x13_7 = x13_6 + 1
            else
                x13_7 = x13_6
            
            int32_t x11_9 = ((1 - (x15_2 + x4_2)) & x11_7) | (x13_7 & not.d(x11_7))
            int128_t v5
            v5.d = float.s(x11_9 ^ x12_5)
            v5:4.d = zx.d(x16_2[-2])
            int128_t v4_3 = vmul_s32(v5 & v0, v3 & v0)
            int128_t v3_2 = v3 + v5
            int128_t v6_2
            v6_2.d = v4_3.d u>> 0x10
            v6_2:4.d = v4_3:4.d u>> 0x10
            v5.d = ((v4_3 + sx.o(-1)) & not.o(v4_3)).d s>> 0x1f
            v5:4.d s>>= 0x1f
            v3 = vbsl_s8(v5, v2 - v3_2, v4_3 - v6_2 - vcgt_u32(v6_2, v4_3 & v0))
            uint32_t x16_3 = zx.d(*x16_2)
            int32_t x13_10 = v3:4.d
            int32_t x15_5 = v3.d
            int32_t x17_5 = x15_5 + (x13_10 ^ x4_3)
            int32_t x16_4 = (x17_5 & 0xffff) * x16_3
            uint32_t x6_3 = x16_4 u>> 0x10
            int32_t x7_3 = x16_4 - x6_3
            int32_t x16_5 = ((x16_4 - 1) & not.d(x16_4)) s>> 0x1f
            int32_t x5_7
            
            if (x6_3 u> zx.d(x16_4.w))
                x5_7 = x7_3 + 1
            else
                x5_7 = x7_3
            
            int32_t x16_7 = ((1 - (x16_3 + x17_5)) & x16_5) | (x5_7 & not.d(x16_5))
            i += 0xc
            int32_t x17_8 = x16_7 + x15_5
            x15_2 = x16_7 ^ x11_9
            x12_4 = x16_7 ^ x12_5
            x11_5 = x17_8 ^ x13_10
            x13_4 = x17_8 ^ x4_3
        
        uint32_t x14_4 = zx.d(*(x8 + 0x60))
        uint32_t x5_9 = zx.d(*(x8 + 0x66))
        int32_t x16_9 = x14_4 * (x15_2 & 0xffff)
        uint32_t x12_6 = zx.d(*(x8 + 0x64)) + x12_4
        int32_t x15_7 = x5_9 * (x11_5 & 0xffff)
        uint32_t x4_5 = x16_9 u>> 0x10
        int32_t x16_10 = x16_9 - x4_5
        uint32_t x4_6 = x15_7 u>> 0x10
        int32_t temp0_5 = _byteswap(zx.d(*(x8 + 0x62)) + x13_4)
        int32_t temp0_6 = _byteswap(x12_6)
        int64_t x10_3 = arg3 + x10_2
        int32_t x16_11
        
        if (x4_5 u> zx.d(x16_9.w))
            x16_11 = x16_10 + 1
        else
            x16_11 = x16_10
        
        int32_t x15_8 = x15_7 - x4_6
        int32_t x17_12 = ((x16_9 - 1) & not.d(x16_9)) s>> 0x1f
        int32_t x4_7 = ((x15_7 - 1) & not.d(x15_7)) s>> 0x1f
        *(x10_3 + 2) = (temp0_5 u>> 0x10).w
        *(x10_3 + 4) = (temp0_6 u>> 0x10).w
        int32_t x14_7
        
        if (x4_6 u> zx.d(x15_7.w))
            x14_7 = x15_8 + 1
        else
            x14_7 = x15_8
        
        x8_2 += 1
        int32_t temp0_7 = _byteswap(((1 - (x15_2 + x14_4)) & x17_12) | (x16_11 & not.d(x17_12)))
        uint16_t x11_15 =
            (_byteswap(((1 - (x11_5 + x5_9)) & x4_7) | (x14_7 & not.d(x4_7))) u>> 0x10).w
        *x10_3 = (temp0_7 u>> 0x10).w
        *(x10_3 + 6) = x11_15
    while (x8_2 != entry_x3)

return arg2
