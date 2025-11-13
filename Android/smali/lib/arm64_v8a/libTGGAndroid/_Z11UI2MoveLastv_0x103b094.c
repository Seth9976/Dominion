// 函数: _Z11UI2MoveLastv
// 地址: 0x103b094
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *gUI2

if (x8 != 0)
    uint64_t x9_1 = zx.q(*(gUI2Editor + 0x6010))
    
    if (*(x8 + x9_1 * 0x19a8 + 0x1970) != 0)
        return UI2Move(2, x8 + zx.q(*(x8 + x9_1 * 0x19a8 + 0x1868)) * 0x19a8, V20) __tailcall

return UI2Move(0, nullptr, V20) __tailcall
