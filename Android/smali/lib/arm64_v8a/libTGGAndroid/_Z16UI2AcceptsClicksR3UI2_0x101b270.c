// 函数: _Z16UI2AcceptsClicksR3UI2
// 地址: 0x101b270
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg1 + 0x15ec))

if (x8.d u> 6)
    pthread_kill(pthread_self(), 6)
    return UI2AcceptsDrags(XNoReturn()) __tailcall

int32_t x8_1 = 1

switch (x8)
    case 0
        int32_t x8_2 = *(arg1 + 0x167c)
        
        if (x8_2 == 2)
            return zx.q(*(arg1 + 0x1528) != 0 ? 1 : 0)
        
        if (x8_2 == 5)
            return 1
        
        if (x8_2 == 3)
            return zx.q(zx.d(*(arg1 + 0x15b4)) != 0 ? 1 : 0)
        
        x8_1 = 0
    case 1, 3, 4, 5
        x8_1 = 0

return zx.q(x8_1)
