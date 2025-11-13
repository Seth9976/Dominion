// 函数: _spAnimationState_applyMixingFrom
// 地址: 0xfbc30c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_a0 = v15
int64_t* x19 = *(arg2 + 0x10)

if (x19[2] != 0)
    _spAnimationState_applyMixingFrom(arg1, x19, arg3, zx.q(arg4))

float v0 = *(arg2 + 0x70)
int32_t var_a4
int64_t x23_1
int128_t v2
int128_t result

if (v0 != 0f)
    v2.d = fconvert.s(1f)
    result.d = vmin_f32(*(arg2 + 0x6c) / v0, v2.d)
    int32_t x8_2
    
    if (arg4 != 1)
        x8_2 = *(x19 + 0x7c)
    else
        x8_2 = 1
    
    var_a4 = x8_2
    
    if (result.d f< *(x19 + 0x34))
        x23_1 = *(arg1 + 0x40)
    else
        x23_1 = 0
else
    int32_t x8_1
    
    x8_1 = arg4 == 1 ? 0 : arg4
    
    var_a4 = x8_1
    result.d = fconvert.s(1f)
    
    if (result.d f>= *(x19 + 0x34))
        x23_1 = 0
    else
        x23_1 = *(arg1 + 0x40)

int64_t v14
v14.d = x19[7].d
int64_t v12
v12.d = *(x19 + 0x3c)
int128_t v10
v10.d = x19[9].d
int128_t v9

if (*(x19 + 0x2c) == 0)
    v2.d = *(x19 + 0x44)
    v0 = *(x19 + 0x54) f+ x19[8].d
    
    if (v0 f< v2.d)
        v9.d = v0
    else
        v9.d = v2.d
else
    v9.d = x19[8].d
    float y = *(x19 + 0x44) f- v9.d
    
    if (not(y == 0f))
        v0, v2 = fmodf(*(x19 + 0x54), y)
        v9.d = v9.d f+ v0

void* x8_4 = *x19
uint64_t i_1 = zx.q(*(x8_4 + 0xc))
int64_t* x20_1 = *(x8_4 + 0x10)
int128_t v13
v13.d = x19[0xd].d f* *(arg2 + 0x74)
int128_t v11
v11.d = (fconvert.s(1f) f- result.d) f* v13.d

if (var_a4 != 3)
    int32_t x8_7 = x19[0x13].d
    void* x28_1 = x19[0x10]
    void* x9_1 = x19[0x11]
    int32_t x24_2 = x8_7 == 0 ? 1 : 0
    
    if (x8_7 == 0)
        int32_t x21_1 = i_1.d << 1
        
        if (x21_1 != 0)
            int64_t x0_3 = _spCalloc(sx.q(x21_1), 4, 
                "..\..\ExternalCode\spine-c\src\spine\AnimationState.c", 0x37c)
            _spFree(x19[0x12])
            x19[0x12] = x0_3
            x19[0x13].d = x21_1
    
    int64_t x25_2 = x19[0x12]
    x19[0xf].d = 0
    
    if (i_1.d s>= 1)
        int32_t x27_1 = 0
        int64_t x21_2 = 0
        
        if (result.d f>= v14.d)
            v14.d = fconvert.s(1f)
            v15.d = 0f
            
            do
                int32_t* x0_6 = x20_1[x21_2]
                int32_t x8_20 = *(*(x28_1 + 8) + (x21_2 << 2))
                int32_t x9_2 = x8_20 & 3
                int32_t x4_4
                
                if (x9_2 == 2)
                    x4_4 = 0
                    v2 = v13
                label_fbc6f4:
                    x19[0xf].d = v2.d f+ x19[0xf].d
                    
                    if (*x0_6 == 0)
                        _spAnimationState_applyRotateTimeline(x0_6, x0_6, arg3, zx.q(x4_4), x25_2, 
                            zx.q(x27_1), zx.q(x24_2), v9, v2)
                    else
                        spTimeline_apply(x0_6, arg3, x23_1, arg1 + 0x38, v10, v9)
                else
                    if (x9_2 == 1)
                    label_fbc6b0:
                        x4_4 = 0
                        v2 = v11
                        goto label_fbc6f4
                    
                    if (x9_2 != 0)
                        x4_4 = 0
                        void* x8_23 = *(*(x9_1 + 8) + (x21_2 << 3))
                        v2.d = v13.d f* vmax_f32(v14.d f- *(x8_23 + 0x6c) / *(x8_23 + 0x70), v15.d)
                        goto label_fbc6f4
                    
                    int32_t x9_3 = *x0_6
                    
                    if (x9_3 != 4)
                        x4_4 = var_a4
                        v2 = v11
                        
                        if (((x9_3 == 8 ? 1 : 0) & (result.d f>= v12.d ? 1 : 0) & 1) == 0)
                            goto label_fbc6f4
                    else if ((x8_20 & 4) == 0)
                        goto label_fbc6b0
                x21_2 += 1
                x27_1 += 2
            while (i_1 != x21_2)
        else
            v14.d = fconvert.s(1f)
            v15.d = 0f
            
            do
                int32_t* x0_5 = x20_1[x21_2]
                int32_t x8_12 = *(*(x28_1 + 8) + (x21_2 << 2)) & 3
                int32_t x4_2
                
                if (x8_12 != 0)
                    if (x8_12 == 1)
                        x4_2 = 0
                        v2 = v11
                    else if (x8_12 != 2)
                        x4_2 = 0
                        void* x8_16 = *(*(x9_1 + 8) + (x21_2 << 3))
                        v2.d = v13.d f* vmax_f32(v14.d f- *(x8_16 + 0x6c) / *(x8_16 + 0x70), v15.d)
                    else
                        x4_2 = 0
                        v2 = v13
                    
                    goto label_fbc5d8
                
                x4_2 = var_a4
                v2 = v11
                
                if (result.d f< v12.d)
                label_fbc5d8:
                    x19[0xf].d = v2.d f+ x19[0xf].d
                    
                    if (*x0_5 == 0)
                        _spAnimationState_applyRotateTimeline(x0_5, x0_5, arg3, zx.q(x4_2), x25_2, 
                            zx.q(x27_1), zx.q(x24_2), v9, v2)
                    else
                        spTimeline_apply(x0_5, arg3, x23_1, arg1 + 0x38, v10, v9)
                else
                    x4_2 = var_a4
                    v2 = v11
                    
                    if (*x0_5 != 8)
                        goto label_fbc5d8
                
                x21_2 += 1
                x27_1 += 2
            while (i_1 != x21_2)
else if (i_1.d s>= 1)
    uint64_t i
    
    do
        int64_t x0_1 = *x20_1
        x20_1 = &x20_1[1]
        spTimeline_apply(x0_1, arg3, x23_1, arg1 + 0x38, 3, 1, v10, v9, v11)
        i = i_1
        i_1 -= 1
    while (i != 1)

if (not(*(arg2 + 0x70) <= 0f))
    _spAnimationState_queueEvents(arg1, x19, v9)

*(arg1 + 0x38) = 0
v0 = *(x19 + 0x54)
*(x19 + 0x4c) = v9.d
*(x19 + 0x5c) = v0
return result
