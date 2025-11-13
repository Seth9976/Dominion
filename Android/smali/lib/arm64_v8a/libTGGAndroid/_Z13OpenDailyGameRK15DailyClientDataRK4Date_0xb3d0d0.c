// 函数: _Z13OpenDailyGameRK15DailyClientDataRK4Date
// 地址: 0xb3d0d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = GetDailyGameIndex(zx.q(*arg1))

if (x0_1 != 0)
    int32_t var_18 = 1
    int32_t var_14_1 = x0_1
    LocalGameExists(&var_18)

GameQueueResume(GetDailyGameIndex(zx.q(*arg1)))
void* result = GetClient()
int64_t x9 = *arg2
*(result + 0x5050) = *(arg2 + 8)
*(result + 0x5048) = x9
return result
