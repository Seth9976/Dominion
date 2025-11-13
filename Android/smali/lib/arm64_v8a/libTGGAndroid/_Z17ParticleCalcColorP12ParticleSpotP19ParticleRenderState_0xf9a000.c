// 函数: _Z17ParticleCalcColorP12ParticleSpotP19ParticleRenderState
// 地址: 0xf9a000
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v13
int64_t var_60 = v13
int64_t v12
int64_t var_58 = v12
void* x22 = *(arg1 + 0x30)
int64_t v11
v11.d = *(arg2 + 0x24)
int64_t v9
v9.d = *(arg2 + 0x28)
int64_t v8
v8.d = *(arg2 + 0x2c)
int64_t v10
v10.d = *(arg2 + 0x30)
int64_t* x21 = *(x22 + 0x300)
int32_t x8 = x21[0xa].d
int64_t v0
int64_t v1
int64_t v2
float v3

if (x8 s>= 1)
    int32_t x9_1 = *(arg1 + 0x40)
    int32_t x8_1
    
    x8_1 = x9_1 s> x8 ? x8 : x9_1
    
    int32_t x8_2
    
    x8_2 = x9_1 s< 0 ? 0 : x8_1
    
    int32_t* x8_3 = x21[9] + (sx.q(x8_2) << 4)
    v2.d = x8_3[1]
    v0.d = x8_3[2]
    
    if (v2.d f<= 0f)
        v2 = v0
        v3 = v0.d
        v1 = v0
    else
        v1.d = *x8_3
        int64_t v4
        v4.d = float.s(0x43b40000)
        bool cond:2_1 = v1.d f< v4.d
        v4.d = float.s(0x42700000)
        int64_t v5
        v5.d = 0f
        v4.d = v1.d f/ v4.d
        
        if (cond:2_1)
            v4.d = v4.d
        else
            v4.d = v5.d
        
        uint64_t x8_4 = zx.q(vcvts_s32_f32(v4.d))
        v5.d = float.s(x8_4.d)
        v5.d = v4.d f- v5.d
        v3 = fconvert.s(1f)
        v4.d = v2.d f* v5.d
        v1.d = v3 f- v2.d
        v4.d = v3 f- v4.d
        v1.d = v0.d f* v1.d
        v4.d = v0.d f* v4.d
        
        if (x8_4.d u> 4)
            v2 = v0
            v3 = v1.d
            v1 = v4
        else
            v5.d = v3 f- v5.d
            v2.d = v2.d f* v5.d
            v2.d = v3 f- v2.d
            v5.d = v0.d f* v2.d
            v2 = v0
            v3 = v5.d
            
            switch (x8_4)
                case 1
                    v2 = v4
                    v3 = v0.d
                case 2
                    v2 = v1
                    v3 = v0.d
                    v1 = v5
                case 3
                    v2 = v1
                    v3 = v4.d
                    v1 = v0
                case 4
                    v2 = v5
                    v3 = v1.d
                    v1 = v0
    
    v11.d = v11.d f* v2.d
    v9.d = v9.d f* v3
    v8.d = v8.d f* v1.d
else if (zx.d(*(arg2 + 0x64)) != 0)
    v11.d f- v9.d
    
    if (v11.d f< v9.d)
        v0.d = v11.d
    else
        v0.d = v9.d
    
    if (v11.d f> v9.d)
        v1.d = v11.d
    else
        v1.d = v9.d
    
    if (v0.d f< v8.d)
        v0.d = v0.d
    else
        v0.d = v8.d
    
    if (v1.d f> v8.d)
        v12.d = v1.d
    else
        v12.d = v8.d
    
    v0.d = v12.d f- v0.d
    v1.d = 0f
    v13.d = 0f
    
    if (not(v0.d f<= 0f))
        if (v11.d f>= v12.d)
            v1.d = v9.d f- v8.d
            v1.d = v1.d f/ v0.d
        else
            if (v9.d f>= v12.d)
                v1.d = v8.d f- v11.d
                v1.d = v1.d f/ v0.d
                v2.d = fconvert.s(2f)
            else
                v1.d = v11.d f- v9.d
                v1.d = v1.d f/ v0.d
                v2.d = fconvert.s(4f)
            
            v1.d = v1.d f+ v2.d
        
        v13.d = v0.d f/ v12.d
        v0.d = float.s(0x42700000)
        v0.d = v1.d f* v0.d
        v1.d = float.s(0x43b40000)
        v1.d = v0.d f+ v1.d
        
        if (v0.d f< 0f)
            v1.d = v1.d
        else
            v1.d = v0.d
    
    v0.d = *(arg2 + 0x34)
    v9.d = float.s(0x43b40000)
    v8.d = v1.d f+ v0.d
    v0, v1, v2 = fmodf(v8.d, v9.d)
    v1.d = v0.d f+ v9.d
    
    if (v8.d f< 0f)
        v2.d = v1.d
    else
        v2.d = v0.d
    
    v1.d = v13.d f+ *(arg2 + 0x38)
    v0.d = v12.d f* *(arg2 + 0x3c)
    
    if (v1.d f<= 0f)
        v11 = v0
        v9 = v0
        v8 = v0
    else
        bool cond:5_1 = v2.d f< float.s(0x43b40000)
        v2.d = v2.d f/ float.s(0x42700000)
        v3 = fconvert.s(1f)
        
        if (cond:5_1)
            v2.d = v2.d
        else
            v2.d = 0f
        
        uint64_t x8_16 = zx.q(vcvts_s32_f32(v2.d))
        v8.d = v0.d f* (v3 f- v1.d)
        float v4_1 = v2.d f- float.s(x8_16.d)
        v2.d = v1.d f* v4_1
        v2.d = v3 f- v2.d
        v2.d = v0.d f* v2.d
        
        if (x8_16.d u> 4)
            v11 = v0
            v9 = v8
            v8 = v2
        else
            v1.d = v1.d f* (v3 - v4_1)
            v1.d = v3 f- v1.d
            v1.d = v0.d f* v1.d
            v11 = v0
            v9 = v1
            
            switch (x8_16)
                case 1
                    v11 = v2
                    v9 = v0
                case 2
                    v11 = v8
                    v9 = v0
                    v8 = v1
                case 3
                    v11 = v8
                    v9 = v2
                    v8 = v0
                case 4
                    v11 = v1
                    v9 = v8
                    v8 = v0
v0.d = *(x21 + 0x74)
v12.d = fconvert.s(1f)

if (not(v0.d f<= 0f))
    XAsset* x20_1 = *x21
    int64_t* x8_6 = *x20_1
    
    if (x8_6 == 0)
        if (*(x20_1 + 8) == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        v0, v1, v2 = AssetCatalogLoadAsset(x20_1, false, true)
        x8_6 = *x20_1
    
    if (zx.d(*(**x8_6 + sx.q(*(x22 + 0x2f0)) * 0x168 + 0xe6)) == 0)
        v1.d = *(x21 + 0x74)
        v0.d = x21[0xf].d
        v12.d = v0.d f/ v1.d

v0.d = *(arg2 + 0x40)
v2.d = float.s(0x3f7fbe77)
v1.d = v11.d f* v0.d
uint64_t x8_12

if (v1.d f<= v2.d)
    v2.d = float.s(0x3a83126f)
    
    if (v1.d f>= v2.d)
        v2.d = float.s(0x437f0000)
        v1.d = v1.d f* v2.d
        v2.d = fconvert.s(0.5f)
        v1.d = v1.d f+ v2.d
        x8_12 = zx.q(vcvts_s32_f32(v1.d))
    else
        x8_12 = 0
else
    x8_12 = 0xff

v1.d = *(x21 + 0x8c)
v2.d = v9.d f* v0.d
uint64_t x9_3

if (not(v2.d f<= float.s(0x3f7fbe77)))
    x9_3 = 0xff00
else if (v2.d f>= float.s(0x3a83126f))
    v2.d = v2.d f* float.s(0x437f0000)
    v2.d = v2.d f+ fconvert.s(0.5f)
    x9_3 = zx.q(vcvts_s32_f32(v2.d)) << 8
else
    x9_3 = 0

v2.d = v8.d f* v0.d
v0.d = float.s(0x3f7fbe77)
bool cond:7 = v2.d f<= v0.d
v0.d = v12.d f* v1.d
uint64_t x10_3

if (cond:7)
    v1.d = float.s(0x3a83126f)
    
    if (v2.d f>= v1.d)
        v1.d = float.s(0x437f0000)
        v1.d = v2.d f* v1.d
        v2.d = fconvert.s(0.5f)
        v1.d = v1.d f+ v2.d
        x10_3 = zx.q(vcvts_s32_f32(v1.d)) << 0x10
    else
        x10_3 = 0
else
    x10_3 = 0xff0000

v0.d = v10.d f* v0.d
v1.d = float.s(0x3f7fbe77)
uint64_t x11_2

if (v0.d f<= v1.d)
    v1.d = float.s(0x3a83126f)
    
    if (v0.d f>= v1.d)
        v1.d = float.s(0x437f0000)
        v0.d = v0.d f* v1.d
        v1.d = fconvert.s(0.5f)
        v0.d = v0.d f+ v1.d
        x11_2 = zx.q(vcvts_s32_f32(v0.d)) << 0x18
    else
        x11_2 = 0
else
    x11_2 = 0xff000000

return x9_3 | x8_12 | x10_3 | x11_2
