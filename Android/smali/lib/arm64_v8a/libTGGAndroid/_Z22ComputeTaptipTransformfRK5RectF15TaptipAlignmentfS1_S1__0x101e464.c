// 函数: _Z22ComputeTaptipTransformfRK5RectF15TaptipAlignmentfS1_S1_
// 地址: 0x101e464
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg3
int64_t result
int128_t v0
float v1
int128_t v2
float v3
int128_t v23
int128_t v24
result, v0, v1, v2, v3, v23, v24 = RectScreenSafe()
float v4

if (arg4 == 0f)
    v4 = fconvert.s(1f)
else
    v4 = arg4

if (x20 u> 5)
    pthread_kill(pthread_self(), 6)
    UI2* x0_1
    bool x1
    UI2StateBindings* x2
    float v0_1
    x0_1, x1, x2, v0_1 = XNoReturn()
    return UI2UpdateTaptip(x0_1, x1, x2, v0_1) __tailcall

float v7 = *arg6
float v16 = *(arg6 + 4)
float v6 = *(arg6 + 8)
float v18 = *(arg6 + 0xc)
float v5 = v2.d f+ v6
float v17 = v6 + *arg2
v23.q = *arg5
v24.q = *(arg5 + 8)
v6 = v0.d f+ v7
v0.q = *V20
float v19 = v7 + *(arg2 + 8)
float v20 = v18 + *(arg2 + 4)
float v21 = v16 + *(arg2 + 0xc)
float v22 = fconvert.s(0.5f)
v2.d = v1 + v16
v1 = v3 + v18
v7 = (v17 + v19) * v22
v16 = (v20 + v21) * v22
int128_t v3_1 = vsub_f32(v23, v0)
int128_t v22_1 = vsub_f32(v24, v0)
v4 = v4 * arg1
int128_t v3_2 = vrev64_s32(v3_1)
int128_t v22_2 = vrev64_s32(v22_1)
void* x8 = &data_101e540 + (zx.q(jump_table_868f4e[zx.q(x20)]) << 2)
int128_t v18_1 = vrev64_s32(v0)
v3_2.d = v3_2.d f* v4
v3_2:4.d = v3_2:4.d f* v4
v22_2.d = v22_2.d f* v4
v22_2:4.d = v22_2:4.d f* v4
int128_t v3_3 = vadd_f32(v18_1, v3_2)
int128_t v18_2 = vadd_f32(v18_1, v22_2)
double v3_4

switch (x8)
    case &data_101e540
        if ((v2.d f+ v1) * fconvert.s(0.5f) <= v16)
            goto label_101e580
        
        goto label_101e558
    case 0x101e554
    label_101e558:
        v3_4 = vsub_f32(v18_2, v3_3)
        v18_2.d = fconvert.s(0.5f)
        v7 = v7 - v18_2.d f* v3_4:4.d
        v16 = v16 + (v21 - v20) f* v18_2.d
        
        if (v7 >= v6)
        label_101e5a8:
            v17 = v3_4:4.d + v7
            v6 = v0.d
            
            if (not(v17 <= v5))
                v6 = v5 - v17 + v6
            
            if (v16 f>= v2.d)
                goto label_101e64c
            
            goto label_101e5c8
        
    label_101e640:
        v6 = v6 - v7 f+ v0.d
        
        if (v16 f< v2.d)
        label_101e5c8:
            v0.d = v0:4.d
            v0.d = v2.d f- v16 f+ v0.d
        else
        label_101e64c:
            v2.d = v3_4.d f+ v16
            v0.d = v0:4.d
            
            if (not(v2.d f<= v1))
                v0.d = v1 f- v2.d f+ v0.d
    case 0x101e57c
    label_101e580:
        v3_4 = vsub_f32(v18_2, v3_3)
        v18_2.d = fconvert.s(0.5f)
        v7 = v7 - v18_2.d f* v3_4:4.d
        v16 = v16 - (v21 - v20) f* v18_2.d f- v3_4.d
        
        if (v7 < v6)
            goto label_101e640
        
        goto label_101e5a8
    case 0x101e5d4
        if ((v6 + v5) * fconvert.s(0.5f) <= v7)
            goto label_101e614
        
        goto label_101e5ec
    case 0x101e5e8
    label_101e5ec:
        v3_4 = vsub_f32(v18_2, v3_3)
        v18_2.d = fconvert.s(0.5f)
        v17 = (v19 - v17) f* v18_2.d
        v18_2.d = v18_2.d f* v3_4.d
        v7 = v7 + v17
        v16 = v16 f- v18_2.d
        
        if (v7 >= v6)
            goto label_101e5a8
        
        goto label_101e640
    case 0x101e610
    label_101e614:
        v3_4 = vsub_f32(v18_2, v3_3)
        v18_2.d = fconvert.s(0.5f)
        v17 = (v19 - v17) f* v18_2.d
        v18_2.d = v18_2.d f* v3_4.d
        v7 = v7 - v17 - v3_4:4.d
        v16 = v16 f- v18_2.d
        
        if (v7 >= v6)
            goto label_101e5a8
        
        goto label_101e640

v0.d = v16 f+ v0.d
float* entry_x8
*entry_x8 = v4
v2 = *QI
entry_x8[5] = v7 + v6
entry_x8[6] = v0.d
entry_x8[7] = 0
*(entry_x8 + 4) = v2
return result
