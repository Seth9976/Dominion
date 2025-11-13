// 函数: _Z24Feast_Achievement_OnPlayPK6CardIDi
// 地址: 0xa26b74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x8_1 = *(*(DomGetContext() + 0x10) + 0x10)
int32_t x19

if (x8_1 == 0 || *x8_1 != 2)
    x19 = 0
    
    if ((CardIs(0, 0x20f) & 1) != 0)
        return 1
else
    x19 = x8_1[7]
    
    if ((CardIs(zx.q(x19), 0x20f) & 1) != 0)
        return 1

return CardIs(zx.q(x19), 0x619) __tailcall
