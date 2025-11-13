// 函数: _Z22DefTypeIsDeepStructurePK6DefMap
// 地址: 0xc87200
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1 = *(arg1 + 0x18) - 1

if (x8_1 u> 0x10)
    return 1

if (x8_1 u< 0x11 && (0x1efbf u>> x8_1 & 1) != 0)
    return zx.q(0x11df0 u>> x8_1) & 1

pthread_kill(pthread_self(), 6)
return DefTypeCanBeInArray(XNoReturn()) __tailcall
