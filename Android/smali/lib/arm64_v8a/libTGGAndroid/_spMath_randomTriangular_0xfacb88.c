// 函数: _spMath_randomTriangular
// 地址: 0xfacb88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v8 = arg2
float v9 = arg1
arg1 = arg1 + arg2
arg2 = fconvert.s(0.5f)
int64_t v10
v10.d = arg1 * arg2
float v0 = data_11bbe28(arg1, arg2)
float v1 = v8 - v9
float v2 = v10.d f- v9

if (v0 <= v2 / v1)
    return sqrt(v2 * v1 * v0) + v9

return v8 - sqrt((v8 f- v10.d) * v1 * (fconvert.s(1f) - v0))
