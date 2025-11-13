// 函数: _Z24SetLocalAchievementState9PlayerWho11DomCardEnum20SyncedAchiementLevel
// 地址: 0xb4ecb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

GameProfile* result = GameGetPlayer(ActiveGame() + 8, zx.q(arg1))
int32_t x8 = *(result + 0x14)

if (x8 == 0x3e8)
    result = GameProfilesTryGetByIndex(zx.q(*(result + 0x18)))
    
    if (result != 0)
        SyncedDataSet(result, zx.q(SyncedDataKeyFromAchievement(zx.q(arg2))), zx.q(arg3))
        return SaveProfiles() __tailcall
else if (x8 == 1)
    int32_t x21_1 = *(result + 0x18)
    result = GetActiveProfile()
    
    if (x21_1 == *(result + 0x42ac))
        SyncedDataSet(GetActiveProfile(), zx.q(SyncedDataKeyFromAchievement(zx.q(arg2))), 
            zx.q(arg3))
        return SaveProfiles() __tailcall

return result
