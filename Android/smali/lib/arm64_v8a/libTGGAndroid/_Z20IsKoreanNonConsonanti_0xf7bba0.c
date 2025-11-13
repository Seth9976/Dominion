// 函数: _Z20IsKoreanNonConsonanti
// 地址: 0xf7bba0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((arg1 - 0xac00) u>> 2 u> 0xae8)
    return 0

return zx.q(ror.d(((arg1 - 0xac00) & 0xffff) * 0xb6db6db7, 2) u< 0x924924a ? 1 : 0)
