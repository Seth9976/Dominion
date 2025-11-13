// 函数: spUnsignedShortArray_addAll
// 地址: 0xfbe630
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_40 = v8

if (*arg2 s< 1)
    return 

int32_t* x20_1 = arg1
int64_t i = 0
v8.d = fconvert.s(1.75f)

do
    int32_t x8_3 = *x20_1
    int16_t x23_1 = *(*(arg2 + 8) + (i << 1))
    
    if (x8_3 == x20_1[1])
        int64_t x0 = *(x20_1 + 8)
        uint32_t temp0_1 = vcvts_s32_f32(float.s(x8_3) f* v8.d)
        uint32_t x8_2
        
        x8_2 = temp0_1 s> 8 ? temp0_1 : 8
        
        x20_1[1] = x8_2
        arg1 = _spRealloc(x0, zx.q(x8_2 << 1))
        x8_3 = *x20_1
        *(x20_1 + 8) = arg1
    else
        arg1 = *(x20_1 + 8)
    
    *x20_1 = x8_3 + 1
    *(arg1 + (sx.q(x8_3) << 1)) = x23_1
    i += 1
while (i s< sx.q(*arg2))
