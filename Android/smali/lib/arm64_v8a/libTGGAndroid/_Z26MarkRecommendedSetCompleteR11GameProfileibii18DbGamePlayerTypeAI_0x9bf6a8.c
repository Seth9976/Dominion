// 函数: _Z26MarkRecommendedSetCompleteR11GameProfileibii18DbGamePlayerTypeAI
// 地址: 0x9bf6a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = SyncedDataKeyFromRecommendedSet(arg2)

if (arg6 + 1 u>= 5)
    pthread_kill(pthread_self(), 6)
    int64_t x0_5
    int32_t* x1_2
    x0_5, x1_2 = XNoReturn()
    return IsCampaignMission(x0_5, x1_2) __tailcall

int32_t x8_1 = *(&data_7a7a90 + (sx.q(arg6 + 1) << 2))
uint64_t x2

if ((arg3.d & 1) != 0)
    x2 = zx.q(x8_1 + 0x186a0)
else
    x2 = zx.q(x8_1)

SyncedDataSet(arg1, zx.q(x0_1), x2)
return SaveProfiles() __tailcall
