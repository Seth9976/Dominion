// 函数: _Z20CountTokensWhereType8DomWhere12DomTokenType
// 地址: 0xae01c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
bool x21 = true
void* x0 = DomGetContext()

if (x20 s> 0xe00)
    if (x20 != 0xe01 && x20 != 0x1200)
        x21 = false
else if (x20 != 0x601 && x20 != 0xc00)
    x21 = false

GameAssert(x21)
return CountTokensPile(*(x0 + 8), 0xffffffff, zx.q(x20), zx.q(arg1)) __tailcall
