// 函数: _Z13SecretChamberv
// 地址: 0xa8466c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DiscardUpTo(CountHand(), 0xf, 7, 0x3b)
int32_t result_1
uint64_t result = zx.q(result_1)

if (result.d == 0)
    return result

return MoneyPlus(result.d, 0, false)
