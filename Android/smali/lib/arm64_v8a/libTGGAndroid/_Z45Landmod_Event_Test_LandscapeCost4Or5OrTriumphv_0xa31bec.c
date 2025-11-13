// 函数: _Z45Landmod_Event_Test_LandscapeCost4Or5OrTriumphv
// 地址: 0xa31bec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0 = zx.q(*(gCampaignSetup + 0x19ac))

if (x0.d == 0xc1d)
    return 1

if (x0.d != 0xc27)
    return zx.q((*(DomDefGet(x0, 0x17) + 0xc4) & 0xfffffffe) == 4 ? 1 : 0)

return 0
