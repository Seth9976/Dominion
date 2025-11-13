// 函数: _Z28MigrateRecommendedSetResultsR11GameProfilePK20RecommendedSetResulti
// 地址: 0x9dcc00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 s< 1)
    return 

uint64_t i_1 = zx.q(arg3)
void* __offset(RecommendedSetResult, 0x4) x22_1 = arg2 + 4
uint64_t i

do
    SyncedDataSet(arg1, zx.q(*(x22_1 - 4) + 0x10c8e0), 
        zx.q(SyncedAchiementLevelFromAILevel(*x22_1, zx.q(*(x22_1 + 4)), false)))
    i = i_1
    i_1 -= 1
    x22_1 += 0x14
while (i != 1)
