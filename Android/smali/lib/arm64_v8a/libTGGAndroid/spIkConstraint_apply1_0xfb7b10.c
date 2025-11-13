// 函数: spIkConstraint_apply1
// 地址: 0xfb7b10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x23 = arg1[2]
float v8 = arg7
int128_t v9 = arg6
int128_t v10 = arg5

if (arg1[0xc].d == 0)
    arg5, arg6 = spBone_updateAppliedTransform(arg1)

arg5.d = *(x23 + 0x64)
float v5 = *(x23 + 0x68)
arg6.d = *(x23 + 0x70)
float v3 = *(x23 + 0x74)
arg7 = v10.d f- *(x23 + 0x6c)
float v4 = v9.d f- *(x23 + 0x78)
v9.d = *(arg1 + 0x44)
v10.d = arg1[9].d
float v6 = arg5.d f* v3 - v5 f* arg6.d
v3 = v3 * arg7
arg5.d = arg5.d f* v4
arg6.d = arg6.d f* arg7
arg7 = fconvert.s(1f) / v6
arg5.d = arg5.d f- arg6.d
arg6.d = arg7 * (v3 - v5 * v4)
arg5.d = arg7 f* arg5.d
int64_t v12
v12.d = arg6.d f- v9.d
int64_t v11
v11.d = arg5.d f- v10.d
float v0_1 = atan2f(v11.d, v12.d, arg7)
float v5_1 = arg1[0xb].d
float v1_1 = *(arg1 + 0x4c)
float v3_1 = arg1[0xa].d
float v2 = float.s(0x43340000)
v0_1 = v0_1 * float.s(0x42652ee0) - v5_1 - v1_1

if (v3_1 < 0f)
    v0_1 = v0_1 + v2

if (not(v0_1 <= v2))
    v0_1 = v0_1 + float.s(-0x3c4c0000)
else if (not(v0_1 >= float.s(0xc3340000)))
    v0_1 = v0_1 + float.s(0x43b40000)

float v4_1 = *(arg1 + 0x54)

if ((arg3 | arg2) != 0)
    float v6_1 = sqrt(v12.d f* v12.d + v11.d f* v11.d)
    v2 = v3_1 * *(*arg1 + 0x18)
    
    if (arg2 != 0 && v6_1 < v2)
    label_fb7c80:
        v2 = (v6_1 / v2 + fconvert.s(-1f)) * v8 + fconvert.s(1f)
        v3_1 = v3_1 * v2
        
        if (arg4 != 0)
            v4_1 = v4_1 * v2
    else if (arg3 != 0 && not(v6_1 <= v2) && not(v2 <= float.s(0x38d1b717)))
        goto label_fb7c80

return spBone_updateWorldTransformWith(arg1, v9, v10, v1_1 + v0_1 * v8, v3_1, v4_1, v5_1, 
    *(arg1 + 0x5c)) __tailcall
