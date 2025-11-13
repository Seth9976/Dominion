// 函数: _Z22ClientQueryDailyStatus15QueryDailyFlagsRK4DateS2_
// 地址: 0x9b5934
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1.d == 0)
    return 

int32_t var_30 = arg1.d
int32_t var_24_1 = *(arg2 + 8)
int64_t var_2c_1 = *arg2
int32_t var_18_1 = *(arg3 + 8)
int64_t var_20_1 = *arg3
arg1 = GetClient()

if (*(arg1 + 0x18) == 3)
    NetworkSendMessage(zx.q(*(arg1 + 0x14)), 0xf42cb, 0x1c, &var_30)
