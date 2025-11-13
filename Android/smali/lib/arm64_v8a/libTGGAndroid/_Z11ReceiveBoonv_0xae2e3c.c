// 函数: _Z11ReceiveBoonv
// 地址: 0xae2e3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
char var_20 = 0
int64_t result =
    DrawFateTo(*(x0 + 8), 0xd30, zx.q(*(x0 + 0x18)), 0x3e9, 0, *(x0 + 0x40), zx.q(*(x0 + 0x48)), 0)

if (result.d == 0)
    return result

int32_t x19_1 = result.d
void* x0_2 = DomGetContext()

if ((HasOngoing(*(x0_2 + 8), zx.q(*(x0_2 + 0x18)), 0x2a, 0, 0) & 1) == 0)
    void* x0_6 = DomGetContext()
    PlayFate(*(x0_6 + 8), zx.q(*(x0_6 + 0x18)), zx.q(x19_1), 1)
else
    PlayBoonMayDelay(zx.q(x19_1), 1)

int32_t var_14 = x19_1
void* x0_8 = DomGetContext()
return DiscardFates(*(x0_8 + 8), zx.q(*(x0_8 + 0x18)), &var_14, 1, 0x3e9, 8)
