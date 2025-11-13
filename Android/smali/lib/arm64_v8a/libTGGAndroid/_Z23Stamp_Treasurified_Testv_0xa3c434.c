// 函数: _Z23Stamp_Treasurified_Testv
// 地址: 0xa3c434
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0 = zx.q(*(gCampaignSetup + 0x19ac))

if (x0.d == 0)
    return 1

return CardIsAffectedByCapitalism(x0) __tailcall
