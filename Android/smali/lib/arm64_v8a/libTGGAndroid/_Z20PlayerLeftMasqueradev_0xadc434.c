// 函数: _Z20PlayerLeftMasqueradev
// 地址: 0xadc434
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
DomGame* x0_1 = *(x0 + 8)
int32_t x20 = (*(x0 + 0x18) + 1) s% *(x0_1 + 0xd40)

while ((HasOngoing(x0_1, zx.q(x20), 4, 0, 0) & 1) == 0)
    x0_1 = *(x0 + 8)
    x20 = (x20 + 1) s% *(x0_1 + 0xd40)

return zx.q(x20)
