// 函数: _Z27Patrol_Achievement_OnResultPK6CardIDi
// 地址: 0xa84d58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 == 4 && (CardIs(zx.q(*arg1), 8) & 1) != 0 && (CardIs(zx.q(*(arg1 + 4)), 8) & 1) != 0
        && (CardIs(zx.q(*(arg1 + 8)), 8) & 1) != 0)
    return CardIs(zx.q(*(arg1 + 0xc)), 8) __tailcall

return 0
