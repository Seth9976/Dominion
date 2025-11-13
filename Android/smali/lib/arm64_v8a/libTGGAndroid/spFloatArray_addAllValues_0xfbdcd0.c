// 函数: spFloatArray_addAllValues
// 地址: 0xfbdcd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_40 = v9
int64_t v8
int64_t var_38 = v8

if (arg4 s< 1)
    return 

int32_t* x20_1 = arg1
int64_t i = sx.q(arg3)
v8.d = fconvert.s(1.75f)

do
    int32_t x8_4 = *x20_1
    v9.d = *(arg2 + (i << 2))
    
    if (x8_4 == x20_1[1])
        int64_t x0 = *(x20_1 + 8)
        uint32_t temp0_1 = vcvts_s32_f32(float.s(x8_4) f* v8.d)
        uint64_t x8_3
        
        if (temp0_1 s> 8)
            x8_3 = zx.q(temp0_1)
        else
            x8_3 = 8
        
        x20_1[1] = x8_3.d
        arg1 = _spRealloc(x0, x8_3 << 2)
        x8_4 = *x20_1
        *(x20_1 + 8) = arg1
    else
        arg1 = *(x20_1 + 8)
    
    i += 1
    *x20_1 = x8_4 + 1
    arg1[sx.q(x8_4)] = v9.d
while (i s< sx.q(arg4 + arg3))
