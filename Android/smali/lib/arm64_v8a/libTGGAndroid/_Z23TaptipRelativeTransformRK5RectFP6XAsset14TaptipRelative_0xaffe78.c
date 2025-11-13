// 函数: _Z23TaptipRelativeTransformRK5RectFP6XAsset14TaptipRelative
// 地址: 0xaffe78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v13
int64_t var_60 = v13
int64_t v12
int64_t var_58 = v12
int64_t v11
int64_t var_50 = v11
int64_t v10
int64_t var_48 = v10
int64_t v9
int64_t var_40 = v9
int64_t v8
int64_t var_38 = v8
int32_t* entry_x8

if (arg2 == 0)
    int128_t v0 = *(TI + 0x10)
    *entry_x8 = *TI
    *(entry_x8 + 0x10) = v0
    return 

int32_t x20_1 = arg3
RectF const& x21_1 = arg1
UI2GetTransform(GameMainUI())
int32_t var_80
v10.d = var_80
int64_t v0_1
float v1_1
int64_t v2_1
int32_t v3_1
v0_1, v1_1, v2_1, v3_1 = UI2SubBoundary(arg2)
v9 = v0_1
v8 = v2_1
v11.d = *V20
v0_1.d = *(V20 + 4)
v2_1.d = v3_1 f- v0_1.d
v2_1.d = v10.d f* v2_1.d
v12.d = v0_1.d f+ v10.d f* (v1_1 f- v0_1.d)
v13.d = v0_1.d f+ v2_1.d
float v0_2
float v1_2
int128_t v2_2
float v3_2
arg1, v0_2, v1_2, v2_2, v3_2 = RectScreenSafe()
float v4_1 = *(x21_1 + 4)
float v5_1 = *(x21_1 + 0xc)
float v17_1 = fconvert.s(0.5f)
float v16_1 = v5_1 - v4_1
v4_1 = (v4_1 + v5_1) * v17_1
v5_1 = v13.d f- v12.d

if (x20_1 == 1)
    v4_1 = v4_1 + v16_1 * v17_1
else
    if (x20_1 != 0)
        pthread_kill(pthread_self(), 6)
        XAsset* x0_3
        TaptipTransform* x1
        x0_3, x1 = XNoReturn()
        return ToTransform(x0_3, x1) __tailcall
    
    v4_1 = v4_1 + v16_1 * fconvert.s(-0.5f) - v5_1

float v18_1 = fconvert.s(0.5f)
float v7_1 = v11.d f+ v10.d f* (v8.d f- v11.d) - (v11.d f+ v10.d f* (v9.d f- v11.d))
float x8 = *V20
float x9_1 = *(V20 + 4)
float v6_1 = (*x21_1 + *(x21_1 + 8)) * v18_1 - v7_1 * v18_1

if (v6_1 >= v0_2)
    v0_2 = v7_1 + v6_1
    
    if (not(v0_2 f<= v2_2.d))
        v0_2 = v2_2.d f- v0_2
        v2_2.d = float.s(x8)
        x8 = v0_2 f+ v2_2.d
else
    v2_2.d = float.s(x8)
    x8 = v0_2 - v6_1 f+ v2_2.d

if (v4_1 >= v1_2)
    v0_2 = v5_1 + v4_1
    
    if (not(v0_2 <= v3_2))
        x9_1 = v3_2 - v0_2 + float.s(x9_1)
else
    x9_1 = v1_2 - v4_1 + float.s(x9_1)

v2_2 = *QI
*entry_x8 = v10.d
entry_x8[5] = v6_1 + float.s(x8)
entry_x8[6] = v4_1 + float.s(x9_1)
entry_x8[7] = 0
*(entry_x8 + 4) = v2_2
