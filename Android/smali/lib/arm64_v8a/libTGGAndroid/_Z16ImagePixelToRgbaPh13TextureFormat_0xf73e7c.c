// 函数: _Z16ImagePixelToRgbaPh13TextureFormat
// 地址: 0xf73e7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(arg2 - 1)
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5

if (x8.d u<= 0x73)
    switch (x8)
        case 0
            return (0xffffff & ((0xff00ffff & zx.q(_byteswap(zx.d(*(arg1 + 1)) << 0x10)))
                | zx.q(zx.d(*arg1) << 0x10))) | zx.q(zx.d(arg1[3]) << 0x18)
        case 1, 2
            return zx.q(*arg1)
        case 3, 4
            return zx.q(_byteswap(zx.d(*(arg1 + 1)) << 0x10)) | zx.q(zx.d(*arg1) << 0x10)
                | 0xff000000
        case 5
            uint32_t x8_17 = zx.d(arg1[1])
            uint32_t x9_5 = zx.d(*arg1)
            int32_t x8_21 = (0xffff00ff & ((0xffffff
                & ((0xf & zx.d(x8_17.b)) | zx.d(((0xff & x8_17) << 4).b)))
                | ((zx.d(x8_17.b) & 0xf0) | zx.d((x8_17 u>> 4).b)) << 0x18))
                | ((zx.d(x9_5.b) & 0xf0) | zx.d((x9_5 u>> 4).b)) << 8
            return (0xff00ffff & zx.q(x8_21))
                | zx.q(((0xf & zx.d(x9_5.b)) | zx.d(((0xff & x9_5) << 4).b)) << 0x10)
        case 6
            uint32_t x8_23 = zx.d(*arg1)
            int32_t x8_24 = (sx.d(x8_23.w) & 0xff000000)
                | ((zx.d((x8_23 u>> 2).b) & 7) | zx.d(((x8_23 & 0x1f) << 3).b)) << 0x10
                | (0xffff00ff & ((x8_23 u>> 7 & 0xf8) | (x8_23 & 0x7000) u>> 0xc))
                | ((zx.d((x8_23 u>> 2).b) & 0xf8) | zx.d(((x8_23 & 0x380) u>> 7).b)) << 8
            return zx.q(x8_24)
        case 7
            uint32_t x8_25 = zx.d(*arg1)
            uint32_t x9_14 = (zx.d((x8_25 u>> 7).b) & 0xf8) | zx.d(((x8_25 & 0x7000) u>> 0xc).b)
                | zx.d((((zx.d((x8_25 u>> 2).b) & 0xf8) | zx.d(((x8_25 & 0x380) u>> 7).b)) << 8).w)
                | ((zx.d((x8_25 u>> 2).w) & 7) | zx.d(((0xffff & x8_25) << 3).w)) << 0x10
            return zx.q(x9_14) | 0xff000000
        case 8
            uint32_t x8_27 = zx.d(*arg1)
            uint32_t x8_30 = (zx.d((x8_27 u>> 1).w) & 0x200) | (0xbc00 & zx.d((x8_27 << 5).w))
                | (zx.d((x8_27 u>> 8).w) & 0xf8) | zx.d((x8_27 u>> 0xd).w)
                | ((7 & zx.d((x8_27 u>> 2).w)) | zx.d(((0xffff & x8_27) << 3).w)) << 0x10
            return zx.q(x8_30) | 0xff000000
        case 9
            return 0xffffff | zx.q(zx.d(*arg1) << 0x18)
        case 0xa, 0x13
            return zx.q(*arg1) | zx.q(zx.d(arg1[2]) << 0x10) | 0xff000000
        case 0x12
            return (0xffffff & ((0xff00ffff & zx.q(*(arg1 + 1))) | zx.q(zx.d(arg1[3]) << 0x10)))
                | zx.q(zx.d(*arg1) << 0x18)
        case 0x73
            v0.q = *arg1
            v3.d = *(arg1 + 8)
            v4.d = *(arg1 + 0xc)
            v5.d = 0x437f0000
            v5:4.d = 0x437f0000
            int128_t v0_4 = vmul_f32(v0, v5, 0)
            v1.d = 0x3f000000
            v1:4.d = 0x3f000000
            v2.d = 0xbf000000
            v2:4.d = 0xbf000000
            int128_t v1_1 = vbsl_s8(vcltz_f32(v0_4, 0), v2, v1)
            int128_t v5_1
            v5_1.d = float.s(0x437f0000)
            v3.d = v3.d f* v5_1.d
            v2.d = fconvert.s(0.5f)
            v4.d = v4.d f* v5_1.d
            v5_1.d = fconvert.s(-0.5f)
            int128_t v0_5 = vadd_f32(v0_4, v1_1)
            
            if (v3.d f< 0f)
                v1_1.d = v5_1.d
            else
                v1_1.d = v2.d
            
            v1_1.d = v3.d f+ v1_1.d
            v3.q = 0x1000000018
            int128_t v0_6 = vcvt_s32_f32(v0_5)
            
            if (v4.d f< 0f)
                v2.d = v5_1.d
            else
                v2.d = v2.d
            
            uint64_t v0_7 = vshl_u32(v0_6, v3)
            char temp0_5 = vcvts_s32_f32(v1_1.d)
            v1_1.d = v4.d f+ v2.d
            return (zx.q(v0_7:4.d) & 0xff0000) | zx.q(v0_7.d) | zx.q(vcvts_s32_f32(v1_1.d))
                | zx.q(zx.d(temp0_5) << 8)
else if (arg2 == 0x3eb)
    v2.q = *(arg1 + 4)
    v0.d = *arg1
    int128_t v6
    v6.d = 0x437f0000
    v6:4.d = 0x437f0000
    int128_t v2_1 = vmul_f32(v2, v6, 0)
    v3.d = 0x3f000000
    v3:4.d = 0x3f000000
    v4.d = 0xbf000000
    v4:4.d = 0xbf000000
    v5.d = *(arg1 + 0xc)
    int128_t v3_1 = vbsl_s8(vcltz_f32(v2_1, 0), v4, v3)
    int128_t v6_1
    v6_1.d = float.s(0x437f0000)
    v0.d = v0.d f* v6_1.d
    v1.d = fconvert.s(0.5f)
    v4.d = fconvert.s(-0.5f)
    int128_t v2_2 = vadd_f32(v2_1, v3_1)
    v3_1.q = 0x1000000008
    v5.d = v5.d f* v6_1.d
    
    if (v0.d f< 0f)
        v6_1.d = v4.d
    else
        v6_1.d = v1.d
    
    v0.d = v0.d f+ v6_1.d
    char temp0_2 = vcvts_s32_f32(v0.d)
    v6_1.q = 0xff00000000ff00
    int64_t v0_3 = vshl_u32(vcvt_s32_f32(v2_2), v3_1) & v6_1.q
    
    if (v5.d f< 0f)
        v1.d = v4.d
    else
        v1.d = v1.d
    
    v1.d = v5.d f+ v1.d
    return zx.q(v0_3.d) | zx.q(temp0_2) | zx.q(v0_3:4.d) | zx.q(vcvts_s32_f32(v1.d) << 0x18)
pthread_kill(pthread_self(), 6)
int64_t x0_12
uint8_t* x1
int64_t x2
x0_12, x1, x2 = XNoReturn()
return ImageRgbaToPixel(x0_12, x1, x2) __tailcall
