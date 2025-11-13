// 函数: _Z19UI2GetScrollExtentsR3UI2RK4Vec2S3_R5RectF
// 地址: 0x1040d38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x1444)
float v0
float v1
float v2
float v3

if (x8 u> 9)
label_1040df8:
    pthread_kill(pthread_self(), 6)
    arg4, v0, v1, v2 = XNoReturn()
    v3 = fneg(v2)
    v2 = 0f
else
    v3 = *(arg3 + 4)
    float v4 = *(arg2 + 4)
    v2 = 0f
    int32_t x9_1 = 1 << x8
    v0 = vmax_f32(*arg3 - *arg2, v2)
    
    if ((x9_1 & 0x92) != 0)
        v1 = fneg(v0)
        v0 = 0f
    label_1040db4:
        
        if (x8 u> 9)
            goto label_1040df8
    else
        if ((x9_1 & 0x124) != 0)
            v1 = v0 * fconvert.s(-0.5f)
            v0 = v0 * fconvert.s(0.5f)
            goto label_1040db4
        
        v1 = 0f
        
        if ((1 << x8 & 0x248) == 0 || x8 u> 9)
            goto label_1040df8
    
    int32_t x9_3 = 1 << x8
    v2 = vmax_f32(v3 - v4, v2)
    
    if ((x9_3 & 0xe) != 0)
        v3 = fneg(v2)
        v2 = 0f
    else if ((x9_3 & 0x70) != 0)
        v3 = v2 * fconvert.s(-0.5f)
        v2 = v2 * fconvert.s(0.5f)
    else
        v3 = 0f
        
        if ((1 << x8 & 0x380) == 0)
            goto label_1040df8

*arg4 = v1
*(arg4 + 4) = v3
*(arg4 + 8) = v0
*(arg4 + 0xc) = v2
return 1
