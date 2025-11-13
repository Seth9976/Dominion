// 函数: _Z11CountTokens12DomTokenType
// 地址: 0xae0240
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
void* x0 = DomGetContext()
uint64_t x1

if (x19 != 0x600)
    x1 = zx.q(*(x0 + 0x18))
else
    x1 = 0xffffffff

return CountTokensPlayer(*(x0 + 8), x1, zx.q(x19)) __tailcall
