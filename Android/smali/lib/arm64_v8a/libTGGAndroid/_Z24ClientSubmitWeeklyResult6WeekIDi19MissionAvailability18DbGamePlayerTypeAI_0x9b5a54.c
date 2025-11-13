// 函数: _Z24ClientSubmitWeeklyResult6WeekIDi19MissionAvailability18DbGamePlayerTypeAI
// 地址: 0x9b5a54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_20 = arg1
int32_t var_1c = arg2
int32_t var_18 = arg3
int32_t var_14 = arg4
void* result = GetClient()

if (*(result + 0x18) != 3)
    return result

return NetworkSendMessage(zx.q(*(result + 0x14)), 0xf42d3, 0x10, &var_20)
