// 函数: _Z15DomClearKingdomR14DomSetupConfig
// 地址: 0x9ec85c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0xc00) = 0
int128_t v1 = *(DEFAULT_LANDSCAPE_MODIFIERS + 0x10)
int128_t v2 = *(DEFAULT_LANDSCAPE_MODIFIERS + 0x20)
int32_t x9 = *(DEFAULT_LANDSCAPE_MODIFIERS + 0x30)
int64_t i = 0
*(arg1 + 0xbc8) = *DEFAULT_LANDSCAPE_MODIFIERS
*(arg1 + 0xbd8) = v1
*(arg1 + 0xbe8) = v2
*(arg1 + 0xbf8) = x9
*(arg1 + 0xbfc) = 0
*arg1 = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x30) = 0
*(arg1 + 0x40) = 0
*(arg1 + 0x50) = 0
*(arg1 + 0x60) = 0
*(arg1 + 0x70) = 0
*(arg1 + 0x80) = 0
*(arg1 + 0x90) = 0
*(arg1 + 0xa0) = 0
__builtin_memset(arg1 + 0x188, 0, 0x3c)
*(arg1 + 0xdc) = zx.o(0)
*(arg1 + 0xc0) = zx.o(0)
*(arg1 + 0xd0) = zx.o(0)
*(arg1 + 0xb0) = zx.o(0)
*(arg1 + 0x124) = zx.o(0)
*(arg1 + 0x118) = zx.o(0)
*(arg1 + 0x108) = zx.o(0)
*(arg1 + 0xf8) = zx.o(0)
*(arg1 + 0x16c) = zx.o(0)
*(arg1 + 0x150) = zx.o(0)
*(arg1 + 0x160) = zx.o(0)
*(arg1 + 0x140) = zx.o(0)

do
    i += 0x10
while (i != 0x6b0)

void* __offset(DomSetupConfig, 0x9d8) x20 = arg1 + 0x9d8
size_t x21 = 0x1f0
*(arg1 + 0x16f4) = 0
int128_t v0

while (*(x20 - 0x10) != 0)
    int32_t x9_9 = *(x20 - 8)
    int32_t x8_1 = *(x20 - 4)
    
    if (x9_9 == x8_1)
        v0, v1 = memmove(x20 - 0x10, x20, x21)
    else if (x9_9 != 0 || x8_1 != 0xa)
        *(x20 - 8) = 0xa00000000
    
    x21 -= 0x10
    x20 += 0x10
    
    if (x21 == -0x10)
        break

v1 = data_71cd80
v0.q = 0x200000000
v0:8.q = 0x200000000
*(arg1 + 0xbc8) = v0
*(arg1 + 0xbd8) = v0
*(arg1 + 0xbe8) = v1
*(arg1 + 0xbf8) = 0
return memset(arg1 + 0x1710, 0, 0x280) __tailcall
