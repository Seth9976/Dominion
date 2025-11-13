// 函数: _Z15DailyBestResultRK20DailySeedStatusEntryR21DailySeedResultColumn
// 地址: 0x9b59c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9_1 = *(arg1 + 4)

if (x9_1 == 1)
    *arg2 = 0
    return 0xa

if (x9_1 == 4)
    *arg2 = 2
    return 0xa

if (x9_1 == 3)
    *arg2 = 1
    return 0xa

int32_t result_1 = *(arg1 + 8)
int32_t result_2 = *(arg1 + 0xc)
uint64_t result

if (result_1 s> result_2)
    result = zx.q(result_1)
else
    result = zx.q(result_2)

if (result.d u>= 2)
    *arg2 = result_1 s< result_2 ? 1 : 0
    return result

int32_t x9 = *(arg1 + 0x10)
*arg2 = 2

if (x9 u> 1)
    return zx.q(*(arg1 + 0x10))

return 1
