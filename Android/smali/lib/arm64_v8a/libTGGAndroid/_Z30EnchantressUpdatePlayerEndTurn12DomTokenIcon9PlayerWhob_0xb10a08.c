// 函数: _Z30EnchantressUpdatePlayerEndTurn12DomTokenIcon9PlayerWhob
// 地址: 0xb10a08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t (* x8_1)()

if (arg2.d == 0xffffffff)
    x8_1 = gDomClient + 0x48
else
    x8_1 = gDomClient + 0x48 + muls.dp.d(arg2.d, 0x4d48)

if (arg1.d == 0xe)
    *(x8_1 + 0x4d34) = 0
    return DomRemoveTokenIconSimple(arg1, arg2, false) __tailcall

if (arg1.d == 9)
    *(x8_1 + 0x4d2c) = 0
    return DomRemoveTokenIconSimple(arg1, arg2, false) __tailcall

if (arg1.d == 1)
    *(x8_1 + 0x4d26) = 0
    return DomRemoveTokenIconSimple(arg1, arg2, false) __tailcall

pthread_kill(pthread_self(), 6)
int64_t x0_4
int64_t x1_3
bool x2_3
x0_4, x1_3, x2_3 = XNoReturn()
return EnchantressUpdatePlayedAction(x0_4, x1_3, x2_3) __tailcall
