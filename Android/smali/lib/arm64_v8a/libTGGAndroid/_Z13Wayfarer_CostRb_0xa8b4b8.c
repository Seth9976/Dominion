// 函数: _Z13Wayfarer_CostRb
// 地址: 0xa8b4b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0_1 = zx.q(*(*(DomGetContext() + 8) + 0x19b0))

if (x0_1.d == 0)
    return 6

*arg1 = true
return zx.q(Cost(x0_1))
