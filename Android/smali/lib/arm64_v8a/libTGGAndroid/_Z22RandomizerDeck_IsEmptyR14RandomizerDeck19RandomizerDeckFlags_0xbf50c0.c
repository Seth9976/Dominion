// 函数: _Z22RandomizerDeck_IsEmptyR14RandomizerDeck19RandomizerDeckFlags
// 地址: 0xbf50c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((arg2 & 1) != 0 && *(arg1 + 0x2588) != 0)
    return 0

return zx.q((*(arg1 + 0x1904) | *(arg1 + 0xc80)) == 0 ? 1 : 0)
