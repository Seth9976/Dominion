// 函数: _Z15WrapperDrawWordR11WrapperDataRK7XString
// 地址: 0xf6df84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v12
int64_t var_80 = v12
int64_t v11
int64_t var_78 = v11
int64_t v10
int64_t var_70 = v10
int128_t entry_v9
int64_t var_68 = entry_v9.q
int128_t entry_v8
int64_t var_60 = entry_v8.q

if (zx.d(*(arg1 + 0x20)) != 0)
    uint16_t x11_1 = zx.w(*(arg1 + 0x65))
    uint16_t x9_1 = zx.w(*(arg1 + 0x64))
    uint16_t x13_1 = zx.w(*(arg1 + 0x66))
    uint16_t x12_1 = zx.w(*(arg1 + 0x67))
    int32_t x22_1 = (0xfe00ffff & ((
        (mulu.dp.d(zx.d(0x80 + x11_1 * zx.w(*(arg1 + 0x55))), 0x80808081) u>> 0x20).d << 1 & 0xff00)
        | (zx.d(0x80 + x9_1 * zx.w(*(arg1 + 0x54))) u/ 0xff)))
        | (0x1ff & (zx.d(0x80 + x13_1 * zx.w(*(arg1 + 0x56))) u/ 0xff)) << 0x10
        | (zx.d(0x80 + x12_1 * zx.w(*(arg1 + 0x57))) u/ 0xff) << 0x18
    int32_t var_144 = x22_1
    entry_v9.d = *(arg1 + 0x24) f+ *(arg1 + 0x10)
    entry_v8.d = *(arg1 + 0x28) f+ float.s(*(arg1 + 0x50))
    
    if (*(arg1 + 0x40) == 0)
        uint64_t x12_7 = (
            zx.q((mulu.dp.d(zx.d(0x80 + zx.w(*(arg1 + 0x5d)) * x11_1), 0x80808081) u>> 0x20).d << 1)
            & 0xff00) | zx.q(zx.d(0x80 + zx.w(*(arg1 + 0x5c)) * x9_1) u/ 0xff)
        uint64_t x9_6 = (
            zx.q((mulu.dp.d(zx.d(0x80 + zx.w(*(arg1 + 0x59)) * x11_1), 0x80808081) u>> 0x20).d << 1)
            & 0xff00) | zx.q(zx.d(0x80 + zx.w(*(arg1 + 0x58)) * x9_1) u/ 0xff)
        uint64_t x23_1 = zx.q((zx.d(0x80 + zx.w(*(arg1 + 0x5f)) * x12_1) u/ 0xff) << 0x18)
        int64_t x25_1 = (mulu.dp.d(zx.d(0x80 + zx.w(*(arg1 + 0x5e)) * x13_1), 0x80808081) u>> 0x17
            & 0x1ff0000) | x12_7
        int64_t x26_1 = (mulu.dp.d(zx.d(0x80 + zx.w(*(arg1 + 0x5a)) * x13_1), 0x80808081) u>> 0x17
            & 0x1ff0000) | x9_6
        uint64_t x27_1 = zx.q((zx.d(0x80 + zx.w(*(arg1 + 0x5b)) * x12_1) u/ 0xff) << 0x18)
        void* x0_14 = FontGetDef(*(arg1 + 0x38))
        v10.d = entry_v9.d f+ *(x0_14 + 0x14)
        v11.d = entry_v8.d f+ *(x0_14 + 0x18)
        char* x0_16 = XString::operator char const*()
        int32_t v0_6 = *(arg1 + 0x2c)
        entry_v8.d = *(arg1 + 0x30)
        XAsset* x21_2 = *(arg1 + 0x38)
        entry_v9.d = *(arg1 + 0x34)
        int32_t var_c0 = v0_6
        int64_t var_bc_1 = 0
        int32_t var_b4_1 = v10.d
        int32_t var_b0_1 = 0
        int32_t var_ac_1 = v0_6
        int32_t var_a8_1 = 0
        int32_t var_a4_1 = v11.d
        int64_t var_a0_1 = 0
        int32_t var_98_1 = 0x3f800000
        int64_t var_8c_1 = 0
        int64_t var_94_1 = 0
        int32_t var_84_1 = 0x3f800000
        Mat4Multiply(arg1 + 0x78, &var_c0)
        int32_t var_f8_1 = 0
        int32_t v2_5 = *V20
        int32_t v3_5 = *(V20 + 4)
        int32_t var_e8_1 = 0
        int64_t var_e0_1 = 0
        int32_t var_d8_1 = 0x3f800000
        int64_t var_cc_1 = 0
        int64_t var_d4_1 = 0
        int64_t var_100 = 0x3f800000
        int32_t var_f4_1 = v2_5
        int64_t var_f0_1 = 0x3f80000000000000
        int32_t var_e4_1 = v3_5
        int32_t var_c4_1 = 0x3f800000
        void var_140
        Mat4Multiply(&var_140, &var_100)
        int64_t var_150_1 = 0
        FontDrawMatrix(&var_c0, x21_2, zx.q(x22_1), x26_1 | x27_1, x25_1 | x23_1, x0_16, nullptr, 
            nullptr, entry_v8, entry_v9)
    else
        v10.d = *(arg1 + 0x4c)
        char* x0_1
        int64_t x5_1
        x0_1, x5_1 = XString::operator char const*()
        char* x1 = x0_1
        void* __offset(WrapperData, 0x78) x0_11
        int64_t x2_4
        XAsset* x3_4
        float v0_4
        
        if (v10.d f== 0f)
            *(arg1 + 0x48)
            *(arg1 + 0x2c)
            x2_4 = *(arg1 + 0x40)
            x3_4 = &var_144
            x0_11 = arg1 + 0x78
            v0_4 = entry_v9.d
        else
            *(arg1 + 0x48)
            *(arg1 + 0x2c)
            TTFontDrawString(arg1 + 0x78, x1, *(arg1 + 0x40), &var_144, 1, x5_1, 
                entry_v9.d f+ *(arg1 + 0x4c))
            char* x0_4
            int64_t x5_2
            x0_4, x5_2 = XString::operator char const*()
            *(arg1 + 0x48)
            *(arg1 + 0x2c)
            TTFontDrawString(arg1 + 0x78, x0_4, *(arg1 + 0x40), &var_144, 1, x5_2, 
                entry_v9.d f- *(arg1 + 0x4c))
            char* x0_7
            int64_t x5_3
            x0_7, x5_3 = XString::operator char const*()
            *(arg1 + 0x48)
            *(arg1 + 0x2c)
            TTFontDrawString(arg1 + 0x78, x0_7, *(arg1 + 0x40), &var_144, 1, x5_3, 
                entry_v9.d f- *(arg1 + 0x4c))
            char* x0_10
            x0_10, x5_1 = XString::operator char const*()
            *(arg1 + 0x48)
            *(arg1 + 0x2c)
            x2_4 = *(arg1 + 0x40)
            x1 = x0_10
            v0_4 = entry_v9.d f+ *(arg1 + 0x4c)
            x3_4 = &var_144
            x0_11 = arg1 + 0x78
        
        TTFontDrawString(x0_11, x1, x2_4, x3_4, 1, x5_1, v0_4)

entry_v9.q = var_68
entry_v8.q = var_60
