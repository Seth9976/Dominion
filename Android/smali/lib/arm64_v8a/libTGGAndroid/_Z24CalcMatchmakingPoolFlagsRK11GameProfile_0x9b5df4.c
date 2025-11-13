// 函数: _Z24CalcMatchmakingPoolFlagsRK11GameProfile
// 地址: 0x9b5df4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = sx.q(*(arg1 + 0x7560))

if (x8.d u>= 3)
    pthread_kill(pthread_self(), 6)
    XNoReturn()
    return NumExpansions() __tailcall

int32_t x19 = *(&data_7a77e4 + (x8 << 2))
void var_2a0
memset(&var_2a0, 0, 0x280)
int32_t x0_2 = GetOwnedExpansionSetups(&var_2a0)
int64_t x8_2 = sx.q(x0_2) + 1
void* x9_1 = &var_2a0 + (sx.q(x0_2) << 4) - 0x10
int32_t i

do
    x8_2 -= 1
    
    if (x8_2 s< 1)
        break
    
    i = *x9_1
    x9_1 -= 0x10
while (i != 0x13)

if (x0_2 - (x8_2 s> 0 ? 1 : 0) s< 4)
    return 0x16

return zx.q(x19)
