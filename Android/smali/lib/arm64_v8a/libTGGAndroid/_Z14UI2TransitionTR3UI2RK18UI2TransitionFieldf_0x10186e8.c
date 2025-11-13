// 函数: _Z14UI2TransitionTR3UI2RK18UI2TransitionFieldf
// 地址: 0x10186e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v2 = *(arg2 + 4)
float v1 = *(arg2 + 8)

if (v2 != 0f)
    v1 = (arg3 - v1) / v2
    
    if (not(v1 < 0f))
        float temp0_1 = vmin_f32(v1, fconvert.s(1f))
        
        if (not(temp0_1 <= 0f))
            arg1 = zx.q(*(arg2 + 0xc))
            
            if (not(temp0_1 >= fconvert.s(1f)))
                return XCurveEvalNormal(arg1, temp0_1, 0f, fconvert.s(1f)) __tailcall
            
            goto label_1018708
else if (not(v1 > arg3))
    arg1 = zx.q(*(arg2 + 0xc))
label_1018708:
    
    if (arg1.d - 0xa u< 0xa)
        *(&data_8692dc + (sx.q(arg1.d - 0xa) << 2))
