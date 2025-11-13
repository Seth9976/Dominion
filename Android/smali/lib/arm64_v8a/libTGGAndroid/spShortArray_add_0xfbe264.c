// 函数: spShortArray_add
// 地址: 0xfbe264
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg1
int64_t result

if (x8 != arg1[1])
    result = *(arg1 + 8)
else
    int64_t x0 = *(arg1 + 8)
    uint32_t temp0_1 = vcvts_s32_f32(float.s(x8) * fconvert.s(1.75f))
    uint32_t x8_1
    
    x8_1 = temp0_1 s> 8 ? temp0_1 : 8
    
    arg1[1] = x8_1
    result = _spRealloc(x0, zx.q(x8_1 << 1))
    x8 = *arg1
    *(arg1 + 8) = result

*arg1 = x8 + 1
*(result + (sx.q(x8) << 1)) = arg2
return result
