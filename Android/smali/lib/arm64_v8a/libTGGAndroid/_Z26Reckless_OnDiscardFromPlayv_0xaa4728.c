// 函数: _Z26Reckless_OnDiscardFromPlayv
// 地址: 0xaa4728
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = Trigger_GainCard()
int64_t x1

if ((CardIs(x0, 0x1012) & 1) != 0)
    x1 = 0x3ec
else
    x1 = 0x3e9

return ReturnToBoard(zx.q(x0.d), x1, 0x15) __tailcall
