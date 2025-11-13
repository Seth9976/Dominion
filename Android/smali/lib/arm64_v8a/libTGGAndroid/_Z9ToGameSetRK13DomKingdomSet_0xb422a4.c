// 函数: _Z9ToGameSetRK13DomKingdomSet
// 地址: 0xb422a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg1

if (x8 == 0)
    return 1 | zx.q(*(arg1 + 8)) << 0x20

if (x8 != 1)
    pthread_kill(pthread_self(), 6)
    return SetGalleryClick(XNoReturn()) __tailcall

void* x8_1 = *(arg1 + 8)

if (x8_1 == 0)
    return (0xffffffff & x8_1) << 0x20

return 2 | zx.q(*(x8_1 + 4)) << 0x20
