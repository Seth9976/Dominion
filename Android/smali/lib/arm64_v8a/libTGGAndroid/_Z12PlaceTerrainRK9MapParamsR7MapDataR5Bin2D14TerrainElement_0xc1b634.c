// 函数: _Z12PlaceTerrainRK9MapParamsR7MapDataR5Bin2D14TerrainElement
// 地址: 0xc1b634
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x10_1 = *((sx.q(arg4.d) - 1) * 0x1a0 + 0x1156894)

if (x10_1 == 0)
    return PlaceTrees(arg1, arg2, arg3, arg4, (sx.q(arg4.d) - 1) * 0x1a0 + 0x1156898) __tailcall

if (x10_1 == 1)
    return PlaceMountains(arg1, arg2, arg3, arg4, (sx.q(arg4.d) - 1) * 0x1a0 + 0x1156898) __tailcall

pthread_kill(pthread_self(), 6)
XNoReturn()
return GetMapGfxTest() __tailcall
