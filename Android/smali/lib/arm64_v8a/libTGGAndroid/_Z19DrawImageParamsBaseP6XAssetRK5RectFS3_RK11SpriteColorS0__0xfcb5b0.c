// 函数: _Z19DrawImageParamsBaseP6XAssetRK5RectFS3_RK11SpriteColorS0_
// 地址: 0xfcb5b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_60 = v9
int64_t v8
int64_t var_58 = v8
uint64_t x8 = *gpRenderAppData
float var_a0
float var_80
float v0
float v1
float v2
float v3

if (zx.d(*(x8 + 0x167)) == 0)
    void* x8_4 = *gpSpriteAppData
    v1 = *(x8_4 + 0x20)
    v3 = *(x8_4 + 0x24)
    v0 = *arg2 + v1
    v2 = *(arg2 + 4) + v3
    var_80 = v0
    float var_7c_2 = v2
    float var_74_2 = v2
    float var_70_2 = v0
    v0 = v1 + *(arg2 + 8)
    float var_78_2 = v0
    v1 = v3 + *(arg2 + 0xc)
    float var_6c_2 = v1
    float var_68_2 = v0
    float var_64_2 = v1
    v0 = *arg3
    v1 = *(arg3 + 4)
    var_a0 = v0
    float var_9c_2 = v1
    v2 = *(arg3 + 8)
    float var_94_2 = v1
    float var_90_2 = v0
    float var_98_2 = v2
    v0 = *(arg3 + 0xc)
    float var_8c_2 = v0
    float var_88_2 = v2
    float var_84_2 = v0
    return SpriteDrawVertsInt<DefVertPosXY>(&var_80, &var_a0, arg4, false, arg1, arg5)

v1 = *(arg2 + 8)
v0 = *arg2
v2 = (v1 - v0) * fconvert.s(6.5f) / *(x8 + 0x16c)

if (v2 < 0f)
    v3 = fconvert.s(-0.5f)
else
    v3 = fconvert.s(0.5f)

uint32_t temp0_1 = vcvts_s32_f32(v2 + v3)
uint32_t x8_2

x8_2 = temp0_1 s> 1 ? temp0_1 : 1

int32_t x24_1 = 0
v8.d = fconvert.s(1f)
v9.d = float.s(x8_2)
int64_t result

while (true)
    uint64_t x8_3 = *gpSpriteAppData
    v2 = float.s(x24_1)
    v3 = v2 f/ v9.d
    float v4 = *(x8_3 + 0x20)
    float v7 = *(x8_3 + 0x24)
    v1 = v1 - v0
    v2 = (v2 f+ v8.d) f/ v9.d
    float v5 = v4 + v0 + v3 * v1
    v0 = v4 + v0 + v2 * v1
    v1 = *(arg2 + 4) + v7
    var_80 = v5
    float var_7c_1 = v1
    float var_78_1 = v0
    float var_74_1 = v1
    v1 = v7 + *(arg2 + 0xc)
    float var_70_1 = v5
    float var_6c_1 = v1
    float var_68_1 = v0
    float var_64_1 = v1
    v0 = *arg3
    v4 = *(arg3 + 4)
    v1 = *(arg3 + 8) - v0
    v3 = v0 + v3 * v1
    v0 = v0 + v2 * v1
    var_a0 = v3
    float var_9c_1 = v4
    float var_98_1 = v0
    float var_94_1 = v4
    v1 = *(arg3 + 0xc)
    float var_90_1 = v3
    float var_8c_1 = v1
    float var_88_1 = v0
    float var_84_1 = v1
    result = SpriteDrawVertsInt<DefVertPosXY>(&var_80, &var_a0, arg4, false, arg1, arg5)
    
    if (x8_2 - 1 == x24_1)
        break
    
    v0 = *arg2
    v1 = *(arg2 + 8)
    x24_1 += 1

return result
