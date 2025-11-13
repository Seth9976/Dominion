// 函数: _Z10GameRandomR7DomGamei
// 地址: 0xbb9dc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_3 = *(arg1 + 0x150c)

if ((x8_3 == 5 || x8_3 == 3) && zx.d(*(arg1 + 0x1524)) != 0)
    return DomAIRandomInt(zx.q(*(arg1 + 0x1520)), arg2) __tailcall

return RandomInt(arg1, arg2) __tailcall
