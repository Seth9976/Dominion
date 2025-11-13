// 函数: _Z14DomGameRematchb
// 地址: 0xb9cd74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d

if (*(GetClient() + 0x5068) == 2)
    GameClientJoinRematch(zx.q(*(GetClient() + 0x506c)), x19.b & 1)
    CompleteNetworkGame(zx.q(*(GetClient() + 0x506c)))
    return GameQueueExit(0, true) __tailcall

int32_t var_14

if ((IsCampaignMission(zx.q(*ActiveGame()), &var_14) & 1) != 0)
    *(CampaignGetStatus() + sx.q(var_14) * 0xc + 8) = 0
    SaveProfiles()
    return GameQueueRematchCampaign(var_14)

if ((x19 & 1) == 0)
    return GameQueueRematchLocal(0)

return GameQueueRematchLocal(*(ActiveGame() + 0x34))
