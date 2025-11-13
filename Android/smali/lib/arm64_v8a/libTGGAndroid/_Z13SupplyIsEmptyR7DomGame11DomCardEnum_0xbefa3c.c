// 函数: _Z13SupplyIsEmptyR7DomGame11DomCardEnum
// 地址: 0xbefa3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1

if (*(arg1 + 0x159c) == arg2)
    x8_1 = 7
else if (*(arg1 + 0x15ac) == arg2)
    x8_1 = 8
else if (*(arg1 + 0x15bc) == arg2)
    x8_1 = 9
else if (*(arg1 + 0x15cc) == arg2)
    x8_1 = 0xa
else if (*(arg1 + 0x15dc) == arg2)
    x8_1 = 0xb
else if (*(arg1 + 0x15ec) == arg2)
    x8_1 = 0xc
else if (*(arg1 + 0x15fc) == arg2)
    x8_1 = 0xd
else if (*(arg1 + 0x160c) == arg2)
    x8_1 = 0xe
else if (*(arg1 + 0x161c) == arg2)
    x8_1 = 0xf
else if (*(arg1 + 0x162c) == arg2)
    x8_1 = 0x10
else if (*(arg1 + 0x163c) == arg2)
    x8_1 = 0x11
else if (*(arg1 + 0x164c) == arg2)
    x8_1 = 0x12
else if (*(arg1 + 0x165c) == arg2)
    x8_1 = 0x13
else if (*(arg1 + 0x166c) == arg2)
    x8_1 = 0x14
else if (*(arg1 + 0x167c) == arg2)
    x8_1 = 0x15
else if (*(arg1 + 0x168c) == arg2)
    x8_1 = 0x16
else if (*(arg1 + 0x169c) == arg2)
    x8_1 = 0x17
else if (*(arg1 + 0x16ac) == arg2)
    x8_1 = 0x18
else if (*(arg1 + 0x16bc) == arg2)
    x8_1 = 0x19
else if (*(arg1 + 0x16cc) == arg2)
    x8_1 = 0x1a
else if (*(arg1 + 0x16dc) == arg2)
    x8_1 = 0x1b
else if (*(arg1 + 0x16ec) == arg2)
    x8_1 = 0x1c
else if (*(arg1 + 0x16fc) == arg2)
    x8_1 = 0x1d
else if (*(arg1 + 0x170c) == arg2)
    x8_1 = 0x1e
else if (*(arg1 + 0x171c) != arg2)
    if (*(arg1 + 0x172c) != arg2)
        pthread_kill(pthread_self(), 6)
        return NumEmptySupplyPiles(XNoReturn()) __tailcall
    
    x8_1 = 0x20
else
    x8_1 = 0x1f

return zx.q(*(arg1 + (x8_1 << 4) + 0x1534) == 0 ? 1 : 0)
