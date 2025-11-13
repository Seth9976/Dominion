// 函数: _Z13IsChameleoned6CardID
// 地址: 0xad1b88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1
void* x0 = DomGetContext()
int32_t x19 = HasOngoing(*(x0 + 8), zx.q(*(x0 + 0x18)), 0x13, x20, 0)

if (x20 != 0)
    int32_t x0_5 = PileSource(*(DomGetContext() + 8), zx.q(x20))
    void* x0_6 = DomGetContext()
    x19 ^= HasOngoing(*(x0_6 + 8), zx.q(*(x0_6 + 0x18)), 0x27, x0_5, 0)

return zx.q(x19) & 1
