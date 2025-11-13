// 函数: _Z13Temple_OnGainv
// 地址: 0xa6c6dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = GetBoardPile(0xc13, false)
int32_t x0_1 = CountTokensWhereType(x0, 0x601)

if (x0_1 s>= 1)
    NotifyResult(1)

return MoveTokens(zx.q(x0.d), 0x3f1, 0x601, x0_1) __tailcall
