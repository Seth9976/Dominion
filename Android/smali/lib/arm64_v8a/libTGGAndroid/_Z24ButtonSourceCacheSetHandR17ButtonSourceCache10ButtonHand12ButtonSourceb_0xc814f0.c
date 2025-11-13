// 函数: _Z24ButtonSourceCacheSetHandR17ButtonSourceCache10ButtonHand12ButtonSourceb
// 地址: 0xc814f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(ButtonSourceCache, 0x48) x9

if (arg2 == 0)
    x9 = arg1 + 0x48
else
    x9 = arg1 + 0x50

*(x9 + sx.q(arg3) - 0x24) = arg4 & 1
