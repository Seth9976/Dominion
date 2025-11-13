// 函数: spTimelineArray_setSize
// 地址: 0xfc08e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = arg1[1]
*arg1 = arg2

if (x8 s< arg2)
    int64_t x0 = *(arg1 + 8)
    uint32_t temp0_1 = vcvts_s32_f32(float.s(arg2) * fconvert.s(1.75f))
    uint64_t x8_1
    
    if (temp0_1 s> 8)
        x8_1 = zx.q(temp0_1)
    else
        x8_1 = 8
    
    arg1[1] = x8_1.d
    *(arg1 + 8) = _spRealloc(x0, x8_1 << 3)

return arg1
