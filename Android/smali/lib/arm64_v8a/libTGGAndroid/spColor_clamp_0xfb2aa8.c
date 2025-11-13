// 函数: spColor_clamp
// 地址: 0xfb2aa8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t v1 = *arg1
float result = 0f

if (not(v1 f< 0f))
    result = fconvert.s(1f)

if (v1 f< 0f || not(v1 f<= result))
    *arg1 = result

v1 = arg1[1]
result = 0f

if (not(v1 f< 0f))
    result = fconvert.s(1f)

if (v1 f< 0f || not(v1 f<= result))
    arg1[1] = result

v1 = arg1[2]
result = 0f

if (not(v1 f< 0f))
    result = fconvert.s(1f)

if (v1 f< 0f || not(v1 f<= result))
    arg1[2] = result

v1 = arg1[3]
result = 0f

if (not(v1 f< 0f))
    result = fconvert.s(1f)

if (v1 f< 0f || not(v1 f<= result))
    arg1[3] = result

return result
