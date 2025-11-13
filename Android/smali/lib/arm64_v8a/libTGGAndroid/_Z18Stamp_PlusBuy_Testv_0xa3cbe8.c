// 函数: _Z18Stamp_PlusBuy_Testv
// 地址: 0xa3cbe8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *(gCampaignSetup + 0x19ac)

if (x19 != 0 && (zx.d(*(DomDefGet(zx.q(x19), 0x17) + 0xc8)) & 4) == 0)
    return zx.q(zx.d(*(DomDefGet(zx.q(x19), 0x17) + 0xc8)) u>> 1) & 1

return 1
