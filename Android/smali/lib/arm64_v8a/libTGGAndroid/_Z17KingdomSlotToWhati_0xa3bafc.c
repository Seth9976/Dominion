// 函数: _Z17KingdomSlotToWhati
// 地址: 0xa3bafc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0xffffffff)
    return 0

return zx.q(*(*(DomGetContext() + 8) + (zx.q(arg1 + 0x13) << 4) + 0x152c))
