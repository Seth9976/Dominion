// 函数: _Z16XCurveEvalNormalfff6XCurve
// 地址: 0xf92a24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v11
int64_t var_30 = v11

if (arg4.d u<= 0x1c)
    float v10_1 = arg1
    
    switch (arg4.d)
        case 6
            if (v10_1 <= fconvert.s(0.5f))
                arg2 = v10_1 + v10_1
            else
                arg2 = v10_1 + fconvert.s(-0.5f)
            
            return 
        case 7
            return 
        case 0xe
            arg1, arg4 = sinf(*CIRCLE_FULL * v10_1)
            return 
        case 0xf
            arg1, arg4 = sinf(v10_1 * v10_1 * (fconvert.s(3f) - (v10_1 + v10_1)) * *CIRCLE_FULL)
            return 
        case 0x13
            return 
        case 0x14
            arg1 = fconvert.s(-10f)
        label_f92c28:
            exp2f(v10_1 * arg1, arg2)
            int64_t v0
            v0.d = *TWO_PI
            v0.d = (v10_1 + float.s(0xbd99999a)) f* v0.d
            v0.d = v0.d f/ float.s(0x3e99999a)
            arg1, arg4 = sinf(v0.d)
            return 
        case 0x15
            arg1 = fconvert.s(-25f)
            goto label_f92c28
        case 0x18
            int64_t entry_x1
            int32_t entry_n
            arg1, arg4 = cosf(arg4, entry_x1, entry_n, *CIRCLE_FULL * v10_1)
            return 
        case 0x1c
            return 

pthread_kill(pthread_self(), 6)
DefScalarTrack* x0_1
int32_t x1
float v0_1
float v1_1
x0_1, x1, v0_1, v1_1 = XNoReturn()
return TrackScalarGetValue(x0_1, v0_1, x1, v1_1) __tailcall
