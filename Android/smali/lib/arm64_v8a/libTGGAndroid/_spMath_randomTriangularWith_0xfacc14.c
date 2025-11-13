// 函数: _spMath_randomTriangularWith
// 地址: 0xfacc14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0 = data_11bbe28()
float v1 = arg2 - arg1
float v2 = arg3 - arg1

if (v0 <= v2 / v1)
    return sqrt(v2 * v1 * v0) + arg1

return arg2 - sqrt((arg2 - arg3) * v1 * (fconvert.s(1f) - v0))
