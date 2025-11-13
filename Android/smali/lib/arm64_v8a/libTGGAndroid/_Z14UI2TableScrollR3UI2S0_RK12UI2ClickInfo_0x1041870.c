// 函数: _Z14UI2TableScrollR3UI2S0_RK12UI2ClickInfo
// 地址: 0x1041870
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v14
int64_t var_60 = v14
int64_t v13
int64_t var_50 = v13
int64_t v12
int64_t var_48 = v12
int64_t v11
int64_t var_40 = v11
int64_t v10
int64_t var_38 = v10
int64_t v9
int64_t var_30 = v9
int64_t v8
int64_t var_28 = v8
int32_t x8 = *(arg3 + 0x14)

if (x8 == 5)
    *(arg2 + 0x13a4) = 0
    *(gUI2 + 0x54) = 0
else if (x8 != 6)
    *(gUI2 + 0x54) = *(arg2 + 0x19a0)
    *(arg2 + 0x13a4) = 2
    *(arg2 + 0x139c) = *(arg3 + 0x18)
else
    v9.d = *(arg2 + 0x139c)
    v10.d = *(arg3 + 0x18)
    v11.d = *(arg3 + 0x1c)
    v12.d = *(arg2 + 0x13a0)
    int32_t x8_1 = *(arg1 + 0x167c)
    v13.d = *(arg1 + 0x1760)
    UI2& i = arg1
    v14.d = *(V20 + 4)
    float v0_1
    float v1_1
    float v2_1
    
    if (x8_1 == 3)
        v8.d = *(i + 0x175c)
        float v0_3 = UI2PropDynamic<float>::Eval(GameGetTimeSimulation())
        int64_t v0_5 = DrawStringGetHeightFancy(i + 0x1640, *(i + 0x1548), *(gUI2 + 0x68), nullptr, 
            v8.d, v0_3 * *(i + 0x16b0))
        v1_1 = TextGetLineHeight(i)
        float temp0_1 = vrndp_f32(v0_5.d f/ v1_1)
        
        if (temp0_1 < 0f)
            v2_1 = fconvert.s(-0.5f)
        else
            v2_1 = fconvert.s(0.5f)
        
        v0_1 = v1_1 * float.s(sx.d(vcvts_s32_f32(temp0_1 + v2_1)))
    else
        if (x8_1 != 2)
        label_1041af0:
            pthread_kill(pthread_self(), 6)
            UI2* x0_7
            int64_t x1_1
            x0_7, x1_1 = XNoReturn()
            return IsParentRec(x0_7, x1_1) __tailcall
        
        RectF var_80
        RectF var_70
        UI2TableTransform(i, 0, &var_70, &var_80, false)
        UI2TableTransform(i, 1, &var_70, &var_80, false)
        float var_a8
        float var_88
        v0_1 = (var_a8 - var_88) * float.s(*(i + 0x1500))
    
    float v3_1 = *(arg2 + 0x175c)
    v1_1 = *(arg2 + 0x16b0)
    *(arg2 + 0x139c) = *(arg3 + 0x18)
    uint64_t x8_6 = zx.q(*(i + 0x1528))
    v2_1 = v13.d f- v3_1 - (v14.d f+ v3_1)
    float v4_1 = v13.d f/ v0_1 * v2_1
    
    if (not(v3_1 > v4_1))
        v3_1 = v4_1
    
    if (x8_6.d u> 3)
        goto label_1041af0
    
    float v5_1 = v0_1 f- v13.d
    float v6_1 = 0f
    float v7_1 = fconvert.s(1f)
    v3_1 = v3_1 * fconvert.s(0.5f)
    v0_1 = v7_1 / v1_1
    v1_1 = v3_1 + v6_1
    v1_1 = v5_1 * (v3_1 + v7_1 - v1_1) / (v2_1 - v3_1 - v1_1) + v6_1
    v2_1 = v0_1 * (v11.d f- v12.d) * v1_1
    
    switch (x8_6)
        case 1
            *(i + 0x13ac) = *(i + 0x13ac) - v2_1
        case 2
            *(i + 0x13a8) = v0_1 * (v10.d f- v9.d) * v1_1 + *(i + 0x13a8)
        case 3
            *(i + 0x13ac) = v2_1 + *(i + 0x13ac)
    
    UI2ClampScrollDelta(i, nullptr)
    
    do
        *(i + 0x1378) = 2
        i = *(i + 0x17d0)
    while (i != 0)
