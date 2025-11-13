// 函数: _float32_unpack
// 地址: 0x1083c24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

double value = float.d(arg1 & 0x1fffff)

if (arg1.d s< 0)
    value = fneg(value)

double result
result.d = fconvert.s(ldexp((arg1.d u>> 0x15 & 0x3ff) - 0x314, value))
return result
