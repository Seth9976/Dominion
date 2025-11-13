// 函数: _Z19UI2AutoFocusTextbox9UI2Handle
// 地址: 0x1024148
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(arg1.d) & 0xffff
int64_t x8 = *gUI2

if (*(x8 + mulu.dp.d(x9.d, 0x19a8) + 0x167c) == 3 && zx.d(*(x8 + x9 * 0x19a8 + 0x15b4)) != 0
        && zx.d(*(x8 + x9 * 0x19a8 + 0x15b6)) != 0)
    UI2SetFocus(arg1, nullptr, false)
    return 1

int32_t x19 = *(x8 + x9 * 0x19a8 + 0x1970)

if (x19 == 0)
    return 0

uint64_t x21 = 0
int32_t x0_2
bool cond:0_1

do
    x0_2 = UI2AutoFocusTextbox(zx.q(*(x8 + x9 * 0x19a8 + (x21 << 0x20 s>> 0x1e) + 0x1870)))
    
    if ((x0_2 & 1) != 0)
        break
    
    cond:0_1 = x19 != x21.d + 1
    x21 = zx.q(x21.d + 1)
while (cond:0_1)
return zx.q(x0_2) & 1
