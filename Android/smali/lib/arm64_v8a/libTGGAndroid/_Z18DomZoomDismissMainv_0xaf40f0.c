// 函数: _Z18DomZoomDismissMainv
// 地址: 0xaf40f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(gDomClient + 0x1d01c))
int64_t x8 = *(gDomClient + 0x205e0)
void* x20 = x8 + x9 * 0x21d8
int32_t x11 = *(x20 + 0x178)
uint64_t x10_1

if (x11 != 0)
    x10_1 = zx.q(x11.w)

uint64_t result

if (x11 == 0 || x10_1.d u>= *(gDomClient + 0x205e8) || *(x8 + x10_1 * 0x21d8 + 0x21d0) != x11
        || *(x8 + x10_1 * 0x21d8 + 0x1f78) != 0)
    void* x21_1 = x8 + x9 * 0x21d8
    UI2Free(x21_1 + 0x2148)
    UI2Free(x21_1 + 0x214c)
    UI2Free(x21_1 + 0x2150)
    UI2Free(x21_1 + 0x2154)
    result = zx.q(*(x21_1 + 0x1f90))
    
    if (result.d != 0)
        result = SpineDestroy(result.d)
    
    int32_t x10_2 = *(gDomClient + 0x205f0)
    *(gDomClient + 0x205f0) = zx.d(*(x20 + 0x21d0))
    *(x20 + 0x21d0) = x10_2
    *(gDomClient + 0x205f4) -= 1
else
    int128_t v0
    v0.q = 0
    v0:8.q = 0
    void* x8_1 = x8 + x10_1 * 0x21d8
    int128_t var_f0
    __builtin_memset(&var_f0, 0, 0x20)
    var_f0.q = x20
    var_f0:8.d = 3
    int128_t var_e0
    var_e0:8.d = 0
    int32_t var_c8 = 1
    int128_t var_a0_1 = *(x8_1 + 0x3d8)
    int128_t var_90_1 = *(x8_1 + 0x3e8)
    int128_t var_c0_1 = *(x8_1 + 0x3b8)
    int128_t var_b0_1 = *(x8_1 + 0x3c8)
    int128_t var_50_1 = *(x8_1 + 0x428)
    int128_t var_60_1 = *(x8_1 + 0x418)
    int128_t var_70_1 = *(x8_1 + 0x408)
    int128_t var_80_1 = *(x8_1 + 0x3f8)
    result = MoveComponent<DomLoc, DomMoveCallback>::Move(x8 + x9 * 0x21d8 + 0x258, &var_c8, 6, 1)

*(gDomClient + 0x1d01c) = 0
return result
