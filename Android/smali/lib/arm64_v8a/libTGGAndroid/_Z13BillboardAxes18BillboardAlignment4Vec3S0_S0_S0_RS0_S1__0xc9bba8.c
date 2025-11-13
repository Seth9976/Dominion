// 函数: _Z13BillboardAxes18BillboardAlignment4Vec3S0_S0_S0_RS0_S1_
// 地址: 0xc9bba8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1.d u> 4)
    pthread_kill(pthread_self(), 6)
    int64_t x0_1
    int64_t x1
    int64_t x2
    int64_t x3
    int64_t x4
    int64_t x5
    int64_t x6
    int64_t x7
    x0_1, x1, x2, x3, x4, x5, x6, x7 = XNoReturn()
    XAsset* lr
    return Calc3DBillboard(x0_1, x1, x2, x3, x4, x5, x6, x7, lr) __tailcall

float entry_v3
float entry_v0 = entry_v0 - entry_v3
float entry_v4
float entry_v1 = entry_v1 - entry_v4
float entry_v5
float entry_v2 = entry_v2 - entry_v5
float arg_0
float arg_4
float arg_8
float arg_10
float arg_14
float arg_18

switch (arg1.d)
    case 0
        entry_v3 = entry_v1 * arg_8 - entry_v2 * arg_4
        entry_v4 = entry_v2 * arg_0 - arg_8 * entry_v0
        entry_v5 = arg_4 * entry_v0 - entry_v1 * arg_0
        *(arg2 + 8) = entry_v5
        *arg2 = entry_v3
        *(arg2 + 4) = entry_v4
        *arg3 = fneg(entry_v2 * entry_v4 - entry_v1 * entry_v5)
        *(arg3 + 4) = fneg(entry_v0 * entry_v5 - entry_v2 * entry_v3)
        *(arg3 + 8) = fneg(entry_v1 * entry_v3 - entry_v0 * entry_v4)
    case 1
        *arg3 = fneg(arg_0)
        *(arg3 + 4) = fneg(arg_4)
        *(arg3 + 8) = fneg(arg_8)
        *arg2 = entry_v1 * arg_8 - entry_v2 * arg_4
        *(arg2 + 4) = entry_v2 * arg_0 - arg_8 * entry_v0
        *(arg2 + 8) = arg_4 * entry_v0 - entry_v1 * arg_0
    case 2
        *(arg2 + 8) = arg_18
        float v19 = entry_v2 * arg_10
        *arg2 = arg_10
        *(arg2 + 4) = arg_14
        float v17 = entry_v1 * arg_10
        entry_v2 = entry_v2 * arg_14 - entry_v1 * arg_18
        entry_v1 = entry_v0 * arg_18 - v19
        entry_v4 = fneg(entry_v1)
        entry_v0 = v17 - entry_v0 * arg_14
        *arg3 = fneg(entry_v2)
        *(arg3 + 4) = entry_v4
        *(arg3 + 8) = fneg(entry_v0)
        
        if (not(arg_4 * entry_v4 - arg_0 * entry_v2 - arg_8 * entry_v0 <= 0f))
            *arg3 = entry_v2
            *(arg3 + 4) = entry_v1
            *(arg3 + 8) = entry_v0
    case 3
        *arg2 = arg_10
        *(arg2 + 4) = arg_14
        *(arg2 + 8) = arg_18
        *arg3 = fneg(arg_4 * arg_18 - arg_8 * arg_14)
        *(arg3 + 4) = fneg(arg_8 * arg_10 - arg_0 * arg_18)
        *(arg3 + 8) = fneg(arg_0 * arg_14 - arg_4 * arg_10)
    case 4
        *arg2 = fneg(arg_4 * arg_18 - arg_8 * arg_14)
        *(arg2 + 4) = fneg(arg_8 * arg_10 - arg_0 * arg_18)
        *(arg2 + 8) = fneg(arg_0 * arg_14 - arg_4 * arg_10)
        *arg3 = fneg(arg_0)
        *(arg3 + 4) = fneg(arg_4)
        *(arg3 + 8) = fneg(arg_8)

entry_v0 = *arg2
entry_v1 = *(arg2 + 4)
entry_v2 = *(arg2 + 8)
entry_v3 = sqrt(entry_v0 * entry_v0 + entry_v1 * entry_v1 + entry_v2 * entry_v2)

if (entry_v3 >= float.s(0x3727c5ac))
    entry_v4 = fconvert.s(1f)
    entry_v3 = entry_v4 / (entry_v3 + float.s(0x3727c5ac))
    entry_v0 = entry_v0 * entry_v3
    entry_v1 = entry_v1 * entry_v3
    entry_v2 = entry_v2 * entry_v3
    entry_v3 = entry_v4 / sqrt(entry_v2 * entry_v2 + entry_v0 * entry_v0 + entry_v1 * entry_v1)
    entry_v0 = entry_v0 * entry_v3
    entry_v1 = entry_v1 * entry_v3
    entry_v2 = entry_v2 * entry_v3
else
    entry_v0 = *V0
    entry_v1 = *(V0 + 4)
    entry_v2 = *(V0 + 8)

*arg2 = entry_v0
*(arg2 + 4) = entry_v1
*(arg2 + 8) = entry_v2
entry_v0 = *arg3
entry_v1 = *(arg3 + 4)
entry_v2 = *(arg3 + 8)
entry_v3 = sqrt(entry_v0 * entry_v0 + entry_v1 * entry_v1 + entry_v2 * entry_v2)

if (not(entry_v3 >= float.s(0x3727c5ac)))
    entry_v1 = *(V0 + 4)
    entry_v2 = *(V0 + 8)
    *arg3 = *V0
    *(arg3 + 4) = entry_v1
    *(arg3 + 8) = entry_v2
    return 

entry_v4 = fconvert.s(1f)
entry_v3 = entry_v4 / (entry_v3 + float.s(0x3727c5ac))
entry_v0 = entry_v0 * entry_v3
entry_v1 = entry_v1 * entry_v3
entry_v2 = entry_v2 * entry_v3
entry_v3 = entry_v4 / sqrt(entry_v2 * entry_v2 + entry_v0 * entry_v0 + entry_v1 * entry_v1)
*arg3 = entry_v0 * entry_v3
*(arg3 + 4) = entry_v1 * entry_v3
*(arg3 + 8) = entry_v2 * entry_v3
