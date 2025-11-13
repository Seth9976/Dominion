// 函数: _Z16StatsSubmitLocal10ProfileIdx12StatCategory10StatResult
// 地址: 0x9b1b80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg3
GameProfile* result = GameProfilesTryGetByIndex(arg1)

if (result == 0)
    return result

if (x20 == 0)
    *(result + 0x4344) |= 1
    SaveProfiles()

return SyncedDataIncrement(result, zx.q(SyncedDataKeyFromStat(zx.q(x20), zx.q(arg2)))) __tailcall
