// 函数: _Z15DailyInProgressv
// 地址: 0xb3f0a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()
int32_t x9 = *(x0 + 0x7600)
int64_t var_20 = *(x0 + 0x75f8)
int32_t var_18 = x9
return zx.q(GetDailySeedTitleResumeState(&var_20) == 2 ? 1 : 0)
