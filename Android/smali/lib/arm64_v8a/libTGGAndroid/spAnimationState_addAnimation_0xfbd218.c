// 函数: spAnimationState_addAnimation
// 地址: 0xfbd218
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v8 = arg5
void* result

if (arg1[1].d s<= arg2)
    int64_t x0_2 =
        _spCalloc(sx.q(arg2 + 1), 8, "..\..\ExternalCode\spine-c\src\spine\AnimationState.c", 0x325)
    memcpy(x0_2, arg1[2], sx.q(arg1[1].d) << 3)
    _spFree(arg1[2])
    arg1[2] = x0_2
    arg1[1].d = arg2 + 1
label_fbd318:
    result = _spAnimationState_trackEntry(arg1, zx.q(arg2), arg3, zx.q(arg4), 0)
    _spAnimationState_setCurrent(arg1, zx.q(arg2), result, 1)
    _spEventQueue_drain(arg1[9])
else
    int64_t* i = *(arg1[2] + (sx.q(arg2) << 3))
    
    if (i == 0)
        goto label_fbd318
    
    int64_t* i_1
    
    do
        i_1 = i
        i = i[1]
    while (i != 0)
    
    void* result_1 = _spAnimationState_trackEntry(arg1, zx.q(arg2), arg3, zx.q(arg4), i_1)
    result = result_1
    i_1[1] = result_1
    
    if (not(v8 > 0f))
        float v0 = *(i_1 + 0x44) f- i_1[8].d
        
        if (v0 == 0f)
            v8 = *(i_1 + 0x54)
        else
            float v1_1 = *(i_1 + 0x54)
            
            if (*(i_1 + 0x2c) != 0)
                v1_1 = float.s(vcvts_s32_f32(v1_1 / v0) + 1)
                v0 = v0 * v1_1
            else if (not(v0 > v1_1))
                v0 = v1_1
            
            v8 = v0 + v8 - spAnimationStateData_getMix(*arg1, *i_1, arg3, v0, v1_1)

*(result + 0x50) = v8
return result
