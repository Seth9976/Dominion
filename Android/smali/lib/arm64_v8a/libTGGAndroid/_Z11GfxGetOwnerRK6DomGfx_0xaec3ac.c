// 函数: _Z11GfxGetOwnerRK6DomGfx
// 地址: 0xaec3ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg1 + 0x2c))

if (x8.d u<= 7)
    switch (x8)
        case 0
            return zx.q(*(arg1 + 0xa0))
        case 3
            return zx.q(*(arg1 + 0x58))
        case 4
            return zx.q(*(arg1 + 0x1c4))
        case 6
            return zx.q(*(arg1 + 0x1e4))
        case 7
            return zx.q(*(arg1 + 0x228))

pthread_kill(pthread_self(), 6)
return PlayerAreaRemove(XNoReturn()) __tailcall
