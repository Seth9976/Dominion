// 函数: _spMath_pow2_apply
// 地址: 0xfaccc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

double v1
v1.d = fconvert.s(0.5f)

if (arg1.d f<= v1.d)
    arg1.d = arg1.d f+ arg1.d
    arg1 = fconvert.d(arg1.d)
    arg1.d = fconvert.s(arg1 * arg1 * fconvert.d(0.5))
    return arg1

v1.d = fconvert.s(-1f)
arg1.d = arg1.d f+ v1.d
arg1.d = arg1.d f+ arg1.d
arg1 = fconvert.d(arg1.d)
arg1.d = fconvert.s(arg1 * arg1 * fconvert.d(-0.5) + fconvert.d(1.0))
return arg1
