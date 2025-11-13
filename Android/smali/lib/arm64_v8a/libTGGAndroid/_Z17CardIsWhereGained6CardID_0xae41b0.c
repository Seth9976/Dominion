// 函数: _Z17CardIsWhereGained6CardID
// 地址: 0xae41b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
void* x0_2 = CardGet(*(DomGetContext() + 8), zx.q(x19))
int32_t x21 = *(x0_2 + 0x14)
int32_t x20 = *(x0_2 + 0x18)
void* x0_5 = CardGet(*(DomGetContext() + 8), zx.q(x19))

if (*(x0_5 + 0xc) != x21 || *(x0_5 + 0x10) != x20)
    return 0

if (*(CardGet(*(DomGetContext() + 8), zx.q(x19)) + 0xc) == 0x3eb)
    void* x0_10 = DomGetContext()
    
    if (*GetPileHead(*(x0_10 + 8), 0x3eb, zx.q(*(x0_10 + 0x18))) != x19)
        return 0

return 1
