// 函数: _Z18StatsGetLocalValueRK12ProfileStats10StatResult12StatCategory
// 地址: 0x9dc780
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 == 2)
    return zx.q(*(arg1 + (zx.q(arg3) << 2) + 0xa0))

if (arg2 == 1)
    return zx.q(*(arg1 + (zx.q(arg3) << 2) + 0x8c))

if (arg2 == 0)
    return zx.q(*(arg1 + (zx.q(arg3) << 2) + 0x78))

pthread_kill(pthread_self(), 6)
GameProfile* x0_4
ProfileStats* x1
x0_4, x1 = XNoReturn()
return MigrateStats(x0_4, x1) __tailcall
