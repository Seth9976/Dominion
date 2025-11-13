// 函数: _Z9ToPileLocRK10DomPileLoc
// 地址: 0xaed440
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = zx.q(*arg1)

if (result.d != 0 && result.d != 0xffffffff)
    return zx.q(*(arg1 + 4))

return result
