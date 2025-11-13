// 函数: _Z16WrapperDrawFancyRK7XStringRK4Mat45RectFPK15FancyStringDatab10ColorRgbaIS8_PfPi
// 地址: 0xf6e848
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v14
int64_t var_a0 = v14
int64_t v13
int64_t var_90 = v13
int64_t v12
int64_t var_88 = v12
void* x26

x26 = arg6 == 0 ? arg3 : arg6

if (arg7 != 0)
    *arg7 = 0

if (arg8 != 0)
    *arg8 = 0f

void* var_170 = XString::operator char const*()
int64_t* result
FancyStringData* x1
int128_t v0
int128_t v1
int128_t v2
int128_t v3
result, x1, v0, v1, v2, v3 = XString::Length()
int32_t entry_v0
float entry_v2
v0.d = entry_v2 f- entry_v0
int32_t var_168 = result.d
int32_t var_164 = 0
int32_t var_154 = v0.d
v0.d = *(x26 + 0x2c)
float entry_v1
float var_148 = entry_v1
float var_144 = v0.d
v0.q = *(x26 + 0x54)
int64_t var_140 = v0.q
v0.d = *(x26 + 0x30)
int32_t var_158 = 0
int32_t var_15c = v0.d
int64_t* result_3 = **(x26 + 8)
int64_t* result_1 = *(x26 + 0x78)

if (result_1 != 0)
    result_1 = *result_1

v0.q = *(x26 + 0x80)
int32_t var_128 = v0.d
int32_t var_120 = *(x26 + 0x18)
v0.q = *(x26 + 0x20)
int64_t var_11c = v0.q
int32_t var_114 = *(x26 + 0x28)
int32_t var_110 = *(x26 + 0x4d)
char var_a4 = *(x26 + 0x8c)
int64_t var_100 = arg3
int32_t var_10c = arg5.d
int32_t var_108 = *(x26 + 0x1c)
int128_t var_c8 = *(arg2 + 0x30)
int128_t var_d8 = *(arg2 + 0x20)
int128_t var_e8 = *(arg2 + 0x10)
int128_t var_f8 = *arg2
int64_t var_b8 = 0
int32_t var_b0 = *(x26 + 0x70)
char x8_7 = *(x26 + 0x74)
int32_t var_a8 = *(x26 + 0x88)

if (result.d s>= 1)
    v0.d = float.s(0x3c23d70a)
    int32_t x22_1 = 0
    int32_t __saved_x0_1 = -1
    float v11 = fconvert.s(0.5f)
    float entry_v3
    float v9 = entry_v3 f+ v0.d
    void* var_98_1 = &var_b8:4
    
    do
        v12.d = var_144
        v13 = var_b8
        int32_t x27_1 = var_108
        bool var_174 = false
        int32_t var_160_1 = 0
        int32_t var_14c = entry_v0
        char var_150_1 = 0
        float var_178 = 0f
        float var_17c
        int128_t v1_1
        result, x1, v0, v1_1 = WrapperLine(&var_170, x1, &var_174, &var_178, &var_17c)
        
        if (arg7 != 0)
            v0.d = *arg7
            v1_1.d = var_17c
            
            if (v0.d f> v1_1.d)
                v0.d = v0.d
            else
                v0.d = v1_1.d
            
            *arg7 = v0.d
        
        if (arg8 != 0)
            *arg8 += 1
        
        if ((result.d & 1) != 0)
            break
        
        if ((arg4.d & 1) != 0)
            var_144 = v12.d
            var_b8 = v13
            result_3.o = result_3.o
            var_15c.q = var_15c.q
            var_164 = x22_1
            var_108 = x27_1
            char var_150_2 = 1
            
            if (zx.d(x8_7) == 0)
                if (zx.d(*(var_170 + sx.q(x22_1))) == 0x7b)
                    do
                        int32_t var_180
                        FancyStringData* x0_3
                        x0_3, x1, v0, v1_1 = WrapperGetNextEscape(&var_170, &var_180)
                        
                        if (x0_3 != 0)
                            if (*(x0_3 + 0x1c) != 0)
                                if (zx.d(*(x0_3 + 0x40)) == 0)
                                    int32_t x24_2 = var_180
                                    FancyStringData* x2_2
                                    x1, x2_2, v0, v1_1 = WrapperEscapeGetWidth(&var_170, x0_3)
                                    v1_1.d = var_160_1
                                    
                                    if (v1_1.d f== 0f)
                                        x1, v0, v1_1 = WrapperDoEscape(&var_170, x0_3, x2_2, v0.d)
                                        var_164 += x24_2
                                    else
                                        v1_1.d = v0.d f+ v1_1.d
                                        
                                        if (not(v1_1.d f> var_154))
                                            x1, v0, v1_1 =
                                                WrapperDoEscape(&var_170, x0_3, x2_2, v0.d)
                                            var_164 += x24_2
                                else
                                    var_174 = true
                            
                            break
                    while (zx.d(*(var_170 + sx.q(var_164))) == 0x7b)
                
                x27_1 = var_108
            
            void* x8_18
            
            if (x27_1 u> 9)
            label_f6eb00:
                v0.d = var_14c
                v1_1.d = var_b8.d
                x8_18 = var_98_1
                v1_1.d = v1_1.d f+ v0.d
                
                if (__saved_x0_1 s>= 0)
                    v0.d = v1_1.d
                else
                    v0.d = v0.d
            else
                int32_t x8_17 = 1 << x27_1
                
                if ((x8_17 & 0x124) != 0)
                    v0.d = var_154
                    v1_1.d = var_160_1
                    x8_18 = &var_14c
                    v0.d = v0.d f- v1_1.d
                    v0.d = vmaxnm_f32(v0.d, 0f)
                    v0.d = v0.d f* v11
                else
                    if ((x8_17 & 0x248) == 0)
                        goto label_f6eb00
                    
                    v0.d = var_154
                    v1_1.d = var_160_1
                    x8_18 = &var_14c
                    v0.d = v0.d f- v1_1.d
            
            v1_1.d = *x8_18
            v0.d = v1_1.d f+ v0.d
            int32_t var_160_2 = 0
            var_14c = v0.d
            x1, v0, v1_1 = WrapperLine(&var_170, x1, &var_174, &var_178, nullptr)
        
        result = result_1
        v12.d = var_15c
        v13.d = var_158
        
        if (result == 0)
            int64_t* result_2 = result_3
            int64_t* x9_2
            
            if (result_2 == 0)
                result, x1, v0, v1_1 = AssetPtrGetNull(0x12)
                result_2 = result
                x9_2 = *result_2
                
                if (x9_2 == 0)
                    result, x1, v0, v1_1 = AssetCatalogLoadAsset(result_2, false, true)
                    x9_2 = *result_2
            else
                x9_2 = *result_2
                
                if (x9_2 == 0)
                    result, x1, v0, v1_1 = AssetCatalogLoadAsset(result_2, false, true)
                    x9_2 = *result_2
            
            int32_t x8_19 = *(result_2 + 0x24)
            *(result_2 + 0x24) = x8_19 + 1
            int32_t* x9_3 = *x9_2
            int32_t x10_2 = x9_3[3]
            
            if (x10_2 == 0)
                v0.d = *x9_3
                v1_1.d = *(x26 + 0x2c)
                v0.d = float.s(v0.d)
                v1_1.d = v1_1.d f* v0.d
                v0 = v1_1
            else
                v1_1.d = *(x26 + 0x2c)
                v0.d = var_144
                
                if (not(v1_1.d f== v0.d))
                    if (v0.d f<= v11)
                        v0.d = v1_1.d f* v0.d
                    else if (v1_1.d f> v0.d)
                        v0.d = v1_1.d
                    else
                        v0.d = v0.d
                
                v1_1.d = x9_3[2]
                v1_1.d = float.s(v1_1.d)
                v1_1.d = v0.d f* v1_1.d
                v0.d = v0.d f* float.s(x10_2)
            
            *(result_2 + 0x24) = x8_19
        else
            v1_1.d = *(x26 + 0x2c)
            v0.d = var_128
            
            if (v1_1.d f> var_144)
                v14.d = v1_1.d
            else
                v14.d = var_144
            
            int32_t v0_1
            result, x1, v0_1, v1_1 = FontGetLineSpacing(result, v0.d)
            v1_1.d = v0_1 f* v14.d
            v0 = v1_1
        
        void* x8_20 = var_170
        int64_t x9_4 = sx.q(var_164)
        v0.d = v12.d f+ v13.d f+ v0.d
        float v2_1
        
        if (zx.d(*(x8_20 + x9_4)) != 0xd)
            v1_1.d = var_148
            __saved_x0_1 += 1
            v2_1 = v0.d f+ var_178
        else
            v2_1 = var_148
            x9_4 = zx.q(x9_4.d + 1)
            v1_1.d = v12.d f+ v1_1.d
            var_164 = x9_4.d
            __saved_x0_1 = -1
        
        v1_1.d = v1_1.d f+ v2_1
        v0.d = v0.d f+ v1_1.d
        var_148 = v1_1.d
        
        if (v0.d f> v9)
            break
        
        if (zx.d(var_174) == 0)
            int64_t x10_5 = sx.q(var_168)
            
            if (x9_4.d s< x10_5.d)
                int64_t x11_2 = sx.q(x9_4.d)
                int32_t x9_5 = x9_4.d + 1
                
                while (zx.d(*(x8_20 + x11_2)) == 0x20)
                    x11_2 += 1
                    var_164 = x9_5
                    x9_5 += 1
                    
                    if (x11_2 s>= x10_5)
                        break
        
        x22_1 = var_164
    while (x22_1 s< var_168)

v0.d = var_148
return result
