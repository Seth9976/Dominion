// 函数: _Z25Vassal_Achievement_OnPlayPK6CardIDi
// 地址: 0xa276d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x8_1 = *(*(DomGetContext() + 0x10) + 0x10)

if (x8_1 != 0 && *x8_1 == 2)
    return CardIs(zx.q(x8_1[7]), 0x205) __tailcall

return CardIs(0, 0x205) __tailcall
