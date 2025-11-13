// 函数: _Z20HasUsedWeeklyAttemptRK24WeeklyCampaignClientData
// 地址: 0xb3de04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetActiveProfile()
int32_t x8 = *arg1

for (int32_t* i = *(*(x0 + 0x7750) + (((zx.q(x8) | zx.q(x8 s>> 4)) & zx.q(*(x0 + 0x7758))) << 3)); 
        i != 0; i = *(i + 0x98))
    if (x8 == *i)
        return zx.q(zx.d(i[7].b) u>> 1) & 1

return 0
