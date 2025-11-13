// 函数: _Z22FarmersMarket_CoinHintv
// 地址: 0xa6c298
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = GetBoardPile(0xc0f, true)

if (result.d == 0)
    return result

int32_t x0 = CountTokensWhereType(result, 0x601)

if (x0 s> 3)
    return 0

return zx.q(x0 + 1)
