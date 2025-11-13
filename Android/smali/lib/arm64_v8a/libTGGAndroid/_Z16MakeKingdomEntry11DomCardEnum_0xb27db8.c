// 函数: _Z16MakeKingdomEntry11DomCardEnum
// 地址: 0xb27db8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
uint64_t x8 = *(DomDefGet(arg1, 0x18) + 0xc8)
int32_t x9

x9 = x8 != 0x4000000000000 ? 3 : 2

int32_t x20

if ((x8 & 0x4000000000000) != 0)
    x20 = x9
else
    x20 = 1

if (x20 != 1)
    if (x20 == 3)
        *(DomDefGet(zx.q(x19), 0x18) + 0xc8)
    else
        if (x20 != 2 || x19 - 0x1400 u>= 0x17 || (0x40ffff u>> (x19 - 0x1400) & 1) == 0)
            pthread_kill(pthread_self(), 6)
            char* x0_6
            DomKingdomEntry* x1_1
            int32_t x2
            DomKingdomEntry* x3
            int32_t x4
            int64_t x5
            x0_6, x1_1, x2, x3, x4, x5 = XNoReturn()
            return FindCards(x0_6, x1_1, x2, x3, x4, x5) __tailcall
        
        *(&data_801be8 + (sx.q(x19 - 0x1400) << 2))

return zx.q(x20) | zx.q(x19) << 0x20
