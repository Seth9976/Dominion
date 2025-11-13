// 函数: _Z6Miseryv
// 地址: 0xa97be8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = HasState(0xd4e)

if ((result.d & 1) != 0)
    return result

int32_t x19 = 0xd4d

if ((HasState(0xd4d) & 1) != 0)
    MoveCardToPlayer(GetState(0xd4d), 0x3f1, 0xffffffff, 6, 0, 0, nullptr, 0xb)
    x19 = 0xd4e

return TakeState(zx.q(x19)) __tailcall
