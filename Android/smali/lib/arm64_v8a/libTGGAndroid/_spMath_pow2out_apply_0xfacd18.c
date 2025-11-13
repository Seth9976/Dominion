// 函数: _spMath_pow2out_apply
// 地址: 0xfacd18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

double v1
v1.d = fconvert.s(-1f)
arg1.d = arg1.d f+ v1.d
arg1 = fconvert.d(arg1.d)
arg1.d = fconvert.s(fconvert.d(1.0) - arg1 * arg1)
return arg1
