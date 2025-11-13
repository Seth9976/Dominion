// 函数: _ZNK5Botan4IDEA9encrypt_nEPKhPhm
// 地址: 0xd8e9fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_10
int64_t* sp = &var_10
int64_t lr
var_10 = lr
void* x8 = *(arg1 + 8)
uint8_t* result
uint64_t x1
int64_t x2
void* x3
int128_t v0
int128_t v2
int128_t v3
int128_t v5

if (x8 == *(arg1 + 0x10))
    result, x1, x2, x3, v0, v2, v3, v5 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
else
    result = arg2
    x1 = arg3
    int64_t entry_x3
    x2 = entry_x3
    x3 = x8
    void arg_0
    sp = &arg_0

int64_t entry_x19
sp[-2] = entry_x19

if (x2 != 0)
    int64_t x8_1 = 0
    v0.q = 0xffff0000ffff
    v2.d = 1
    v2:4.d = 1
    
    do
        int64_t x10_1 = x8_1 << 3
        void* x11_1 = &result[x10_1]
        uint32_t x13_1 = zx.d(*(x11_1 + 2))
        uint32_t x14_1 = zx.d(*(x11_1 + 4))
        uint32_t x11_2 = zx.d(*(x11_1 + 6))
        uint32_t x15_1 = _byteswap(zx.d(*x11_1)) u>> 0x10
        uint32_t x12_3 = _byteswap(x13_1) u>> 0x10
        uint32_t x13_3 = _byteswap(x14_1) u>> 0x10
        uint32_t x11_4 = _byteswap(x11_2) u>> 0x10
        
        for (int64_t i = 0xa; i != 0x6a; )
            int16_t* x16_1 = x3 + i
            uint32_t x4_1 = zx.d(x16_1[-5])
            int32_t x17_2 = x4_1 * (x15_1 & 0xffff)
            uint32_t x4_2 = zx.d(x16_1[-4]) + x12_3
            uint32_t x12_4 = zx.d(x16_1[-3]) + x13_3
            v3.d = float.s(zx.d(x16_1[-1]))
            uint32_t x5_2 = x17_2 u>> 0x10
            v3:4.d = x11_4
            int32_t x13_5 = x17_2 - x5_2
            int32_t x11_6 = ((x17_2 - 1) & not.d(x17_2)) s>> 0x1f
            int32_t x13_6
            
            if (x5_2 u> zx.d(x17_2.w))
                x13_6 = x13_5 + 1
            else
                x13_6 = x13_5
            
            int32_t x11_8 = ((1 - (x15_1 + x4_1)) & x11_6) | (x13_6 & not.d(x11_6))
            v5.d = float.s(x11_8 ^ x12_4)
            v5:4.d = zx.d(x16_1[-2])
            int128_t v4_2 = vmul_s32(v5 & v0, v3 & v0)
            int128_t v3_1 = v3 + v5
            int128_t v6_1
            v6_1.d = v4_2.d u>> 0x10
            v6_1:4.d = v4_2:4.d u>> 0x10
            v5.d = ((v4_2 + sx.o(-1)) & not.o(v4_2)).d s>> 0x1f
            v5:4.d s>>= 0x1f
            v3 = vbsl_s8(v5, v2 - v3_1, v4_2 - v6_1 - vcgt_u32(v6_1, v4_2 & v0))
            uint32_t x16_2 = zx.d(*x16_1)
            int32_t x13_9 = v3:4.d
            int32_t x15_4 = v3.d
            int32_t x17_4 = x15_4 + (x13_9 ^ x4_2)
            int32_t x16_3 = (x17_4 & 0xffff) * x16_2
            uint32_t x6_2 = x16_3 u>> 0x10
            int32_t x7_2 = x16_3 - x6_2
            int32_t x16_4 = ((x16_3 - 1) & not.d(x16_3)) s>> 0x1f
            int32_t x5_6
            
            if (x6_2 u> zx.d(x16_3.w))
                x5_6 = x7_2 + 1
            else
                x5_6 = x7_2
            
            int32_t x16_6 = ((1 - (x16_2 + x17_4)) & x16_4) | (x5_6 & not.d(x16_4))
            i += 0xc
            int32_t x17_7 = x16_6 + x15_4
            x15_1 = x16_6 ^ x11_8
            x12_3 = x16_6 ^ x12_4
            x11_4 = x17_7 ^ x13_9
            x13_3 = x17_7 ^ x4_2
        
        uint32_t x14_3 = zx.d(*(x3 + 0x60))
        uint32_t x5_8 = zx.d(*(x3 + 0x66))
        int32_t x16_8 = x14_3 * (x15_1 & 0xffff)
        uint32_t x12_5 = zx.d(*(x3 + 0x64)) + x12_3
        int32_t x15_6 = x5_8 * (x11_4 & 0xffff)
        uint32_t x4_4 = x16_8 u>> 0x10
        int32_t x16_9 = x16_8 - x4_4
        uint32_t x4_5 = x15_6 u>> 0x10
        int32_t temp0_5 = _byteswap(zx.d(*(x3 + 0x62)) + x13_3)
        int32_t temp0_6 = _byteswap(x12_5)
        int64_t x10_2 = x1 + x10_1
        int32_t x16_10
        
        if (x4_4 u> zx.d(x16_8.w))
            x16_10 = x16_9 + 1
        else
            x16_10 = x16_9
        
        int32_t x15_7 = x15_6 - x4_5
        int32_t x17_11 = ((x16_8 - 1) & not.d(x16_8)) s>> 0x1f
        int32_t x4_6 = ((x15_6 - 1) & not.d(x15_6)) s>> 0x1f
        *(x10_2 + 2) = (temp0_5 u>> 0x10).w
        *(x10_2 + 4) = (temp0_6 u>> 0x10).w
        int32_t x14_6
        
        if (x4_5 u> zx.d(x15_6.w))
            x14_6 = x15_7 + 1
        else
            x14_6 = x15_7
        
        x8_1 += 1
        int32_t temp0_7 = _byteswap(((1 - (x15_1 + x14_3)) & x17_11) | (x16_10 & not.d(x17_11)))
        uint16_t x11_14 =
            (_byteswap(((1 - (x11_4 + x5_8)) & x4_6) | (x14_6 & not.d(x4_6))) u>> 0x10).w
        *x10_2 = (temp0_7 u>> 0x10).w
        *(x10_2 + 6) = x11_14
    while (x8_1 != x2)

sp[-2]
return result
