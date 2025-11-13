// 函数: _Z26GameCenterServiceConnectedb
// 地址: 0xf70214
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((arg1.d & 1) == 0)
    return 

XTrace("GameCenterQueryDLC")

if (*gGameCenter != 4)
    return 

char* var_420
int32_t x0_1 = GamecenterGetSkus(&var_420)
*(gGameCenter + 0x38) = 0xfffffffe
*(gGameCenter + 0x38) = GoogleGamcenterQueryDLC_Java(&var_420, x0_1).d
