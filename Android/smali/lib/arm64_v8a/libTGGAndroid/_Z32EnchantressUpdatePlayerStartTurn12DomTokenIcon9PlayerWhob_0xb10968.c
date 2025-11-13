// 函数: _Z32EnchantressUpdatePlayerStartTurn12DomTokenIcon9PlayerWhob
// 地址: 0xb10968
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t (* x8_1)()

if (arg2 == 0xffffffff)
    x8_1 = gDomClient + 0x48
else
    x8_1 = gDomClient + 0x48 + muls.dp.d(arg2, 0x4d48)

if (arg1.d == 0xe)
    *(x8_1 + 0x4d34) = 0
    
    if (*(x8_1 + 0x4d38) != 0)
        return DomCreateTokenIcon(arg1, 0, zx.q(arg2), false) __tailcall
else if (arg1.d == 9)
    *(x8_1 + 0x4d2c) = 0
    
    if (*(x8_1 + 0x4d30) != 0)
        return DomCreateTokenIcon(arg1, 0, zx.q(arg2), false) __tailcall
else
    if (arg1.d != 1)
        pthread_kill(pthread_self(), 6)
        int64_t x0_2
        int64_t x1_1
        bool x2_2
        x0_2, x1_1, x2_2 = XNoReturn()
        return EnchantressUpdatePlayerEndTurn(x0_2, x1_1, x2_2) __tailcall
    
    *(x8_1 + 0x4d26) = 0
    
    if (*(x8_1 + 0x4d28) != 0)
        return DomCreateTokenIcon(arg1, 0, zx.q(arg2), false) __tailcall
