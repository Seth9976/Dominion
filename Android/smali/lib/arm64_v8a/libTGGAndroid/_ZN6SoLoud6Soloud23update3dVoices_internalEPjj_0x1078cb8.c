// 函数: _ZN6SoLoud6Soloud23update3dVoices_internalEPjj
// 地址: 0x1078cb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_a0 = v15
int64_t v14
int64_t var_98 = v14
int64_t v13
int64_t var_90 = v13
int64_t v12
int64_t var_88 = v12
int64_t v9
int64_t var_70 = v9
uint64_t x8 = zx.q(arg1[0x828])
uint32_t* x19 = arg1
void var_100
uint128_t v0
uint128_t v1
uint128_t v2
uint128_t v3
uint128_t v4
uint128_t v5
uint128_t v6
float128 v7
float128 v16
float128 v17
float128 v18
float128 v23
uint128_t v24

if (x8.d s< 1)
    x8 = 0
    arg1, v0, v1, v2, v3, v4, v5, v6, v7, v16, v17, v18, v23, v24 =
        memset(&var_100 + mulu.dp.d(x8.d, 0xc), 0, mulu.dp.d(7 - x8.d, 0xc) + 0xc)
else
    void* x9_1 = &x19[0xb79]
    void var_f8
    void* x10_1 = &var_f8
    uint64_t x11_1 = x8
    
    while (true)
        v0.d = *(x9_1 - 8)
        v1.d = *(x9_1 - 4)
        *(x10_1 - 8) = v0.d
        *(x10_1 - 4) = v1.d
        v2.d = *x9_1
        v3.d = v0.d f* v0.d
        v4.d = v1.d f* v1.d
        v3.d = v3.d f+ v4.d
        v4.d = v2.d f* v2.d
        v3.d = v3.d f+ v4.d
        v3.d = sqrt(v3.d)
        *x10_1 = v2.d
        
        if (v3.d f!= 0f)
            v0.d = v0.d f/ v3.d
            v1.d = v1.d f/ v3.d
            v2.d = v2.d f/ v3.d
            *(x10_1 - 8) = v0.d
            *(x10_1 - 4) = v1.d
            *x10_1 = v2.d
            x10_1 += 0xc
            x9_1 += 0xc
            uint64_t temp0_1 = x11_1
            x11_1 -= 1
            
            if (temp0_1 == 1)
                break
        else
            *x10_1 = 0
            *(x10_1 - 8) = 0
            x9_1 += 0xc
            uint64_t temp1_1 = x11_1
            x11_1 -= 1
            x10_1 += 0xc
            
            if (temp1_1 == 1)
                break
    
    if (x8.d u<= 7)
        arg1, v0, v1, v2, v3, v4, v5, v6, v7, v16, v17, v18, v23, v24 =
            memset(&var_100 + mulu.dp.d(x8.d, 0xc), 0, mulu.dp.d(7 - x8.d, 0xc) + 0xc)

v6.d = x19[0xb6d]
v5.d = x19[0xb6e]
v4.d = x19[0xb6f]
v1.d = x19[0xb70]
v0.d = x19[0xb71]
v3.d = x19[0xb72]
v2.d = v6.d f* v6.d
v7.d = v5.d f* v5.d
v2.d = v2.d f+ v7.d
v7.d = v4.d f* v4.d
v2.d = v2.d f+ v7.d
v7.d = sqrt(v2.d)
v2.d = 0f
int32_t var_130
int32_t var_12c
int32_t var_128
int32_t var_124
int32_t var_120
int32_t var_11c
int32_t entry_x2
int128_t v8
int64_t v10
int64_t v11

if ((zx.d(x19[0x82d].b) & 4) == 0)
    v11.d = 0f
    v10.d = 0f
    v8.d = 0f
    var_11c = v2.d
    
    if (not(v7.d f== 0f))
        v8.d = v6.d f/ v7.d
        v10.d = v5.d f/ v7.d
        v11.d = v4.d f/ v7.d
    
    v2.d = v0.d f* v11.d
    v4.d = v3.d f* v10.d
    v3.d = v3.d f* v8.d
    v5.d = v1.d f* v11.d
    v6.d = v1.d f* v10.d
    v0.d = v0.d f* v8.d
    v2.d = v2.d f- v4.d
    v1.d = v3.d f- v5.d
    v0.d = v6.d f- v0.d
    v3.d = v2.d f* v2.d
    v4.d = v1.d f* v1.d
    v5.d = v0.d f* v0.d
    v3.d = v3.d f+ v4.d
    v3.d = v5.d f+ v3.d
    v3.d = sqrt(v3.d)
    v4.d = 0f
    v5.d = 0f
    
    if (not(v3.d f== 0f))
        v5.d = v2.d f/ v3.d
        v4.d = v1.d f/ v3.d
        v0.d = v0.d f/ v3.d
        var_11c = v0.d
    
    v3.d = var_11c
    v1.d = v11.d f* v4.d
    v2.d = v11.d f* v5.d
    var_120 = v4.d
    v0.d = v10.d f* v3.d
    v3.d = v8.d f* v3.d
    v4.d = v8.d f* v4.d
    var_130 = v5.d
    v5.d = v10.d f* v5.d
    v6.d = v0.d f- v1.d
    v0.d = v2.d f- v3.d
    var_128 = v0.d
    var_124 = v6.d
    v0.d = v4.d f- v5.d
    var_12c = v0.d
    
    if (entry_x2 s>= 1)
        goto label_1078f78
    
    return 

v11.d = 0f
v10.d = 0f
v8.d = 0f

if (not(v7.d f== 0f))
    v8.d = v6.d f/ v7.d
    v10.d = v5.d f/ v7.d
    v11.d = v4.d f/ v7.d

v4.d = v0.d f* v11.d
v5.d = v3.d f* v10.d
v3.d = v3.d f* v8.d
v6.d = v1.d f* v11.d
v1.d = v1.d f* v10.d
v0.d = v0.d f* v8.d
v5.d = v4.d f- v5.d
v4.d = v3.d f- v6.d
v3.d = v1.d f- v0.d
v0.d = v5.d f* v5.d
v1.d = v4.d f* v4.d
v6.d = v3.d f* v3.d
v0.d = v0.d f+ v1.d
v0.d = v6.d f+ v0.d
v6.d = sqrt(v0.d)
v0.d = 0f
v1.d = 0f

if (not(v6.d f== 0f))
    v1.d = v5.d f/ v6.d
    v0.d = v4.d f/ v6.d
    v2.d = v3.d f/ v6.d

v3.d = v10.d f* v2.d
v4.d = v11.d f* v0.d
v7.d = v8.d f* v0.d
v0.d = fneg(v0.d)
v5.d = v11.d f* v1.d
v6.d = v8.d f* v2.d
var_120 = v0.d
v0.d = v3.d f- v4.d
v16.d = v10.d f* v1.d
var_124 = v0.d
v0.d = v5.d f- v6.d
v1.d = fneg(v1.d)
var_128 = v0.d
v0.d = v7.d f- v16.d
var_130 = v1.d
var_12c = v0.d
v0.d = fneg(v2.d)
var_11c = v0.d

if (entry_x2 s< 1)
    return 

label_1078f78:
v1.d = x19[0xb6a]
v0.d = x19[0xb6b]
int64_t i = 0
int32_t var_140_1 = v0.d
int32_t var_13c_1 = v1.d
v0.d = x19[0xb6c]
v1.d = x19[0xb73]
int32_t var_148_1 = v8.d
int32_t var_144_1 = v0.d
v0.d = x19[0xb74]
v12.d = fconvert.s(1f)
v9.d = fconvert.s(0.5f)
int32_t var_150_1 = v0.d
int32_t var_14c_1 = v1.d
v0.d = x19[0xb75]
v13.d = 0f
int32_t var_154_1 = v0.d
int32_t var_138_1 = v11.d
int32_t var_134_1 = v10.d

do
    uint64_t x24_1 = zx.q(*(arg2 + (i << 2)))
    v24.d = fconvert.s(1f)
    void* x8_7 = x19 + x24_1 * 0x78
    int64_t* x0_2 = *(x8_7 + 0x2e70)
    
    if (x0_2 != 0)
        v0, v1, v2, v3, v4, v5, v6, v7, v16, v17, v18, v23 =
            (**x0_2)(x0_2, x19, x8_7 + 0x2e40, zx.q(*(x19 + x24_1 * 0x78 + 0x2e80)))
        v24 = v0
    
    void* x8_10 = x19 + x24_1 * 0x78
    v0.d = *(x8_7 + 0x2e40)
    v1.d = *(x8_10 + 0x2e44)
    v4.d = var_140_1
    v3.d = var_13c_1
    v2.d = *(x8_10 + 0x2e48)
    v5.d = var_144_1
    int32_t temp2_1 = *(x8_10 + 0x2eac) & 0x10
    v3.d = v0.d f- v3.d
    v4.d = v1.d f- v4.d
    v5.d = v2.d f- v5.d
    
    if (temp2_1 == 0)
        v10.d = v4.d
    else
        v10.d = v1.d
    
    if (temp2_1 == 0)
        v11.d = v3.d
    else
        v11.d = v0.d
    
    v6.d = *(x8_10 + 0x2e4c)
    v7.d = *(x8_10 + 0x2e50)
    v15.d = *(x8_10 + 0x2e54)
    arg1 = *(x8_10 + 0x2e78)
    
    if (temp2_1 == 0)
        v14.d = v5.d
    else
        v14.d = v2.d
    
    v0.d = v11.d f* v11.d
    v1.d = v10.d f* v10.d
    v0.d = v0.d f+ v1.d
    v1.d = v14.d f* v14.d
    v0.d = v1.d f+ v0.d
    v8.d = sqrt(v0.d)
    void* x8_11 = x19 + x24_1 * 0x78
    int32_t var_118_1 = v7.d
    int32_t var_114_1 = v6.d
    uint128_t var_110_2
    
    if (arg1 == 0)
        int32_t x8_15 = *(x8_11 + 0x2e64)
        
        if (x8_15 == 3)
            void* x8_18 = x19 + x24_1 * 0x78
            v0.d = *(x8_18 + 0x2e58)
            v1.d = *(x8_18 + 0x2e5c)
            v2.d = *(x8_18 + 0x2e60)
            var_110_2 = v24
            
            if (v8.d f> v0.d)
                v3.d = v8.d
            else
                v3.d = v0.d
            
            if (v3.d f< v1.d)
                v1.d = v3.d
            else
                v1.d = v1.d
            
            v0.d = v1.d f/ v0.d
            v1.d = fneg(v2.d)
            v0, arg1, v1, v2, v3, v4, v5, v6, v7, v16, v17, v18, v23, v24 =
                powf(v0.d, v1.d, v2.d, v3.d)
            goto label_10790ec
        
        if (x8_15 == 2)
            void* x8_17 = x19 + x24_1 * 0x78
            v0.d = *(x8_17 + 0x2e58)
            v1.d = *(x8_17 + 0x2e5c)
            v2.d = *(x8_17 + 0x2e60)
            
            if (v8.d f> v0.d)
                v3.d = v8.d
            else
                v3.d = v0.d
            
            if (v3.d f< v1.d)
                v3.d = v3.d
            else
                v3.d = v1.d
            
            v3.d = v3.d f- v0.d
            v2.d = v2.d f* v3.d
            v0.d = v1.d f- v0.d
            v0.d = v2.d f/ v0.d
            v0.d = v12.d f- v0.d
            v7.d = var_130
            v24.d = v24.d f* v0.d
        else
            v7.d = var_130
            
            if (x8_15 == 1)
                void* x8_16 = x19 + x24_1 * 0x78
                v0.d = *(x8_16 + 0x2e58)
                v1.d = *(x8_16 + 0x2e5c)
                v2.d = *(x8_16 + 0x2e60)
                
                if (v8.d f> v0.d)
                    v3.d = v8.d
                else
                    v3.d = v0.d
                
                if (v3.d f< v1.d)
                    v1.d = v3.d
                else
                    v1.d = v1.d
                
                v1.d = v1.d f- v0.d
                v1.d = v2.d f* v1.d
                v1.d = v0.d f+ v1.d
                v0.d = v0.d f/ v1.d
                v24.d = v24.d f* v0.d
    else
        v1.d = *(x8_11 + 0x2e58)
        v2.d = *(x8_11 + 0x2e5c)
        v3.d = *(x8_11 + 0x2e60)
        var_110_2 = v24
        arg1, v0, v1, v2, v3, v4, v5, v6, v7, v16, v17, v18, v23, v24 =
            (**arg1)(v8, v1, v2, v3, v4, v5, v6, v7)
    label_10790ec:
        v7.d = var_130
        v24.d = var_110_2.d f* v0.d
    v0.d = fconvert.s(1f)
    
    if (not(v8.d f== 0f))
        v2.d = var_150_1
        v1.d = var_14c_1
        v5.d = var_118_1
        v4.d = var_114_1
        v3.d = var_154_1
        v1.d = v1.d f* v11.d
        v2.d = v2.d f* v10.d
        v0.d = x19[0xb76]
        v1.d = v1.d f+ v2.d
        v2.d = *(x19 + x24_1 * 0x78 + 0x2e68)
        v4.d = v4.d f* v11.d
        v5.d = v5.d f* v10.d
        v3.d = v3.d f* v14.d
        v6.d = v15.d f* v14.d
        v4.d = v4.d f+ v5.d
        v1.d = v3.d f+ v1.d
        v3.d = v6.d f+ v4.d
        v3.d = v3.d f/ v8.d
        v4.d = v0.d f/ v2.d
        v1.d = v1.d f/ v8.d
        
        if (v3.d f< v4.d)
            v3.d = v3.d
        else
            v3.d = v4.d
        
        if (v1.d f< v4.d)
            v1.d = v1.d
        else
            v1.d = v4.d
        
        v3.d = v2.d f* v3.d
        v1.d = v2.d f* v1.d
        v1.d = v0.d f- v1.d
        v0.d = v0.d f- v3.d
        v0.d = v1.d f/ v0.d
    
    v2.d = var_120
    v3.d = var_11c
    v1.d = v7.d f* v11.d
    *(x19 + x24_1 * 0x78 + 0x2e84) = v0.d
    v2.d = v2.d f* v10.d
    v1.d = v1.d f+ v2.d
    v2.d = var_128
    v0.d = var_124
    v8.d = var_148_1
    v0.d = v0.d f* v11.d
    v3.d = v3.d f* v14.d
    v2.d = v2.d f* v10.d
    v2.d = v0.d f+ v2.d
    v0.d = var_12c
    v5.d = v0.d f* v14.d
    v0.d = v8.d f* v11.d
    v11.d = var_138_1
    v6.d = var_134_1
    v5.d = v5.d f+ v2.d
    v2.d = v5.d f* v5.d
    v4.d = v6.d f* v10.d
    v6.d = v11.d f* v14.d
    v7.d = v0.d f+ v4.d
    v4.d = v3.d f+ v1.d
    v3.d = v6.d f+ v7.d
    v1.d = v4.d f* v4.d
    v6.d = v3.d f* v3.d
    v1.d = v1.d f+ v2.d
    v1.d = v6.d f+ v1.d
    v6.d = sqrt(v1.d)
    v0.d = 0f
    v2.d = 0f
    v1.d = 0f
    int64_t x9_7
    
    if (not(v6.d f!= 0f))
        x9_7 = sx.q(x19[0x828])
        v23.d = 0x3f000000
        v23:4.d = 0x3f000000
        v23:8.d = 0x3f000000
        v23:0xc.d = 0x3f000000
        
        if (x9_7.d s>= 1)
            goto label_1079288
        
        goto label_1078fd8
    
    v1.d = v4.d f/ v6.d
    v2.d = v5.d f/ v6.d
    v0.d = v3.d f/ v6.d
    x9_7 = sx.q(x19[0x828])
    v23.d = 0x3f000000
    v23:4.d = 0x3f000000
    v23:8.d = 0x3f000000
    v23:0xc.d = 0x3f000000
    int64_t j_2
    
    if (x9_7.d s< 1)
    label_1078fd8:
        j_2 = 0
    label_1079004:
        uint128_t var_110_1 = v24
        arg1, v0, v1, v2, v3, v4, v5, v6, v7, v16, v17, v18, v23, v24 =
            memset(&x19[x24_1 * 0x1e + zx.q(j_2.d) + 0xba3], 0, (zx.q(7 - j_2.d) << 2) + 4)
        v24 = var_110_1
    else
    label_1079288:
        
        if (x9_7.d u>= 4)
            j_2 = x9_7 & 0xfffffffffffffffc
            v3 = vdupq_laneq_s32(v1, 0)
            v4 = vdupq_laneq_s32(v2, 0)
            v5 = vdupq_laneq_s32(v0, 0)
            v6 = vdupq_laneq_s32(v24, 0)
            float128* x10_3 = &x19[0xba3] + x24_1 * 0x78
            void* x11_2 = &var_100
            int64_t j_1 = j_2
            int64_t j
            
            do
                v16.d = *x11_2
                v17.d = *(x11_2 + 4)
                v18.d = *(x11_2 + 8)
                v16:4.d = *(x11_2 + 0xc)
                v17:4.d = *(x11_2 + 0x10)
                v18:4.d = *(x11_2 + 0x14)
                v16:8.d = *(x11_2 + 0x18)
                v17:8.d = *(x11_2 + 0x1c)
                v18:8.d = *(x11_2 + 0x20)
                v16:0xc.d = *(x11_2 + 0x24)
                v17:0xc.d = *(x11_2 + 0x28)
                v18:0xc.d = *(x11_2 + 0x2c)
                x11_2 += 0x30
                j = j_1
                j_1 -= 4
                float128 v7_1 = vmulq_f32(v3, v16, 0)
                float128 v19_1 = vmulq_f32(v4, v17, 0)
                float128 v20_1 = vmulq_f32(v5, v18, 0)
                float128 v7_2 = vaddq_f32(v7_1, v19_1)
                uint128_t v21_1 = vceqzq_f32(v16)
                uint128_t v22_1 = vceqzq_f32(v17)
                v17.d = fconvert.s(1f)
                v17:4.d = fconvert.s(1f)
                v17:8.d = fconvert.s(1f)
                v17:0xc.d = fconvert.s(1f)
                *x10_3 = vmulq_f32(v6, 
                    vbslq_s8(v21_1 & v22_1 & vceqzq_f32(v18), v17, 
                        vmulq_f32(vaddq_f32(vaddq_f32(v7_2, v20_1), v17), v23, 0)), 
                    0)
                x10_3 = &x10_3[1]
            while (j != 4)
            
            if (j_2 != x9_7)
                goto label_1079310
        else
            j_2 = 0
        label_1079310:
            int32_t* x11_3 = (&var_100 | 4) + j_2 * 0xc
            
            do
                v3.d = x11_3[-1]
                v4.d = *x11_3
                v5.d = x11_3[1]
                x11_3 = &x11_3[3]
                v6.d = v1.d f* v3.d
                v7.d = v2.d f* v4.d
                bool cond:12_1 = v5.d f== 0f
                v5.d = v0.d f* v5.d
                v6.d = v6.d f+ v7.d
                bool z_1
                
                if (cond:12_1)
                    v4.d f- v13.d
                    z_1 = v4.d f== v13.d
                else
                    z_1 = false
                
                v4.d = v6.d f+ v5.d
                bool z_2
                
                if (z_1)
                    v3.d f- v13.d
                    z_2 = v3.d f== v13.d
                else
                    z_2 = false
                
                v3.d = v4.d f+ v12.d
                v3.d = v3.d f* v9.d
                
                if (z_2)
                    v3.d = v12.d
                else
                    v3.d = v3.d
                
                v3.d = v24.d f* v3.d
                *(&x19[0xba3] + x24_1 * 0x78 + (j_2 << 2)) = v3.d
                j_2 += 1
            while (j_2 s< x9_7)
        
        if (j_2.d u<= 7)
            goto label_1079004
    i += 1
    *(x19 + x24_1 * 0x78 + 0x2e88) = v24.d
while (i != zx.q(entry_x2))
