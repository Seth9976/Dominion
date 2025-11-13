// 函数: _Z18GameCenterQueryDLCv
// 地址: 0xf70274
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = XTrace("GameCenterQueryDLC")

if (*gGameCenter == 4)
    char* var_420
    int32_t x0_1 = GamecenterGetSkus(&var_420)
    *(gGameCenter + 0x38) = 0xfffffffe
    result = GoogleGamcenterQueryDLC_Java(&var_420, x0_1)
    *(gGameCenter + 0x38) = result.d

return result
