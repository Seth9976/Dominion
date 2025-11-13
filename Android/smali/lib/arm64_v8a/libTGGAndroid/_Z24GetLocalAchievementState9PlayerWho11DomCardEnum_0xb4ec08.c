// 函数: _Z24GetLocalAchievementState9PlayerWho11DomCardEnum
// 地址: 0xb4ec08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0xffffffff)
    return nullptr

void* x0_2 = GameGetPlayer(ActiveGame() + 8, zx.q(arg1))
int32_t x8_1 = *(x0_2 + 0x14)
GameProfile* result_1

if (x8_1 == 0x3e8)
    GameProfile* result = GameProfilesTryGetByIndex(zx.q(*(x0_2 + 0x18)))
    result_1 = result
    
    if (result == 0)
        return result
else
    int32_t x8_2
    int32_t x20_2
    
    if (x8_1 == 1)
        x20_2 = *(x0_2 + 0x18)
        x8_2 = *(GetActiveProfile() + 0x42ac)
    
    if (x8_1 != 1 || x20_2 != x8_2)
        return 0
    
    result_1 = GetActiveProfile()

return SyncedDataGet(result_1, zx.q(SyncedDataKeyFromAchievement(zx.q(arg2))))
