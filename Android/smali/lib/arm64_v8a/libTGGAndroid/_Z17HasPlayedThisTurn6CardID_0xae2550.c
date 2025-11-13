// 函数: _Z17HasPlayedThisTurn6CardID
// 地址: 0xae2550
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
void* x0 = DomGetContext()
int64_t x10 = sx.q(*(x0 + 0x18))
int64_t x11 = *(x0 + 8)
int64_t x8_1 = sx.q(*(x11 + x10 * 0x5a30 + 0x181cc))

if (x8_1.d s< 1)
    return 0

int64_t x9 = 0
int32_t x11_1

do
    x11_1 = *(x11 + x10 * 0x5a30 + 0x19b18 + (x9 << 2))
    x9 += 1
    
    if (x9 s>= x8_1)
        break
while (x11_1 != x19)

return zx.q(x11_1 == x19 ? 1 : 0)
