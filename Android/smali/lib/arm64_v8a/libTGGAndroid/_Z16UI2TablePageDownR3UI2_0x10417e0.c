// 函数: _Z16UI2TablePageDownR3UI2
// 地址: 0x10417e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg1 + 0x1528))

if (x8.d u> 3)
    pthread_kill(pthread_self(), 6)
    UI2* x0_2
    UI2* x1
    UI2ClickInfo* x2
    x0_2, x1, x2 = XNoReturn()
    return UI2TableScroll(x0_2, x1, x2) __tailcall

float v0 = *(arg1 + 0x1760)
UI2& i = arg1

switch (x8)
    case 1
        *(i + 0x13ac) = *(i + 0x13ac) - v0
    case 2
        *(i + 0x13a8) = *(i + 0x13a8) + 0f
    case 3
        *(i + 0x13ac) = v0 + *(i + 0x13ac)

int64_t result = UI2ClampScrollDelta(i, nullptr)

do
    *(i + 0x1378) = 2
    i = *(i + 0x17d0)
while (i != 0)

return result
