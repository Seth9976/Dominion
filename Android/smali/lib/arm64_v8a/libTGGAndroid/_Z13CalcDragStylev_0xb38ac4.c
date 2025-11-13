// 函数: _Z13CalcDragStylev
// 地址: 0xb38ac4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((IsRearranging() & 1) != 0)
    return 1

if (GetLocalControlScheme() == 2)
    return 0

int32_t x10 = *(gDomClient + 0x207ac)
bool v
bool z
bool n

if (*(gDomClient + 0x20758) != 2)
    v = add_overflow(x10, 0xffffffff)
    z = x10 == 1
    n = x10 - 1 s< 0
else
    n = false
    z = true
    v = false

bool z_1

if (not(z) && n == v)
    z_1 = *(gDomClient + 0x2074c) == 1
else
    z_1 = false

if (not(z_1))
    return 3

return 2
