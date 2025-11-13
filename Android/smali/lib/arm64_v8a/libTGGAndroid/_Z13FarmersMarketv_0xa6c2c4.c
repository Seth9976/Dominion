// 函数: _Z13FarmersMarketv
// 地址: 0xa6c2c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Buy(1, 0)
int64_t result = GetBoardPile(0xc0f, true)

if (result.d == 0)
    return result

int32_t x19 = result.d
int32_t x0 = CountTokensWhereType(result, 0x601)

if (x0 s< 4)
    AddTokens(0x601, zx.q(x19), 1, 0)
    return MoneyPlus(x0 + 1, 0, false) __tailcall

NotifyResult(1)
MoveTokens(zx.q(x19), 0x3f1, 0x601, x0)
return TrashThis(0x3e9) __tailcall
