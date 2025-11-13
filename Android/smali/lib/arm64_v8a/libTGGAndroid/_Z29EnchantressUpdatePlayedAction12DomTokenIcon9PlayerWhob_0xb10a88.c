// 函数: _Z29EnchantressUpdatePlayedAction12DomTokenIcon9PlayerWhob
// 地址: 0xb10a88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t (* x8_1)()

if (arg2.d == 0xffffffff)
    x8_1 = gDomClient + 0x48
else
    x8_1 = gDomClient + 0x48 + muls.dp.d(arg2.d, 0x4d48)

int64_t (* x8_2)() = x8_1 + 0x4d26

if (arg1.d == 0xe)
    x8_2 += 0xe
else if (arg1.d == 9)
    x8_2 += 6
else if (arg1.d != 1)
    pthread_kill(pthread_self(), 6)
    arg1, arg2, x8_2 = XNoReturn()
    x8_2 += 0xe

*x8_2 = 1
return DomRemoveTokenIconSimple(arg1, arg2, false) __tailcall
