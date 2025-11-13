// 函数: _Z9CanRotate8DomWhere
// 地址: 0xa18148
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int32_t i = *GetPileHead(*(x0 + 8), zx.q(arg1), 0xffffffff)

if (i == 0)
    return 0

int32_t x0_4 = CardWhat(*(x0 + 8), zx.q(i))
int32_t x0_6

do
    x0_6 = CardWhat(*(x0 + 8), zx.q(i))
    
    if (x0_6 != x0_4)
        break
    
    i = *(CardGet(*(x0 + 8), zx.q(i)) + 0x60)
while (i != 0)

return zx.q(x0_6 != x0_4 ? 1 : 0)
