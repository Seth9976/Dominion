// 函数: spTimelineArray_add
// 地址: 0xfc0968
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg1
int64_t result

if (x8 != arg1[1])
    result = *(arg1 + 8)
else
    int64_t x0 = *(arg1 + 8)
    uint32_t temp0_1 = vcvts_s32_f32(float.s(x8) * fconvert.s(1.75f))
    uint64_t x8_1
    
    if (temp0_1 s> 8)
        x8_1 = zx.q(temp0_1)
    else
        x8_1 = 8
    
    arg1[1] = x8_1.d
    result = _spRealloc(x0, x8_1 << 3)
    x8 = *arg1
    *(arg1 + 8) = result

*arg1 = x8 + 1
*(result + (sx.q(x8) << 3)) = arg2
return result
