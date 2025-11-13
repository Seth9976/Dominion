// 函数: _Z10RevealBoon8DomWhere
// 地址: 0xae2d30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
void* x0 = DomGetContext()
DomGame* x0_1
uint64_t x2

if (x19 != 0x476)
    x0_1 = *(x0 + 8)
    x2 = zx.q(*(x0 + 0x18))
else
    x0_1 = *(x0 + 8)
    x2 = zx.q(*(x0 + 0x18))
    
    if (x2.d == *(x0_1 + 0x19d4))
        x19 = 0x3e9
    else
        x19 = 0x3ee

int64_t x4

x4 = x19 == 0x3e9 ? 0 : 0xffffffff

char var_20 = 0
return DrawFateTo(x0_1, 0xd30, x2, zx.q(x19), x4, *(x0 + 0x40), zx.q(*(x0 + 0x48)), 0)
