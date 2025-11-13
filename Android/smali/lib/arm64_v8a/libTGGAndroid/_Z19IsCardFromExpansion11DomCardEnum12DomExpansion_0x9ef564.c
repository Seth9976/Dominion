// 函数: _Z19IsCardFromExpansion11DomCardEnum12DomExpansion
// 地址: 0x9ef564
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8

if (arg1 s< 0)
    x8 = arg1 + 0xff
else
    x8 = arg1

return zx.q(arg2 == x8 s>> 8 ? 1 : 0)
