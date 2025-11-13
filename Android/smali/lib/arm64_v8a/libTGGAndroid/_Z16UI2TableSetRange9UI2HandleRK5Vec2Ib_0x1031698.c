// 函数: _Z16UI2TableSetRange9UI2HandleRK5Vec2Ib
// 地址: 0x1031698
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = zx.q(arg1)
int32_t x21 = arg3.d
int64_t x22 = *gUI2
UI2* i = x22 + mulu.dp.d(x23.d, 0x19a8)
RectF var_50
RectF var_40
UI2TableTransform(i, 0, &var_40, &var_50, false)
int64_t result = UI2TableTransform(i, 1, &var_40, &var_50, false)
int32_t x8 = *(i + 0x1528)
float var_78
float var_58
float v0 = var_78 - var_58

if (x8 u>= 2)
    if (x8 != 2)
        pthread_kill(pthread_self(), 6)
        int64_t x0_3
        Vec2I* x1
        x0_3, x1 = XNoReturn()
        return UI2TableGetRangeTarget(x0_3, x1) __tailcall
    
    float var_7c
    float var_5c
    *(x22 + x23 * 0x19a8 + 0x13a8) = (var_7c - var_5c) * float.s(neg.d(*arg2))
    
    if ((x21 & 1) != 0)
        goto label_1031770
else
    *(x22 + x23 * 0x19a8 + 0x13ac) = v0 * float.s(neg.d(*arg2))
    
    if ((x21 & 1) != 0)
    label_1031770:
        
        if (*arg2 != 0)
            void* x8_8 = x22 + x23 * 0x19a8
            float v7_1 = *(x8_8 + 0x16c0)
            float v16_1 = *(x8_8 + 0x16b4)
            float v17_1 = *(x8_8 + 0x16b8)
            float v18_1 = *(x8_8 + 0x16bc)
            float v6_1 = *(x8_8 + 0x16b0)
            float v1 = *V20 * v6_1
            float v2_1 = *(V20 + 4) * v6_1
            float v3_1 = v6_1 * 0f
            float v4_1 = *(x8_8 + 0x175c) * v6_1
            float v5_1 = *(x8_8 + 0x1760) * v6_1
            v6_1 = v16_1 * v17_1 + v7_1 * v18_1
            float v19_1 = *(x8_8 + 0x16c8)
            v1 = (v1 + v1) * v6_1
            v4_1 = (v4_1 + v4_1) * v6_1
            v6_1 = v7_1 * v7_1 - v16_1 * v16_1 + v17_1 * v17_1 - v18_1 * v18_1
            v3_1 = (v3_1 + v3_1) * (v17_1 * v18_1 - v7_1 * v16_1)
            v1 = (v19_1 + v3_1 + v4_1 + v5_1 * v6_1 - (v19_1 + v3_1 + v1 + v2_1 * v6_1)) / v0
            uint32_t temp0_1 = vcvts_s32_f32(v1)
            *(x8_8 + 0x13ac) = *(x8_8 + 0x13ac) - v0 * (v1 - float.s(temp0_1) + fconvert.s(1f))

do
    *(i + 0x1378) = 2
    i = *(i + 0x17d0)
while (i != 0)

return result
