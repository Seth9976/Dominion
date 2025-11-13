// 函数: _Z15UI2AcceptsHoverR3UI2
// 地址: 0x101b1cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(arg1 + 0x15ec)

if (x9 u> 6)
    pthread_kill(pthread_self(), 6)
    return UI2AcceptsClicks(XNoReturn()) __tailcall

if ((1 << x9 & 0x6e) != 0)
    return 1

if (x9 == 0)
    int32_t x8_1 = *(arg1 + 0x167c)
    
    if (x8_1 == 2)
        return zx.q(*(arg1 + 0x1528) != 0 ? 1 : 0)
    
    if (x8_1 == 5)
        return 1
    
    if (x8_1 == 3)
        return zx.q(zx.d(*(arg1 + 0x15b4)) != 0 ? 1 : 0)

return 0
