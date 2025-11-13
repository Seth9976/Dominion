// 函数: _Z10DomGfxFreeR6DomGfx
// 地址: 0xae8d98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UI2Free(arg1 + 0x2148)
UI2Free(arg1 + 0x214c)
UI2Free(arg1 + 0x2150)
UI2Free(arg1 + 0x2154)
uint64_t result = zx.q(*(arg1 + 0x1f90))

if (result.d != 0)
    result = SpineDestroy(result.d)

int32_t x11 = *(gDomClient + 0x205f0)
*(gDomClient + 0x205f0) = zx.d(*(arg1 + 0x21d0))
*(arg1 + 0x21d0) = x11
*(gDomClient + 0x205f4) -= 1
return result
