// 函数: _Z20GameCenterDLCRestorev
// 地址: 0xf706f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *gGameCenter

if (x8 != 1 && x8 != 4)
    return 

XTrace("GameCenterQueryDLC")

if (*gGameCenter != 4)
    return 

char* var_420
int32_t x0_2 = GamecenterGetSkus(&var_420)
*(gGameCenter + 0x38) = 0xfffffffe
*(gGameCenter + 0x38) = GoogleGamcenterQueryDLC_Java(&var_420, x0_2).d
