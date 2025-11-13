// 函数: _Z13CardGaveMoney6CardID
// 地址: 0xaa141c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = arg1
void* x9 = *(DomGetContext() + 8)
uint64_t x8 = zx.q(*(x9 + 0x19b8))

if (x8.d s< 1)
    return 0

if (*(x9 + 0x39c88) == i)
    return 1

int64_t x12 = 0
int64_t x11_1

do
    x11_1 = x12
    
    if (x8 - 1 == x12)
        break
    
    x12 = x11_1 + 1
while (*(x9 + 0x39c8c + (x11_1 << 2)) != i)

return zx.q(x11_1 + 1 u< x8 ? 1 : 0)
