// 函数: _Z22GameIsDebugDrawFlagSet14DebugDrawFlags
// 地址: 0xf6fce8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gpGameData

if (x8 == 0)
    return 0

return zx.q((*(x8 + 0x38) & arg1) != 0 ? 1 : 0)
