// 函数: _Z8DrawLandRK9MapParamsR7MapData
// 地址: 0xc1e60c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t entry_v15
int64_t var_a0 = entry_v15.q
int64_t v14
int64_t var_98 = v14
int64_t v13
int64_t var_90 = v13
int64_t v12
int64_t var_88 = v12
int128_t entry_v11
int64_t var_80 = entry_v11.q
int64_t v10
int64_t var_78 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
float cosp
float sinp
int128_t v0_1
int128_t v1_1
v0_1, v1_1 = sincosf(&sinp, &cosp, RandomUnit(arg2) * *TWO_PI)
v0_1.d = cosp
v1_1.d = sinp
int64_t result
int128_t v0_2
int128_t v2
int128_t v3
int128_t v4
int128_t v5
int128_t v6
int128_t v7
int128_t v16
result, v0_2, v2, v3, v4, v5, v6, v7, v16 = RandomUnit(arg2)
int64_t var_110 = -1
int64_t var_108 = -1

if (*(arg2 + 0xeffcc) s>= 1)
    int128_t v1_2
    v1_2:4.d = v1_1.d
    v0_2.d = v1_2.d f* v0_2.d
    v0_2:4.d = v1_2:4.d f* v0_2.d
    v1_2.d = 0x43480000
    v1_2:4.d = 0x43480000
    v2.d = 0x44000000
    v2:4.d = 0x44000000
    int64_t i = 0
    void* __offset(MapData, 0x10) x20_1 = arg2 + 0x10
    v3:4.d = v1_1.d
    v13.d = fconvert.s(0.5f)
    v14.d = fconvert.s(-0.5f)
    void* __offset(MapData, 0x8ffe4) x26_1 = arg2 + 0x8ffe4
    entry_v15 = vadd_f32(vmul_f32(v0_2, v1_2, 0), v2)
    entry_v11.d = 0x44800000
    entry_v11:4.d = 0x44800000
    int128_t var_260_1 = v3
    int32_t var_238
    int32_t* var_288_1 = &var_238
    
    do
        int64_t x8_2 = sx.q(*x26_1)
        v10.d = *(arg2 + x8_2 * 0xc + 0x18)
        int64_t var_130
        int32_t x8_4
        int128_t v0_3
        
        if (v10.d f<= 0f)
            x8_4 = 0
        else
            v0_3.q = *(arg2 + x8_2 * 0xc + 0x10)
            x8_4 = 1
            var_130 = vmul_f32(v0_3, entry_v11, 0).q
        
        int64_t x9_3 = sx.q(*(x26_1 + 4))
        v9.d = *(arg2 + x9_3 * 0xc + 0x18)
        
        if (not(v9.d f<= 0f))
            v0_3.q = *(arg2 + x9_3 * 0xc + 0x10)
            uint64_t x9_5 = zx.q(x8_4)
            x8_4 += 1
            *((-9 & &var_130) | (1 & x9_5) << 3) = vmul_f32(v0_3, entry_v11, 0).q
        
        int64_t x9_6 = sx.q(*(x26_1 + 8))
        v8.d = *(arg2 + x9_6 * 0xc + 0x18)
        
        if (not(v8.d f<= 0f))
            v0_3.q = *(arg2 + x9_6 * 0xc + 0x10)
            (&var_130)[zx.q(x8_4)] = vmul_f32(v0_3, entry_v11, 0).q
        
        int64_t var_1b0
        
        if (v8.d f<= 0f || x8_4 != 2)
            var_1b0 = -0x788ac700788ac8
            int32_t var_1a8_1 = 0xff877538
            result, v0_3, v1_2, v2, v3, v4, v5, v6, v7, v16 =
                UpdateBestColors(x20_1, &var_110, arg2 + 0x215fd8, x26_1, &var_1b0)
        else
            v0_3.q = var_130
            v2.d = float.s(0x3a800000)
            v1_2.d = v2.d f* v0_3:4.d
            v3.d = float.s(0x3f79999a)
            
            if (not(v1_2.d f> v3.d))
                v2.d = v2.d f* v0_3.d
                v3.d = float.s(0x3ccccccd)
                
                if (not(v2.d f< v3.d))
                    v3.d = float.s(0x3ffccccd)
                    
                    if (not(v2.d f> v3.d))
                        v2.d = float.s(0x3ccccccd)
                        
                        if (not(v1_2.d f< v2.d))
                            int32_t var_124
                            v1_2.d = var_124
                            v2.d = float.s(0x3a800000)
                            v1_2.d = v1_2.d f* v2.d
                            v3.d = float.s(0x3f79999a)
                            
                            if (not(v1_2.d f> v3.d))
                                int32_t var_128
                                v3.d = var_128
                                v2.d = v3.d f* v2.d
                                v3.d = float.s(0x3ccccccd)
                                
                                if (not(v2.d f< v3.d))
                                    v3.d = float.s(0x3ffccccd)
                                    
                                    if (not(v2.d f> v3.d))
                                        v2.d = float.s(0x3ccccccd)
                                        
                                        if (not(v1_2.d f< v2.d))
                                            int32_t var_11c
                                            v1_2.d = var_11c
                                            v2.d = float.s(0x3a800000)
                                            v1_2.d = v1_2.d f* v2.d
                                            v3.d = float.s(0x3f79999a)
                                            
                                            if (not(v1_2.d f> v3.d))
                                                int32_t var_120
                                                v3.d = var_120
                                                v2.d = v3.d f* v2.d
                                                v3.d = float.s(0x3ccccccd)
                                                
                                                if (not(v2.d f< v3.d))
                                                    v3.d = float.s(0x3ffccccd)
                                                    
                                                    if (not(v2.d f> v3.d))
                                                        v2.d = float.s(0x3ccccccd)
                                                        
                                                        if (not(v1_2.d f< v2.d))
                                                            v1_2.d = float.s(0x42480000)
                                                            v2.d = float.s(0x42c80000)
                                                            void* x8_6 = &data_11580f0
                                                                + sx.q(*(arg1 + 0x10)) * 0x98
                                                            v4 = *(x8_6 - 0x64)
                                                            v5 = *(x8_6 - 0x54)
                                                            int128_t v0_5 = vmul_f32(var_260_1, 
                                                                vsub_f32(v0_3, entry_v15), 0)
                                                            v0_5.d = v0_5.d f+ v0_5:4.d
                                                            v0_5.d = v0_5.d f+ v1_2.d
                                                            int128_t var_190_1 = v4
                                                            int128_t var_180_1 = v5
                                                            var_1b0.o = *(x8_6 - 0x84)
                                                            int128_t var_1a0_1 = *(x8_6 - 0x74)
                                                            int128_t var_170_1 = *(x8_6 - 0x44)
                                                            int128_t var_160_1 = *(x8_6 - 0x34)
                                                            v0_5.d = v0_5.d f/ v2.d
                                                            int128_t var_150_1 = *(x8_6 - 0x24)
                                                            int128_t var_140_1 = *(x8_6 - 0x14)
                                                            int64_t x8_7 = sx.q(*(arg1 + 0x14))
                                                            v1_2.d = fconvert.s(1f)
                                                            v1_2.d = vmin_f32(v0_5.d, v1_2.d)
                                                            bool cond:1_1 = v0_5.d f< 0f
                                                            v2 = *(x8_7 * 0x98 + &data_1158078:4)
                                                            v3 = *(x8_7 * 0x98 + 0x115809c)
                                                            v4 = *(x8_7 * 0x98 + &data_1158088:4)
                                                            v5 = *(x8_7 * 0x98 + 0x11580bc)
                                                            int128_t var_230 =
                                                                *(x8_7 * 0x98 + 0x115806c)
                                                            int128_t var_220_1 = v2
                                                            int128_t var_210_1 = v4
                                                            int128_t var_200_1 = v3
                                                            int128_t var_1f0_1 =
                                                                *(x8_7 * 0x98 + &data_11580a8:4)
                                                            v0_5.d = 0f
                                                            
                                                            if (cond:1_1)
                                                                v12.d = v0_5.d
                                                            else
                                                                v12.d = v1_2.d
                                                            
                                                            int128_t var_1c0_1 =
                                                                *(x8_7 * 0x98 + 0x11580dc)
                                                            int128_t var_1e0_1 = v5
                                                            int128_t var_1d0_1 =
                                                                *(x8_7 * 0x98 + 0x11580cc)
                                                            int64_t x0_5 =
                                                                ColorRampLookup(&var_1b0, v10.d)
                                                            char x27_1 = x0_5.b
                                                            int128_t var_270
                                                            var_270.q = x20_1
                                                            uint8_t x20_2 = (x0_5 u>> 8).b
                                                            uint8_t x25_1 = (x0_5 u>> 0x10).b
                                                            uint8_t x21_1 = (x0_5 u>> 0x18).b
                                                            int64_t x0_7 =
                                                                ColorRampLookup(&var_230, v10.d)
                                                            float v0_8 = v10.d f* v12.d
                                                            float v1_3 = v0_8 *
                                                                float.s((x0_7.d & 0xff) - zx.d(x27_1))
                                                            float v2_1 = v0_8 * float.s((
                                                                x0_7.d u>> 8 & 0xff) - zx.d(x20_2))
                                                            float v3_1 = v0_8 * float.s((
                                                                x0_7.d u>> 0x10 & 0xff) - zx.d(x25_1))
                                                            v0_8 = v0_8 * float.s(((x0_7 u>> 0x18).d
                                                                & 0xff) - zx.d(x21_1))
                                                            float v4_1
                                                            
                                                            if (v1_3 < 0f)
                                                                v4_1 = v14.d
                                                            else
                                                                v4_1 = v13.d
                                                            
                                                            char temp0_2 =
                                                                vcvts_s32_f32(v1_3 + v4_1)
                                                            
                                                            if (v2_1 < 0f)
                                                                v1_3 = v14.d
                                                            else
                                                                v1_3 = v13.d
                                                            
                                                            char temp0_3 =
                                                                vcvts_s32_f32(v2_1 + v1_3)
                                                            
                                                            if (v3_1 < 0f)
                                                                v1_3 = v14.d
                                                            else
                                                                v1_3 = v13.d
                                                            
                                                            if (v0_8 < 0f)
                                                                v2_1 = v14.d
                                                            else
                                                                v2_1 = v13.d
                                                            
                                                            int32_t var_240 = (0xff00ffff & ((
                                                                0xffff00ff & ((0xffffff
                                                                & zx.d(x27_1 + temp0_2)) |
                                                                zx.d(x21_1 + vcvts_s32_f32(v0_8 + v2_1))
                                                                << 0x18))
                                                                | zx.d(x20_2 + temp0_3) << 8)) |
                                                                zx.d(x25_1 + vcvts_s32_f32(v3_1 + v1_3))
                                                                << 0x10
                                                            int64_t x0_9 =
                                                                ColorRampLookup(&var_1b0, v9.d)
                                                            char x27_2 = x0_9.b
                                                            uint8_t x20_3 = (x0_9 u>> 8).b
                                                            uint8_t x25_2 = (x0_9 u>> 0x10).b
                                                            uint8_t x21_2 = (x0_9 u>> 0x18).b
                                                            int64_t x0_11 =
                                                                ColorRampLookup(&var_230, v9.d)
                                                            float v0_11 = v9.d f* v12.d
                                                            float v1_4 = v0_11 *
                                                                float.s((x0_11.d & 0xff) - zx.d(x27_2))
                                                            float v2_2 = v0_11 * float.s((
                                                                x0_11.d u>> 8 & 0xff) - zx.d(x20_3))
                                                            float v3_2 = v0_11 * float.s((
                                                                x0_11.d u>> 0x10 & 0xff) - zx.d(x25_2))
                                                            v0_11 = v0_11 * float.s((
                                                                (x0_11 u>> 0x18).d & 0xff)
                                                                - zx.d(x21_2))
                                                            float v4_2
                                                            
                                                            if (v1_4 < 0f)
                                                                v4_2 = v14.d
                                                            else
                                                                v4_2 = v13.d
                                                            
                                                            char temp0_6 =
                                                                vcvts_s32_f32(v1_4 + v4_2)
                                                            
                                                            if (v2_2 < 0f)
                                                                v1_4 = v14.d
                                                            else
                                                                v1_4 = v13.d
                                                            
                                                            char temp0_7 =
                                                                vcvts_s32_f32(v2_2 + v1_4)
                                                            
                                                            if (v3_2 < 0f)
                                                                v1_4 = v14.d
                                                            else
                                                                v1_4 = v13.d
                                                            
                                                            if (v0_11 < 0f)
                                                                v2_2 = v14.d
                                                            else
                                                                v2_2 = v13.d
                                                            
                                                            int32_t var_23c_1 = (0xff00ffff & ((
                                                                0xffff00ff & ((0xffffff
                                                                & zx.d(x27_2 + temp0_6)) | zx.d(x21_2
                                                                + vcvts_s32_f32(v0_11 + v2_2))
                                                                << 0x18))
                                                                | zx.d(x20_3 + temp0_7) << 8)) |
                                                                zx.d(x25_2 + vcvts_s32_f32(v3_2 + v1_4))
                                                                << 0x10
                                                            int64_t x0_13 =
                                                                ColorRampLookup(&var_1b0, v8.d)
                                                            char x27_3 = x0_13.b
                                                            uint8_t x20_4 = (x0_13 u>> 8).b
                                                            uint8_t x25_3 = (x0_13 u>> 0x10).b
                                                            uint8_t x21_3 = (x0_13 u>> 0x18).b
                                                            int64_t x0_15 =
                                                                ColorRampLookup(&var_230, v8.d)
                                                            float v0_14 = v8.d f* v12.d
                                                            float v1_5 = v0_14 *
                                                                float.s((x0_15.d & 0xff) - zx.d(x27_3))
                                                            float v2_3 = v0_14 * float.s((
                                                                x0_15.d u>> 8 & 0xff) - zx.d(x20_4))
                                                            float v3_3 = v0_14 * float.s((
                                                                x0_15.d u>> 0x10 & 0xff) - zx.d(x25_3))
                                                            v0_14 = v0_14 * float.s((
                                                                (x0_15 u>> 0x18).d & 0xff)
                                                                - zx.d(x21_3))
                                                            float v4_3
                                                            
                                                            if (v1_5 < 0f)
                                                                v4_3 = v14.d
                                                            else
                                                                v4_3 = v13.d
                                                            
                                                            char temp0_10 =
                                                                vcvts_s32_f32(v1_5 + v4_3)
                                                            
                                                            if (v2_3 < 0f)
                                                                v1_5 = v14.d
                                                            else
                                                                v1_5 = v13.d
                                                            
                                                            char temp0_11 =
                                                                vcvts_s32_f32(v2_3 + v1_5)
                                                            
                                                            if (v3_3 < 0f)
                                                                v1_5 = v14.d
                                                            else
                                                                v1_5 = v13.d
                                                            
                                                            if (v0_14 < 0f)
                                                                v2_3 = v14.d
                                                            else
                                                                v2_3 = v13.d
                                                            
                                                            var_238 = (0xff00ffff & ((0xffff00ff &
                                                                ((0xffffff & zx.d(x27_3 + temp0_10)) |
                                                                zx.d(x21_3
                                                                + vcvts_s32_f32(v0_14 + v2_3))
                                                                << 0x18))
                                                                | zx.d(x20_4 + temp0_11) << 8)) |
                                                                zx.d(x25_3 + vcvts_s32_f32(v3_3 + v1_5))
                                                                << 0x10
                                                            UpdateBestColors(var_270.q, &var_110, 
                                                                arg2 + 0x215fd8, x26_1, &var_240)
                                                            int64_t x8_33 = var_120.q
                                                            int128_t var_c0 = var_130.o
                                                            int64_t var_b0_1 = x8_33
                                                            int64_t var_a8_1 = x8_33
                                                            int128_t var_e0
                                                            __builtin_memcpy(&var_e0, 
                                                                "\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x"
                                                            "00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00"
                                                            "3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00"
                                                            "00\x00\x3f", 
                                                                0x20)
                                                            int64_t var_100 =
                                                                SpriteColorSet(&var_240, gRgbaINone)
                                                            int64_t var_f8_1 =
                                                                SpriteColorSet(&var_240 | 4, gRgbaINone)
                                                            SpriteColorSet(var_288_1, gRgbaINone)
                                                            x20_1 = var_270.q
                                                            int64_t var_f0_1 =
                                                                SpriteColorSet(var_288_1, gRgbaINone)
                                                            result, v0_3, v1_2, v2, v3, v4, v5, v6, 
                                                                v7, v16 = DrawQuadParams(
                                                                *TEXTURE_SYS_WHITE_PIXEL, &var_c0, 
                                                                &var_e0, &var_100, true, nullptr)
        i += 1
        x26_1 += 0xc
    while (i s< sx.q(*(arg2 + 0xeffcc)))

entry_v11.q = var_80
entry_v15.q = var_a0
return result
