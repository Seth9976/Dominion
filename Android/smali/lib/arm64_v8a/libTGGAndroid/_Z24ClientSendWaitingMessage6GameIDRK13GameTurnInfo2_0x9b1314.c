// 函数: _Z24ClientSendWaitingMessage6GameIDRK13GameTurnInfo2
// 地址: 0x9b1314
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_28 = arg1
uint128_t v0 = *(arg2 + 8)
uint128_t var_20 = vextq_s8(v0, v0, 8)
return NetworkSendMessage(zx.q(*(GetClient() + 0x14)), 0xf42b1, 0x18, &var_28)
