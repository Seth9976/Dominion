// 函数: _Z15UI2FlanimUpdateR3UI2f
// 地址: 0x1023b38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_70 = v15
int64_t v14
int64_t var_68 = v14
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
XAsset* result = *(arg1 + 0x14d0)
Flanim* x8 = *(arg1 + 0x13c8)

if (result != 0)
    if (x8 == 0)
        Flanim* x0 = FlanimCreate(result)
        *(arg1 + 0x13c8) = x0
        result = FlanimPlay(x0, "idle", 0, fconvert.s(1f))
    
    if (x8 != 0 || *(arg1 + 0x13c8) != 0)
        int64_t v0_1 = GameGetTimeSimulation()
        int64_t v0_2
        int64_t v1_1
        int64_t v2_1
        int64_t v3_1
        v0_2, v1_1, v2_1, v3_1 = FlanimGetExtents(*(arg1 + 0x14d0))
        int64_t v0_4 = UI2PropDynamic<float>::Eval(v0_1.d)
        int64_t v0_6 = UI2PropDynamic<float>::Eval(v0_1.d)
        int64_t v0_8 = UI2PropDynamic<float>::Eval(v0_1.d)
        float v0_10 = UI2PropDynamic<float>::Eval(v0_1.d)
        int32_t v4_1 = *(arg1 + 0x16b0)
        int64_t var_28 = *(arg1 + 0x16c4)
        v8.d = v4_1 f* (v0_4.d f+ v0_8.d f- v0_4.d) / (v2_1.d f- v0_2.d)
        v9.d = v4_1 f* (v0_6.d f+ v0_10 f- v0_6.d) / (v3_1.d f- v1_1.d)
        FlanimSetAlpha(*(arg1 + 0x13c8), *(arg1 + 0x1710))
        FlanimSetPosition(*(arg1 + 0x13c8), &var_28)
        FlanimSetScale(*(arg1 + 0x13c8), v8.d, v9.d)
        FlanimUpdate(*(arg1 + 0x13c8), arg2.q.d)
        FlanimEvent var_1f0
        result = GetFlanimEventsThisFrame(*(arg1 + 0x13c8), &var_1f0, 0x10)
        
        if (result.d s>= 1)
            uint64_t i_1 = zx.q(result.d)
            FlanimEvent* x20_1 = &var_1f0
            uint64_t i
            
            do
                result = ProcessFlanimEvent(arg1, x20_1)
                i = i_1
                i_1 -= 1
                x20_1 += 0x18
            while (i != 1)
else if (x8 != 0)
    result = FlanimDestroy(x8)
    *(arg1 + 0x13c8) = 0

return result
