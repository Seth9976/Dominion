// 函数: _Z14IsRankedLockedRK27RealtimeMatchmakingSettings
// 地址: 0x9b5d80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_2a0
memset(&var_2a0, 0, 0x280)
int32_t x0_2 = GetOwnedExpansionSetups(&var_2a0)
int64_t x8_1 = sx.q(x0_2) + 1
void* x9_1 = &var_2a0 + (sx.q(x0_2) << 4) - 0x10
int32_t i

do
    x8_1 -= 1
    
    if (x8_1 s< 1)
        break
    
    i = *x9_1
    x9_1 -= 0x10
while (i != 0x13)
return zx.q(x0_2 - (x8_1 s> 0 ? 1 : 0) s< 4 ? 1 : 0)
