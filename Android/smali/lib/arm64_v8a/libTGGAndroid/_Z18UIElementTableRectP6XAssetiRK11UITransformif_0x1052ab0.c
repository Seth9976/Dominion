// 函数: _Z18UIElementTableRectP6XAssetiRK11UITransformif
// 地址: 0x1052ab0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
int128_t v1
v0, v1 = DlgShowTransform(arg1, arg2, arg3, arg5)
int64_t* x8 = *arg1

if (x8 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    v0, v1 = AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

void* x21_1 = **x8 + muls.dp.d(arg2, 0x178)
v1 = *(x21_1 + 0x30)
int128_t var_890 = *(x21_1 + 0x20)
int128_t var_880 = v1
RectF var_64
RectF var_54
void var_44
void* result
uint128_t v0_1
int128_t v1_1
float v2
uint128_t v3
uint128_t v5
uint128_t v7
int128_t v19
uint128_t v20
uint128_t v21
float128 v22
result, v0_1, v1_1, v2, v3, v5, v7, v19, v20, v21, v22 =
    UIRectAligned(x21_1 + 0x10, &var_890, &var_44, &var_64, &var_54)
uint64_t x9 = zx.q(*(x21_1 + 0xac))
uint64_t x8_4 = zx.q(*(x21_1 + 0xb0))

if (x8_4.d s>= 1 && x9.d s>= 1)
    int32_t var_84
    v7.d = var_84
    int32_t var_90
    v5.d = var_90
    int32_t var_78
    v19.d = var_78
    float temp0_1 = vmax_f32(v7.d, 0f)
    int32_t var_74
    v7.d = var_74
    float v17_1 = fconvert.s(1f)
    v0_1.d = v0_1.d f* temp0_1
    float var_80
    float v16_1 = var_80 + v17_1
    float var_7c
    v17_1 = var_7c + v17_1
    v1_1.d = v1_1.d f* temp0_1
    v3.d = v3.d f* temp0_1
    v20.d = *(x21_1 + 0xb4)
    float v18_1 = *(x21_1 + 0xb8)
    v0_1.d = v5.d f+ v0_1.d
    float var_8c
    v1_1.d = var_8c f+ v1_1.d
    v3.d = var_8c f+ v3.d
    v0_1.d = v0_1.d f- v19.d
    v0_1.d = v16_1 f* v0_1.d
    v1_1.d = v1_1.d f- v7.d
    v3.d = v3.d f- v7.d
    v3.d = v17_1 f* v3.d
    v0_1.d = v19.d f+ v0_1.d
    v19.d = v19.d f+ v16_1 * (v5.d f+ v2 * temp0_1 f- v19.d)
    v2 = v7.d f+ v17_1 f* v1_1.d
    v7.d = v7.d f+ v3.d
    v5.d = float.s(x8_4.d)
    v3 = data_71c940
    v7.d = v7.d f- v2
    v7.d = v7.d f- v20.d f* float.s(x9.d - 1)
    v5.d = (v19.d f- v0_1.d - v18_1 * float.s(x8_4.d - 1)) f/ v5.d
    float v6_1 = v7.d f/ float.s(x9.d)
    v7.d = v18_1 f+ v5.d
    int64_t x10_1 = 0
    int64_t x11_1 = 0
    int64_t i_2 = x8_4 & 0xfffffff8
    v1_1.d = 4
    v1_1:4.d = 4
    v1_1:8.d = 4
    v1_1:0xc.d = 4
    void var_850
    void* x14_2 = &var_850
    uint128_t v4_2 = vdupq_laneq_s32(v0_1, 0)
    v16_1 = v20.d f+ v6_1
    uint128_t v17_2 = vdupq_laneq_s32(v5, 0)
    uint128_t v18_2 = vdupq_laneq_s32(v7, 0)
    v19.d = 8
    v19:4.d = 8
    v19:8.d = 8
    v19:0xc.d = 8
    
    do
        v20.d = float.s(x11_1.d)
        v20.d = v16_1 f* v20.d
        v20.d = v2 f+ v20.d
        v21.d = v6_1 f+ v20.d
        int64_t i_3
        
        if (x8_4.d u>= 8)
            uint128_t v23_1 = vdupq_laneq_s32(v20, 0)
            uint128_t v25_1 = vdupq_laneq_s32(v21, 0)
            int64_t i_1 = i_2
            void* x17_1 = x14_2
            uint128_t v26_1 = v3
            int32_t i
            
            do
                float128 v28_1 = vcvtq_f32_s32(v26_1)
                float128 v27_2 = vcvtq_f32_s32(v26_1 + v1_1)
                float128 v28_2 = vmulq_f32(v18_2, v28_1, 0)
                float128 v27_3 = vmulq_f32(v18_2, v27_2, 0)
                v22 = vaddq_f32(v4_2, v28_2)
                float128 v27_4 = vaddq_f32(v4_2, v27_3)
                float128 v29_1 = vaddq_f32(v17_2, v27_4)
                float128 v24_1 = vaddq_f32(v17_2, v22)
                result = x17_1 - 0x40
                v26_1 += v19
                i = i_1
                i_1 -= 8
                *result = v22.d
                *(result + 4) = v23_1.d
                *(result + 8) = v24_1.d
                *(result + 0xc) = v25_1.d
                *(result + 0x10) = v22:4.d
                *(result + 0x14) = v23_1:4.d
                *(result + 0x18) = v24_1:4.d
                *(result + 0x1c) = v25_1:4.d
                *(result + 0x20) = v22:8.d
                *(result + 0x24) = v23_1:8.d
                *(result + 0x28) = v24_1:8.d
                *(result + 0x2c) = v25_1:8.d
                *(result + 0x30) = v22:0xc.d
                *(result + 0x34) = v23_1:0xc.d
                *(result + 0x38) = v24_1:0xc.d
                *(result + 0x3c) = v25_1:0xc.d
                *x17_1 = v27_4.d
                *(x17_1 + 4) = v23_1.d
                *(x17_1 + 8) = v29_1.d
                *(x17_1 + 0xc) = v25_1.d
                *(x17_1 + 0x10) = v27_4:4.d
                *(x17_1 + 0x14) = v23_1:4.d
                *(x17_1 + 0x18) = v29_1:4.d
                *(x17_1 + 0x1c) = v25_1:4.d
                *(x17_1 + 0x20) = v27_4:8.d
                *(x17_1 + 0x24) = v23_1:8.d
                *(x17_1 + 0x28) = v29_1:8.d
                *(x17_1 + 0x2c) = v25_1:8.d
                *(x17_1 + 0x30) = v27_4:0xc.d
                *(x17_1 + 0x34) = v23_1:0xc.d
                *(x17_1 + 0x38) = v29_1:0xc.d
                *(x17_1 + 0x3c) = v25_1:0xc.d
                x17_1 += 0x80
            while (i != 8)
            i_3 = i_2
            
            if (i_2 != x8_4)
                goto label_1052cfc
        else
            i_3 = 0
        label_1052cfc:
            void* x17_3 = &var_890:8 + ((i_3 + x10_1) << 4)
            
            do
                v22.d = float.s(i_3.d)
                v22.d = v7.d f* v22.d
                v22.d = v0_1.d f+ v22.d
                i_3 += 1
                *(x17_3 - 8) = v22.d
                *(x17_3 - 4) = v20.d
                v22.d = v5.d f+ v22.d
                *x17_3 = v22.d
                *(x17_3 + 4) = v21.d
                x17_3 += 0x10
            while (x8_4 != i_3)
        x11_1 += 1
        x14_2 += x8_4 << 4
        x10_1 += x8_4
    while (x11_1 != x9)

int32_t x8_5 = x9.d * x8_4.d
int32_t x8_6

if (x8_5 s> arg4)
    x8_6 = arg4
else
    x8_6 = x8_5 - 1

void* x8_7 = &(&var_890)[sx.q(x8_6)]
v0_1.d = *x8_7
v1_1.d = *(x8_7 + 4)
*(x8_7 + 8)
v3.d = *(x8_7 + 0xc)
return result
